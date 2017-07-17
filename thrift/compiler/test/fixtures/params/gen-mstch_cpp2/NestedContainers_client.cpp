/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/params/gen-cpp2/NestedContainers.h"

#include "thrift/compiler/test/fixtures/params/gen-cpp2/NestedContainers.tcc"

#include <thrift/lib/cpp2/protocol/BinaryProtocol.h>
#include <thrift/lib/cpp2/protocol/CompactProtocol.h>
namespace cpp2 {

const char* NestedContainersAsyncClient::getServiceName() {
  return "NestedContainers";
}

void NestedContainersAsyncClient::mapList(std::unique_ptr<apache::thrift::RequestCallback> callback, const std::map<int32_t, std::vector<int32_t>>& foo) {
  ::apache::thrift::RpcOptions rpcOptions;
  mapListImpl(false, rpcOptions, std::move(callback), foo);
}

void NestedContainersAsyncClient::mapList(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const std::map<int32_t, std::vector<int32_t>>& foo) {
  mapListImpl(false, rpcOptions, std::move(callback), foo);
}

void NestedContainersAsyncClient::mapListImpl(bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const std::map<int32_t, std::vector<int32_t>>& foo) {
  switch(getChannel()->getProtocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolWriter writer;
      mapListT(&writer, useSync, rpcOptions, std::move(callback), foo);
      break;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolWriter writer;
      mapListT(&writer, useSync, rpcOptions, std::move(callback), foo);
      break;
    }
    default:
    {
      throw apache::thrift::TApplicationException("Could not find Protocol");
    }
  }
}

void NestedContainersAsyncClient::sync_mapList(const std::map<int32_t, std::vector<int32_t>>& foo) {
  ::apache::thrift::RpcOptions rpcOptions;
  sync_mapList(rpcOptions, foo);
}

void NestedContainersAsyncClient::sync_mapList(apache::thrift::RpcOptions& rpcOptions, const std::map<int32_t, std::vector<int32_t>>& foo) {
  apache::thrift::ClientReceiveState _returnState;
  auto callback = std::make_unique<apache::thrift::ClientSyncCallback>(&_returnState, false);
  mapListImpl(true, rpcOptions, std::move(callback), foo);
  SCOPE_EXIT {
    if (_returnState.header() && !_returnState.header()->getHeaders().empty()) {
      rpcOptions.setReadHeaders(_returnState.header()->releaseHeaders());
    }
  };
  if (!_returnState.buf()) {
    assert(_returnState.exceptionWrapper());
    _returnState.exceptionWrapper().throw_exception();
  }
  recv_mapList(_returnState);
}

folly::Future<folly::Unit> NestedContainersAsyncClient::future_mapList(const std::map<int32_t, std::vector<int32_t>>& foo) {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_mapList(rpcOptions, foo);
}

folly::Future<folly::Unit> NestedContainersAsyncClient::future_mapList(apache::thrift::RpcOptions& rpcOptions, const std::map<int32_t, std::vector<int32_t>>& foo) {
  folly::Promise<folly::Unit> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<apache::thrift::FutureCallback<folly::Unit>>(std::move(_promise), recv_wrapped_mapList, channel_);
  mapList(rpcOptions, std::move(callback), foo);
  return _future;
}

folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> NestedContainersAsyncClient::header_future_mapList(apache::thrift::RpcOptions& rpcOptions, const std::map<int32_t, std::vector<int32_t>>& foo) {
  folly::Promise<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<apache::thrift::HeaderFutureCallback<folly::Unit>>(std::move(_promise), recv_wrapped_mapList, channel_);
  mapList(rpcOptions, std::move(callback), foo);
  return _future;
}

void NestedContainersAsyncClient::mapList(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, const std::map<int32_t, std::vector<int32_t>>& foo) {
  mapList(std::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)), foo);
}

folly::exception_wrapper NestedContainersAsyncClient::recv_wrapped_mapList(::apache::thrift::ClientReceiveState& state) {
  auto ew = state.exceptionWrapper();
  if (ew) {
    return ew;
  }
  if (!state.buf()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }
  switch(state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return recv_wrapped_mapListT(&reader, state);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return recv_wrapped_mapListT(&reader, state);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

void NestedContainersAsyncClient::recv_mapList(::apache::thrift::ClientReceiveState& state) {
  auto ew = recv_wrapped_mapList(state);
  if (ew) {
    ew.throw_exception();
  }
}

void NestedContainersAsyncClient::recv_instance_mapList(::apache::thrift::ClientReceiveState& state) {
  recv_mapList(state);
}

folly::exception_wrapper NestedContainersAsyncClient::recv_instance_wrapped_mapList(::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_mapList(state);
}

void NestedContainersAsyncClient::mapSet(std::unique_ptr<apache::thrift::RequestCallback> callback, const std::map<int32_t, std::set<int32_t>>& foo) {
  ::apache::thrift::RpcOptions rpcOptions;
  mapSetImpl(false, rpcOptions, std::move(callback), foo);
}

void NestedContainersAsyncClient::mapSet(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const std::map<int32_t, std::set<int32_t>>& foo) {
  mapSetImpl(false, rpcOptions, std::move(callback), foo);
}

void NestedContainersAsyncClient::mapSetImpl(bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const std::map<int32_t, std::set<int32_t>>& foo) {
  switch(getChannel()->getProtocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolWriter writer;
      mapSetT(&writer, useSync, rpcOptions, std::move(callback), foo);
      break;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolWriter writer;
      mapSetT(&writer, useSync, rpcOptions, std::move(callback), foo);
      break;
    }
    default:
    {
      throw apache::thrift::TApplicationException("Could not find Protocol");
    }
  }
}

void NestedContainersAsyncClient::sync_mapSet(const std::map<int32_t, std::set<int32_t>>& foo) {
  ::apache::thrift::RpcOptions rpcOptions;
  sync_mapSet(rpcOptions, foo);
}

void NestedContainersAsyncClient::sync_mapSet(apache::thrift::RpcOptions& rpcOptions, const std::map<int32_t, std::set<int32_t>>& foo) {
  apache::thrift::ClientReceiveState _returnState;
  auto callback = std::make_unique<apache::thrift::ClientSyncCallback>(&_returnState, false);
  mapSetImpl(true, rpcOptions, std::move(callback), foo);
  SCOPE_EXIT {
    if (_returnState.header() && !_returnState.header()->getHeaders().empty()) {
      rpcOptions.setReadHeaders(_returnState.header()->releaseHeaders());
    }
  };
  if (!_returnState.buf()) {
    assert(_returnState.exceptionWrapper());
    _returnState.exceptionWrapper().throw_exception();
  }
  recv_mapSet(_returnState);
}

folly::Future<folly::Unit> NestedContainersAsyncClient::future_mapSet(const std::map<int32_t, std::set<int32_t>>& foo) {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_mapSet(rpcOptions, foo);
}

folly::Future<folly::Unit> NestedContainersAsyncClient::future_mapSet(apache::thrift::RpcOptions& rpcOptions, const std::map<int32_t, std::set<int32_t>>& foo) {
  folly::Promise<folly::Unit> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<apache::thrift::FutureCallback<folly::Unit>>(std::move(_promise), recv_wrapped_mapSet, channel_);
  mapSet(rpcOptions, std::move(callback), foo);
  return _future;
}

folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> NestedContainersAsyncClient::header_future_mapSet(apache::thrift::RpcOptions& rpcOptions, const std::map<int32_t, std::set<int32_t>>& foo) {
  folly::Promise<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<apache::thrift::HeaderFutureCallback<folly::Unit>>(std::move(_promise), recv_wrapped_mapSet, channel_);
  mapSet(rpcOptions, std::move(callback), foo);
  return _future;
}

void NestedContainersAsyncClient::mapSet(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, const std::map<int32_t, std::set<int32_t>>& foo) {
  mapSet(std::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)), foo);
}

folly::exception_wrapper NestedContainersAsyncClient::recv_wrapped_mapSet(::apache::thrift::ClientReceiveState& state) {
  auto ew = state.exceptionWrapper();
  if (ew) {
    return ew;
  }
  if (!state.buf()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }
  switch(state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return recv_wrapped_mapSetT(&reader, state);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return recv_wrapped_mapSetT(&reader, state);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

void NestedContainersAsyncClient::recv_mapSet(::apache::thrift::ClientReceiveState& state) {
  auto ew = recv_wrapped_mapSet(state);
  if (ew) {
    ew.throw_exception();
  }
}

void NestedContainersAsyncClient::recv_instance_mapSet(::apache::thrift::ClientReceiveState& state) {
  recv_mapSet(state);
}

folly::exception_wrapper NestedContainersAsyncClient::recv_instance_wrapped_mapSet(::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_mapSet(state);
}

void NestedContainersAsyncClient::listMap(std::unique_ptr<apache::thrift::RequestCallback> callback, const std::vector<std::map<int32_t, int32_t>>& foo) {
  ::apache::thrift::RpcOptions rpcOptions;
  listMapImpl(false, rpcOptions, std::move(callback), foo);
}

void NestedContainersAsyncClient::listMap(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const std::vector<std::map<int32_t, int32_t>>& foo) {
  listMapImpl(false, rpcOptions, std::move(callback), foo);
}

void NestedContainersAsyncClient::listMapImpl(bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const std::vector<std::map<int32_t, int32_t>>& foo) {
  switch(getChannel()->getProtocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolWriter writer;
      listMapT(&writer, useSync, rpcOptions, std::move(callback), foo);
      break;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolWriter writer;
      listMapT(&writer, useSync, rpcOptions, std::move(callback), foo);
      break;
    }
    default:
    {
      throw apache::thrift::TApplicationException("Could not find Protocol");
    }
  }
}

void NestedContainersAsyncClient::sync_listMap(const std::vector<std::map<int32_t, int32_t>>& foo) {
  ::apache::thrift::RpcOptions rpcOptions;
  sync_listMap(rpcOptions, foo);
}

void NestedContainersAsyncClient::sync_listMap(apache::thrift::RpcOptions& rpcOptions, const std::vector<std::map<int32_t, int32_t>>& foo) {
  apache::thrift::ClientReceiveState _returnState;
  auto callback = std::make_unique<apache::thrift::ClientSyncCallback>(&_returnState, false);
  listMapImpl(true, rpcOptions, std::move(callback), foo);
  SCOPE_EXIT {
    if (_returnState.header() && !_returnState.header()->getHeaders().empty()) {
      rpcOptions.setReadHeaders(_returnState.header()->releaseHeaders());
    }
  };
  if (!_returnState.buf()) {
    assert(_returnState.exceptionWrapper());
    _returnState.exceptionWrapper().throw_exception();
  }
  recv_listMap(_returnState);
}

folly::Future<folly::Unit> NestedContainersAsyncClient::future_listMap(const std::vector<std::map<int32_t, int32_t>>& foo) {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_listMap(rpcOptions, foo);
}

folly::Future<folly::Unit> NestedContainersAsyncClient::future_listMap(apache::thrift::RpcOptions& rpcOptions, const std::vector<std::map<int32_t, int32_t>>& foo) {
  folly::Promise<folly::Unit> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<apache::thrift::FutureCallback<folly::Unit>>(std::move(_promise), recv_wrapped_listMap, channel_);
  listMap(rpcOptions, std::move(callback), foo);
  return _future;
}

folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> NestedContainersAsyncClient::header_future_listMap(apache::thrift::RpcOptions& rpcOptions, const std::vector<std::map<int32_t, int32_t>>& foo) {
  folly::Promise<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<apache::thrift::HeaderFutureCallback<folly::Unit>>(std::move(_promise), recv_wrapped_listMap, channel_);
  listMap(rpcOptions, std::move(callback), foo);
  return _future;
}

void NestedContainersAsyncClient::listMap(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, const std::vector<std::map<int32_t, int32_t>>& foo) {
  listMap(std::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)), foo);
}

folly::exception_wrapper NestedContainersAsyncClient::recv_wrapped_listMap(::apache::thrift::ClientReceiveState& state) {
  auto ew = state.exceptionWrapper();
  if (ew) {
    return ew;
  }
  if (!state.buf()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }
  switch(state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return recv_wrapped_listMapT(&reader, state);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return recv_wrapped_listMapT(&reader, state);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

void NestedContainersAsyncClient::recv_listMap(::apache::thrift::ClientReceiveState& state) {
  auto ew = recv_wrapped_listMap(state);
  if (ew) {
    ew.throw_exception();
  }
}

void NestedContainersAsyncClient::recv_instance_listMap(::apache::thrift::ClientReceiveState& state) {
  recv_listMap(state);
}

folly::exception_wrapper NestedContainersAsyncClient::recv_instance_wrapped_listMap(::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_listMap(state);
}

void NestedContainersAsyncClient::listSet(std::unique_ptr<apache::thrift::RequestCallback> callback, const std::vector<std::set<int32_t>>& foo) {
  ::apache::thrift::RpcOptions rpcOptions;
  listSetImpl(false, rpcOptions, std::move(callback), foo);
}

void NestedContainersAsyncClient::listSet(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const std::vector<std::set<int32_t>>& foo) {
  listSetImpl(false, rpcOptions, std::move(callback), foo);
}

void NestedContainersAsyncClient::listSetImpl(bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const std::vector<std::set<int32_t>>& foo) {
  switch(getChannel()->getProtocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolWriter writer;
      listSetT(&writer, useSync, rpcOptions, std::move(callback), foo);
      break;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolWriter writer;
      listSetT(&writer, useSync, rpcOptions, std::move(callback), foo);
      break;
    }
    default:
    {
      throw apache::thrift::TApplicationException("Could not find Protocol");
    }
  }
}

void NestedContainersAsyncClient::sync_listSet(const std::vector<std::set<int32_t>>& foo) {
  ::apache::thrift::RpcOptions rpcOptions;
  sync_listSet(rpcOptions, foo);
}

void NestedContainersAsyncClient::sync_listSet(apache::thrift::RpcOptions& rpcOptions, const std::vector<std::set<int32_t>>& foo) {
  apache::thrift::ClientReceiveState _returnState;
  auto callback = std::make_unique<apache::thrift::ClientSyncCallback>(&_returnState, false);
  listSetImpl(true, rpcOptions, std::move(callback), foo);
  SCOPE_EXIT {
    if (_returnState.header() && !_returnState.header()->getHeaders().empty()) {
      rpcOptions.setReadHeaders(_returnState.header()->releaseHeaders());
    }
  };
  if (!_returnState.buf()) {
    assert(_returnState.exceptionWrapper());
    _returnState.exceptionWrapper().throw_exception();
  }
  recv_listSet(_returnState);
}

folly::Future<folly::Unit> NestedContainersAsyncClient::future_listSet(const std::vector<std::set<int32_t>>& foo) {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_listSet(rpcOptions, foo);
}

folly::Future<folly::Unit> NestedContainersAsyncClient::future_listSet(apache::thrift::RpcOptions& rpcOptions, const std::vector<std::set<int32_t>>& foo) {
  folly::Promise<folly::Unit> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<apache::thrift::FutureCallback<folly::Unit>>(std::move(_promise), recv_wrapped_listSet, channel_);
  listSet(rpcOptions, std::move(callback), foo);
  return _future;
}

folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> NestedContainersAsyncClient::header_future_listSet(apache::thrift::RpcOptions& rpcOptions, const std::vector<std::set<int32_t>>& foo) {
  folly::Promise<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<apache::thrift::HeaderFutureCallback<folly::Unit>>(std::move(_promise), recv_wrapped_listSet, channel_);
  listSet(rpcOptions, std::move(callback), foo);
  return _future;
}

void NestedContainersAsyncClient::listSet(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, const std::vector<std::set<int32_t>>& foo) {
  listSet(std::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)), foo);
}

folly::exception_wrapper NestedContainersAsyncClient::recv_wrapped_listSet(::apache::thrift::ClientReceiveState& state) {
  auto ew = state.exceptionWrapper();
  if (ew) {
    return ew;
  }
  if (!state.buf()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }
  switch(state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return recv_wrapped_listSetT(&reader, state);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return recv_wrapped_listSetT(&reader, state);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

void NestedContainersAsyncClient::recv_listSet(::apache::thrift::ClientReceiveState& state) {
  auto ew = recv_wrapped_listSet(state);
  if (ew) {
    ew.throw_exception();
  }
}

void NestedContainersAsyncClient::recv_instance_listSet(::apache::thrift::ClientReceiveState& state) {
  recv_listSet(state);
}

folly::exception_wrapper NestedContainersAsyncClient::recv_instance_wrapped_listSet(::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_listSet(state);
}

void NestedContainersAsyncClient::turtles(std::unique_ptr<apache::thrift::RequestCallback> callback, const std::vector<std::vector<std::map<int32_t, std::map<int32_t, std::set<int32_t>>>>>& foo) {
  ::apache::thrift::RpcOptions rpcOptions;
  turtlesImpl(false, rpcOptions, std::move(callback), foo);
}

void NestedContainersAsyncClient::turtles(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const std::vector<std::vector<std::map<int32_t, std::map<int32_t, std::set<int32_t>>>>>& foo) {
  turtlesImpl(false, rpcOptions, std::move(callback), foo);
}

void NestedContainersAsyncClient::turtlesImpl(bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const std::vector<std::vector<std::map<int32_t, std::map<int32_t, std::set<int32_t>>>>>& foo) {
  switch(getChannel()->getProtocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolWriter writer;
      turtlesT(&writer, useSync, rpcOptions, std::move(callback), foo);
      break;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolWriter writer;
      turtlesT(&writer, useSync, rpcOptions, std::move(callback), foo);
      break;
    }
    default:
    {
      throw apache::thrift::TApplicationException("Could not find Protocol");
    }
  }
}

void NestedContainersAsyncClient::sync_turtles(const std::vector<std::vector<std::map<int32_t, std::map<int32_t, std::set<int32_t>>>>>& foo) {
  ::apache::thrift::RpcOptions rpcOptions;
  sync_turtles(rpcOptions, foo);
}

void NestedContainersAsyncClient::sync_turtles(apache::thrift::RpcOptions& rpcOptions, const std::vector<std::vector<std::map<int32_t, std::map<int32_t, std::set<int32_t>>>>>& foo) {
  apache::thrift::ClientReceiveState _returnState;
  auto callback = std::make_unique<apache::thrift::ClientSyncCallback>(&_returnState, false);
  turtlesImpl(true, rpcOptions, std::move(callback), foo);
  SCOPE_EXIT {
    if (_returnState.header() && !_returnState.header()->getHeaders().empty()) {
      rpcOptions.setReadHeaders(_returnState.header()->releaseHeaders());
    }
  };
  if (!_returnState.buf()) {
    assert(_returnState.exceptionWrapper());
    _returnState.exceptionWrapper().throw_exception();
  }
  recv_turtles(_returnState);
}

folly::Future<folly::Unit> NestedContainersAsyncClient::future_turtles(const std::vector<std::vector<std::map<int32_t, std::map<int32_t, std::set<int32_t>>>>>& foo) {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_turtles(rpcOptions, foo);
}

folly::Future<folly::Unit> NestedContainersAsyncClient::future_turtles(apache::thrift::RpcOptions& rpcOptions, const std::vector<std::vector<std::map<int32_t, std::map<int32_t, std::set<int32_t>>>>>& foo) {
  folly::Promise<folly::Unit> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<apache::thrift::FutureCallback<folly::Unit>>(std::move(_promise), recv_wrapped_turtles, channel_);
  turtles(rpcOptions, std::move(callback), foo);
  return _future;
}

folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> NestedContainersAsyncClient::header_future_turtles(apache::thrift::RpcOptions& rpcOptions, const std::vector<std::vector<std::map<int32_t, std::map<int32_t, std::set<int32_t>>>>>& foo) {
  folly::Promise<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<apache::thrift::HeaderFutureCallback<folly::Unit>>(std::move(_promise), recv_wrapped_turtles, channel_);
  turtles(rpcOptions, std::move(callback), foo);
  return _future;
}

void NestedContainersAsyncClient::turtles(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, const std::vector<std::vector<std::map<int32_t, std::map<int32_t, std::set<int32_t>>>>>& foo) {
  turtles(std::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)), foo);
}

folly::exception_wrapper NestedContainersAsyncClient::recv_wrapped_turtles(::apache::thrift::ClientReceiveState& state) {
  auto ew = state.exceptionWrapper();
  if (ew) {
    return ew;
  }
  if (!state.buf()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }
  switch(state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return recv_wrapped_turtlesT(&reader, state);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return recv_wrapped_turtlesT(&reader, state);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

void NestedContainersAsyncClient::recv_turtles(::apache::thrift::ClientReceiveState& state) {
  auto ew = recv_wrapped_turtles(state);
  if (ew) {
    ew.throw_exception();
  }
}

void NestedContainersAsyncClient::recv_instance_turtles(::apache::thrift::ClientReceiveState& state) {
  recv_turtles(state);
}

folly::exception_wrapper NestedContainersAsyncClient::recv_instance_wrapped_turtles(::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_turtles(state);
}

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift