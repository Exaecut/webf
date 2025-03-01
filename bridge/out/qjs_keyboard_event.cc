/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#include "qjs_keyboard_event.h"
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
const WrapperTypeInfo QJSKeyboardEvent::wrapper_type_info_ {JS_CLASS_KEYBOARD_EVENT, "KeyboardEvent", UIEvent::GetStaticWrapperTypeInfo(), QJSKeyboardEvent::ConstructorCallback, nullptr, nullptr, StringPropertyGetterCallback, StringPropertySetterCallback, PropertyCheckerCallback, PropertyEnumerateCallback, StringPropertyDeleterCallback};
const WrapperTypeInfo& KeyboardEvent::wrapper_type_info_ = QJSKeyboardEvent::wrapper_type_info_;
JSValue QJSKeyboardEvent::ConstructorCallback(JSContext* ctx, JSValue func_obj, JSValue this_val, int argc, JSValue* argv, int flags) {
    if (argc < 1) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'constructor' : 1 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("KeyboardEvent::constructor");
  MemberMutationScope scope{context};
  KeyboardEvent* return_value = nullptr;
  do {  // Dummy loop for use of 'break'.
    auto&& args_type = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      return_value = KeyboardEvent::Create(context, args_type,exception_state);
      break;
    }
    auto&& args_init = Converter<IDLOptional<KeyboardEventInit>>::FromValue(ctx, argv[1], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 2) {
      return_value = KeyboardEvent::Create(context, args_type,args_init, exception_state);
      break;
    }
    return_value = KeyboardEvent::Create(context, args_type,args_init, exception_state);
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
  bool QJSKeyboardEvent::PropertyCheckerCallback(JSContext* ctx, JSValueConst obj, JSAtom key) {
    auto* self = toScriptWrappable<KeyboardEvent>(obj);
    ExceptionState exception_state;
    ExecutingContext* context = ExecutingContext::From(ctx);
    if (!context->IsContextValid()) return false;
    context->dartIsolateContext()->profiler()->StartTrackSteps("QJSKeyboardEvent::PropertyCheckerCallback");
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
  int QJSKeyboardEvent::PropertyEnumerateCallback(JSContext* ctx, JSPropertyEnum** ptab, uint32_t* plen, JSValue obj) {
    auto* self = toScriptWrappable<KeyboardEvent>(obj);
    ExceptionState exception_state;
    ExecutingContext* context = ExecutingContext::From(ctx);
    if (!context->IsContextValid()) return 0;
    MemberMutationScope scope{context};
    context->dartIsolateContext()->profiler()->StartTrackSteps("QJSKeyboardEvent::PropertyEnumerateCallback");
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
  JSValue QJSKeyboardEvent::StringPropertyGetterCallback(JSContext* ctx, JSValue obj, JSAtom key) {
    auto* self = toScriptWrappable<KeyboardEvent>(obj);
    ExceptionState exception_state;
    ExecutingContext* context = ExecutingContext::From(ctx);
    if (!context->IsContextValid()) return JS_NULL;
    context->dartIsolateContext()->profiler()->StartTrackSteps("QJSKeyboardEvent::StringPropertyGetterCallback");
    MemberMutationScope scope{context};
    ScriptValue result = self->item(AtomicString(ctx, key), exception_state);
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    return Converter<IDLAny>::ToValue(ctx, result);
  };
  bool QJSKeyboardEvent::StringPropertySetterCallback(JSContext* ctx, JSValueConst obj, JSAtom key, JSValueConst value) {
    auto* self = toScriptWrappable<KeyboardEvent>(obj);
    ExceptionState exception_state;
    ExecutingContext* context = ExecutingContext::From(ctx);
    if (!context->IsContextValid()) return false;
    MemberMutationScope scope{context};
    auto&& v = Converter<IDLAny>::FromValue(ctx, value, exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return false;
    }
    context->dartIsolateContext()->profiler()->StartTrackSteps("QJSKeyboardEvent::StringPropertySetterCallback");
    bool success = self->SetItem(AtomicString(ctx, key), v, exception_state);
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    if (UNLIKELY(exception_state.HasException())) {
      return false;
    }
    return success;
  };
     bool QJSKeyboardEvent::StringPropertyDeleterCallback(JSContext* ctx, JSValueConst obj, JSAtom key) {
      auto* self = toScriptWrappable<KeyboardEvent>(obj);
      ExceptionState exception_state;
      ExecutingContext* context = ExecutingContext::From(ctx);
      if (!context->IsContextValid()) return false;
      MemberMutationScope scope{context};
      if (UNLIKELY(exception_state.HasException())) {
        return false;
      }
      context->dartIsolateContext()->profiler()->StartTrackSteps("QJSKeyboardEvent::StringPropertyDeleterCallback");
      bool success = self->DeleteItem(AtomicString(ctx, key), exception_state);
      context->dartIsolateContext()->profiler()->FinishTrackSteps();
      if (UNLIKELY(exception_state.HasException())) {
        return false;
      }
      return success;
    };
static JSValue altKeyAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_keyboard_event = toScriptWrappable<KeyboardEvent>(this_val);
  assert(qjs_keyboard_event != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("KeyboardEvent::altKey");
  auto result = Converter<IDLBoolean>::ToValue(ctx, qjs_keyboard_event->altKey());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue charCodeAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_keyboard_event = toScriptWrappable<KeyboardEvent>(this_val);
  assert(qjs_keyboard_event != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("KeyboardEvent::charCode");
  auto result = Converter<IDLDouble>::ToValue(ctx, qjs_keyboard_event->charCode());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue codeAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_keyboard_event = toScriptWrappable<KeyboardEvent>(this_val);
  assert(qjs_keyboard_event != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("KeyboardEvent::code");
  auto result = Converter<IDLDOMString>::ToValue(ctx, qjs_keyboard_event->code());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue ctrlKeyAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_keyboard_event = toScriptWrappable<KeyboardEvent>(this_val);
  assert(qjs_keyboard_event != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("KeyboardEvent::ctrlKey");
  auto result = Converter<IDLBoolean>::ToValue(ctx, qjs_keyboard_event->ctrlKey());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue isComposingAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_keyboard_event = toScriptWrappable<KeyboardEvent>(this_val);
  assert(qjs_keyboard_event != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("KeyboardEvent::isComposing");
  auto result = Converter<IDLBoolean>::ToValue(ctx, qjs_keyboard_event->isComposing());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue keyAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_keyboard_event = toScriptWrappable<KeyboardEvent>(this_val);
  assert(qjs_keyboard_event != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("KeyboardEvent::key");
  auto result = Converter<IDLDOMString>::ToValue(ctx, qjs_keyboard_event->key());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue keyCodeAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_keyboard_event = toScriptWrappable<KeyboardEvent>(this_val);
  assert(qjs_keyboard_event != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("KeyboardEvent::keyCode");
  auto result = Converter<IDLDouble>::ToValue(ctx, qjs_keyboard_event->keyCode());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue locationAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_keyboard_event = toScriptWrappable<KeyboardEvent>(this_val);
  assert(qjs_keyboard_event != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("KeyboardEvent::location");
  auto result = Converter<IDLDouble>::ToValue(ctx, qjs_keyboard_event->location());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue metaKeyAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_keyboard_event = toScriptWrappable<KeyboardEvent>(this_val);
  assert(qjs_keyboard_event != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("KeyboardEvent::metaKey");
  auto result = Converter<IDLBoolean>::ToValue(ctx, qjs_keyboard_event->metaKey());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue repeatAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_keyboard_event = toScriptWrappable<KeyboardEvent>(this_val);
  assert(qjs_keyboard_event != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("KeyboardEvent::repeat");
  auto result = Converter<IDLBoolean>::ToValue(ctx, qjs_keyboard_event->repeat());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue shiftKeyAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_keyboard_event = toScriptWrappable<KeyboardEvent>(this_val);
  assert(qjs_keyboard_event != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("KeyboardEvent::shiftKey");
  auto result = Converter<IDLBoolean>::ToValue(ctx, qjs_keyboard_event->shiftKey());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue DOM_KEY_LOCATION_LEFTAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_keyboard_event = toScriptWrappable<KeyboardEvent>(this_val);
  assert(qjs_keyboard_event != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("KeyboardEvent::DOM_KEY_LOCATION_LEFT");
  auto result = Converter<IDLDouble>::ToValue(ctx, KeyboardEvent::DOM_KEY_LOCATION_LEFT);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue DOM_KEY_LOCATION_NUMPADAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_keyboard_event = toScriptWrappable<KeyboardEvent>(this_val);
  assert(qjs_keyboard_event != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("KeyboardEvent::DOM_KEY_LOCATION_NUMPAD");
  auto result = Converter<IDLDouble>::ToValue(ctx, KeyboardEvent::DOM_KEY_LOCATION_NUMPAD);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue DOM_KEY_LOCATION_RIGHTAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_keyboard_event = toScriptWrappable<KeyboardEvent>(this_val);
  assert(qjs_keyboard_event != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("KeyboardEvent::DOM_KEY_LOCATION_RIGHT");
  auto result = Converter<IDLDouble>::ToValue(ctx, KeyboardEvent::DOM_KEY_LOCATION_RIGHT);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue DOM_KEY_LOCATION_STANDARDAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_keyboard_event = toScriptWrappable<KeyboardEvent>(this_val);
  assert(qjs_keyboard_event != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("KeyboardEvent::DOM_KEY_LOCATION_STANDARD");
  auto result = Converter<IDLDouble>::ToValue(ctx, KeyboardEvent::DOM_KEY_LOCATION_STANDARD);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
void QJSKeyboardEvent::Install(ExecutingContext* context) {
   InstallPrototypeMethods(context); 
   InstallConstructor(context); 
}
void QJSKeyboardEvent::InstallPrototypeMethods(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue prototype = context->contextData()->prototypeForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::AttributeConfig> attributesConfig {
    {defined_properties::kaltKey.Impl(), altKeyAttributeGetCallback, nullptr},
{defined_properties::kcharCode.Impl(), charCodeAttributeGetCallback, nullptr},
{defined_properties::kcode.Impl(), codeAttributeGetCallback, nullptr},
{defined_properties::kctrlKey.Impl(), ctrlKeyAttributeGetCallback, nullptr},
{defined_properties::kisComposing.Impl(), isComposingAttributeGetCallback, nullptr},
{defined_properties::kkey.Impl(), keyAttributeGetCallback, nullptr},
{defined_properties::kkeyCode.Impl(), keyCodeAttributeGetCallback, nullptr},
{defined_properties::klocation.Impl(), locationAttributeGetCallback, nullptr},
{defined_properties::kmetaKey.Impl(), metaKeyAttributeGetCallback, nullptr},
{defined_properties::krepeat.Impl(), repeatAttributeGetCallback, nullptr},
{defined_properties::kshiftKey.Impl(), shiftKeyAttributeGetCallback, nullptr},
{defined_properties::kDOM_KEY_LOCATION_LEFT.Impl(), DOM_KEY_LOCATION_LEFTAttributeGetCallback, nullptr},
{defined_properties::kDOM_KEY_LOCATION_NUMPAD.Impl(), DOM_KEY_LOCATION_NUMPADAttributeGetCallback, nullptr},
{defined_properties::kDOM_KEY_LOCATION_RIGHT.Impl(), DOM_KEY_LOCATION_RIGHTAttributeGetCallback, nullptr},
{defined_properties::kDOM_KEY_LOCATION_STANDARD.Impl(), DOM_KEY_LOCATION_STANDARDAttributeGetCallback, nullptr}
  };
  MemberInstaller::InstallAttributes(context, prototype, attributesConfig);
}
void QJSKeyboardEvent::InstallConstructor(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue constructor = context->contextData()->constructorForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::AttributeConfig> attributeConfig {
    {defined_properties::kKeyboardEvent.Impl(), nullptr, nullptr, constructor}
  };
  MemberInstaller::InstallAttributes(context, context->Global(), attributeConfig);
}
}