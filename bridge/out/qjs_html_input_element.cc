/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#include "qjs_html_input_element.h"
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
const WrapperTypeInfo QJSHTMLInputElement::wrapper_type_info_ {JS_CLASS_HTML_INPUT_ELEMENT, "HTMLInputElement", HTMLElement::GetStaticWrapperTypeInfo(), QJSHTMLInputElement::ConstructorCallback};
const WrapperTypeInfo& HTMLInputElement::wrapper_type_info_ = QJSHTMLInputElement::wrapper_type_info_;
JSValue QJSHTMLInputElement::ConstructorCallback(JSContext* ctx, JSValue func_obj, JSValue this_val, int argc, JSValue* argv, int flags) {
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("HTMLInputElement::constructor");
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
  static JSValue focus(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("HTMLInputElement::focus");
  MemberMutationScope scope{context};
  do {  // Dummy loop for use of 'break'.
    auto* self = toScriptWrappable<HTMLInputElement>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    NativeValue* arguments = nullptr;;
    self->InvokeBindingMethod(binding_call_methods::kfocus, 0, arguments, FlushUICommandReason::kDependentsOnElement, exception_state);
    ;
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return JS_NULL;
  }
  static JSValue blur(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("HTMLInputElement::blur");
  MemberMutationScope scope{context};
  do {  // Dummy loop for use of 'break'.
    auto* self = toScriptWrappable<HTMLInputElement>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    NativeValue* arguments = nullptr;;
    self->InvokeBindingMethod(binding_call_methods::kblur, 0, arguments, FlushUICommandReason::kDependentsOnElement, exception_state);
    ;
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return JS_NULL;
  }
static JSValue widthAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_input_element = toScriptWrappable<HTMLInputElement>(this_val);
  assert(qjs_html_input_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("HTMLInputElement::width");
  ExceptionState exception_state;
  typename NativeTypeDouble::ImplType v = NativeValueConverter<NativeTypeDouble>::FromNativeValue(qjs_html_input_element->GetBindingProperty(binding_call_methods::kwidth, FlushUICommandReason::kDependentsOnElement  , exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLDouble>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue widthAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_input_element = toScriptWrappable<HTMLInputElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDouble>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_html_input_element->SetBindingProperty(binding_call_methods::kwidth, NativeValueConverter<NativeTypeDouble>::ToNativeValue(v),exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue heightAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_input_element = toScriptWrappable<HTMLInputElement>(this_val);
  assert(qjs_html_input_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("HTMLInputElement::height");
  ExceptionState exception_state;
  typename NativeTypeDouble::ImplType v = NativeValueConverter<NativeTypeDouble>::FromNativeValue(qjs_html_input_element->GetBindingProperty(binding_call_methods::kheight, FlushUICommandReason::kDependentsOnElement  , exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLDouble>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue heightAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_input_element = toScriptWrappable<HTMLInputElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDouble>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_html_input_element->SetBindingProperty(binding_call_methods::kheight, NativeValueConverter<NativeTypeDouble>::ToNativeValue(v),exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue defaultValueAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_input_element = toScriptWrappable<HTMLInputElement>(this_val);
  assert(qjs_html_input_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("HTMLInputElement::defaultValue");
  ExceptionState exception_state;
  typename NativeTypeString::ImplType v = NativeValueConverter<NativeTypeString>::FromNativeValue(ctx, qjs_html_input_element->GetBindingProperty(binding_call_methods::kdefaultValue, FlushUICommandReason::kDependentsOnElement  , exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLDOMString>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue defaultValueAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_input_element = toScriptWrappable<HTMLInputElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_html_input_element->SetBindingProperty(binding_call_methods::kdefaultValue, NativeValueConverter<NativeTypeString>::ToNativeValue(ctx, v),exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue valueAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_input_element = toScriptWrappable<HTMLInputElement>(this_val);
  assert(qjs_html_input_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("HTMLInputElement::value");
  ExceptionState exception_state;
  typename NativeTypeString::ImplType v = NativeValueConverter<NativeTypeString>::FromNativeValue(ctx, qjs_html_input_element->GetBindingProperty(binding_call_methods::kvalue, FlushUICommandReason::kDependentsOnElement  , exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLLegacyDOMString>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue valueAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_input_element = toScriptWrappable<HTMLInputElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLLegacyDOMString>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_html_input_element->SetBindingProperty(binding_call_methods::kvalue, NativeValueConverter<NativeTypeString>::ToNativeValue(ctx, v),exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue acceptAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_input_element = toScriptWrappable<HTMLInputElement>(this_val);
  assert(qjs_html_input_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("HTMLInputElement::accept");
  ExceptionState exception_state;
  typename NativeTypeString::ImplType v = NativeValueConverter<NativeTypeString>::FromNativeValue(ctx, qjs_html_input_element->GetBindingProperty(binding_call_methods::kaccept, FlushUICommandReason::kDependentsOnElement  , exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLDOMString>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue acceptAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_input_element = toScriptWrappable<HTMLInputElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_html_input_element->SetBindingProperty(binding_call_methods::kaccept, NativeValueConverter<NativeTypeString>::ToNativeValue(ctx, v),exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue autocompleteAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_input_element = toScriptWrappable<HTMLInputElement>(this_val);
  assert(qjs_html_input_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("HTMLInputElement::autocomplete");
  ExceptionState exception_state;
  typename NativeTypeString::ImplType v = NativeValueConverter<NativeTypeString>::FromNativeValue(ctx, qjs_html_input_element->GetBindingProperty(binding_call_methods::kautocomplete, FlushUICommandReason::kDependentsOnElement  , exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLDOMString>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue autocompleteAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_input_element = toScriptWrappable<HTMLInputElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_html_input_element->SetBindingProperty(binding_call_methods::kautocomplete, NativeValueConverter<NativeTypeString>::ToNativeValue(ctx, v),exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue autofocusAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_input_element = toScriptWrappable<HTMLInputElement>(this_val);
  assert(qjs_html_input_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("HTMLInputElement::autofocus");
  ExceptionState exception_state;
  typename NativeTypeBool::ImplType v = NativeValueConverter<NativeTypeBool>::FromNativeValue(qjs_html_input_element->GetBindingProperty(binding_call_methods::kautofocus, FlushUICommandReason::kDependentsOnElement  , exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLBoolean>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue autofocusAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_input_element = toScriptWrappable<HTMLInputElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLBoolean>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_html_input_element->SetBindingProperty(binding_call_methods::kautofocus, NativeValueConverter<NativeTypeBool>::ToNativeValue(v),exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue checkedAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_input_element = toScriptWrappable<HTMLInputElement>(this_val);
  assert(qjs_html_input_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("HTMLInputElement::checked");
  ExceptionState exception_state;
  typename NativeTypeBool::ImplType v = NativeValueConverter<NativeTypeBool>::FromNativeValue(qjs_html_input_element->GetBindingProperty(binding_call_methods::kchecked, FlushUICommandReason::kDependentsOnElement  , exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLBoolean>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue checkedAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_input_element = toScriptWrappable<HTMLInputElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLBoolean>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_html_input_element->SetBindingProperty(binding_call_methods::kchecked, NativeValueConverter<NativeTypeBool>::ToNativeValue(v),exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue disabledAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_input_element = toScriptWrappable<HTMLInputElement>(this_val);
  assert(qjs_html_input_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("HTMLInputElement::disabled");
  ExceptionState exception_state;
  typename NativeTypeBool::ImplType v = NativeValueConverter<NativeTypeBool>::FromNativeValue(qjs_html_input_element->GetBindingProperty(binding_call_methods::kdisabled, FlushUICommandReason::kDependentsOnElement  , exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLBoolean>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue disabledAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_input_element = toScriptWrappable<HTMLInputElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLBoolean>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_html_input_element->SetBindingProperty(binding_call_methods::kdisabled, NativeValueConverter<NativeTypeBool>::ToNativeValue(v),exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue minAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_input_element = toScriptWrappable<HTMLInputElement>(this_val);
  assert(qjs_html_input_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("HTMLInputElement::min");
  ExceptionState exception_state;
  typename NativeTypeString::ImplType v = NativeValueConverter<NativeTypeString>::FromNativeValue(ctx, qjs_html_input_element->GetBindingProperty(binding_call_methods::kmin, FlushUICommandReason::kDependentsOnElement  , exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLDOMString>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue minAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_input_element = toScriptWrappable<HTMLInputElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_html_input_element->SetBindingProperty(binding_call_methods::kmin, NativeValueConverter<NativeTypeString>::ToNativeValue(ctx, v),exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue maxAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_input_element = toScriptWrappable<HTMLInputElement>(this_val);
  assert(qjs_html_input_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("HTMLInputElement::max");
  ExceptionState exception_state;
  typename NativeTypeString::ImplType v = NativeValueConverter<NativeTypeString>::FromNativeValue(ctx, qjs_html_input_element->GetBindingProperty(binding_call_methods::kmax, FlushUICommandReason::kDependentsOnElement  , exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLDOMString>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue maxAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_input_element = toScriptWrappable<HTMLInputElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_html_input_element->SetBindingProperty(binding_call_methods::kmax, NativeValueConverter<NativeTypeString>::ToNativeValue(ctx, v),exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue minLengthAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_input_element = toScriptWrappable<HTMLInputElement>(this_val);
  assert(qjs_html_input_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("HTMLInputElement::minLength");
  ExceptionState exception_state;
  typename NativeTypeDouble::ImplType v = NativeValueConverter<NativeTypeDouble>::FromNativeValue(qjs_html_input_element->GetBindingProperty(binding_call_methods::kminLength, FlushUICommandReason::kDependentsOnElement  , exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLDouble>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue minLengthAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_input_element = toScriptWrappable<HTMLInputElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDouble>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_html_input_element->SetBindingProperty(binding_call_methods::kminLength, NativeValueConverter<NativeTypeDouble>::ToNativeValue(v),exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue maxLengthAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_input_element = toScriptWrappable<HTMLInputElement>(this_val);
  assert(qjs_html_input_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("HTMLInputElement::maxLength");
  ExceptionState exception_state;
  typename NativeTypeDouble::ImplType v = NativeValueConverter<NativeTypeDouble>::FromNativeValue(qjs_html_input_element->GetBindingProperty(binding_call_methods::kmaxLength, FlushUICommandReason::kDependentsOnElement  , exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLDouble>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue maxLengthAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_input_element = toScriptWrappable<HTMLInputElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDouble>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_html_input_element->SetBindingProperty(binding_call_methods::kmaxLength, NativeValueConverter<NativeTypeDouble>::ToNativeValue(v),exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue sizeAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_input_element = toScriptWrappable<HTMLInputElement>(this_val);
  assert(qjs_html_input_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("HTMLInputElement::size");
  ExceptionState exception_state;
  typename NativeTypeDouble::ImplType v = NativeValueConverter<NativeTypeDouble>::FromNativeValue(qjs_html_input_element->GetBindingProperty(binding_call_methods::ksize, FlushUICommandReason::kDependentsOnElement  , exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLDouble>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue sizeAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_input_element = toScriptWrappable<HTMLInputElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDouble>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_html_input_element->SetBindingProperty(binding_call_methods::ksize, NativeValueConverter<NativeTypeDouble>::ToNativeValue(v),exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue multipleAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_input_element = toScriptWrappable<HTMLInputElement>(this_val);
  assert(qjs_html_input_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("HTMLInputElement::multiple");
  ExceptionState exception_state;
  typename NativeTypeBool::ImplType v = NativeValueConverter<NativeTypeBool>::FromNativeValue(qjs_html_input_element->GetBindingProperty(binding_call_methods::kmultiple, FlushUICommandReason::kDependentsOnElement  , exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLBoolean>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue multipleAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_input_element = toScriptWrappable<HTMLInputElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLBoolean>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_html_input_element->SetBindingProperty(binding_call_methods::kmultiple, NativeValueConverter<NativeTypeBool>::ToNativeValue(v),exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue nameAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_input_element = toScriptWrappable<HTMLInputElement>(this_val);
  assert(qjs_html_input_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("HTMLInputElement::name");
  ExceptionState exception_state;
  typename NativeTypeString::ImplType v = NativeValueConverter<NativeTypeString>::FromNativeValue(ctx, qjs_html_input_element->GetBindingProperty(binding_call_methods::kname, FlushUICommandReason::kDependentsOnElement  , exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLDOMString>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue nameAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_input_element = toScriptWrappable<HTMLInputElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_html_input_element->SetBindingProperty(binding_call_methods::kname, NativeValueConverter<NativeTypeString>::ToNativeValue(ctx, v),exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue stepAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_input_element = toScriptWrappable<HTMLInputElement>(this_val);
  assert(qjs_html_input_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("HTMLInputElement::step");
  ExceptionState exception_state;
  typename NativeTypeString::ImplType v = NativeValueConverter<NativeTypeString>::FromNativeValue(ctx, qjs_html_input_element->GetBindingProperty(binding_call_methods::kstep, FlushUICommandReason::kDependentsOnElement  , exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLDOMString>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue stepAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_input_element = toScriptWrappable<HTMLInputElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_html_input_element->SetBindingProperty(binding_call_methods::kstep, NativeValueConverter<NativeTypeString>::ToNativeValue(ctx, v),exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue patternAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_input_element = toScriptWrappable<HTMLInputElement>(this_val);
  assert(qjs_html_input_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("HTMLInputElement::pattern");
  ExceptionState exception_state;
  typename NativeTypeString::ImplType v = NativeValueConverter<NativeTypeString>::FromNativeValue(ctx, qjs_html_input_element->GetBindingProperty(binding_call_methods::kpattern, FlushUICommandReason::kDependentsOnElement  , exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLDOMString>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue patternAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_input_element = toScriptWrappable<HTMLInputElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_html_input_element->SetBindingProperty(binding_call_methods::kpattern, NativeValueConverter<NativeTypeString>::ToNativeValue(ctx, v),exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue requiredAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_input_element = toScriptWrappable<HTMLInputElement>(this_val);
  assert(qjs_html_input_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("HTMLInputElement::required");
  ExceptionState exception_state;
  typename NativeTypeBool::ImplType v = NativeValueConverter<NativeTypeBool>::FromNativeValue(qjs_html_input_element->GetBindingProperty(binding_call_methods::krequired, FlushUICommandReason::kDependentsOnElement  , exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLBoolean>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue requiredAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_input_element = toScriptWrappable<HTMLInputElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLBoolean>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_html_input_element->SetBindingProperty(binding_call_methods::krequired, NativeValueConverter<NativeTypeBool>::ToNativeValue(v),exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue readonlyAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_input_element = toScriptWrappable<HTMLInputElement>(this_val);
  assert(qjs_html_input_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("HTMLInputElement::readonly");
  ExceptionState exception_state;
  typename NativeTypeBool::ImplType v = NativeValueConverter<NativeTypeBool>::FromNativeValue(qjs_html_input_element->GetBindingProperty(binding_call_methods::kreadonly, FlushUICommandReason::kDependentsOnElement  , exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLBoolean>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue readonlyAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_input_element = toScriptWrappable<HTMLInputElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLBoolean>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_html_input_element->SetBindingProperty(binding_call_methods::kreadonly, NativeValueConverter<NativeTypeBool>::ToNativeValue(v),exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue placeholderAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_input_element = toScriptWrappable<HTMLInputElement>(this_val);
  assert(qjs_html_input_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("HTMLInputElement::placeholder");
  ExceptionState exception_state;
  typename NativeTypeString::ImplType v = NativeValueConverter<NativeTypeString>::FromNativeValue(ctx, qjs_html_input_element->GetBindingProperty(binding_call_methods::kplaceholder, FlushUICommandReason::kDependentsOnElement  , exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLDOMString>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue placeholderAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_input_element = toScriptWrappable<HTMLInputElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_html_input_element->SetBindingProperty(binding_call_methods::kplaceholder, NativeValueConverter<NativeTypeString>::ToNativeValue(ctx, v),exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue typeAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_input_element = toScriptWrappable<HTMLInputElement>(this_val);
  assert(qjs_html_input_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("HTMLInputElement::type");
  ExceptionState exception_state;
  typename NativeTypeString::ImplType v = NativeValueConverter<NativeTypeString>::FromNativeValue(ctx, qjs_html_input_element->GetBindingProperty(binding_call_methods::ktype, FlushUICommandReason::kDependentsOnElement  , exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLDOMString>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue typeAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_input_element = toScriptWrappable<HTMLInputElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_html_input_element->SetBindingProperty(binding_call_methods::ktype, NativeValueConverter<NativeTypeString>::ToNativeValue(ctx, v),exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue inputModeAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_input_element = toScriptWrappable<HTMLInputElement>(this_val);
  assert(qjs_html_input_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("HTMLInputElement::inputMode");
  ExceptionState exception_state;
  typename NativeTypeString::ImplType v = NativeValueConverter<NativeTypeString>::FromNativeValue(ctx, qjs_html_input_element->GetBindingProperty(binding_call_methods::kinputMode, FlushUICommandReason::kDependentsOnElement  , exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLDOMString>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue inputModeAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_input_element = toScriptWrappable<HTMLInputElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_html_input_element->SetBindingProperty(binding_call_methods::kinputMode, NativeValueConverter<NativeTypeString>::ToNativeValue(ctx, v),exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
void QJSHTMLInputElement::Install(ExecutingContext* context) {
   InstallPrototypeProperties(context); 
   InstallPrototypeMethods(context); 
   InstallConstructor(context); 
}
void QJSHTMLInputElement::InstallPrototypeProperties(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue prototype = context->contextData()->prototypeForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::FunctionConfig> functionConfig {
    {"focus", focus, 0},
{"blur", blur, 0}
  };
  MemberInstaller::InstallFunctions(context, prototype, functionConfig);
}
void QJSHTMLInputElement::InstallPrototypeMethods(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue prototype = context->contextData()->prototypeForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::AttributeConfig> attributesConfig {
    {defined_properties::kwidth.Impl(), widthAttributeGetCallback, widthAttributeSetCallback},
{defined_properties::kheight.Impl(), heightAttributeGetCallback, heightAttributeSetCallback},
{defined_properties::kdefaultValue.Impl(), defaultValueAttributeGetCallback, defaultValueAttributeSetCallback},
{defined_properties::kvalue.Impl(), valueAttributeGetCallback, valueAttributeSetCallback},
{defined_properties::kaccept.Impl(), acceptAttributeGetCallback, acceptAttributeSetCallback},
{defined_properties::kautocomplete.Impl(), autocompleteAttributeGetCallback, autocompleteAttributeSetCallback},
{defined_properties::kautofocus.Impl(), autofocusAttributeGetCallback, autofocusAttributeSetCallback},
{defined_properties::kchecked.Impl(), checkedAttributeGetCallback, checkedAttributeSetCallback},
{defined_properties::kdisabled.Impl(), disabledAttributeGetCallback, disabledAttributeSetCallback},
{defined_properties::kmin.Impl(), minAttributeGetCallback, minAttributeSetCallback},
{defined_properties::kmax.Impl(), maxAttributeGetCallback, maxAttributeSetCallback},
{defined_properties::kminLength.Impl(), minLengthAttributeGetCallback, minLengthAttributeSetCallback},
{defined_properties::kmaxLength.Impl(), maxLengthAttributeGetCallback, maxLengthAttributeSetCallback},
{defined_properties::ksize.Impl(), sizeAttributeGetCallback, sizeAttributeSetCallback},
{defined_properties::kmultiple.Impl(), multipleAttributeGetCallback, multipleAttributeSetCallback},
{defined_properties::kname.Impl(), nameAttributeGetCallback, nameAttributeSetCallback},
{defined_properties::kstep.Impl(), stepAttributeGetCallback, stepAttributeSetCallback},
{defined_properties::kpattern.Impl(), patternAttributeGetCallback, patternAttributeSetCallback},
{defined_properties::krequired.Impl(), requiredAttributeGetCallback, requiredAttributeSetCallback},
{defined_properties::kreadonly.Impl(), readonlyAttributeGetCallback, readonlyAttributeSetCallback},
{defined_properties::kplaceholder.Impl(), placeholderAttributeGetCallback, placeholderAttributeSetCallback},
{defined_properties::ktype.Impl(), typeAttributeGetCallback, typeAttributeSetCallback},
{defined_properties::kinputMode.Impl(), inputModeAttributeGetCallback, inputModeAttributeSetCallback}
  };
  MemberInstaller::InstallAttributes(context, prototype, attributesConfig);
}
void QJSHTMLInputElement::InstallConstructor(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue constructor = context->contextData()->constructorForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::AttributeConfig> attributeConfig {
    {defined_properties::kHTMLInputElement.Impl(), nullptr, nullptr, constructor}
  };
  MemberInstaller::InstallAttributes(context, context->Global(), attributeConfig);
}
}