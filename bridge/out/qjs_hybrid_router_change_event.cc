/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#include "qjs_hybrid_router_change_event.h"
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
const WrapperTypeInfo QJSHybridRouterChangeEvent::wrapper_type_info_ {JS_CLASS_HYBRID_ROUTER_CHANGE_EVENT, "HybridRouterChangeEvent", Event::GetStaticWrapperTypeInfo(), QJSHybridRouterChangeEvent::ConstructorCallback};
const WrapperTypeInfo& HybridRouterChangeEvent::wrapper_type_info_ = QJSHybridRouterChangeEvent::wrapper_type_info_;
JSValue QJSHybridRouterChangeEvent::ConstructorCallback(JSContext* ctx, JSValue func_obj, JSValue this_val, int argc, JSValue* argv, int flags) {
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("HybridRouterChangeEvent::constructor");
  MemberMutationScope scope{context};
  HybridRouterChangeEvent* return_value = nullptr;
  do {  // Dummy loop for use of 'break'.
    return_value = HybridRouterChangeEvent::Create(context, exception_state);
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
static JSValue stateAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_hybrid_router_change_event = toScriptWrappable<HybridRouterChangeEvent>(this_val);
  assert(qjs_hybrid_router_change_event != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("HybridRouterChangeEvent::state");
  auto result = Converter<IDLAny>::ToValue(ctx, qjs_hybrid_router_change_event->state());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue kindAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_hybrid_router_change_event = toScriptWrappable<HybridRouterChangeEvent>(this_val);
  assert(qjs_hybrid_router_change_event != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("HybridRouterChangeEvent::kind");
  auto result = Converter<IDLDOMString>::ToValue(ctx, qjs_hybrid_router_change_event->kind());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue nameAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_hybrid_router_change_event = toScriptWrappable<HybridRouterChangeEvent>(this_val);
  assert(qjs_hybrid_router_change_event != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("HybridRouterChangeEvent::name");
  auto result = Converter<IDLDOMString>::ToValue(ctx, qjs_hybrid_router_change_event->name());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
void QJSHybridRouterChangeEvent::Install(ExecutingContext* context) {
   InstallPrototypeMethods(context); 
   InstallConstructor(context); 
}
void QJSHybridRouterChangeEvent::InstallPrototypeMethods(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue prototype = context->contextData()->prototypeForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::AttributeConfig> attributesConfig {
    {defined_properties::kstate.Impl(), stateAttributeGetCallback, nullptr},
{defined_properties::kkind.Impl(), kindAttributeGetCallback, nullptr},
{defined_properties::kname.Impl(), nameAttributeGetCallback, nullptr}
  };
  MemberInstaller::InstallAttributes(context, prototype, attributesConfig);
}
void QJSHybridRouterChangeEvent::InstallConstructor(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue constructor = context->contextData()->constructorForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::AttributeConfig> attributeConfig {
    {defined_properties::kHybridRouterChangeEvent.Impl(), nullptr, nullptr, constructor}
  };
  MemberInstaller::InstallAttributes(context, context->Global(), attributeConfig);
}
}