// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: brpc/get_js.proto

#ifndef PROTOBUF_brpc_2fget_5fjs_2eproto__INCLUDED
#define PROTOBUF_brpc_2fget_5fjs_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/service.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace brpc {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_brpc_2fget_5fjs_2eproto();
void protobuf_AssignDesc_brpc_2fget_5fjs_2eproto();
void protobuf_ShutdownFile_brpc_2fget_5fjs_2eproto();

class GetJsRequest;
class GetJsResponse;

// ===================================================================

class GetJsRequest : public ::google::protobuf::Message {
 public:
  GetJsRequest();
  virtual ~GetJsRequest();

  GetJsRequest(const GetJsRequest& from);

  inline GetJsRequest& operator=(const GetJsRequest& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const GetJsRequest& default_instance();

  void Swap(GetJsRequest* other);

  // implements Message ----------------------------------------------

  GetJsRequest* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const GetJsRequest& from);
  void MergeFrom(const GetJsRequest& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:brpc.GetJsRequest)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;


  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[1];

  friend void  protobuf_AddDesc_brpc_2fget_5fjs_2eproto();
  friend void protobuf_AssignDesc_brpc_2fget_5fjs_2eproto();
  friend void protobuf_ShutdownFile_brpc_2fget_5fjs_2eproto();

  void InitAsDefaultInstance();
  static GetJsRequest* default_instance_;
};
// -------------------------------------------------------------------

class GetJsResponse : public ::google::protobuf::Message {
 public:
  GetJsResponse();
  virtual ~GetJsResponse();

  GetJsResponse(const GetJsResponse& from);

  inline GetJsResponse& operator=(const GetJsResponse& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const GetJsResponse& default_instance();

  void Swap(GetJsResponse* other);

  // implements Message ----------------------------------------------

  GetJsResponse* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const GetJsResponse& from);
  void MergeFrom(const GetJsResponse& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:brpc.GetJsResponse)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;


  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[1];

  friend void  protobuf_AddDesc_brpc_2fget_5fjs_2eproto();
  friend void protobuf_AssignDesc_brpc_2fget_5fjs_2eproto();
  friend void protobuf_ShutdownFile_brpc_2fget_5fjs_2eproto();

  void InitAsDefaultInstance();
  static GetJsResponse* default_instance_;
};
// ===================================================================

class js_Stub;

class js : public ::google::protobuf::Service {
 protected:
  // This class should be treated as an abstract interface.
  inline js() {};
 public:
  virtual ~js();

  typedef js_Stub Stub;

  static const ::google::protobuf::ServiceDescriptor* descriptor();

  virtual void sorttable(::google::protobuf::RpcController* controller,
                       const ::brpc::GetJsRequest* request,
                       ::brpc::GetJsResponse* response,
                       ::google::protobuf::Closure* done);
  virtual void jquery_min(::google::protobuf::RpcController* controller,
                       const ::brpc::GetJsRequest* request,
                       ::brpc::GetJsResponse* response,
                       ::google::protobuf::Closure* done);
  virtual void flot_min(::google::protobuf::RpcController* controller,
                       const ::brpc::GetJsRequest* request,
                       ::brpc::GetJsResponse* response,
                       ::google::protobuf::Closure* done);
  virtual void viz_min(::google::protobuf::RpcController* controller,
                       const ::brpc::GetJsRequest* request,
                       ::brpc::GetJsResponse* response,
                       ::google::protobuf::Closure* done);

  // implements Service ----------------------------------------------

  const ::google::protobuf::ServiceDescriptor* GetDescriptor();
  void CallMethod(const ::google::protobuf::MethodDescriptor* method,
                  ::google::protobuf::RpcController* controller,
                  const ::google::protobuf::Message* request,
                  ::google::protobuf::Message* response,
                  ::google::protobuf::Closure* done);
  const ::google::protobuf::Message& GetRequestPrototype(
    const ::google::protobuf::MethodDescriptor* method) const;
  const ::google::protobuf::Message& GetResponsePrototype(
    const ::google::protobuf::MethodDescriptor* method) const;

 private:
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(js);
};

class js_Stub : public js {
 public:
  js_Stub(::google::protobuf::RpcChannel* channel);
  js_Stub(::google::protobuf::RpcChannel* channel,
                   ::google::protobuf::Service::ChannelOwnership ownership);
  ~js_Stub();

  inline ::google::protobuf::RpcChannel* channel() { return channel_; }

  // implements js ------------------------------------------

  void sorttable(::google::protobuf::RpcController* controller,
                       const ::brpc::GetJsRequest* request,
                       ::brpc::GetJsResponse* response,
                       ::google::protobuf::Closure* done);
  void jquery_min(::google::protobuf::RpcController* controller,
                       const ::brpc::GetJsRequest* request,
                       ::brpc::GetJsResponse* response,
                       ::google::protobuf::Closure* done);
  void flot_min(::google::protobuf::RpcController* controller,
                       const ::brpc::GetJsRequest* request,
                       ::brpc::GetJsResponse* response,
                       ::google::protobuf::Closure* done);
  void viz_min(::google::protobuf::RpcController* controller,
                       const ::brpc::GetJsRequest* request,
                       ::brpc::GetJsResponse* response,
                       ::google::protobuf::Closure* done);
 private:
  ::google::protobuf::RpcChannel* channel_;
  bool owns_channel_;
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(js_Stub);
};


// ===================================================================


// ===================================================================

// GetJsRequest

// -------------------------------------------------------------------

// GetJsResponse


// @@protoc_insertion_point(namespace_scope)

}  // namespace brpc

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_brpc_2fget_5fjs_2eproto__INCLUDED
