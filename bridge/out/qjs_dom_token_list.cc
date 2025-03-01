/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#include "qjs_dom_token_list.h"
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
const WrapperTypeInfo QJSDOMTokenList::wrapper_type_info_ {JS_CLASS_DOM_TOKEN_LIST, "DOMTokenList", nullptr, QJSDOMTokenList::ConstructorCallback, IndexedPropertyGetterCallback, nullptr, nullptr, nullptr, PropertyCheckerCallback, PropertyEnumerateCallback, nullptr};
const WrapperTypeInfo& DOMTokenList::wrapper_type_info_ = QJSDOMTokenList::wrapper_type_info_;
JSValue QJSDOMTokenList::ConstructorCallback(JSContext* ctx, JSValue func_obj, JSValue this_val, int argc, JSValue* argv, int flags) {
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("DOMTokenList::constructor");
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
  bool QJSDOMTokenList::PropertyCheckerCallback(JSContext* ctx, JSValueConst obj, JSAtom key) {
    auto* self = toScriptWrappable<DOMTokenList>(obj);
    ExceptionState exception_state;
    ExecutingContext* context = ExecutingContext::From(ctx);
    if (!context->IsContextValid()) return false;
    context->dartIsolateContext()->profiler()->StartTrackSteps("QJSDOMTokenList::PropertyCheckerCallback");
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
  int QJSDOMTokenList::PropertyEnumerateCallback(JSContext* ctx, JSPropertyEnum** ptab, uint32_t* plen, JSValue obj) {
    auto* self = toScriptWrappable<DOMTokenList>(obj);
    ExceptionState exception_state;
    ExecutingContext* context = ExecutingContext::From(ctx);
    if (!context->IsContextValid()) return 0;
    MemberMutationScope scope{context};
    context->dartIsolateContext()->profiler()->StartTrackSteps("QJSDOMTokenList::PropertyEnumerateCallback");
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
  JSValue QJSDOMTokenList::IndexedPropertyGetterCallback(JSContext* ctx, JSValue obj, uint32_t index) {
    ExceptionState exception_state;
    ExecutingContext* context = ExecutingContext::From(ctx);
    if (!context->IsContextValid()) return JS_NULL;
    MemberMutationScope scope{context};
    auto* self = toScriptWrappable<DOMTokenList>(obj);
    if (index >= self->length()) {
      return JS_UNDEFINED;
    }
    context->dartIsolateContext()->profiler()->StartTrackSteps("QJSDOMTokenList::IndexedPropertyGetterCallback");
    AtomicString result = self->item(index, exception_state);
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    return Converter<IDLDOMString>::ToValue(ctx, result);
  };
  static JSValue item(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 1) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'item' : 1 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("DOMTokenList::item");
  MemberMutationScope scope{context};
  Converter<IDLNullable<IDLDOMString>>::ImplType return_value;
  do {  // Dummy loop for use of 'break'.
    auto&& args_index = Converter<IDLInt64>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      auto* self = toScriptWrappable<DOMTokenList>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->item(args_index,exception_state);
      break;
    }
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<IDLNullable<IDLDOMString>>::ToValue(ctx, std::move(return_value));
  }
  static JSValue contains(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 1) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'contains' : 1 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("DOMTokenList::contains");
  MemberMutationScope scope{context};
  Converter<IDLBoolean>::ImplType return_value;
  do {  // Dummy loop for use of 'break'.
    auto&& args_token = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      auto* self = toScriptWrappable<DOMTokenList>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->contains(args_token,exception_state);
      break;
    }
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<IDLBoolean>::ToValue(ctx, std::move(return_value));
  }
  static JSValue add(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("DOMTokenList::add");
  MemberMutationScope scope{context};
  do {  // Dummy loop for use of 'break'.
    auto&& args_tokens = Converter<IDLSequence<IDLDOMString>>::FromValue(ctx, argv + 0, argc - 0, exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto* self = toScriptWrappable<DOMTokenList>(JS_IsUndefined(this_val) ? context->Global() : this_val);
     self->add(args_tokens,exception_state);
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return JS_NULL;
  }
  static JSValue remove(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("DOMTokenList::remove");
  MemberMutationScope scope{context};
  do {  // Dummy loop for use of 'break'.
    auto&& args_tokens = Converter<IDLSequence<IDLDOMString>>::FromValue(ctx, argv + 0, argc - 0, exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto* self = toScriptWrappable<DOMTokenList>(JS_IsUndefined(this_val) ? context->Global() : this_val);
     self->remove(args_tokens,exception_state);
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return JS_NULL;
  }
  static JSValue toggle(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 1) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'toggle' : 1 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("DOMTokenList::toggle");
  MemberMutationScope scope{context};
  Converter<IDLBoolean>::ImplType return_value;
  do {  // Dummy loop for use of 'break'.
    auto&& args_token = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      auto* self = toScriptWrappable<DOMTokenList>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->toggle(args_token,exception_state);
      break;
    }
    auto&& args_force = Converter<IDLOptional<IDLBoolean>>::FromValue(ctx, argv[1], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 2) {
      auto* self = toScriptWrappable<DOMTokenList>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->toggle(args_token,args_force,exception_state);
      break;
    }
    auto* self = toScriptWrappable<DOMTokenList>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->toggle(args_token,args_force,exception_state);
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<IDLBoolean>::ToValue(ctx, std::move(return_value));
  }
  static JSValue replace(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 2) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'replace' : 2 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("DOMTokenList::replace");
  MemberMutationScope scope{context};
  Converter<IDLBoolean>::ImplType return_value;
  do {  // Dummy loop for use of 'break'.
    auto&& args_token = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_newToken = Converter<IDLDOMString>::FromValue(ctx, argv[1], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 2) {
      auto* self = toScriptWrappable<DOMTokenList>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->replace(args_token,args_newToken,exception_state);
      break;
    }
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<IDLBoolean>::ToValue(ctx, std::move(return_value));
  }
  static JSValue supports(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 1) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'supports' : 1 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("DOMTokenList::supports");
  MemberMutationScope scope{context};
  Converter<IDLBoolean>::ImplType return_value;
  do {  // Dummy loop for use of 'break'.
    auto&& args_token = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      auto* self = toScriptWrappable<DOMTokenList>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->supports(args_token,exception_state);
      break;
    }
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<IDLBoolean>::ToValue(ctx, std::move(return_value));
  }
  static JSValue toString(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("DOMTokenList::toString");
  MemberMutationScope scope{context};
  Converter<IDLDOMString>::ImplType return_value;
  do {  // Dummy loop for use of 'break'.
    auto* self = toScriptWrappable<DOMTokenList>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->toString(exception_state);
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<IDLDOMString>::ToValue(ctx, std::move(return_value));
  }
static JSValue lengthAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_dom_token_list = toScriptWrappable<DOMTokenList>(this_val);
  assert(qjs_dom_token_list != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("DOMTokenList::length");
  auto result = Converter<IDLInt64>::ToValue(ctx, qjs_dom_token_list->length());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue valueAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_dom_token_list = toScriptWrappable<DOMTokenList>(this_val);
  assert(qjs_dom_token_list != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("DOMTokenList::value");
  auto result = Converter<IDLDOMString>::ToValue(ctx, qjs_dom_token_list->value());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue valueAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_dom_token_list = toScriptWrappable<DOMTokenList>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_dom_token_list->setValue(v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue forEachAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue classProto = JS_GetClassProto(ctx, JS_CLASS_ARRAY);
  JSValue result = JS_GetPropertyStr(ctx, classProto, "forEach");
  JS_FreeValue(ctx, classProto);
  return result;
}
static JSValue keysAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue classProto = JS_GetClassProto(ctx, JS_CLASS_ARRAY);
  JSValue result = JS_GetPropertyStr(ctx, classProto, "keys");
  JS_FreeValue(ctx, classProto);
  return result;
}
static JSValue entriesAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue classProto = JS_GetClassProto(ctx, JS_CLASS_ARRAY);
  JSValue result = JS_GetPropertyStr(ctx, classProto, "entries");
  JS_FreeValue(ctx, classProto);
  return result;
}
static JSValue valuesAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue classProto = JS_GetClassProto(ctx, JS_CLASS_ARRAY);
  JSValue result = JS_GetPropertyStr(ctx, classProto, "values");
  JS_FreeValue(ctx, classProto);
  return result;
}
static JSValue Symbol_iteratorAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  JSValue classProto = JS_GetClassProto(ctx, JS_CLASS_ARRAY);
  JSValue result = JS_GetProperty(ctx, classProto, JS_ATOM_Symbol_iterator);
  JS_FreeValue(ctx, classProto);
  return result;
}
void QJSDOMTokenList::Install(ExecutingContext* context) {
   InstallPrototypeProperties(context); 
   InstallPrototypeMethods(context); 
   InstallConstructor(context); 
}
void QJSDOMTokenList::InstallPrototypeProperties(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue prototype = context->contextData()->prototypeForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::FunctionConfig> functionConfig {
    {"item", item, 1},
{"contains", contains, 1},
{"add", add, 1},
{"remove", remove, 1},
{"toggle", toggle, 2},
{"replace", replace, 2},
{"supports", supports, 1},
{"toString", toString, 0}
  };
  MemberInstaller::InstallFunctions(context, prototype, functionConfig);
}
void QJSDOMTokenList::InstallPrototypeMethods(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue prototype = context->contextData()->prototypeForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::AttributeConfig> attributesConfig {
    {defined_properties::klength.Impl(), lengthAttributeGetCallback, nullptr},
{defined_properties::kvalue.Impl(), valueAttributeGetCallback, valueAttributeSetCallback},
{defined_properties::kforEach.Impl(), forEachAttributeGetCallback, nullptr},
{defined_properties::kkeys.Impl(), keysAttributeGetCallback, nullptr},
{defined_properties::kentries.Impl(), entriesAttributeGetCallback, nullptr},
{defined_properties::kvalues.Impl(), valuesAttributeGetCallback, nullptr},
{JS_ATOM_Symbol_iterator, Symbol_iteratorAttributeGetCallback, nullptr}
  };
  MemberInstaller::InstallAttributes(context, prototype, attributesConfig);
}
void QJSDOMTokenList::InstallConstructor(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue constructor = context->contextData()->constructorForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::AttributeConfig> attributeConfig {
    {defined_properties::kDOMTokenList.Impl(), nullptr, nullptr, constructor}
  };
  MemberInstaller::InstallAttributes(context, context->Global(), attributeConfig);
}
}