#include <iostream>
#include <map>
#include <fstream>
#include <string>

#include "HttpResponse.h"
#include "HttpServer.h"
#include "HttpRequest.h"
#include "HttpServerImpl.h"
#include "absl/strings/str_split.h"

void HttpServerImpl::Init(const std::string& ip, int port) {
    uint32_t net_handle = cppnet::Init(1);

    _server.SetHttpCallback(std::bind(&HttpServerImpl::RecvRequest, this, std::placeholders::_1, std::placeholders::_2));

    cppnet::SetAcceptCallback(std::bind(&CHttpServer::OnConnection, &_server, std::placeholders::_1, std::placeholders::_2), net_handle);
    cppnet::SetWriteCallback(std::bind(&CHttpServer::OnMessageSend, &_server, std::placeholders::_1, std::placeholders::_2, std::placeholders::_3), net_handle);
    cppnet::SetReadCallback(std::bind(&CHttpServer::OnMessage, &_server, std::placeholders::_1, std::placeholders::_2,
        std::placeholders::_3, std::placeholders::_4), net_handle);
    cppnet::SetDisconnectionCallback(std::bind(&HttpServerImpl::DisConnect, this, std::placeholders::_1, std::placeholders::_2), net_handle);

    cppnet::ListenAndAccept(ip, port, net_handle);
}

void HttpServerImpl::Join() {
    cppnet::Join();
}

void HttpServerImpl::RecvRequest(const CHttpRequest& req, CHttpResponse& resp) {
    if (req.GetPath() == "/") {
        resp.SetStatusCode(k200Ok);
        resp.SetStatusMessage("OK");
        resp.SetContentType("text/html");
        resp.AddHeader("Server", "raft");
        resp.SetBody("<html><head><title>This is title</title></head>           \
            <body><h1>Hello</h1> hello, you should do something. <br />         \
            for example : <br />                                                \
               add?name=joker  <br />                                           \
               remove?name     <br />                                           \
               modify?name=dom <br />                                           \
               query?name      <br />  </body></html>");

    } else if (req.GetPath() == "/add") {
        resp.SetStatusCode(k200Ok);
        resp.SetStatusMessage("OK");
        resp.SetContentType("text/html");
        resp.AddHeader("Server", "raft");

        std::vector<std::string> vec;
        vec = absl::StrSplit(req.GetQuery(), "=");
        if (vec.size() != 2) {
            resp.SetBody("error params.");

        } else {
            vec[0].erase(vec[0].begin());
            std::string ret = _request_call_back(request_add, vec[0], vec[1]);
            resp.SetBody(ret);
        }

    } else if (req.GetPath() == "/remove") {
        resp.SetStatusCode(k200Ok);
        resp.SetStatusMessage("OK");
        resp.SetContentType("text/html");
        resp.AddHeader("Server", "raft");

        std::vector<std::string> vec;
        vec = absl::StrSplit(req.GetQuery(), "=");
        if (!vec.empty()) {
            vec[0].erase(vec[0].begin());
            std::string ret = _request_call_back(request_remove, vec[0], "");
            resp.SetBody(ret);

        } else {
            resp.SetBody("error params.");
        }

    } else if (req.GetPath() == "/modify") {
        resp.SetStatusCode(k200Ok);
        resp.SetStatusMessage("OK");
        resp.SetContentType("text/html");
        resp.AddHeader("Server", "raft");

        std::vector<std::string> vec;
        vec = absl::StrSplit(req.GetQuery(), "=");
        if (vec.size() != 2) {
            resp.SetBody("error params.");

        } else {
            vec[0].erase(vec[0].begin());
            std::string ret = _request_call_back(request_modify, vec[0], vec[1]);
            resp.SetBody(ret);
        }

    } else if (req.GetPath() == "/query") {
        resp.SetStatusCode(k200Ok);
        resp.SetStatusMessage("OK");
        resp.SetContentType("text/html");
        resp.AddHeader("Server", "raft");

        std::vector<std::string> vec;
        vec = absl::StrSplit(req.GetQuery(), "=");
        if (!vec.empty()) {
            vec[0].erase(vec[0].begin());
            std::string ret = _request_call_back(request_query, vec[0], "");
            resp.SetBody(ret);

        } else {
            resp.SetBody("error params.");
        }

    } else {
        // close connect
        resp.SetStatusCode(k404NotFound);
        resp.SetStatusMessage("Not Found");
        resp.SetCloseConnection(true);
    }
}

void HttpServerImpl::DisConnect(const cppnet::Handle& handle, uint32_t err) {
    std::cout << "we lost connection with" << handle << " with error code : " << err << std::endl;
}

void HttpServerImpl::SetRequestCallBack(const std::function<std::string(RequestType type, const std::string& key, const std::string& value)>& func) {
    _request_call_back = func;
}