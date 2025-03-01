/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#include "qjs_window_or_worker_global_scope.h"
#include "foundation/native_value_converter.h"
#include "binding_call_methods.h"
#include "bindings/qjs/member_installer.h"
#include "bindings/qjs/qjs_function.h"
#include "bindings/qjs/converter_impl.h"
#include "bindings/qjs/script_wrappable.h"
#include "bindings/qjs/script_promise.h"
#include "bindings/qjs/cppgc/mutation_scope.h"
#include "core/executing_context.h"
#include "core/dom/element.h"
#include "core/dom/text.h"
#include "core/dom/document.h"
#include "core/dom/document_fragment.h"
#include "core/dom/comment.h"
#include "core/geometry/dom_matrix.h"
#include "core/geometry/dom_point.h"
#include "core/input/touch_list.h"
#include "core/dom/static_node_list.h"
#include "core/html/html_all_collection.h"
#include "defined_properties.h"
namespace webf {
static JSValue setTimeout(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
    if (argc < 1) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'setTimeout' : 1 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("WindowOrWorkerGlobalScope::setTimeout");
  MemberMutationScope scope{context};
  Converter<IDLInt64>::ImplType return_value;
  do {  // Dummy loop for use of 'break'.
    auto&& args_callback = Converter<IDLCallback>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      return_value = WindowOrWorkerGlobalScope::setTimeout(context, args_callback,exception_state);
      break;
    }
    auto&& args_timeout = Converter<IDLOptional<IDLDouble>>::FromValue(ctx, argv[1], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 2) {
      return_value = WindowOrWorkerGlobalScope::setTimeout(context, args_callback,args_timeout, exception_state);
      break;
    }
    return_value = WindowOrWorkerGlobalScope::setTimeout(context, args_callback,args_timeout, exception_state);
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<IDLInt64>::ToValue(ctx, std::move(return_value));
}
static JSValue setInterval(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
    if (argc < 1) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'setInterval' : 1 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("WindowOrWorkerGlobalScope::setInterval");
  MemberMutationScope scope{context};
  Converter<IDLInt64>::ImplType return_value;
  do {  // Dummy loop for use of 'break'.
    auto&& args_callback = Converter<IDLCallback>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      return_value = WindowOrWorkerGlobalScope::setInterval(context, args_callback,exception_state);
      break;
    }
    auto&& args_timeout = Converter<IDLOptional<IDLDouble>>::FromValue(ctx, argv[1], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 2) {
      return_value = WindowOrWorkerGlobalScope::setInterval(context, args_callback,args_timeout, exception_state);
      break;
    }
    return_value = WindowOrWorkerGlobalScope::setInterval(context, args_callback,args_timeout, exception_state);
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<IDLInt64>::ToValue(ctx, std::move(return_value));
}
static JSValue clearTimeout(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
    if (argc < 1) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'clearTimeout' : 1 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("WindowOrWorkerGlobalScope::clearTimeout");
  MemberMutationScope scope{context};
  do {  // Dummy loop for use of 'break'.
    auto&& args_handle = Converter<IDLDouble>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
       WindowOrWorkerGlobalScope::clearTimeout(context, args_handle,exception_state);
      break;
    }
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return JS_NULL;
}
static JSValue clearInterval(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
    if (argc < 1) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'clearInterval' : 1 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("WindowOrWorkerGlobalScope::clearInterval");
  MemberMutationScope scope{context};
  do {  // Dummy loop for use of 'break'.
    auto&& args_handle = Converter<IDLDouble>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
       WindowOrWorkerGlobalScope::clearInterval(context, args_handle,exception_state);
      break;
    }
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return JS_NULL;
}
static JSValue __gc__(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("WindowOrWorkerGlobalScope::__gc__");
  MemberMutationScope scope{context};
  do {  // Dummy loop for use of 'break'.
     WindowOrWorkerGlobalScope::__gc__(context, exception_state);
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return JS_NULL;
}
static JSValue __memory_usage__(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("WindowOrWorkerGlobalScope::__memory_usage__");
  MemberMutationScope scope{context};
  Converter<IDLAny>::ImplType return_value;
  do {  // Dummy loop for use of 'break'.
    return_value = WindowOrWorkerGlobalScope::__memory_usage__(context, exception_state);
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<IDLAny>::ToValue(ctx, std::move(return_value));
}
void QJSWindowOrWorkerGlobalScope::Install(ExecutingContext* context) {
   InstallGlobalFunctions(context); 
}
void QJSWindowOrWorkerGlobalScope::InstallGlobalFunctions(ExecutingContext* context) {
  std::initializer_list<MemberInstaller::FunctionConfig> functionConfig {
     {"setTimeout", setTimeout, 2},
 {"setInterval", setInterval, 2},
 {"clearTimeout", clearTimeout, 1},
 {"clearInterval", clearInterval, 1},
 {"__gc__", __gc__, 0},
 {"__memory_usage__", __memory_usage__, 0}
  };
  MemberInstaller::InstallFunctions(context, context->Global(), functionConfig);
}
}