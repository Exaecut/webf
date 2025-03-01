/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#include "qjs_mutation_observer.h"
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
const WrapperTypeInfo QJSMutationObserver::wrapper_type_info_ {JS_CLASS_MUTATION_OBSERVER, "MutationObserver", nullptr, QJSMutationObserver::ConstructorCallback};
const WrapperTypeInfo& MutationObserver::wrapper_type_info_ = QJSMutationObserver::wrapper_type_info_;
JSValue QJSMutationObserver::ConstructorCallback(JSContext* ctx, JSValue func_obj, JSValue this_val, int argc, JSValue* argv, int flags) {
    if (argc < 1) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'constructor' : 1 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("MutationObserver::constructor");
  MemberMutationScope scope{context};
  MutationObserver* return_value = nullptr;
  do {  // Dummy loop for use of 'break'.
    auto&& args_mutationCallback = Converter<IDLCallback>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      return_value = MutationObserver::Create(context, args_mutationCallback,exception_state);
      break;
    }
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  JSValue proto = JS_GetPropertyStr(ctx, this_val, "prototype");
  JS_SetPrototype(ctx, return_value->ToQuickJSUnsafe(), proto);
  JS_FreeValue(ctx, proto);
  return return_value->ToQuickJS();
}
  static JSValue observe(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 1) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'observe' : 1 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("MutationObserver::observe");
  MemberMutationScope scope{context};
  do {  // Dummy loop for use of 'break'.
    auto&& args_targe = Converter<Node>::ArgumentsValue(context, argv[0], 0, exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      auto* self = toScriptWrappable<MutationObserver>(JS_IsUndefined(this_val) ? context->Global() : this_val);
     self->observe(args_targe,exception_state);
      break;
    }
    auto&& args_options = Converter<IDLOptional<MutationObserverInit>>::FromValue(ctx, argv[1], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 2) {
      auto* self = toScriptWrappable<MutationObserver>(JS_IsUndefined(this_val) ? context->Global() : this_val);
     self->observe(args_targe,args_options,exception_state);
      break;
    }
    auto* self = toScriptWrappable<MutationObserver>(JS_IsUndefined(this_val) ? context->Global() : this_val);
     self->observe(args_targe,args_options,exception_state);
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return JS_NULL;
  }
  static JSValue disconnect(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("MutationObserver::disconnect");
  MemberMutationScope scope{context};
  do {  // Dummy loop for use of 'break'.
    auto* self = toScriptWrappable<MutationObserver>(JS_IsUndefined(this_val) ? context->Global() : this_val);
     self->disconnect(exception_state);
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return JS_NULL;
  }
  static JSValue takeRecords(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("MutationObserver::takeRecords");
  MemberMutationScope scope{context};
  Converter<IDLSequence<MutationRecord>>::ImplType return_value;
  do {  // Dummy loop for use of 'break'.
    auto* self = toScriptWrappable<MutationObserver>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->takeRecords(exception_state);
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<IDLSequence<MutationRecord>>::ToValue(ctx, std::move(return_value));
  }
void QJSMutationObserver::Install(ExecutingContext* context) {
   InstallPrototypeProperties(context); 
   InstallConstructor(context); 
}
void QJSMutationObserver::InstallPrototypeProperties(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue prototype = context->contextData()->prototypeForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::FunctionConfig> functionConfig {
    {"observe", observe, 2},
{"disconnect", disconnect, 0},
{"takeRecords", takeRecords, 0}
  };
  MemberInstaller::InstallFunctions(context, prototype, functionConfig);
}
void QJSMutationObserver::InstallConstructor(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue constructor = context->contextData()->constructorForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::AttributeConfig> attributeConfig {
    {defined_properties::kMutationObserver.Impl(), nullptr, nullptr, constructor}
  };
  MemberInstaller::InstallAttributes(context, context->Global(), attributeConfig);
}
}