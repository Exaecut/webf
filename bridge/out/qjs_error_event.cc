/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#include "qjs_error_event.h"
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
const WrapperTypeInfo QJSErrorEvent::wrapper_type_info_ {JS_CLASS_ERROR_EVENT, "ErrorEvent", Event::GetStaticWrapperTypeInfo(), QJSErrorEvent::ConstructorCallback, nullptr, nullptr, StringPropertyGetterCallback, StringPropertySetterCallback, PropertyCheckerCallback, PropertyEnumerateCallback, StringPropertyDeleterCallback};
const WrapperTypeInfo& ErrorEvent::wrapper_type_info_ = QJSErrorEvent::wrapper_type_info_;
JSValue QJSErrorEvent::ConstructorCallback(JSContext* ctx, JSValue func_obj, JSValue this_val, int argc, JSValue* argv, int flags) {
    if (argc < 1) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'constructor' : 1 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("ErrorEvent::constructor");
  MemberMutationScope scope{context};
  ErrorEvent* return_value = nullptr;
  do {  // Dummy loop for use of 'break'.
    auto&& args_eventType = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      return_value = ErrorEvent::Create(context, args_eventType,exception_state);
      break;
    }
    auto&& args_init = Converter<IDLOptional<ErrorEventInit>>::FromValue(ctx, argv[1], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 2) {
      return_value = ErrorEvent::Create(context, args_eventType,args_init, exception_state);
      break;
    }
    return_value = ErrorEvent::Create(context, args_eventType,args_init, exception_state);
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
  bool QJSErrorEvent::PropertyCheckerCallback(JSContext* ctx, JSValueConst obj, JSAtom key) {
    auto* self = toScriptWrappable<ErrorEvent>(obj);
    ExceptionState exception_state;
    ExecutingContext* context = ExecutingContext::From(ctx);
    if (!context->IsContextValid()) return false;
    context->dartIsolateContext()->profiler()->StartTrackSteps("QJSErrorEvent::PropertyCheckerCallback");
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
  int QJSErrorEvent::PropertyEnumerateCallback(JSContext* ctx, JSPropertyEnum** ptab, uint32_t* plen, JSValue obj) {
    auto* self = toScriptWrappable<ErrorEvent>(obj);
    ExceptionState exception_state;
    ExecutingContext* context = ExecutingContext::From(ctx);
    if (!context->IsContextValid()) return 0;
    MemberMutationScope scope{context};
    context->dartIsolateContext()->profiler()->StartTrackSteps("QJSErrorEvent::PropertyEnumerateCallback");
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
  JSValue QJSErrorEvent::StringPropertyGetterCallback(JSContext* ctx, JSValue obj, JSAtom key) {
    auto* self = toScriptWrappable<ErrorEvent>(obj);
    ExceptionState exception_state;
    ExecutingContext* context = ExecutingContext::From(ctx);
    if (!context->IsContextValid()) return JS_NULL;
    context->dartIsolateContext()->profiler()->StartTrackSteps("QJSErrorEvent::StringPropertyGetterCallback");
    MemberMutationScope scope{context};
    ScriptValue result = self->item(AtomicString(ctx, key), exception_state);
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    return Converter<IDLAny>::ToValue(ctx, result);
  };
  bool QJSErrorEvent::StringPropertySetterCallback(JSContext* ctx, JSValueConst obj, JSAtom key, JSValueConst value) {
    auto* self = toScriptWrappable<ErrorEvent>(obj);
    ExceptionState exception_state;
    ExecutingContext* context = ExecutingContext::From(ctx);
    if (!context->IsContextValid()) return false;
    MemberMutationScope scope{context};
    auto&& v = Converter<IDLAny>::FromValue(ctx, value, exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return false;
    }
    context->dartIsolateContext()->profiler()->StartTrackSteps("QJSErrorEvent::StringPropertySetterCallback");
    bool success = self->SetItem(AtomicString(ctx, key), v, exception_state);
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    if (UNLIKELY(exception_state.HasException())) {
      return false;
    }
    return success;
  };
     bool QJSErrorEvent::StringPropertyDeleterCallback(JSContext* ctx, JSValueConst obj, JSAtom key) {
      auto* self = toScriptWrappable<ErrorEvent>(obj);
      ExceptionState exception_state;
      ExecutingContext* context = ExecutingContext::From(ctx);
      if (!context->IsContextValid()) return false;
      MemberMutationScope scope{context};
      if (UNLIKELY(exception_state.HasException())) {
        return false;
      }
      context->dartIsolateContext()->profiler()->StartTrackSteps("QJSErrorEvent::StringPropertyDeleterCallback");
      bool success = self->DeleteItem(AtomicString(ctx, key), exception_state);
      context->dartIsolateContext()->profiler()->FinishTrackSteps();
      if (UNLIKELY(exception_state.HasException())) {
        return false;
      }
      return success;
    };
static JSValue messageAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_error_event = toScriptWrappable<ErrorEvent>(this_val);
  assert(qjs_error_event != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("ErrorEvent::message");
  auto result = Converter<IDLDOMString>::ToValue(ctx, qjs_error_event->message());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue filenameAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_error_event = toScriptWrappable<ErrorEvent>(this_val);
  assert(qjs_error_event != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("ErrorEvent::filename");
  auto result = Converter<IDLDOMString>::ToValue(ctx, qjs_error_event->filename());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue linenoAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_error_event = toScriptWrappable<ErrorEvent>(this_val);
  assert(qjs_error_event != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("ErrorEvent::lineno");
  auto result = Converter<IDLDouble>::ToValue(ctx, qjs_error_event->lineno());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue colnoAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_error_event = toScriptWrappable<ErrorEvent>(this_val);
  assert(qjs_error_event != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("ErrorEvent::colno");
  auto result = Converter<IDLDouble>::ToValue(ctx, qjs_error_event->colno());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue errorAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_error_event = toScriptWrappable<ErrorEvent>(this_val);
  assert(qjs_error_event != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("ErrorEvent::error");
  auto result = Converter<IDLAny>::ToValue(ctx, qjs_error_event->error());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
void QJSErrorEvent::Install(ExecutingContext* context) {
   InstallPrototypeMethods(context); 
   InstallConstructor(context); 
}
void QJSErrorEvent::InstallPrototypeMethods(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue prototype = context->contextData()->prototypeForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::AttributeConfig> attributesConfig {
    {defined_properties::kmessage.Impl(), messageAttributeGetCallback, nullptr},
{defined_properties::kfilename.Impl(), filenameAttributeGetCallback, nullptr},
{defined_properties::klineno.Impl(), linenoAttributeGetCallback, nullptr},
{defined_properties::kcolno.Impl(), colnoAttributeGetCallback, nullptr},
{defined_properties::kerror.Impl(), errorAttributeGetCallback, nullptr}
  };
  MemberInstaller::InstallAttributes(context, prototype, attributesConfig);
}
void QJSErrorEvent::InstallConstructor(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue constructor = context->contextData()->constructorForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::AttributeConfig> attributeConfig {
    {defined_properties::kErrorEvent.Impl(), nullptr, nullptr, constructor}
  };
  MemberInstaller::InstallAttributes(context, context->Global(), attributeConfig);
}
}