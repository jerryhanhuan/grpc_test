// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: pbkdf.proto

#include "pbkdf.pb.h"
#include "pbkdf.grpc.pb.h"

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

static const char* PBKDFService_method_names[] = {
  "/PBKDFService/Pbkdf",
};

std::unique_ptr< PBKDFService::Stub> PBKDFService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< PBKDFService::Stub> stub(new PBKDFService::Stub(channel));
  return stub;
}

PBKDFService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_Pbkdf_(PBKDFService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status PBKDFService::Stub::Pbkdf(::grpc::ClientContext* context, const ::PBKDFRequest& request, ::PBKDFResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Pbkdf_, context, request, response);
}

void PBKDFService::Stub::experimental_async::Pbkdf(::grpc::ClientContext* context, const ::PBKDFRequest* request, ::PBKDFResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Pbkdf_, context, request, response, std::move(f));
}

void PBKDFService::Stub::experimental_async::Pbkdf(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::PBKDFResponse* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Pbkdf_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::PBKDFResponse>* PBKDFService::Stub::AsyncPbkdfRaw(::grpc::ClientContext* context, const ::PBKDFRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::PBKDFResponse>::Create(channel_.get(), cq, rpcmethod_Pbkdf_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::PBKDFResponse>* PBKDFService::Stub::PrepareAsyncPbkdfRaw(::grpc::ClientContext* context, const ::PBKDFRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::PBKDFResponse>::Create(channel_.get(), cq, rpcmethod_Pbkdf_, context, request, false);
}

PBKDFService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      PBKDFService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< PBKDFService::Service, ::PBKDFRequest, ::PBKDFResponse>(
          std::mem_fn(&PBKDFService::Service::Pbkdf), this)));
}

PBKDFService::Service::~Service() {
}

::grpc::Status PBKDFService::Service::Pbkdf(::grpc::ServerContext* context, const ::PBKDFRequest* request, ::PBKDFResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


