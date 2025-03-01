/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#include "qjs_animation_event.h"
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
const WrapperTypeInfo QJSAnimationEvent::wrapper_type_info_ {JS_CLASS_ANIMATION_EVENT, "AnimationEvent", Event::GetStaticWrapperTypeInfo(), QJSAnimationEvent::ConstructorCallback, nullptr, nullptr, StringPropertyGetterCallback, StringPropertySetterCallback, PropertyCheckerCallback, PropertyEnumerateCallback, StringPropertyDeleterCallback};
const WrapperTypeInfo& AnimationEvent::wrapper_type_info_ = QJSAnimationEvent::wrapper_type_info_;
JSValue QJSAnimationEvent::ConstructorCallback(JSContext* ctx, JSValue func_obj, JSValue this_val, int argc, JSValue* argv, int flags) {
    if (argc < 1) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'constructor' : 1 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("AnimationEvent::constructor");
  MemberMutationScope scope{context};
  AnimationEvent* return_value = nullptr;
  do {  // Dummy loop for use of 'break'.
    auto&& args_type = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      return_value = AnimationEvent::Create(context, args_type,exception_state);
      break;
    }
    auto&& args_init = Converter<IDLOptional<AnimationEventInit>>::FromValue(ctx, argv[1], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 2) {
      return_value = AnimationEvent::Create(context, args_type,args_init, exception_state);
      break;
    }
    return_value = AnimationEvent::Create(context, args_type,args_init, exception_state);
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
  bool QJSAnimationEvent::PropertyCheckerCallback(JSContext* ctx, JSValueConst obj, JSAtom key) {
    auto* self = toScriptWrappable<AnimationEvent>(obj);
    ExceptionState exception_state;
    ExecutingContext* context = ExecutingContext::From(ctx);
    if (!context->IsContextValid()) return false;
    context->dartIsolateContext()->profiler()->StartTrackSteps("QJSAnimationEvent::PropertyCheckerCallback");
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
  int QJSAnimationEvent::PropertyEnumerateCallback(JSContext* ctx, JSPropertyEnum** ptab, uint32_t* plen, JSValue obj) {
    auto* self = toScriptWrappable<AnimationEvent>(obj);
    ExceptionState exception_state;
    ExecutingContext* context = ExecutingContext::From(ctx);
    if (!context->IsContextValid()) return 0;
    MemberMutationScope scope{context};
    context->dartIsolateContext()->profiler()->StartTrackSteps("QJSAnimationEvent::PropertyEnumerateCallback");
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
  JSValue QJSAnimationEvent::StringPropertyGetterCallback(JSContext* ctx, JSValue obj, JSAtom key) {
    auto* self = toScriptWrappable<AnimationEvent>(obj);
    ExceptionState exception_state;
    ExecutingContext* context = ExecutingContext::From(ctx);
    if (!context->IsContextValid()) return JS_NULL;
    context->dartIsolateContext()->profiler()->StartTrackSteps("QJSAnimationEvent::StringPropertyGetterCallback");
    MemberMutationScope scope{context};
    ScriptValue result = self->item(AtomicString(ctx, key), exception_state);
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    return Converter<IDLAny>::ToValue(ctx, result);
  };
  bool QJSAnimationEvent::StringPropertySetterCallback(JSContext* ctx, JSValueConst obj, JSAtom key, JSValueConst value) {
    auto* self = toScriptWrappable<AnimationEvent>(obj);
    ExceptionState exception_state;
    ExecutingContext* context = ExecutingContext::From(ctx);
    if (!context->IsContextValid()) return false;
    MemberMutationScope scope{context};
    auto&& v = Converter<IDLAny>::FromValue(ctx, value, exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return false;
    }
    context->dartIsolateContext()->profiler()->StartTrackSteps("QJSAnimationEvent::StringPropertySetterCallback");
    bool success = self->SetItem(AtomicString(ctx, key), v, exception_state);
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    if (UNLIKELY(exception_state.HasException())) {
      return false;
    }
    return success;
  };
     bool QJSAnimationEvent::StringPropertyDeleterCallback(JSContext* ctx, JSValueConst obj, JSAtom key) {
      auto* self = toScriptWrappable<AnimationEvent>(obj);
      ExceptionState exception_state;
      ExecutingContext* context = ExecutingContext::From(ctx);
      if (!context->IsContextValid()) return false;
      MemberMutationScope scope{context};
      if (UNLIKELY(exception_state.HasException())) {
        return false;
      }
      context->dartIsolateContext()->profiler()->StartTrackSteps("QJSAnimationEvent::StringPropertyDeleterCallback");
      bool success = self->DeleteItem(AtomicString(ctx, key), exception_state);
      context->dartIsolateContext()->profiler()->FinishTrackSteps();
      if (UNLIKELY(exception_state.HasException())) {
        return false;
      }
      return success;
    };
static JSValue animationNameAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_animation_event = toScriptWrappable<AnimationEvent>(this_val);
  assert(qjs_animation_event != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("AnimationEvent::animationName");
  auto result = Converter<IDLDOMString>::ToValue(ctx, qjs_animation_event->animationName());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue elapsedTimeAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_animation_event = toScriptWrappable<AnimationEvent>(this_val);
  assert(qjs_animation_event != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("AnimationEvent::elapsedTime");
  auto result = Converter<IDLDouble>::ToValue(ctx, qjs_animation_event->elapsedTime());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue pseudoElementAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_animation_event = toScriptWrappable<AnimationEvent>(this_val);
  assert(qjs_animation_event != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("AnimationEvent::pseudoElement");
  auto result = Converter<IDLDOMString>::ToValue(ctx, qjs_animation_event->pseudoElement());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
void QJSAnimationEvent::Install(ExecutingContext* context) {
   InstallPrototypeMethods(context); 
   InstallConstructor(context); 
}
void QJSAnimationEvent::InstallPrototypeMethods(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue prototype = context->contextData()->prototypeForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::AttributeConfig> attributesConfig {
    {defined_properties::kanimationName.Impl(), animationNameAttributeGetCallback, nullptr},
{defined_properties::kelapsedTime.Impl(), elapsedTimeAttributeGetCallback, nullptr},
{defined_properties::kpseudoElement.Impl(), pseudoElementAttributeGetCallback, nullptr}
  };
  MemberInstaller::InstallAttributes(context, prototype, attributesConfig);
}
void QJSAnimationEvent::InstallConstructor(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue constructor = context->contextData()->constructorForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::AttributeConfig> attributeConfig {
    {defined_properties::kAnimationEvent.Impl(), nullptr, nullptr, constructor}
  };
  MemberInstaller::InstallAttributes(context, context->Global(), attributeConfig);
}
}