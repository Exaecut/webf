/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#include "qjs_touch.h"
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
const WrapperTypeInfo QJSTouch::wrapper_type_info_ {JS_CLASS_TOUCH, "Touch", nullptr, QJSTouch::ConstructorCallback};
const WrapperTypeInfo& Touch::wrapper_type_info_ = QJSTouch::wrapper_type_info_;
JSValue QJSTouch::ConstructorCallback(JSContext* ctx, JSValue func_obj, JSValue this_val, int argc, JSValue* argv, int flags) {
    if (argc < 0) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'constructor' : 0 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Touch::constructor");
  MemberMutationScope scope{context};
  Touch* return_value = nullptr;
  do {  // Dummy loop for use of 'break'.
    if (argc <= 0) {
      return_value = Touch::Create(context, exception_state);
      break;
    }
    auto&& args_init = Converter<IDLOptional<TouchInit>>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      return_value = Touch::Create(context, args_init, exception_state);
      break;
    }
    return_value = Touch::Create(context, args_init, exception_state);
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
static JSValue altitudeAngleAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_touch = toScriptWrappable<Touch>(this_val);
  assert(qjs_touch != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Touch::altitudeAngle");
  auto result = Converter<IDLDouble>::ToValue(ctx, qjs_touch->altitudeAngle());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue azimuthAngleAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_touch = toScriptWrappable<Touch>(this_val);
  assert(qjs_touch != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Touch::azimuthAngle");
  auto result = Converter<IDLDouble>::ToValue(ctx, qjs_touch->azimuthAngle());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue clientXAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_touch = toScriptWrappable<Touch>(this_val);
  assert(qjs_touch != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Touch::clientX");
  auto result = Converter<IDLDouble>::ToValue(ctx, qjs_touch->clientX());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue clientYAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_touch = toScriptWrappable<Touch>(this_val);
  assert(qjs_touch != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Touch::clientY");
  auto result = Converter<IDLDouble>::ToValue(ctx, qjs_touch->clientY());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue forceAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_touch = toScriptWrappable<Touch>(this_val);
  assert(qjs_touch != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Touch::force");
  auto result = Converter<IDLDouble>::ToValue(ctx, qjs_touch->force());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue identifierAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_touch = toScriptWrappable<Touch>(this_val);
  assert(qjs_touch != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Touch::identifier");
  auto result = Converter<IDLDouble>::ToValue(ctx, qjs_touch->identifier());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue pageXAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_touch = toScriptWrappable<Touch>(this_val);
  assert(qjs_touch != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Touch::pageX");
  auto result = Converter<IDLDouble>::ToValue(ctx, qjs_touch->pageX());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue pageYAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_touch = toScriptWrappable<Touch>(this_val);
  assert(qjs_touch != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Touch::pageY");
  auto result = Converter<IDLDouble>::ToValue(ctx, qjs_touch->pageY());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue radiusXAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_touch = toScriptWrappable<Touch>(this_val);
  assert(qjs_touch != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Touch::radiusX");
  auto result = Converter<IDLDouble>::ToValue(ctx, qjs_touch->radiusX());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue radiusYAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_touch = toScriptWrappable<Touch>(this_val);
  assert(qjs_touch != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Touch::radiusY");
  auto result = Converter<IDLDouble>::ToValue(ctx, qjs_touch->radiusY());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue rotationAngleAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_touch = toScriptWrappable<Touch>(this_val);
  assert(qjs_touch != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Touch::rotationAngle");
  auto result = Converter<IDLDouble>::ToValue(ctx, qjs_touch->rotationAngle());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue screenXAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_touch = toScriptWrappable<Touch>(this_val);
  assert(qjs_touch != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Touch::screenX");
  auto result = Converter<IDLDouble>::ToValue(ctx, qjs_touch->screenX());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue screenYAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_touch = toScriptWrappable<Touch>(this_val);
  assert(qjs_touch != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Touch::screenY");
  auto result = Converter<IDLDouble>::ToValue(ctx, qjs_touch->screenY());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue targetAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_touch = toScriptWrappable<Touch>(this_val);
  assert(qjs_touch != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Touch::target");
  auto result = Converter<EventTarget>::ToValue(ctx, qjs_touch->target());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
void QJSTouch::Install(ExecutingContext* context) {
   InstallPrototypeMethods(context); 
   InstallConstructor(context); 
}
void QJSTouch::InstallPrototypeMethods(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue prototype = context->contextData()->prototypeForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::AttributeConfig> attributesConfig {
    {defined_properties::kaltitudeAngle.Impl(), altitudeAngleAttributeGetCallback, nullptr},
{defined_properties::kazimuthAngle.Impl(), azimuthAngleAttributeGetCallback, nullptr},
{defined_properties::kclientX.Impl(), clientXAttributeGetCallback, nullptr},
{defined_properties::kclientY.Impl(), clientYAttributeGetCallback, nullptr},
{defined_properties::kforce.Impl(), forceAttributeGetCallback, nullptr},
{defined_properties::kidentifier.Impl(), identifierAttributeGetCallback, nullptr},
{defined_properties::kpageX.Impl(), pageXAttributeGetCallback, nullptr},
{defined_properties::kpageY.Impl(), pageYAttributeGetCallback, nullptr},
{defined_properties::kradiusX.Impl(), radiusXAttributeGetCallback, nullptr},
{defined_properties::kradiusY.Impl(), radiusYAttributeGetCallback, nullptr},
{defined_properties::krotationAngle.Impl(), rotationAngleAttributeGetCallback, nullptr},
{defined_properties::kscreenX.Impl(), screenXAttributeGetCallback, nullptr},
{defined_properties::kscreenY.Impl(), screenYAttributeGetCallback, nullptr},
{defined_properties::ktarget.Impl(), targetAttributeGetCallback, nullptr}
  };
  MemberInstaller::InstallAttributes(context, prototype, attributesConfig);
}
void QJSTouch::InstallConstructor(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue constructor = context->contextData()->constructorForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::AttributeConfig> attributeConfig {
    {defined_properties::kTouch.Impl(), nullptr, nullptr, constructor}
  };
  MemberInstaller::InstallAttributes(context, context->Global(), attributeConfig);
}
}