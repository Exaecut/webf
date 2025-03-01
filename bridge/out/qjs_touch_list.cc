/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#include "qjs_touch_list.h"
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
const WrapperTypeInfo QJSTouchList::wrapper_type_info_ {JS_CLASS_TOUCH_LIST, "TouchList", nullptr, QJSTouchList::ConstructorCallback, IndexedPropertyGetterCallback, IndexedPropertySetterCallback, nullptr, nullptr, PropertyCheckerCallback, PropertyEnumerateCallback, StringPropertyDeleterCallback};
const WrapperTypeInfo& TouchList::wrapper_type_info_ = QJSTouchList::wrapper_type_info_;
JSValue QJSTouchList::ConstructorCallback(JSContext* ctx, JSValue func_obj, JSValue this_val, int argc, JSValue* argv, int flags) {
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("TouchList::constructor");
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
  bool QJSTouchList::PropertyCheckerCallback(JSContext* ctx, JSValueConst obj, JSAtom key) {
    auto* self = toScriptWrappable<TouchList>(obj);
    ExceptionState exception_state;
    ExecutingContext* context = ExecutingContext::From(ctx);
    if (!context->IsContextValid()) return false;
    context->dartIsolateContext()->profiler()->StartTrackSteps("QJSTouchList::PropertyCheckerCallback");
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
  int QJSTouchList::PropertyEnumerateCallback(JSContext* ctx, JSPropertyEnum** ptab, uint32_t* plen, JSValue obj) {
    auto* self = toScriptWrappable<TouchList>(obj);
    ExceptionState exception_state;
    ExecutingContext* context = ExecutingContext::From(ctx);
    if (!context->IsContextValid()) return 0;
    MemberMutationScope scope{context};
    context->dartIsolateContext()->profiler()->StartTrackSteps("QJSTouchList::PropertyEnumerateCallback");
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
  JSValue QJSTouchList::IndexedPropertyGetterCallback(JSContext* ctx, JSValue obj, uint32_t index) {
    ExceptionState exception_state;
    ExecutingContext* context = ExecutingContext::From(ctx);
    if (!context->IsContextValid()) return JS_NULL;
    MemberMutationScope scope{context};
    auto* self = toScriptWrappable<TouchList>(obj);
    if (index >= self->length()) {
      return JS_UNDEFINED;
    }
    context->dartIsolateContext()->profiler()->StartTrackSteps("QJSTouchList::IndexedPropertyGetterCallback");
    Touch* result = self->item(index, exception_state);
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    return Converter<Touch>::ToValue(ctx, result);
  };
  bool QJSTouchList::IndexedPropertySetterCallback(JSContext* ctx, JSValueConst obj, uint32_t index, JSValueConst value) {
    auto* self = toScriptWrappable<TouchList>(obj);
    ExceptionState exception_state;
    ExecutingContext* context = ExecutingContext::From(ctx);
    if (!context->IsContextValid()) return false;
    MemberMutationScope scope{context};
    auto&& v = Converter<Touch>::FromValue(ctx, value, exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return false;
    }
    context->dartIsolateContext()->profiler()->StartTrackSteps("QJSTouchList::IndexedPropertySetterCallback");
    bool success = self->SetItem(index, v, exception_state);
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    if (UNLIKELY(exception_state.HasException())) {
      return false;
    }
    return success;
  };
     bool QJSTouchList::StringPropertyDeleterCallback(JSContext* ctx, JSValueConst obj, JSAtom key) {
      auto* self = toScriptWrappable<TouchList>(obj);
      ExceptionState exception_state;
      ExecutingContext* context = ExecutingContext::From(ctx);
      if (!context->IsContextValid()) return false;
      MemberMutationScope scope{context};
      if (UNLIKELY(exception_state.HasException())) {
        return false;
      }
      context->dartIsolateContext()->profiler()->StartTrackSteps("QJSTouchList::StringPropertyDeleterCallback");
      bool success = self->DeleteItem(AtomicString(ctx, key), exception_state);
      context->dartIsolateContext()->profiler()->FinishTrackSteps();
      if (UNLIKELY(exception_state.HasException())) {
        return false;
      }
      return success;
    };
  static JSValue item(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 1) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'item' : 1 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("TouchList::item");
  MemberMutationScope scope{context};
  Touch* return_value = nullptr;
  do {  // Dummy loop for use of 'break'.
    auto&& args_index = Converter<IDLDouble>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      auto* self = toScriptWrappable<TouchList>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->item(args_index,exception_state);
      break;
    }
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<IDLNullable<Touch>>::ToValue(ctx, std::move(return_value));
  }
static JSValue lengthAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_touch_list = toScriptWrappable<TouchList>(this_val);
  assert(qjs_touch_list != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("TouchList::length");
  auto result = Converter<IDLDouble>::ToValue(ctx, qjs_touch_list->length());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
void QJSTouchList::Install(ExecutingContext* context) {
   InstallPrototypeProperties(context); 
   InstallPrototypeMethods(context); 
   InstallConstructor(context); 
}
void QJSTouchList::InstallPrototypeProperties(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue prototype = context->contextData()->prototypeForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::FunctionConfig> functionConfig {
    {"item", item, 1}
  };
  MemberInstaller::InstallFunctions(context, prototype, functionConfig);
}
void QJSTouchList::InstallPrototypeMethods(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue prototype = context->contextData()->prototypeForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::AttributeConfig> attributesConfig {
    {defined_properties::klength.Impl(), lengthAttributeGetCallback, nullptr}
  };
  MemberInstaller::InstallAttributes(context, prototype, attributesConfig);
}
void QJSTouchList::InstallConstructor(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue constructor = context->contextData()->constructorForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::AttributeConfig> attributeConfig {
    {defined_properties::kTouchList.Impl(), nullptr, nullptr, constructor}
  };
  MemberInstaller::InstallAttributes(context, context->Global(), attributeConfig);
}
}