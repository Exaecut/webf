/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#include "qjs_html_element.h"
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
const WrapperTypeInfo QJSHTMLElement::wrapper_type_info_ {JS_CLASS_HTML_ELEMENT, "HTMLElement", Element::GetStaticWrapperTypeInfo(), QJSHTMLElement::ConstructorCallback};
const WrapperTypeInfo& HTMLElement::wrapper_type_info_ = QJSHTMLElement::wrapper_type_info_;
JSValue QJSHTMLElement::ConstructorCallback(JSContext* ctx, JSValue func_obj, JSValue this_val, int argc, JSValue* argv, int flags) {
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("HTMLElement::constructor");
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
  static JSValue click(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("HTMLElement::click");
  MemberMutationScope scope{context};
  do {  // Dummy loop for use of 'break'.
    auto* self = toScriptWrappable<HTMLElement>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    NativeValue* arguments = nullptr;;
    self->InvokeBindingMethod(binding_call_methods::kclick, 0, arguments, FlushUICommandReason::kDependentsOnElement| FlushUICommandReason::kDependentsOnLayout, exception_state);
    ;
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return JS_NULL;
  }
static JSValue offsetTopAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  assert(qjs_html_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("HTMLElement::offsetTop");
  ExceptionState exception_state;
  typename NativeTypeDouble::ImplType v = NativeValueConverter<NativeTypeDouble>::FromNativeValue(qjs_html_element->GetBindingProperty(binding_call_methods::koffsetTop, FlushUICommandReason::kDependentsOnElement  | FlushUICommandReason::kDependentsOnLayout, exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLDouble>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue offsetLeftAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  assert(qjs_html_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("HTMLElement::offsetLeft");
  ExceptionState exception_state;
  typename NativeTypeDouble::ImplType v = NativeValueConverter<NativeTypeDouble>::FromNativeValue(qjs_html_element->GetBindingProperty(binding_call_methods::koffsetLeft, FlushUICommandReason::kDependentsOnElement  | FlushUICommandReason::kDependentsOnLayout, exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLDouble>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue offsetWidthAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  assert(qjs_html_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("HTMLElement::offsetWidth");
  ExceptionState exception_state;
  typename NativeTypeDouble::ImplType v = NativeValueConverter<NativeTypeDouble>::FromNativeValue(qjs_html_element->GetBindingProperty(binding_call_methods::koffsetWidth, FlushUICommandReason::kDependentsOnElement  | FlushUICommandReason::kDependentsOnLayout, exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLDouble>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue offsetHeightAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  assert(qjs_html_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("HTMLElement::offsetHeight");
  ExceptionState exception_state;
  typename NativeTypeDouble::ImplType v = NativeValueConverter<NativeTypeDouble>::FromNativeValue(qjs_html_element->GetBindingProperty(binding_call_methods::koffsetHeight, FlushUICommandReason::kDependentsOnElement  | FlushUICommandReason::kDependentsOnLayout, exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLDouble>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue onabortAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  assert(qjs_html_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onabort(*qjs_html_element));
}
static JSValue onabortAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnabort(*qjs_html_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onanimationcancelAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  assert(qjs_html_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onanimationcancel(*qjs_html_element));
}
static JSValue onanimationcancelAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnanimationcancel(*qjs_html_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onanimationendAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  assert(qjs_html_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onanimationend(*qjs_html_element));
}
static JSValue onanimationendAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnanimationend(*qjs_html_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onanimationiterationAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  assert(qjs_html_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onanimationiteration(*qjs_html_element));
}
static JSValue onanimationiterationAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnanimationiteration(*qjs_html_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onanimationstartAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  assert(qjs_html_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onanimationstart(*qjs_html_element));
}
static JSValue onanimationstartAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnanimationstart(*qjs_html_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onblurAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  assert(qjs_html_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onblur(*qjs_html_element));
}
static JSValue onblurAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnblur(*qjs_html_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue oncancelAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  assert(qjs_html_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::oncancel(*qjs_html_element));
}
static JSValue oncancelAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOncancel(*qjs_html_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue oncanplayAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  assert(qjs_html_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::oncanplay(*qjs_html_element));
}
static JSValue oncanplayAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOncanplay(*qjs_html_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue oncanplaythroughAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  assert(qjs_html_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::oncanplaythrough(*qjs_html_element));
}
static JSValue oncanplaythroughAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOncanplaythrough(*qjs_html_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onchangeAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  assert(qjs_html_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onchange(*qjs_html_element));
}
static JSValue onchangeAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnchange(*qjs_html_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onclickAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  assert(qjs_html_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onclick(*qjs_html_element));
}
static JSValue onclickAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnclick(*qjs_html_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue oncloseAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  assert(qjs_html_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onclose(*qjs_html_element));
}
static JSValue oncloseAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnclose(*qjs_html_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue ondblclickAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  assert(qjs_html_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::ondblclick(*qjs_html_element));
}
static JSValue ondblclickAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOndblclick(*qjs_html_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onendedAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  assert(qjs_html_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onended(*qjs_html_element));
}
static JSValue onendedAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnended(*qjs_html_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onerrorAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  assert(qjs_html_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onerror(*qjs_html_element));
}
static JSValue onerrorAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnerror(*qjs_html_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onfocusAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  assert(qjs_html_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onfocus(*qjs_html_element));
}
static JSValue onfocusAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnfocus(*qjs_html_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue ongotpointercaptureAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  assert(qjs_html_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::ongotpointercapture(*qjs_html_element));
}
static JSValue ongotpointercaptureAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOngotpointercapture(*qjs_html_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue oninputAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  assert(qjs_html_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::oninput(*qjs_html_element));
}
static JSValue oninputAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOninput(*qjs_html_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue oninvalidAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  assert(qjs_html_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::oninvalid(*qjs_html_element));
}
static JSValue oninvalidAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOninvalid(*qjs_html_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onkeydownAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  assert(qjs_html_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onkeydown(*qjs_html_element));
}
static JSValue onkeydownAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnkeydown(*qjs_html_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onkeypressAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  assert(qjs_html_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onkeypress(*qjs_html_element));
}
static JSValue onkeypressAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnkeypress(*qjs_html_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onkeyupAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  assert(qjs_html_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onkeyup(*qjs_html_element));
}
static JSValue onkeyupAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnkeyup(*qjs_html_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onloadAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  assert(qjs_html_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onload(*qjs_html_element));
}
static JSValue onloadAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnload(*qjs_html_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onloadeddataAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  assert(qjs_html_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onloadeddata(*qjs_html_element));
}
static JSValue onloadeddataAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnloadeddata(*qjs_html_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onloadedmetadataAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  assert(qjs_html_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onloadedmetadata(*qjs_html_element));
}
static JSValue onloadedmetadataAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnloadedmetadata(*qjs_html_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onloadstartAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  assert(qjs_html_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onloadstart(*qjs_html_element));
}
static JSValue onloadstartAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnloadstart(*qjs_html_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onlostpointercaptureAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  assert(qjs_html_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onlostpointercapture(*qjs_html_element));
}
static JSValue onlostpointercaptureAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnlostpointercapture(*qjs_html_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onmousedownAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  assert(qjs_html_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onmousedown(*qjs_html_element));
}
static JSValue onmousedownAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnmousedown(*qjs_html_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onmouseenterAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  assert(qjs_html_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onmouseenter(*qjs_html_element));
}
static JSValue onmouseenterAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnmouseenter(*qjs_html_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onmouseleaveAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  assert(qjs_html_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onmouseleave(*qjs_html_element));
}
static JSValue onmouseleaveAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnmouseleave(*qjs_html_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onmousemoveAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  assert(qjs_html_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onmousemove(*qjs_html_element));
}
static JSValue onmousemoveAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnmousemove(*qjs_html_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onmouseoutAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  assert(qjs_html_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onmouseout(*qjs_html_element));
}
static JSValue onmouseoutAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnmouseout(*qjs_html_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onmouseoverAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  assert(qjs_html_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onmouseover(*qjs_html_element));
}
static JSValue onmouseoverAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnmouseover(*qjs_html_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onmouseupAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  assert(qjs_html_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onmouseup(*qjs_html_element));
}
static JSValue onmouseupAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnmouseup(*qjs_html_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onpauseAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  assert(qjs_html_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onpause(*qjs_html_element));
}
static JSValue onpauseAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnpause(*qjs_html_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onplayAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  assert(qjs_html_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onplay(*qjs_html_element));
}
static JSValue onplayAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnplay(*qjs_html_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onplayingAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  assert(qjs_html_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onplaying(*qjs_html_element));
}
static JSValue onplayingAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnplaying(*qjs_html_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onpointercancelAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  assert(qjs_html_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onpointercancel(*qjs_html_element));
}
static JSValue onpointercancelAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnpointercancel(*qjs_html_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onpointerdownAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  assert(qjs_html_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onpointerdown(*qjs_html_element));
}
static JSValue onpointerdownAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnpointerdown(*qjs_html_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onpointerenterAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  assert(qjs_html_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onpointerenter(*qjs_html_element));
}
static JSValue onpointerenterAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnpointerenter(*qjs_html_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onpointerleaveAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  assert(qjs_html_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onpointerleave(*qjs_html_element));
}
static JSValue onpointerleaveAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnpointerleave(*qjs_html_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onpointermoveAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  assert(qjs_html_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onpointermove(*qjs_html_element));
}
static JSValue onpointermoveAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnpointermove(*qjs_html_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onpointeroutAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  assert(qjs_html_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onpointerout(*qjs_html_element));
}
static JSValue onpointeroutAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnpointerout(*qjs_html_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onpointeroverAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  assert(qjs_html_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onpointerover(*qjs_html_element));
}
static JSValue onpointeroverAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnpointerover(*qjs_html_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onpointerupAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  assert(qjs_html_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onpointerup(*qjs_html_element));
}
static JSValue onpointerupAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnpointerup(*qjs_html_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onratechangeAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  assert(qjs_html_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onratechange(*qjs_html_element));
}
static JSValue onratechangeAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnratechange(*qjs_html_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onresetAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  assert(qjs_html_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onreset(*qjs_html_element));
}
static JSValue onresetAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnreset(*qjs_html_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onresizeAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  assert(qjs_html_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onresize(*qjs_html_element));
}
static JSValue onresizeAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnresize(*qjs_html_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onscrollAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  assert(qjs_html_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onscroll(*qjs_html_element));
}
static JSValue onscrollAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnscroll(*qjs_html_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onseekedAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  assert(qjs_html_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onseeked(*qjs_html_element));
}
static JSValue onseekedAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnseeked(*qjs_html_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onseekingAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  assert(qjs_html_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onseeking(*qjs_html_element));
}
static JSValue onseekingAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnseeking(*qjs_html_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onselectAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  assert(qjs_html_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onselect(*qjs_html_element));
}
static JSValue onselectAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnselect(*qjs_html_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onselectionchangeAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  assert(qjs_html_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onselectionchange(*qjs_html_element));
}
static JSValue onselectionchangeAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnselectionchange(*qjs_html_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onselectstartAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  assert(qjs_html_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onselectstart(*qjs_html_element));
}
static JSValue onselectstartAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnselectstart(*qjs_html_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onstalledAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  assert(qjs_html_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onstalled(*qjs_html_element));
}
static JSValue onstalledAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnstalled(*qjs_html_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onsubmitAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  assert(qjs_html_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onsubmit(*qjs_html_element));
}
static JSValue onsubmitAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnsubmit(*qjs_html_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onsuspendAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  assert(qjs_html_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onsuspend(*qjs_html_element));
}
static JSValue onsuspendAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnsuspend(*qjs_html_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue ontoggleAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  assert(qjs_html_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::ontoggle(*qjs_html_element));
}
static JSValue ontoggleAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOntoggle(*qjs_html_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue ontouchcancelAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  assert(qjs_html_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::ontouchcancel(*qjs_html_element));
}
static JSValue ontouchcancelAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOntouchcancel(*qjs_html_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue ontouchendAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  assert(qjs_html_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::ontouchend(*qjs_html_element));
}
static JSValue ontouchendAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOntouchend(*qjs_html_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue ontouchmoveAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  assert(qjs_html_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::ontouchmove(*qjs_html_element));
}
static JSValue ontouchmoveAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOntouchmove(*qjs_html_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue ontouchstartAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  assert(qjs_html_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::ontouchstart(*qjs_html_element));
}
static JSValue ontouchstartAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOntouchstart(*qjs_html_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue ontransitioncancelAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  assert(qjs_html_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::ontransitioncancel(*qjs_html_element));
}
static JSValue ontransitioncancelAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOntransitioncancel(*qjs_html_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue ontransitionendAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  assert(qjs_html_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::ontransitionend(*qjs_html_element));
}
static JSValue ontransitionendAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOntransitionend(*qjs_html_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue ontransitionrunAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  assert(qjs_html_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::ontransitionrun(*qjs_html_element));
}
static JSValue ontransitionrunAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOntransitionrun(*qjs_html_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue ontransitionstartAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  assert(qjs_html_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::ontransitionstart(*qjs_html_element));
}
static JSValue ontransitionstartAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOntransitionstart(*qjs_html_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onwaitingAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  assert(qjs_html_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onwaiting(*qjs_html_element));
}
static JSValue onwaitingAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnwaiting(*qjs_html_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onwheelAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  assert(qjs_html_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onwheel(*qjs_html_element));
}
static JSValue onwheelAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_element = toScriptWrappable<HTMLElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnwheel(*qjs_html_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
void QJSHTMLElement::Install(ExecutingContext* context) {
   InstallPrototypeProperties(context); 
   InstallPrototypeMethods(context); 
   InstallConstructor(context); 
}
void QJSHTMLElement::InstallPrototypeProperties(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue prototype = context->contextData()->prototypeForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::FunctionConfig> functionConfig {
    {"click", click, 0}
  };
  MemberInstaller::InstallFunctions(context, prototype, functionConfig);
}
void QJSHTMLElement::InstallPrototypeMethods(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue prototype = context->contextData()->prototypeForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::AttributeConfig> attributesConfig {
    {defined_properties::koffsetTop.Impl(), offsetTopAttributeGetCallback, nullptr},
{defined_properties::koffsetLeft.Impl(), offsetLeftAttributeGetCallback, nullptr},
{defined_properties::koffsetWidth.Impl(), offsetWidthAttributeGetCallback, nullptr},
{defined_properties::koffsetHeight.Impl(), offsetHeightAttributeGetCallback, nullptr},
{defined_properties::konabort.Impl(), onabortAttributeGetCallback, onabortAttributeSetCallback},
{defined_properties::konanimationcancel.Impl(), onanimationcancelAttributeGetCallback, onanimationcancelAttributeSetCallback},
{defined_properties::konanimationend.Impl(), onanimationendAttributeGetCallback, onanimationendAttributeSetCallback},
{defined_properties::konanimationiteration.Impl(), onanimationiterationAttributeGetCallback, onanimationiterationAttributeSetCallback},
{defined_properties::konanimationstart.Impl(), onanimationstartAttributeGetCallback, onanimationstartAttributeSetCallback},
{defined_properties::konblur.Impl(), onblurAttributeGetCallback, onblurAttributeSetCallback},
{defined_properties::koncancel.Impl(), oncancelAttributeGetCallback, oncancelAttributeSetCallback},
{defined_properties::koncanplay.Impl(), oncanplayAttributeGetCallback, oncanplayAttributeSetCallback},
{defined_properties::koncanplaythrough.Impl(), oncanplaythroughAttributeGetCallback, oncanplaythroughAttributeSetCallback},
{defined_properties::konchange.Impl(), onchangeAttributeGetCallback, onchangeAttributeSetCallback},
{defined_properties::konclick.Impl(), onclickAttributeGetCallback, onclickAttributeSetCallback},
{defined_properties::konclose.Impl(), oncloseAttributeGetCallback, oncloseAttributeSetCallback},
{defined_properties::kondblclick.Impl(), ondblclickAttributeGetCallback, ondblclickAttributeSetCallback},
{defined_properties::konended.Impl(), onendedAttributeGetCallback, onendedAttributeSetCallback},
{defined_properties::konerror.Impl(), onerrorAttributeGetCallback, onerrorAttributeSetCallback},
{defined_properties::konfocus.Impl(), onfocusAttributeGetCallback, onfocusAttributeSetCallback},
{defined_properties::kongotpointercapture.Impl(), ongotpointercaptureAttributeGetCallback, ongotpointercaptureAttributeSetCallback},
{defined_properties::koninput.Impl(), oninputAttributeGetCallback, oninputAttributeSetCallback},
{defined_properties::koninvalid.Impl(), oninvalidAttributeGetCallback, oninvalidAttributeSetCallback},
{defined_properties::konkeydown.Impl(), onkeydownAttributeGetCallback, onkeydownAttributeSetCallback},
{defined_properties::konkeypress.Impl(), onkeypressAttributeGetCallback, onkeypressAttributeSetCallback},
{defined_properties::konkeyup.Impl(), onkeyupAttributeGetCallback, onkeyupAttributeSetCallback},
{defined_properties::konload.Impl(), onloadAttributeGetCallback, onloadAttributeSetCallback},
{defined_properties::konloadeddata.Impl(), onloadeddataAttributeGetCallback, onloadeddataAttributeSetCallback},
{defined_properties::konloadedmetadata.Impl(), onloadedmetadataAttributeGetCallback, onloadedmetadataAttributeSetCallback},
{defined_properties::konloadstart.Impl(), onloadstartAttributeGetCallback, onloadstartAttributeSetCallback},
{defined_properties::konlostpointercapture.Impl(), onlostpointercaptureAttributeGetCallback, onlostpointercaptureAttributeSetCallback},
{defined_properties::konmousedown.Impl(), onmousedownAttributeGetCallback, onmousedownAttributeSetCallback},
{defined_properties::konmouseenter.Impl(), onmouseenterAttributeGetCallback, onmouseenterAttributeSetCallback},
{defined_properties::konmouseleave.Impl(), onmouseleaveAttributeGetCallback, onmouseleaveAttributeSetCallback},
{defined_properties::konmousemove.Impl(), onmousemoveAttributeGetCallback, onmousemoveAttributeSetCallback},
{defined_properties::konmouseout.Impl(), onmouseoutAttributeGetCallback, onmouseoutAttributeSetCallback},
{defined_properties::konmouseover.Impl(), onmouseoverAttributeGetCallback, onmouseoverAttributeSetCallback},
{defined_properties::konmouseup.Impl(), onmouseupAttributeGetCallback, onmouseupAttributeSetCallback},
{defined_properties::konpause.Impl(), onpauseAttributeGetCallback, onpauseAttributeSetCallback},
{defined_properties::konplay.Impl(), onplayAttributeGetCallback, onplayAttributeSetCallback},
{defined_properties::konplaying.Impl(), onplayingAttributeGetCallback, onplayingAttributeSetCallback},
{defined_properties::konpointercancel.Impl(), onpointercancelAttributeGetCallback, onpointercancelAttributeSetCallback},
{defined_properties::konpointerdown.Impl(), onpointerdownAttributeGetCallback, onpointerdownAttributeSetCallback},
{defined_properties::konpointerenter.Impl(), onpointerenterAttributeGetCallback, onpointerenterAttributeSetCallback},
{defined_properties::konpointerleave.Impl(), onpointerleaveAttributeGetCallback, onpointerleaveAttributeSetCallback},
{defined_properties::konpointermove.Impl(), onpointermoveAttributeGetCallback, onpointermoveAttributeSetCallback},
{defined_properties::konpointerout.Impl(), onpointeroutAttributeGetCallback, onpointeroutAttributeSetCallback},
{defined_properties::konpointerover.Impl(), onpointeroverAttributeGetCallback, onpointeroverAttributeSetCallback},
{defined_properties::konpointerup.Impl(), onpointerupAttributeGetCallback, onpointerupAttributeSetCallback},
{defined_properties::konratechange.Impl(), onratechangeAttributeGetCallback, onratechangeAttributeSetCallback},
{defined_properties::konreset.Impl(), onresetAttributeGetCallback, onresetAttributeSetCallback},
{defined_properties::konresize.Impl(), onresizeAttributeGetCallback, onresizeAttributeSetCallback},
{defined_properties::konscroll.Impl(), onscrollAttributeGetCallback, onscrollAttributeSetCallback},
{defined_properties::konseeked.Impl(), onseekedAttributeGetCallback, onseekedAttributeSetCallback},
{defined_properties::konseeking.Impl(), onseekingAttributeGetCallback, onseekingAttributeSetCallback},
{defined_properties::konselect.Impl(), onselectAttributeGetCallback, onselectAttributeSetCallback},
{defined_properties::konselectionchange.Impl(), onselectionchangeAttributeGetCallback, onselectionchangeAttributeSetCallback},
{defined_properties::konselectstart.Impl(), onselectstartAttributeGetCallback, onselectstartAttributeSetCallback},
{defined_properties::konstalled.Impl(), onstalledAttributeGetCallback, onstalledAttributeSetCallback},
{defined_properties::konsubmit.Impl(), onsubmitAttributeGetCallback, onsubmitAttributeSetCallback},
{defined_properties::konsuspend.Impl(), onsuspendAttributeGetCallback, onsuspendAttributeSetCallback},
{defined_properties::kontoggle.Impl(), ontoggleAttributeGetCallback, ontoggleAttributeSetCallback},
{defined_properties::kontouchcancel.Impl(), ontouchcancelAttributeGetCallback, ontouchcancelAttributeSetCallback},
{defined_properties::kontouchend.Impl(), ontouchendAttributeGetCallback, ontouchendAttributeSetCallback},
{defined_properties::kontouchmove.Impl(), ontouchmoveAttributeGetCallback, ontouchmoveAttributeSetCallback},
{defined_properties::kontouchstart.Impl(), ontouchstartAttributeGetCallback, ontouchstartAttributeSetCallback},
{defined_properties::kontransitioncancel.Impl(), ontransitioncancelAttributeGetCallback, ontransitioncancelAttributeSetCallback},
{defined_properties::kontransitionend.Impl(), ontransitionendAttributeGetCallback, ontransitionendAttributeSetCallback},
{defined_properties::kontransitionrun.Impl(), ontransitionrunAttributeGetCallback, ontransitionrunAttributeSetCallback},
{defined_properties::kontransitionstart.Impl(), ontransitionstartAttributeGetCallback, ontransitionstartAttributeSetCallback},
{defined_properties::konwaiting.Impl(), onwaitingAttributeGetCallback, onwaitingAttributeSetCallback},
{defined_properties::konwheel.Impl(), onwheelAttributeGetCallback, onwheelAttributeSetCallback}
  };
  MemberInstaller::InstallAttributes(context, prototype, attributesConfig);
}
void QJSHTMLElement::InstallConstructor(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue constructor = context->contextData()->constructorForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::AttributeConfig> attributeConfig {
    {defined_properties::kHTMLElement.Impl(), nullptr, nullptr, constructor}
  };
  MemberInstaller::InstallAttributes(context, context->Global(), attributeConfig);
}
}