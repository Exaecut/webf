/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#include "qjs_bounding_client_rect.h"
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
const WrapperTypeInfo QJSBoundingClientRect::wrapper_type_info_ {JS_CLASS_BOUNDING_CLIENT_RECT, "BoundingClientRect", nullptr, QJSBoundingClientRect::ConstructorCallback};
const WrapperTypeInfo& BoundingClientRect::wrapper_type_info_ = QJSBoundingClientRect::wrapper_type_info_;
JSValue QJSBoundingClientRect::ConstructorCallback(JSContext* ctx, JSValue func_obj, JSValue this_val, int argc, JSValue* argv, int flags) {
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("BoundingClientRect::constructor");
  MemberMutationScope scope{context};
  do {  // Dummy loop for use of 'break'.
    return JS_ThrowTypeError(ctx, "Illegal constructor");
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return JS_NULL;
}
static JSValue xAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_bounding_client_rect = toScriptWrappable<BoundingClientRect>(this_val);
  assert(qjs_bounding_client_rect != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("BoundingClientRect::x");
  auto result = Converter<IDLDouble>::ToValue(ctx, qjs_bounding_client_rect->x());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue yAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_bounding_client_rect = toScriptWrappable<BoundingClientRect>(this_val);
  assert(qjs_bounding_client_rect != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("BoundingClientRect::y");
  auto result = Converter<IDLDouble>::ToValue(ctx, qjs_bounding_client_rect->y());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue widthAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_bounding_client_rect = toScriptWrappable<BoundingClientRect>(this_val);
  assert(qjs_bounding_client_rect != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("BoundingClientRect::width");
  auto result = Converter<IDLDouble>::ToValue(ctx, qjs_bounding_client_rect->width());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue heightAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_bounding_client_rect = toScriptWrappable<BoundingClientRect>(this_val);
  assert(qjs_bounding_client_rect != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("BoundingClientRect::height");
  auto result = Converter<IDLDouble>::ToValue(ctx, qjs_bounding_client_rect->height());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue topAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_bounding_client_rect = toScriptWrappable<BoundingClientRect>(this_val);
  assert(qjs_bounding_client_rect != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("BoundingClientRect::top");
  auto result = Converter<IDLDouble>::ToValue(ctx, qjs_bounding_client_rect->top());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue rightAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_bounding_client_rect = toScriptWrappable<BoundingClientRect>(this_val);
  assert(qjs_bounding_client_rect != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("BoundingClientRect::right");
  auto result = Converter<IDLDouble>::ToValue(ctx, qjs_bounding_client_rect->right());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue bottomAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_bounding_client_rect = toScriptWrappable<BoundingClientRect>(this_val);
  assert(qjs_bounding_client_rect != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("BoundingClientRect::bottom");
  auto result = Converter<IDLDouble>::ToValue(ctx, qjs_bounding_client_rect->bottom());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue leftAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_bounding_client_rect = toScriptWrappable<BoundingClientRect>(this_val);
  assert(qjs_bounding_client_rect != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("BoundingClientRect::left");
  auto result = Converter<IDLDouble>::ToValue(ctx, qjs_bounding_client_rect->left());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
void QJSBoundingClientRect::Install(ExecutingContext* context) {
   InstallPrototypeMethods(context); 
   InstallConstructor(context); 
}
void QJSBoundingClientRect::InstallPrototypeMethods(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue prototype = context->contextData()->prototypeForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::AttributeConfig> attributesConfig {
    {defined_properties::kx.Impl(), xAttributeGetCallback, nullptr},
{defined_properties::ky.Impl(), yAttributeGetCallback, nullptr},
{defined_properties::kwidth.Impl(), widthAttributeGetCallback, nullptr},
{defined_properties::kheight.Impl(), heightAttributeGetCallback, nullptr},
{defined_properties::ktop.Impl(), topAttributeGetCallback, nullptr},
{defined_properties::kright.Impl(), rightAttributeGetCallback, nullptr},
{defined_properties::kbottom.Impl(), bottomAttributeGetCallback, nullptr},
{defined_properties::kleft.Impl(), leftAttributeGetCallback, nullptr}
  };
  MemberInstaller::InstallAttributes(context, prototype, attributesConfig);
}
void QJSBoundingClientRect::InstallConstructor(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue constructor = context->contextData()->constructorForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::AttributeConfig> attributeConfig {
    {defined_properties::kBoundingClientRect.Impl(), nullptr, nullptr, constructor}
  };
  MemberInstaller::InstallAttributes(context, context->Global(), attributeConfig);
}
}