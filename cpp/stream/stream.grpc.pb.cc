// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: stream.proto

#include "stream.pb.h"
#include "stream.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>

static const char* Greeter_method_names[] = {
  "/Greeter/GetStream",
  "/Greeter/PutStream",
  "/Greeter/AllStream",
};

std::unique_ptr< Greeter::Stub> Greeter::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< Greeter::Stub> stub(new Greeter::Stub(channel));
  return stub;
}

Greeter::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_GetStream_(Greeter_method_names[0], ::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  , rpcmethod_PutStream_(Greeter_method_names[1], ::grpc::internal::RpcMethod::CLIENT_STREAMING, channel)
  , rpcmethod_AllStream_(Greeter_method_names[2], ::grpc::internal::RpcMethod::BIDI_STREAMING, channel)
  {}

::grpc::ClientReader< ::StreamResData>* Greeter::Stub::GetStreamRaw(::grpc::ClientContext* context, const ::StreamReqData& request) {
  return ::grpc::internal::ClientReaderFactory< ::StreamResData>::Create(channel_.get(), rpcmethod_GetStream_, context, request);
}

void Greeter::Stub::experimental_async::GetStream(::grpc::ClientContext* context, ::StreamReqData* request, ::grpc::experimental::ClientReadReactor< ::StreamResData>* reactor) {
  ::grpc::internal::ClientCallbackReaderFactory< ::StreamResData>::Create(stub_->channel_.get(), stub_->rpcmethod_GetStream_, context, request, reactor);
}

::grpc::ClientAsyncReader< ::StreamResData>* Greeter::Stub::AsyncGetStreamRaw(::grpc::ClientContext* context, const ::StreamReqData& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::StreamResData>::Create(channel_.get(), cq, rpcmethod_GetStream_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::StreamResData>* Greeter::Stub::PrepareAsyncGetStreamRaw(::grpc::ClientContext* context, const ::StreamReqData& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::StreamResData>::Create(channel_.get(), cq, rpcmethod_GetStream_, context, request, false, nullptr);
}

::grpc::ClientWriter< ::StreamReqData>* Greeter::Stub::PutStreamRaw(::grpc::ClientContext* context, ::StreamResData* response) {
  return ::grpc::internal::ClientWriterFactory< ::StreamReqData>::Create(channel_.get(), rpcmethod_PutStream_, context, response);
}

void Greeter::Stub::experimental_async::PutStream(::grpc::ClientContext* context, ::StreamResData* response, ::grpc::experimental::ClientWriteReactor< ::StreamReqData>* reactor) {
  ::grpc::internal::ClientCallbackWriterFactory< ::StreamReqData>::Create(stub_->channel_.get(), stub_->rpcmethod_PutStream_, context, response, reactor);
}

::grpc::ClientAsyncWriter< ::StreamReqData>* Greeter::Stub::AsyncPutStreamRaw(::grpc::ClientContext* context, ::StreamResData* response, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncWriterFactory< ::StreamReqData>::Create(channel_.get(), cq, rpcmethod_PutStream_, context, response, true, tag);
}

::grpc::ClientAsyncWriter< ::StreamReqData>* Greeter::Stub::PrepareAsyncPutStreamRaw(::grpc::ClientContext* context, ::StreamResData* response, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncWriterFactory< ::StreamReqData>::Create(channel_.get(), cq, rpcmethod_PutStream_, context, response, false, nullptr);
}

::grpc::ClientReaderWriter< ::StreamReqData, ::StreamResData>* Greeter::Stub::AllStreamRaw(::grpc::ClientContext* context) {
  return ::grpc::internal::ClientReaderWriterFactory< ::StreamReqData, ::StreamResData>::Create(channel_.get(), rpcmethod_AllStream_, context);
}

void Greeter::Stub::experimental_async::AllStream(::grpc::ClientContext* context, ::grpc::experimental::ClientBidiReactor< ::StreamReqData,::StreamResData>* reactor) {
  ::grpc::internal::ClientCallbackReaderWriterFactory< ::StreamReqData,::StreamResData>::Create(stub_->channel_.get(), stub_->rpcmethod_AllStream_, context, reactor);
}

::grpc::ClientAsyncReaderWriter< ::StreamReqData, ::StreamResData>* Greeter::Stub::AsyncAllStreamRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderWriterFactory< ::StreamReqData, ::StreamResData>::Create(channel_.get(), cq, rpcmethod_AllStream_, context, true, tag);
}

::grpc::ClientAsyncReaderWriter< ::StreamReqData, ::StreamResData>* Greeter::Stub::PrepareAsyncAllStreamRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderWriterFactory< ::StreamReqData, ::StreamResData>::Create(channel_.get(), cq, rpcmethod_AllStream_, context, false, nullptr);
}

Greeter::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Greeter_method_names[0],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< Greeter::Service, ::StreamReqData, ::StreamResData>(
          std::mem_fn(&Greeter::Service::GetStream), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Greeter_method_names[1],
      ::grpc::internal::RpcMethod::CLIENT_STREAMING,
      new ::grpc::internal::ClientStreamingHandler< Greeter::Service, ::StreamReqData, ::StreamResData>(
          std::mem_fn(&Greeter::Service::PutStream), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Greeter_method_names[2],
      ::grpc::internal::RpcMethod::BIDI_STREAMING,
      new ::grpc::internal::BidiStreamingHandler< Greeter::Service, ::StreamReqData, ::StreamResData>(
          std::mem_fn(&Greeter::Service::AllStream), this)));
}

Greeter::Service::~Service() {
}

::grpc::Status Greeter::Service::GetStream(::grpc::ServerContext* context, const ::StreamReqData* request, ::grpc::ServerWriter< ::StreamResData>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Greeter::Service::PutStream(::grpc::ServerContext* context, ::grpc::ServerReader< ::StreamReqData>* reader, ::StreamResData* response) {
  (void) context;
  (void) reader;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Greeter::Service::AllStream(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::StreamResData, ::StreamReqData>* stream) {
  (void) context;
  (void) stream;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


