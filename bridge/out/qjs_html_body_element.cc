/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#include "qjs_html_body_element.h"
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
const WrapperTypeInfo QJSHTMLBodyElement::wrapper_type_info_ {JS_CLASS_HTML_BODY_ELEMENT, "HTMLBodyElement", HTMLElement::GetStaticWrapperTypeInfo(), QJSHTMLBodyElement::ConstructorCallback};
const WrapperTypeInfo& HTMLBodyElement::wrapper_type_info_ = QJSHTMLBodyElement::wrapper_type_info_;
JSValue QJSHTMLBodyElement::ConstructorCallback(JSContext* ctx, JSValue func_obj, JSValue this_val, int argc, JSValue* argv, int flags) {
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("HTMLBodyElement::constructor");
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
static JSValue onblurAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_body_element = toScriptWrappable<HTMLBodyElement>(this_val);
  assert(qjs_html_body_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("HTMLBodyElement::onblur");
  auto result = Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, qjs_html_body_element->onblur());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue onblurAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_body_element = toScriptWrappable<HTMLBodyElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_html_body_element->setOnblur(v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onerrorAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_body_element = toScriptWrappable<HTMLBodyElement>(this_val);
  assert(qjs_html_body_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("HTMLBodyElement::onerror");
  auto result = Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, qjs_html_body_element->onerror());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue onerrorAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_body_element = toScriptWrappable<HTMLBodyElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_html_body_element->setOnerror(v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onfocusAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_body_element = toScriptWrappable<HTMLBodyElement>(this_val);
  assert(qjs_html_body_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("HTMLBodyElement::onfocus");
  auto result = Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, qjs_html_body_element->onfocus());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue onfocusAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_body_element = toScriptWrappable<HTMLBodyElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_html_body_element->setOnfocus(v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onloadAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_body_element = toScriptWrappable<HTMLBodyElement>(this_val);
  assert(qjs_html_body_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("HTMLBodyElement::onload");
  auto result = Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, qjs_html_body_element->onload());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue onloadAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_body_element = toScriptWrappable<HTMLBodyElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_html_body_element->setOnload(v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onresizeAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_body_element = toScriptWrappable<HTMLBodyElement>(this_val);
  assert(qjs_html_body_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("HTMLBodyElement::onresize");
  auto result = Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, qjs_html_body_element->onresize());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue onresizeAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_body_element = toScriptWrappable<HTMLBodyElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_html_body_element->setOnresize(v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onscrollAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_body_element = toScriptWrappable<HTMLBodyElement>(this_val);
  assert(qjs_html_body_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("HTMLBodyElement::onscroll");
  auto result = Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, qjs_html_body_element->onscroll());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue onscrollAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_body_element = toScriptWrappable<HTMLBodyElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_html_body_element->setOnscroll(v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onbeforeunloadAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_body_element = toScriptWrappable<HTMLBodyElement>(this_val);
  assert(qjs_html_body_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, WindowEventHandlers::onbeforeunload(*qjs_html_body_element));
}
static JSValue onbeforeunloadAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_body_element = toScriptWrappable<HTMLBodyElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  WindowEventHandlers::setOnbeforeunload(*qjs_html_body_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onhashchangeAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_body_element = toScriptWrappable<HTMLBodyElement>(this_val);
  assert(qjs_html_body_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, WindowEventHandlers::onhashchange(*qjs_html_body_element));
}
static JSValue onhashchangeAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_body_element = toScriptWrappable<HTMLBodyElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  WindowEventHandlers::setOnhashchange(*qjs_html_body_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onmessageAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_body_element = toScriptWrappable<HTMLBodyElement>(this_val);
  assert(qjs_html_body_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, WindowEventHandlers::onmessage(*qjs_html_body_element));
}
static JSValue onmessageAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_body_element = toScriptWrappable<HTMLBodyElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  WindowEventHandlers::setOnmessage(*qjs_html_body_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onmessageerrorAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_body_element = toScriptWrappable<HTMLBodyElement>(this_val);
  assert(qjs_html_body_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, WindowEventHandlers::onmessageerror(*qjs_html_body_element));
}
static JSValue onmessageerrorAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_body_element = toScriptWrappable<HTMLBodyElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  WindowEventHandlers::setOnmessageerror(*qjs_html_body_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onpagehideAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_body_element = toScriptWrappable<HTMLBodyElement>(this_val);
  assert(qjs_html_body_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, WindowEventHandlers::onpagehide(*qjs_html_body_element));
}
static JSValue onpagehideAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_body_element = toScriptWrappable<HTMLBodyElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  WindowEventHandlers::setOnpagehide(*qjs_html_body_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onpageshowAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_body_element = toScriptWrappable<HTMLBodyElement>(this_val);
  assert(qjs_html_body_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, WindowEventHandlers::onpageshow(*qjs_html_body_element));
}
static JSValue onpageshowAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_body_element = toScriptWrappable<HTMLBodyElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  WindowEventHandlers::setOnpageshow(*qjs_html_body_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onpopstateAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_body_element = toScriptWrappable<HTMLBodyElement>(this_val);
  assert(qjs_html_body_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, WindowEventHandlers::onpopstate(*qjs_html_body_element));
}
static JSValue onpopstateAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_body_element = toScriptWrappable<HTMLBodyElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  WindowEventHandlers::setOnpopstate(*qjs_html_body_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onrejectionhandledAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_body_element = toScriptWrappable<HTMLBodyElement>(this_val);
  assert(qjs_html_body_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, WindowEventHandlers::onrejectionhandled(*qjs_html_body_element));
}
static JSValue onrejectionhandledAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_body_element = toScriptWrappable<HTMLBodyElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  WindowEventHandlers::setOnrejectionhandled(*qjs_html_body_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onunhandledrejectionAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_body_element = toScriptWrappable<HTMLBodyElement>(this_val);
  assert(qjs_html_body_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, WindowEventHandlers::onunhandledrejection(*qjs_html_body_element));
}
static JSValue onunhandledrejectionAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_body_element = toScriptWrappable<HTMLBodyElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  WindowEventHandlers::setOnunhandledrejection(*qjs_html_body_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onunloadAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_html_body_element = toScriptWrappable<HTMLBodyElement>(this_val);
  assert(qjs_html_body_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, WindowEventHandlers::onunload(*qjs_html_body_element));
}
static JSValue onunloadAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_html_body_element = toScriptWrappable<HTMLBodyElement>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  WindowEventHandlers::setOnunload(*qjs_html_body_element, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
void QJSHTMLBodyElement::Install(ExecutingContext* context) {
   InstallPrototypeMethods(context); 
   InstallConstructor(context); 
}
void QJSHTMLBodyElement::InstallPrototypeMethods(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue prototype = context->contextData()->prototypeForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::AttributeConfig> attributesConfig {
    {defined_properties::konblur.Impl(), onblurAttributeGetCallback, onblurAttributeSetCallback},
{defined_properties::konerror.Impl(), onerrorAttributeGetCallback, onerrorAttributeSetCallback},
{defined_properties::konfocus.Impl(), onfocusAttributeGetCallback, onfocusAttributeSetCallback},
{defined_properties::konload.Impl(), onloadAttributeGetCallback, onloadAttributeSetCallback},
{defined_properties::konresize.Impl(), onresizeAttributeGetCallback, onresizeAttributeSetCallback},
{defined_properties::konscroll.Impl(), onscrollAttributeGetCallback, onscrollAttributeSetCallback},
{defined_properties::konbeforeunload.Impl(), onbeforeunloadAttributeGetCallback, onbeforeunloadAttributeSetCallback},
{defined_properties::konhashchange.Impl(), onhashchangeAttributeGetCallback, onhashchangeAttributeSetCallback},
{defined_properties::konmessage.Impl(), onmessageAttributeGetCallback, onmessageAttributeSetCallback},
{defined_properties::konmessageerror.Impl(), onmessageerrorAttributeGetCallback, onmessageerrorAttributeSetCallback},
{defined_properties::konpagehide.Impl(), onpagehideAttributeGetCallback, onpagehideAttributeSetCallback},
{defined_properties::konpageshow.Impl(), onpageshowAttributeGetCallback, onpageshowAttributeSetCallback},
{defined_properties::konpopstate.Impl(), onpopstateAttributeGetCallback, onpopstateAttributeSetCallback},
{defined_properties::konrejectionhandled.Impl(), onrejectionhandledAttributeGetCallback, onrejectionhandledAttributeSetCallback},
{defined_properties::konunhandledrejection.Impl(), onunhandledrejectionAttributeGetCallback, onunhandledrejectionAttributeSetCallback},
{defined_properties::konunload.Impl(), onunloadAttributeGetCallback, onunloadAttributeSetCallback}
  };
  MemberInstaller::InstallAttributes(context, prototype, attributesConfig);
}
void QJSHTMLBodyElement::InstallConstructor(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue constructor = context->contextData()->constructorForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::AttributeConfig> attributeConfig {
    {defined_properties::kHTMLBodyElement.Impl(), nullptr, nullptr, constructor}
  };
  MemberInstaller::InstallAttributes(context, context->Global(), attributeConfig);
}
}