/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#include "qjs_module_manager.h"
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
static JSValue __webf_invoke_module__(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
    if (argc < 2) {
    return JS_ThrowTypeError(ctx, "Failed to execute '__webf_invoke_module__' : 2 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("ModuleManager::__webf_invoke_module__");
  MemberMutationScope scope{context};
  Converter<IDLAny>::ImplType return_value;
  do {  // Dummy loop for use of 'break'.
    auto&& args_moduleName = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_methodName = Converter<IDLDOMString>::FromValue(ctx, argv[1], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 2) {
      return_value = ModuleManager::__webf_invoke_module__(context, args_moduleName,args_methodName,exception_state);
      break;
    }
    auto&& args_paramsValue = Converter<IDLOptional<IDLAny>>::FromValue(ctx, argv[2], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 3) {
      return_value = ModuleManager::__webf_invoke_module__(context, args_moduleName,args_methodName,args_paramsValue, exception_state);
      break;
    }
    auto&& args_callback = Converter<IDLOptional<IDLCallback>>::FromValue(ctx, argv[3], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 4) {
      return_value = ModuleManager::__webf_invoke_module__(context, args_moduleName,args_methodName,args_paramsValue,args_callback, exception_state);
      break;
    }
    return_value = ModuleManager::__webf_invoke_module__(context, args_moduleName,args_methodName,args_paramsValue,args_callback, exception_state);
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<IDLAny>::ToValue(ctx, std::move(return_value));
}
static JSValue __webf_add_module_listener__(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
    if (argc < 2) {
    return JS_ThrowTypeError(ctx, "Failed to execute '__webf_add_module_listener__' : 2 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("ModuleManager::__webf_add_module_listener__");
  MemberMutationScope scope{context};
  do {  // Dummy loop for use of 'break'.
    auto&& args_moduleName = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_callback = Converter<IDLCallback>::FromValue(ctx, argv[1], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 2) {
       ModuleManager::__webf_add_module_listener__(context, args_moduleName,args_callback,exception_state);
      break;
    }
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return JS_NULL;
}
static JSValue __webf_remove_module_listener__(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
    if (argc < 1) {
    return JS_ThrowTypeError(ctx, "Failed to execute '__webf_remove_module_listener__' : 1 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("ModuleManager::__webf_remove_module_listener__");
  MemberMutationScope scope{context};
  do {  // Dummy loop for use of 'break'.
    auto&& args_moduleName = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
       ModuleManager::__webf_remove_module_listener__(context, args_moduleName,exception_state);
      break;
    }
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return JS_NULL;
}
static JSValue __webf_clear_module_listener__(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("ModuleManager::__webf_clear_module_listener__");
  MemberMutationScope scope{context};
  do {  // Dummy loop for use of 'break'.
     ModuleManager::__webf_clear_module_listener__(context, exception_state);
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return JS_NULL;
}
void QJSModuleManager::Install(ExecutingContext* context) {
   InstallGlobalFunctions(context); 
}
void QJSModuleManager::InstallGlobalFunctions(ExecutingContext* context) {
  std::initializer_list<MemberInstaller::FunctionConfig> functionConfig {
     {"__webf_invoke_module__", __webf_invoke_module__, 4},
 {"__webf_add_module_listener__", __webf_add_module_listener__, 2},
 {"__webf_remove_module_listener__", __webf_remove_module_listener__, 1},
 {"__webf_clear_module_listener__", __webf_clear_module_listener__, 0}
  };
  MemberInstaller::InstallFunctions(context, context->Global(), functionConfig);
}
}