/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#include "qjs_pointer_event.h"
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
const WrapperTypeInfo QJSPointerEvent::wrapper_type_info_ {JS_CLASS_POINTER_EVENT, "PointerEvent", MouseEvent::GetStaticWrapperTypeInfo(), QJSPointerEvent::ConstructorCallback, nullptr, nullptr, StringPropertyGetterCallback, StringPropertySetterCallback, PropertyCheckerCallback, PropertyEnumerateCallback, StringPropertyDeleterCallback};
const WrapperTypeInfo& PointerEvent::wrapper_type_info_ = QJSPointerEvent::wrapper_type_info_;
JSValue QJSPointerEvent::ConstructorCallback(JSContext* ctx, JSValue func_obj, JSValue this_val, int argc, JSValue* argv, int flags) {
    if (argc < 1) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'constructor' : 1 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("PointerEvent::constructor");
  MemberMutationScope scope{context};
  PointerEvent* return_value = nullptr;
  do {  // Dummy loop for use of 'break'.
    auto&& args_type = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      return_value = PointerEvent::Create(context, args_type,exception_state);
      break;
    }
    auto&& args_init = Converter<IDLOptional<PointerEventInit>>::FromValue(ctx, argv[1], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 2) {
      return_value = PointerEvent::Create(context, args_type,args_init, exception_state);
      break;
    }
    return_value = PointerEvent::Create(context, args_type,args_init, exception_state);
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
  bool QJSPointerEvent::PropertyCheckerCallback(JSContext* ctx, JSValueConst obj, JSAtom key) {
    auto* self = toScriptWrappable<PointerEvent>(obj);
    ExceptionState exception_state;
    ExecutingContext* context = ExecutingContext::From(ctx);
    if (!context->IsContextValid()) return false;
    context->dartIsolateContext()->profiler()->StartTrackSteps("QJSPointerEvent::PropertyCheckerCallback");
    auto* wrapper_type_info = DOMTokenList::GetStaticWrapperTypeInfo();
    MemberMutationScope scope{context};
    JSValue prototype = context->contextData()->prototypeForType(wrapper_type_info);
    if (JS_HasProperty(ctx, prototype, key)) return true;
    bool result = self->NamedPropertyQuery(AtomicString(ctx, key), exception_state);
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    if (UNLIKELY(exception_state.HasException())) {
      return false;
    }
    return result;
  }
  int QJSPointerEvent::PropertyEnumerateCallback(JSContext* ctx, JSPropertyEnum** ptab, uint32_t* plen, JSValue obj) {
    auto* self = toScriptWrappable<PointerEvent>(obj);
    ExceptionState exception_state;
    ExecutingContext* context = ExecutingContext::From(ctx);
    if (!context->IsContextValid()) return 0;
    MemberMutationScope scope{context};
    context->dartIsolateContext()->profiler()->StartTrackSteps("QJSPointerEvent::PropertyEnumerateCallback");
    std::vector<AtomicString> props;
    self->NamedPropertyEnumerator(props, exception_state);
    auto size = props.size() == 0 ? 1 : props.size();
    auto tabs = (JSPropertyEnum *)js_malloc(ctx, sizeof(JSPropertyEnum *) * size);
    for(int i = 0; i < props.size(); i ++) {
      tabs[i].atom = JS_DupAtom(ctx, props[i].Impl());
      tabs[i].is_enumerable = true;
    }
    *plen = props.size();
    *ptab = tabs;
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return 0;
  }
  JSValue QJSPointerEvent::StringPropertyGetterCallback(JSContext* ctx, JSValue obj, JSAtom key) {
    auto* self = toScriptWrappable<PointerEvent>(obj);
    ExceptionState exception_state;
    ExecutingContext* context = ExecutingContext::From(ctx);
    if (!context->IsContextValid()) return JS_NULL;
    context->dartIsolateContext()->profiler()->StartTrackSteps("QJSPointerEvent::StringPropertyGetterCallback");
    MemberMutationScope scope{context};
    ScriptValue result = self->item(AtomicString(ctx, key), exception_state);
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    return Converter<IDLAny>::ToValue(ctx, result);
  };
  bool QJSPointerEvent::StringPropertySetterCallback(JSContext* ctx, JSValueConst obj, JSAtom key, JSValueConst value) {
    auto* self = toScriptWrappable<PointerEvent>(obj);
    ExceptionState exception_state;
    ExecutingContext* context = ExecutingContext::From(ctx);
    if (!context->IsContextValid()) return false;
    MemberMutationScope scope{context};
    auto&& v = Converter<IDLAny>::FromValue(ctx, value, exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return false;
    }
    context->dartIsolateContext()->profiler()->StartTrackSteps("QJSPointerEvent::StringPropertySetterCallback");
    bool success = self->SetItem(AtomicString(ctx, key), v, exception_state);
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    if (UNLIKELY(exception_state.HasException())) {
      return false;
    }
    return success;
  };
     bool QJSPointerEvent::StringPropertyDeleterCallback(JSContext* ctx, JSValueConst obj, JSAtom key) {
      auto* self = toScriptWrappable<PointerEvent>(obj);
      ExceptionState exception_state;
      ExecutingContext* context = ExecutingContext::From(ctx);
      if (!context->IsContextValid()) return false;
      MemberMutationScope scope{context};
      if (UNLIKELY(exception_state.HasException())) {
        return false;
      }
      context->dartIsolateContext()->profiler()->StartTrackSteps("QJSPointerEvent::StringPropertyDeleterCallback");
      bool success = self->DeleteItem(AtomicString(ctx, key), exception_state);
      context->dartIsolateContext()->profiler()->FinishTrackSteps();
      if (UNLIKELY(exception_state.HasException())) {
        return false;
      }
      return success;
    };
static JSValue heightAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_pointer_event = toScriptWrappable<PointerEvent>(this_val);
  assert(qjs_pointer_event != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("PointerEvent::height");
  auto result = Converter<IDLDouble>::ToValue(ctx, qjs_pointer_event->height());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue isPrimaryAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_pointer_event = toScriptWrappable<PointerEvent>(this_val);
  assert(qjs_pointer_event != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("PointerEvent::isPrimary");
  auto result = Converter<IDLBoolean>::ToValue(ctx, qjs_pointer_event->isPrimary());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue pointerIdAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_pointer_event = toScriptWrappable<PointerEvent>(this_val);
  assert(qjs_pointer_event != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("PointerEvent::pointerId");
  auto result = Converter<IDLDouble>::ToValue(ctx, qjs_pointer_event->pointerId());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue pointerTypeAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_pointer_event = toScriptWrappable<PointerEvent>(this_val);
  assert(qjs_pointer_event != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("PointerEvent::pointerType");
  auto result = Converter<IDLDOMString>::ToValue(ctx, qjs_pointer_event->pointerType());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue pressureAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_pointer_event = toScriptWrappable<PointerEvent>(this_val);
  assert(qjs_pointer_event != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("PointerEvent::pressure");
  auto result = Converter<IDLDouble>::ToValue(ctx, qjs_pointer_event->pressure());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue tangentialPressureAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_pointer_event = toScriptWrappable<PointerEvent>(this_val);
  assert(qjs_pointer_event != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("PointerEvent::tangentialPressure");
  auto result = Converter<IDLDouble>::ToValue(ctx, qjs_pointer_event->tangentialPressure());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue tiltXAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_pointer_event = toScriptWrappable<PointerEvent>(this_val);
  assert(qjs_pointer_event != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("PointerEvent::tiltX");
  auto result = Converter<IDLDouble>::ToValue(ctx, qjs_pointer_event->tiltX());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue tiltYAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_pointer_event = toScriptWrappable<PointerEvent>(this_val);
  assert(qjs_pointer_event != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("PointerEvent::tiltY");
  auto result = Converter<IDLDouble>::ToValue(ctx, qjs_pointer_event->tiltY());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue twistAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_pointer_event = toScriptWrappable<PointerEvent>(this_val);
  assert(qjs_pointer_event != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("PointerEvent::twist");
  auto result = Converter<IDLDouble>::ToValue(ctx, qjs_pointer_event->twist());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue widthAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_pointer_event = toScriptWrappable<PointerEvent>(this_val);
  assert(qjs_pointer_event != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("PointerEvent::width");
  auto result = Converter<IDLDouble>::ToValue(ctx, qjs_pointer_event->width());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
void QJSPointerEvent::Install(ExecutingContext* context) {
   InstallPrototypeMethods(context); 
   InstallConstructor(context); 
}
void QJSPointerEvent::InstallPrototypeMethods(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue prototype = context->contextData()->prototypeForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::AttributeConfig> attributesConfig {
    {defined_properties::kheight.Impl(), heightAttributeGetCallback, nullptr},
{defined_properties::kisPrimary.Impl(), isPrimaryAttributeGetCallback, nullptr},
{defined_properties::kpointerId.Impl(), pointerIdAttributeGetCallback, nullptr},
{defined_properties::kpointerType.Impl(), pointerTypeAttributeGetCallback, nullptr},
{defined_properties::kpressure.Impl(), pressureAttributeGetCallback, nullptr},
{defined_properties::ktangentialPressure.Impl(), tangentialPressureAttributeGetCallback, nullptr},
{defined_properties::ktiltX.Impl(), tiltXAttributeGetCallback, nullptr},
{defined_properties::ktiltY.Impl(), tiltYAttributeGetCallback, nullptr},
{defined_properties::ktwist.Impl(), twistAttributeGetCallback, nullptr},
{defined_properties::kwidth.Impl(), widthAttributeGetCallback, nullptr}
  };
  MemberInstaller::InstallAttributes(context, prototype, attributesConfig);
}
void QJSPointerEvent::InstallConstructor(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue constructor = context->contextData()->constructorForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::AttributeConfig> attributeConfig {
    {defined_properties::kPointerEvent.Impl(), nullptr, nullptr, constructor}
  };
  MemberInstaller::InstallAttributes(context, context->Global(), attributeConfig);
}
}