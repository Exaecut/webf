/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#include "qjs_html_anchor_element.h"
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
const WrapperTypeInfo QJSHTMLAnchorElement::wrapper_type_info_ {JS_CLASS_HTML_ANCHOR_ELEMENT, "HTMLAnchorElement", HTMLElement::GetStaticWrapperTypeInfo(), QJSHTMLAnchorElement::ConstructorCallback};
const WrapperTypeInfo& HTMLAnchorElement::wrapper_type_info_ = QJSHTMLAnchorElement::wrapper_type_info_;
JSValue QJSHTMLAnchorElement::ConstructorCallback(JSContext* ctx, JSValue func_obj, JSValue this_val, int argc, JSValue* argv, int flags) {
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("HTMLAnchorElement::constructor");
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
static JSValue targetAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_anchor_element = toScriptWrappable<HTMLAnchorElement>(this_val);
  assert(qjs_html_anchor_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("HTMLAnchorElement::target");
  ExceptionState exception_state;
  typename NativeTypeString::ImplType v = NativeValueConverter<NativeTypeString>::FromNativeValue(ctx, qjs_html_anchor_element->GetBindingProperty(binding_call_methods::ktarget, FlushUICommandReason::kDependentsOnElement  , exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLDOMString>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue targetAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_anchor_element = toScriptWrappable<HTMLAnchorElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_html_anchor_element->SetBindingProperty(binding_call_methods::ktarget, NativeValueConverter<NativeTypeString>::ToNativeValue(ctx, v),exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue accessKeyAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_anchor_element = toScriptWrappable<HTMLAnchorElement>(this_val);
  assert(qjs_html_anchor_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("HTMLAnchorElement::accessKey");
  ExceptionState exception_state;
  typename NativeTypeString::ImplType v = NativeValueConverter<NativeTypeString>::FromNativeValue(ctx, qjs_html_anchor_element->GetBindingProperty(binding_call_methods::kaccessKey, FlushUICommandReason::kDependentsOnElement  , exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLDOMString>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue accessKeyAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_anchor_element = toScriptWrappable<HTMLAnchorElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_html_anchor_element->SetBindingProperty(binding_call_methods::kaccessKey, NativeValueConverter<NativeTypeString>::ToNativeValue(ctx, v),exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue downloadAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_anchor_element = toScriptWrappable<HTMLAnchorElement>(this_val);
  assert(qjs_html_anchor_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("HTMLAnchorElement::download");
  ExceptionState exception_state;
  typename NativeTypeString::ImplType v = NativeValueConverter<NativeTypeString>::FromNativeValue(ctx, qjs_html_anchor_element->GetBindingProperty(binding_call_methods::kdownload, FlushUICommandReason::kDependentsOnElement  , exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLDOMString>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue downloadAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_anchor_element = toScriptWrappable<HTMLAnchorElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_html_anchor_element->SetBindingProperty(binding_call_methods::kdownload, NativeValueConverter<NativeTypeString>::ToNativeValue(ctx, v),exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue pingAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_anchor_element = toScriptWrappable<HTMLAnchorElement>(this_val);
  assert(qjs_html_anchor_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("HTMLAnchorElement::ping");
  ExceptionState exception_state;
  typename NativeTypeString::ImplType v = NativeValueConverter<NativeTypeString>::FromNativeValue(ctx, qjs_html_anchor_element->GetBindingProperty(binding_call_methods::kping, FlushUICommandReason::kDependentsOnElement  , exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLDOMString>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue pingAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_anchor_element = toScriptWrappable<HTMLAnchorElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_html_anchor_element->SetBindingProperty(binding_call_methods::kping, NativeValueConverter<NativeTypeString>::ToNativeValue(ctx, v),exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue relAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_anchor_element = toScriptWrappable<HTMLAnchorElement>(this_val);
  assert(qjs_html_anchor_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("HTMLAnchorElement::rel");
  ExceptionState exception_state;
  typename NativeTypeString::ImplType v = NativeValueConverter<NativeTypeString>::FromNativeValue(ctx, qjs_html_anchor_element->GetBindingProperty(binding_call_methods::krel, FlushUICommandReason::kDependentsOnElement  , exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLDOMString>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue relAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_anchor_element = toScriptWrappable<HTMLAnchorElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_html_anchor_element->SetBindingProperty(binding_call_methods::krel, NativeValueConverter<NativeTypeString>::ToNativeValue(ctx, v),exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue typeAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_anchor_element = toScriptWrappable<HTMLAnchorElement>(this_val);
  assert(qjs_html_anchor_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("HTMLAnchorElement::type");
  ExceptionState exception_state;
  typename NativeTypeString::ImplType v = NativeValueConverter<NativeTypeString>::FromNativeValue(ctx, qjs_html_anchor_element->GetBindingProperty(binding_call_methods::ktype, FlushUICommandReason::kDependentsOnElement  , exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLDOMString>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue typeAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_anchor_element = toScriptWrappable<HTMLAnchorElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_html_anchor_element->SetBindingProperty(binding_call_methods::ktype, NativeValueConverter<NativeTypeString>::ToNativeValue(ctx, v),exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue textAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_anchor_element = toScriptWrappable<HTMLAnchorElement>(this_val);
  assert(qjs_html_anchor_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("HTMLAnchorElement::text");
  ExceptionState exception_state;
  typename NativeTypeString::ImplType v = NativeValueConverter<NativeTypeString>::FromNativeValue(ctx, qjs_html_anchor_element->GetBindingProperty(binding_call_methods::ktext, FlushUICommandReason::kDependentsOnElement  , exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLDOMString>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue textAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_anchor_element = toScriptWrappable<HTMLAnchorElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_html_anchor_element->SetBindingProperty(binding_call_methods::ktext, NativeValueConverter<NativeTypeString>::ToNativeValue(ctx, v),exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue hrefAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_anchor_element = toScriptWrappable<HTMLAnchorElement>(this_val);
  assert(qjs_html_anchor_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("HTMLAnchorElement::href");
  ExceptionState exception_state;
  typename NativeTypeString::ImplType v = NativeValueConverter<NativeTypeString>::FromNativeValue(ctx, qjs_html_anchor_element->GetBindingProperty(binding_call_methods::khref, FlushUICommandReason::kDependentsOnElement  , exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLDOMString>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue hrefAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_anchor_element = toScriptWrappable<HTMLAnchorElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_html_anchor_element->SetBindingProperty(binding_call_methods::khref, NativeValueConverter<NativeTypeString>::ToNativeValue(ctx, v),exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue originAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_anchor_element = toScriptWrappable<HTMLAnchorElement>(this_val);
  assert(qjs_html_anchor_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("HTMLAnchorElement::origin");
  ExceptionState exception_state;
  typename NativeTypeString::ImplType v = NativeValueConverter<NativeTypeString>::FromNativeValue(ctx, qjs_html_anchor_element->GetBindingProperty(binding_call_methods::korigin, FlushUICommandReason::kDependentsOnElement  , exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLDOMString>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue protocolAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_anchor_element = toScriptWrappable<HTMLAnchorElement>(this_val);
  assert(qjs_html_anchor_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("HTMLAnchorElement::protocol");
  ExceptionState exception_state;
  typename NativeTypeString::ImplType v = NativeValueConverter<NativeTypeString>::FromNativeValue(ctx, qjs_html_anchor_element->GetBindingProperty(binding_call_methods::kprotocol, FlushUICommandReason::kDependentsOnElement  , exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLDOMString>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue protocolAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_anchor_element = toScriptWrappable<HTMLAnchorElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_html_anchor_element->SetBindingProperty(binding_call_methods::kprotocol, NativeValueConverter<NativeTypeString>::ToNativeValue(ctx, v),exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue usernameAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_anchor_element = toScriptWrappable<HTMLAnchorElement>(this_val);
  assert(qjs_html_anchor_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("HTMLAnchorElement::username");
  ExceptionState exception_state;
  typename NativeTypeString::ImplType v = NativeValueConverter<NativeTypeString>::FromNativeValue(ctx, qjs_html_anchor_element->GetBindingProperty(binding_call_methods::kusername, FlushUICommandReason::kDependentsOnElement  , exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLDOMString>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue usernameAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_anchor_element = toScriptWrappable<HTMLAnchorElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_html_anchor_element->SetBindingProperty(binding_call_methods::kusername, NativeValueConverter<NativeTypeString>::ToNativeValue(ctx, v),exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue passwordAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_anchor_element = toScriptWrappable<HTMLAnchorElement>(this_val);
  assert(qjs_html_anchor_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("HTMLAnchorElement::password");
  ExceptionState exception_state;
  typename NativeTypeString::ImplType v = NativeValueConverter<NativeTypeString>::FromNativeValue(ctx, qjs_html_anchor_element->GetBindingProperty(binding_call_methods::kpassword, FlushUICommandReason::kDependentsOnElement  , exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLDOMString>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue passwordAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_anchor_element = toScriptWrappable<HTMLAnchorElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_html_anchor_element->SetBindingProperty(binding_call_methods::kpassword, NativeValueConverter<NativeTypeString>::ToNativeValue(ctx, v),exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue hostAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_anchor_element = toScriptWrappable<HTMLAnchorElement>(this_val);
  assert(qjs_html_anchor_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("HTMLAnchorElement::host");
  ExceptionState exception_state;
  typename NativeTypeString::ImplType v = NativeValueConverter<NativeTypeString>::FromNativeValue(ctx, qjs_html_anchor_element->GetBindingProperty(binding_call_methods::khost, FlushUICommandReason::kDependentsOnElement  , exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLDOMString>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue hostAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_anchor_element = toScriptWrappable<HTMLAnchorElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_html_anchor_element->SetBindingProperty(binding_call_methods::khost, NativeValueConverter<NativeTypeString>::ToNativeValue(ctx, v),exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue hostnameAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_anchor_element = toScriptWrappable<HTMLAnchorElement>(this_val);
  assert(qjs_html_anchor_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("HTMLAnchorElement::hostname");
  ExceptionState exception_state;
  typename NativeTypeString::ImplType v = NativeValueConverter<NativeTypeString>::FromNativeValue(ctx, qjs_html_anchor_element->GetBindingProperty(binding_call_methods::khostname, FlushUICommandReason::kDependentsOnElement  , exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLDOMString>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue hostnameAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_anchor_element = toScriptWrappable<HTMLAnchorElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_html_anchor_element->SetBindingProperty(binding_call_methods::khostname, NativeValueConverter<NativeTypeString>::ToNativeValue(ctx, v),exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue portAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_anchor_element = toScriptWrappable<HTMLAnchorElement>(this_val);
  assert(qjs_html_anchor_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("HTMLAnchorElement::port");
  ExceptionState exception_state;
  typename NativeTypeString::ImplType v = NativeValueConverter<NativeTypeString>::FromNativeValue(ctx, qjs_html_anchor_element->GetBindingProperty(binding_call_methods::kport, FlushUICommandReason::kDependentsOnElement  , exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLDOMString>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue portAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_anchor_element = toScriptWrappable<HTMLAnchorElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_html_anchor_element->SetBindingProperty(binding_call_methods::kport, NativeValueConverter<NativeTypeString>::ToNativeValue(ctx, v),exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue pathnameAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_anchor_element = toScriptWrappable<HTMLAnchorElement>(this_val);
  assert(qjs_html_anchor_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("HTMLAnchorElement::pathname");
  ExceptionState exception_state;
  typename NativeTypeString::ImplType v = NativeValueConverter<NativeTypeString>::FromNativeValue(ctx, qjs_html_anchor_element->GetBindingProperty(binding_call_methods::kpathname, FlushUICommandReason::kDependentsOnElement  , exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLDOMString>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue pathnameAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_anchor_element = toScriptWrappable<HTMLAnchorElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_html_anchor_element->SetBindingProperty(binding_call_methods::kpathname, NativeValueConverter<NativeTypeString>::ToNativeValue(ctx, v),exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue searchAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_anchor_element = toScriptWrappable<HTMLAnchorElement>(this_val);
  assert(qjs_html_anchor_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("HTMLAnchorElement::search");
  ExceptionState exception_state;
  typename NativeTypeString::ImplType v = NativeValueConverter<NativeTypeString>::FromNativeValue(ctx, qjs_html_anchor_element->GetBindingProperty(binding_call_methods::ksearch, FlushUICommandReason::kDependentsOnElement  , exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLDOMString>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue searchAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_anchor_element = toScriptWrappable<HTMLAnchorElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_html_anchor_element->SetBindingProperty(binding_call_methods::ksearch, NativeValueConverter<NativeTypeString>::ToNativeValue(ctx, v),exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue hashAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_anchor_element = toScriptWrappable<HTMLAnchorElement>(this_val);
  assert(qjs_html_anchor_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("HTMLAnchorElement::hash");
  ExceptionState exception_state;
  typename NativeTypeString::ImplType v = NativeValueConverter<NativeTypeString>::FromNativeValue(ctx, qjs_html_anchor_element->GetBindingProperty(binding_call_methods::khash, FlushUICommandReason::kDependentsOnElement  , exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLDOMString>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue hashAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_anchor_element = toScriptWrappable<HTMLAnchorElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_html_anchor_element->SetBindingProperty(binding_call_methods::khash, NativeValueConverter<NativeTypeString>::ToNativeValue(ctx, v),exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
void QJSHTMLAnchorElement::Install(ExecutingContext* context) {
   InstallPrototypeMethods(context); 
   InstallConstructor(context); 
}
void QJSHTMLAnchorElement::InstallPrototypeMethods(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue prototype = context->contextData()->prototypeForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::AttributeConfig> attributesConfig {
    {defined_properties::ktarget.Impl(), targetAttributeGetCallback, targetAttributeSetCallback},
{defined_properties::kaccessKey.Impl(), accessKeyAttributeGetCallback, accessKeyAttributeSetCallback},
{defined_properties::kdownload.Impl(), downloadAttributeGetCallback, downloadAttributeSetCallback},
{defined_properties::kping.Impl(), pingAttributeGetCallback, pingAttributeSetCallback},
{defined_properties::krel.Impl(), relAttributeGetCallback, relAttributeSetCallback},
{defined_properties::ktype.Impl(), typeAttributeGetCallback, typeAttributeSetCallback},
{defined_properties::ktext.Impl(), textAttributeGetCallback, textAttributeSetCallback},
{defined_properties::khref.Impl(), hrefAttributeGetCallback, hrefAttributeSetCallback},
{defined_properties::korigin.Impl(), originAttributeGetCallback, nullptr},
{defined_properties::kprotocol.Impl(), protocolAttributeGetCallback, protocolAttributeSetCallback},
{defined_properties::kusername.Impl(), usernameAttributeGetCallback, usernameAttributeSetCallback},
{defined_properties::kpassword.Impl(), passwordAttributeGetCallback, passwordAttributeSetCallback},
{defined_properties::khost.Impl(), hostAttributeGetCallback, hostAttributeSetCallback},
{defined_properties::khostname.Impl(), hostnameAttributeGetCallback, hostnameAttributeSetCallback},
{defined_properties::kport.Impl(), portAttributeGetCallback, portAttributeSetCallback},
{defined_properties::kpathname.Impl(), pathnameAttributeGetCallback, pathnameAttributeSetCallback},
{defined_properties::ksearch.Impl(), searchAttributeGetCallback, searchAttributeSetCallback},
{defined_properties::khash.Impl(), hashAttributeGetCallback, hashAttributeSetCallback}
  };
  MemberInstaller::InstallAttributes(context, prototype, attributesConfig);
}
void QJSHTMLAnchorElement::InstallConstructor(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue constructor = context->contextData()->constructorForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::AttributeConfig> attributeConfig {
    {defined_properties::kHTMLAnchorElement.Impl(), nullptr, nullptr, constructor}
  };
  MemberInstaller::InstallAttributes(context, context->Global(), attributeConfig);
}
}