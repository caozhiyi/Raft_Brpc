#include "Log.h"
#include "INode.h"
#include "ITimer.h"
#include "RoleData.h"
#include "LeaderRole.h"
#include "INodeManager.h"

using namespace raft;

CLeaderRole::CLeaderRole(std::shared_ptr<CRoleData>& role_data) : CRole(role_data) {

}

CLeaderRole::~CLeaderRole() {

}

ROLE_TYPE CLeaderRole::GetRole() {
    return leader_role;
}

void CLeaderRole::ItsMyTurn() {
    // send heart once.
    HeartBeatTimerOut();
    // start heart timer.
    _role_data->_timer->StartHeartTimer(_role_data->_heart_time);
    // I'm leader, push all entries to myself
    std::shared_ptr<CNode> temp_node;
    for (int i = 0; i < _role_data->_entries_request_cache.size(); i++) {
        RecvEntriesRequest(temp_node, _role_data->_entries_request_cache[i]);
    }
    _role_data->_entries_request_cache.clear();
}

void CLeaderRole::RecvVoteRequest(std::shared_ptr<CNode>& node, VoteRequest& vote_request) {
    base::LOG_DEBUG("leader recv vote request from node, %s, context : %s", 
            node->GetNetHandle().c_str(), vote_request.DebugString().c_str());

    VoteResponse response;
    response.set_term(_role_data->_current_term);
    response.set_vote_granted(false);
    // refuse vote
    node->SendVoteResponse(response);
}

void CLeaderRole::RecvHeartBeatRequest(std::shared_ptr<CNode>& node, HeartBeatResquest& heart_request) {
    base::LOG_DEBUG("leader recv heart request from node, %s, context : %s", 
            node->GetNetHandle().c_str(), heart_request.DebugString().c_str());

    HeartBeatResponse response;
    response.set_success(true);
    if (heart_request.term() < _role_data->_current_term) {
        response.set_success(false);
    }
    // compare prev log index and term
    if (_role_data->_entries_map.size() > 0 && response.success()) {
        auto last_entries = _role_data->_entries_map.rbegin();
        Entries& prev_entries = last_entries->second;
        if (prev_entries._term > heart_request.prev_log_term() ||
            prev_entries._index > heart_request.prev_log_index()) {
            response.set_success(false);
        }
    }
    
    if (response.success()) {
        // change role to follower
        _role_data->_role_change_call_back(follower_role, node->GetNetHandle());
        // change to follower recv this request again
        _role_data->_recv_heart_again(node, heart_request);
    }
}

void CLeaderRole::RecvVoteResponse(std::shared_ptr<CNode>& node, VoteResponse& vote_response) {
    // do nothing
    base::LOG_DEBUG("leader recv vote response from node, %s, context : %s", 
            node->GetNetHandle().c_str(), vote_response.DebugString().c_str());
}

void CLeaderRole::RecvHeartBeatResponse(std::shared_ptr<CNode>& node, HeartBeatResponse& heart_response) {
    base::LOG_DEBUG("leader recv heart response from node, %s, context : %s", 
            node->GetNetHandle().c_str(), heart_response.DebugString().c_str());

    // send response to client
    node->SetNextIndex(heart_response.next_index());
    if (heart_response.success()) {
        _role_data->_heart_success_num++;
        _role_data->_max_match_index = std::min(_role_data->_newest_index, heart_response.next_index() - 1);
    }
    
    // commit entries success
    if (_role_data->_heart_success_num > _role_data->_node_manager->GetNodeCount() / 2) {
        _role_data->_last_applied = _role_data->_max_match_index;
        auto iter = _role_data->_entries_map.find(_role_data->_prev_match_index);
        EntriesResponse response;
        response.set_ret_code(success);
        while (iter != _role_data->_entries_map.end() && iter->first <= _role_data->_max_match_index) {
            // commit entries
            _role_data->_commit_entries_call_back(iter->second);
            iter++;
        }
        _role_data->_prev_match_index = _role_data->_max_match_index + 1;
    }
}

void CLeaderRole::RecvEntriesRequest(std::shared_ptr<CNode>& node, EntriesRequest& request) {
    base::LOG_DEBUG("leader recv client request from client, %s, context : %s", 
        node?node->GetNetHandle().c_str():"", request.DebugString().c_str());

    // get entries from client
    // create entries
    _role_data->_newest_index++;
    Entries entries;
    entries._entries = request.entries();
    entries._index = _role_data->_newest_index;
    entries._term = _role_data->_current_term;

    // insert entries
    _role_data->_entries_map[entries._index] = entries;
}

void CLeaderRole::CandidateTimeOut() {
    // do nothing
    _role_data->_voted_for_id = 0;
}

void CLeaderRole::HeartBeatTimerOut() {
    _role_data->_heart_success_num = 0;
    // send heart request to all node again
    HeartBeatResquest request;
    request.set_term(_role_data->_current_term);
    request.set_leader_id(_role_data->_cur_node_id);

    // add last entries info
    auto iter = _role_data->_entries_map.find(_role_data->_last_applied);
    if (iter != _role_data->_entries_map.end()) {
        request.set_prev_log_index(iter->first);
        request.set_prev_log_term(iter->second._term);
    }
    request.set_leader_commit(_role_data->_last_applied);

    base::LOG_DEBUG("leader heart time out, send context : %s", request.DebugString().c_str());
    // self recved
    _role_data->_heart_success_num = 1;
    // send request to all node
    auto node_map = _role_data->_node_manager->GetAllNode();
    for (auto node_iter = node_map.begin(); node_iter != node_map.end(); ++node_iter) {
        uint64_t next_index = node_iter->second->GetNextIndex();
        if (next_index > 0) {
            // add new entries
            auto iter = _role_data->_entries_map.find(next_index);
            while (iter != _role_data->_entries_map.end()) {
                EntriesRef ref(iter->second);
                request.add_entries(ref.GetData());
                iter++;
            }
        }
        base::LOG_DEBUG("leader send heart request to %s, context : %s", node_iter->first.c_str(), request.DebugString().c_str());
        node_iter->second->SendHeartRequest(request);
        request.clear_entries();
    }
}