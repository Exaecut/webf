/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#include "qjs_window.h"
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
const WrapperTypeInfo QJSWindow::wrapper_type_info_ {JS_CLASS_WINDOW, "Window", EventTarget::GetStaticWrapperTypeInfo(), QJSWindow::ConstructorCallback};
const WrapperTypeInfo& Window::wrapper_type_info_ = QJSWindow::wrapper_type_info_;
JSValue QJSWindow::ConstructorCallback(JSContext* ctx, JSValue func_obj, JSValue this_val, int argc, JSValue* argv, int flags) {
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Window::constructor");
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
  static JSValue btoa(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 1) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'btoa' : 1 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Window::btoa");
  MemberMutationScope scope{context};
  Converter<IDLDOMString>::ImplType return_value;
  do {  // Dummy loop for use of 'break'.
    auto&& args_string = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      auto* self = toScriptWrappable<Window>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->btoa(args_string,exception_state);
      break;
    }
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<IDLDOMString>::ToValue(ctx, std::move(return_value));
  }
  static JSValue atob(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 1) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'atob' : 1 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Window::atob");
  MemberMutationScope scope{context};
  Converter<IDLDOMString>::ImplType return_value;
  do {  // Dummy loop for use of 'break'.
    auto&& args_string = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      auto* self = toScriptWrappable<Window>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->atob(args_string,exception_state);
      break;
    }
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<IDLDOMString>::ToValue(ctx, std::move(return_value));
  }
  static JSValue open(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 0) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'open' : 0 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Window::open");
  MemberMutationScope scope{context};
  Window* return_value = nullptr;
  do {  // Dummy loop for use of 'break'.
    if (argc <= 0) {
      auto* self = toScriptWrappable<Window>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->open(exception_state);
      break;
    }
    auto&& args_url = Converter<IDLOptional<IDLDOMString>>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      auto* self = toScriptWrappable<Window>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->open(args_url,exception_state);
      break;
    }
    auto* self = toScriptWrappable<Window>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->open(args_url,exception_state);
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<IDLNullable<Window>>::ToValue(ctx, std::move(return_value));
  }
static JSValue scroll_overload_0(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
          if (argc < 2) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'scroll' : 2 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Window::scroll");
  MemberMutationScope scope{context};
  do {  // Dummy loop for use of 'break'.
    auto&& args_x = Converter<IDLDouble>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_y = Converter<IDLDouble>::FromValue(ctx, argv[1], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 2) {
      auto* self = toScriptWrappable<Window>(JS_IsUndefined(this_val) ? context->Global() : this_val);
     self->scroll(args_x,args_y,exception_state);
      break;
    }
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return JS_NULL;
      }
static JSValue scroll_overload_1(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
          if (argc < 0) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'scroll' : 0 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Window::scroll");
  MemberMutationScope scope{context};
  do {  // Dummy loop for use of 'break'.
    if (argc <= 0) {
      auto* self = toScriptWrappable<Window>(JS_IsUndefined(this_val) ? context->Global() : this_val);
     self->scroll(exception_state);
      break;
    }
    auto&& args_options = Converter<IDLOptional<ScrollToOptions>>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      auto* self = toScriptWrappable<Window>(JS_IsUndefined(this_val) ? context->Global() : this_val);
     self->scroll(args_options,exception_state);
      break;
    }
    auto* self = toScriptWrappable<Window>(JS_IsUndefined(this_val) ? context->Global() : this_val);
     self->scroll(args_options,exception_state);
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return JS_NULL;
      }
    static JSValue scroll(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
if (2 == argc) {
  return scroll_overload_0(ctx, this_val, argc, argv);
}
if (1 == argc) {
  return scroll_overload_1(ctx, this_val, argc, argv);
}
return scroll_overload_0(ctx, this_val, argc, argv);
    }
static JSValue scrollTo_overload_0(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
          if (argc < 0) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'scrollTo' : 0 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Window::scrollTo");
  MemberMutationScope scope{context};
  do {  // Dummy loop for use of 'break'.
    if (argc <= 0) {
      auto* self = toScriptWrappable<Window>(JS_IsUndefined(this_val) ? context->Global() : this_val);
     self->scrollTo(exception_state);
      break;
    }
    auto&& args_options = Converter<IDLOptional<ScrollToOptions>>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      auto* self = toScriptWrappable<Window>(JS_IsUndefined(this_val) ? context->Global() : this_val);
     self->scrollTo(args_options,exception_state);
      break;
    }
    auto* self = toScriptWrappable<Window>(JS_IsUndefined(this_val) ? context->Global() : this_val);
     self->scrollTo(args_options,exception_state);
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return JS_NULL;
      }
static JSValue scrollTo_overload_1(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
          if (argc < 2) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'scrollTo' : 2 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Window::scrollTo");
  MemberMutationScope scope{context};
  do {  // Dummy loop for use of 'break'.
    auto&& args_x = Converter<IDLDouble>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_y = Converter<IDLDouble>::FromValue(ctx, argv[1], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 2) {
      auto* self = toScriptWrappable<Window>(JS_IsUndefined(this_val) ? context->Global() : this_val);
     self->scrollTo(args_x,args_y,exception_state);
      break;
    }
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return JS_NULL;
      }
    static JSValue scrollTo(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
if (1 == argc) {
  return scrollTo_overload_0(ctx, this_val, argc, argv);
}
if (2 == argc) {
  return scrollTo_overload_1(ctx, this_val, argc, argv);
}
return scrollTo_overload_0(ctx, this_val, argc, argv);
    }
static JSValue scrollBy_overload_0(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
          if (argc < 0) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'scrollBy' : 0 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Window::scrollBy");
  MemberMutationScope scope{context};
  do {  // Dummy loop for use of 'break'.
    if (argc <= 0) {
      auto* self = toScriptWrappable<Window>(JS_IsUndefined(this_val) ? context->Global() : this_val);
     self->scrollBy(exception_state);
      break;
    }
    auto&& args_options = Converter<IDLOptional<ScrollToOptions>>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      auto* self = toScriptWrappable<Window>(JS_IsUndefined(this_val) ? context->Global() : this_val);
     self->scrollBy(args_options,exception_state);
      break;
    }
    auto* self = toScriptWrappable<Window>(JS_IsUndefined(this_val) ? context->Global() : this_val);
     self->scrollBy(args_options,exception_state);
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return JS_NULL;
      }
static JSValue scrollBy_overload_1(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
          if (argc < 2) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'scrollBy' : 2 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Window::scrollBy");
  MemberMutationScope scope{context};
  do {  // Dummy loop for use of 'break'.
    auto&& args_x = Converter<IDLDouble>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_y = Converter<IDLDouble>::FromValue(ctx, argv[1], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 2) {
      auto* self = toScriptWrappable<Window>(JS_IsUndefined(this_val) ? context->Global() : this_val);
     self->scrollBy(args_x,args_y,exception_state);
      break;
    }
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return JS_NULL;
      }
    static JSValue scrollBy(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
if (1 == argc) {
  return scrollBy_overload_0(ctx, this_val, argc, argv);
}
if (2 == argc) {
  return scrollBy_overload_1(ctx, this_val, argc, argv);
}
return scrollBy_overload_0(ctx, this_val, argc, argv);
    }
static JSValue postMessage_overload_0(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
          if (argc < 2) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'postMessage' : 2 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Window::postMessage");
  MemberMutationScope scope{context};
  do {  // Dummy loop for use of 'break'.
    auto&& args_message = Converter<IDLAny>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_targetOrigin = Converter<IDLDOMString>::FromValue(ctx, argv[1], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 2) {
      auto* self = toScriptWrappable<Window>(JS_IsUndefined(this_val) ? context->Global() : this_val);
     self->postMessage(args_message,args_targetOrigin,exception_state);
      break;
    }
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return JS_NULL;
      }
static JSValue postMessage_overload_1(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
          if (argc < 1) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'postMessage' : 1 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Window::postMessage");
  MemberMutationScope scope{context};
  do {  // Dummy loop for use of 'break'.
    auto&& args_message = Converter<IDLAny>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      auto* self = toScriptWrappable<Window>(JS_IsUndefined(this_val) ? context->Global() : this_val);
     self->postMessage(args_message,exception_state);
      break;
    }
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return JS_NULL;
      }
    static JSValue postMessage(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
if (2 == argc) {
  return postMessage_overload_0(ctx, this_val, argc, argv);
}
if (1 == argc) {
  return postMessage_overload_1(ctx, this_val, argc, argv);
}
return postMessage_overload_0(ctx, this_val, argc, argv);
    }
  static JSValue requestAnimationFrame(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 1) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'requestAnimationFrame' : 1 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Window::requestAnimationFrame");
  MemberMutationScope scope{context};
  Converter<IDLDouble>::ImplType return_value;
  do {  // Dummy loop for use of 'break'.
    auto&& args_callback = Converter<IDLCallback>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      auto* self = toScriptWrappable<Window>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->requestAnimationFrame(args_callback,exception_state);
      break;
    }
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<IDLDouble>::ToValue(ctx, std::move(return_value));
  }
  static JSValue cancelAnimationFrame(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 1) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'cancelAnimationFrame' : 1 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Window::cancelAnimationFrame");
  MemberMutationScope scope{context};
  do {  // Dummy loop for use of 'break'.
    auto&& args_request_id = Converter<IDLDouble>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      auto* self = toScriptWrappable<Window>(JS_IsUndefined(this_val) ? context->Global() : this_val);
     self->cancelAnimationFrame(args_request_id,exception_state);
      break;
    }
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return JS_NULL;
  }
  static JSValue getComputedStyle(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 1) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'getComputedStyle' : 1 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Window::getComputedStyle");
  MemberMutationScope scope{context};
  ComputedCssStyleDeclaration* return_value = nullptr;
  do {  // Dummy loop for use of 'break'.
    auto&& args_element = Converter<Element>::ArgumentsValue(context, argv[0], 0, exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      auto* self = toScriptWrappable<Window>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->getComputedStyle(args_element,exception_state);
      break;
    }
    auto&& args_pseudoElt = Converter<IDLOptional<IDLDOMString>>::FromValue(ctx, argv[1], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 2) {
      auto* self = toScriptWrappable<Window>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->getComputedStyle(args_element,args_pseudoElt,exception_state);
      break;
    }
    auto* self = toScriptWrappable<Window>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->getComputedStyle(args_element,args_pseudoElt,exception_state);
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<ComputedCssStyleDeclaration>::ToValue(ctx, std::move(return_value));
  }
static JSValue windowAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Window::window");
  auto result = Converter<Window>::ToValue(ctx, qjs_window->window());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue parentAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Window::parent");
  auto result = Converter<Window>::ToValue(ctx, qjs_window->parent());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue selfAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Window::self");
  auto result = Converter<Window>::ToValue(ctx, qjs_window->self());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue screenAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Window::screen");
  auto result = Converter<Screen>::ToValue(ctx, qjs_window->screen());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue scrollXAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Window::scrollX");
  ExceptionState exception_state;
  typename NativeTypeDouble::ImplType v = NativeValueConverter<NativeTypeDouble>::FromNativeValue(qjs_window->GetBindingProperty(binding_call_methods::kscrollX, FlushUICommandReason::kDependentsOnElement  | FlushUICommandReason::kDependentsOnLayout, exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLDouble>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue scrollYAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Window::scrollY");
  ExceptionState exception_state;
  typename NativeTypeDouble::ImplType v = NativeValueConverter<NativeTypeDouble>::FromNativeValue(qjs_window->GetBindingProperty(binding_call_methods::kscrollY, FlushUICommandReason::kDependentsOnElement  | FlushUICommandReason::kDependentsOnLayout, exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLDouble>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue pageXOffsetAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Window::pageXOffset");
  ExceptionState exception_state;
  typename NativeTypeDouble::ImplType v = NativeValueConverter<NativeTypeDouble>::FromNativeValue(qjs_window->GetBindingProperty(binding_call_methods::kpageXOffset, FlushUICommandReason::kDependentsOnElement  | FlushUICommandReason::kDependentsOnLayout, exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLDouble>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue pageYOffsetAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Window::pageYOffset");
  ExceptionState exception_state;
  typename NativeTypeDouble::ImplType v = NativeValueConverter<NativeTypeDouble>::FromNativeValue(qjs_window->GetBindingProperty(binding_call_methods::kpageYOffset, FlushUICommandReason::kDependentsOnElement  | FlushUICommandReason::kDependentsOnLayout, exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLDouble>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue devicePixelRatioAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Window::devicePixelRatio");
  ExceptionState exception_state;
  typename NativeTypeDouble::ImplType v = NativeValueConverter<NativeTypeDouble>::FromNativeValue(qjs_window->GetBindingProperty(binding_call_methods::kdevicePixelRatio, FlushUICommandReason::kDependentsOnElement  , exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLDouble>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue colorSchemeAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Window::colorScheme");
  ExceptionState exception_state;
  typename NativeTypeString::ImplType v = NativeValueConverter<NativeTypeString>::FromNativeValue(ctx, qjs_window->GetBindingProperty(binding_call_methods::kcolorScheme, FlushUICommandReason::kDependentsOnElement  , exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLDOMString>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue innerWidthAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Window::innerWidth");
  ExceptionState exception_state;
  typename NativeTypeDouble::ImplType v = NativeValueConverter<NativeTypeDouble>::FromNativeValue(qjs_window->GetBindingProperty(binding_call_methods::kinnerWidth, FlushUICommandReason::kDependentsOnElement  , exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLDouble>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue innerHeightAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Window::innerHeight");
  ExceptionState exception_state;
  typename NativeTypeDouble::ImplType v = NativeValueConverter<NativeTypeDouble>::FromNativeValue(qjs_window->GetBindingProperty(binding_call_methods::kinnerHeight, FlushUICommandReason::kDependentsOnElement  , exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLDouble>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue onbeforeunloadAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, WindowEventHandlers::onbeforeunload(*qjs_window));
}
static JSValue onbeforeunloadAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  WindowEventHandlers::setOnbeforeunload(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onhashchangeAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, WindowEventHandlers::onhashchange(*qjs_window));
}
static JSValue onhashchangeAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  WindowEventHandlers::setOnhashchange(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onmessageAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, WindowEventHandlers::onmessage(*qjs_window));
}
static JSValue onmessageAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  WindowEventHandlers::setOnmessage(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onmessageerrorAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, WindowEventHandlers::onmessageerror(*qjs_window));
}
static JSValue onmessageerrorAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  WindowEventHandlers::setOnmessageerror(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onpagehideAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, WindowEventHandlers::onpagehide(*qjs_window));
}
static JSValue onpagehideAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  WindowEventHandlers::setOnpagehide(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onpageshowAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, WindowEventHandlers::onpageshow(*qjs_window));
}
static JSValue onpageshowAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  WindowEventHandlers::setOnpageshow(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onpopstateAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, WindowEventHandlers::onpopstate(*qjs_window));
}
static JSValue onpopstateAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  WindowEventHandlers::setOnpopstate(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onrejectionhandledAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, WindowEventHandlers::onrejectionhandled(*qjs_window));
}
static JSValue onrejectionhandledAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  WindowEventHandlers::setOnrejectionhandled(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onunhandledrejectionAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, WindowEventHandlers::onunhandledrejection(*qjs_window));
}
static JSValue onunhandledrejectionAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  WindowEventHandlers::setOnunhandledrejection(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onunloadAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, WindowEventHandlers::onunload(*qjs_window));
}
static JSValue onunloadAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  WindowEventHandlers::setOnunload(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onabortAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onabort(*qjs_window));
}
static JSValue onabortAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnabort(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onanimationcancelAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onanimationcancel(*qjs_window));
}
static JSValue onanimationcancelAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnanimationcancel(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onanimationendAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onanimationend(*qjs_window));
}
static JSValue onanimationendAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnanimationend(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onanimationiterationAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onanimationiteration(*qjs_window));
}
static JSValue onanimationiterationAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnanimationiteration(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onanimationstartAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onanimationstart(*qjs_window));
}
static JSValue onanimationstartAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnanimationstart(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onblurAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onblur(*qjs_window));
}
static JSValue onblurAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnblur(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue oncancelAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::oncancel(*qjs_window));
}
static JSValue oncancelAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOncancel(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue oncanplayAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::oncanplay(*qjs_window));
}
static JSValue oncanplayAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOncanplay(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue oncanplaythroughAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::oncanplaythrough(*qjs_window));
}
static JSValue oncanplaythroughAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOncanplaythrough(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onchangeAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onchange(*qjs_window));
}
static JSValue onchangeAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnchange(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onclickAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onclick(*qjs_window));
}
static JSValue onclickAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnclick(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue oncloseAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onclose(*qjs_window));
}
static JSValue oncloseAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnclose(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue ondblclickAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::ondblclick(*qjs_window));
}
static JSValue ondblclickAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOndblclick(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onendedAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onended(*qjs_window));
}
static JSValue onendedAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnended(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onerrorAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onerror(*qjs_window));
}
static JSValue onerrorAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnerror(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onfocusAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onfocus(*qjs_window));
}
static JSValue onfocusAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnfocus(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue ongotpointercaptureAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::ongotpointercapture(*qjs_window));
}
static JSValue ongotpointercaptureAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOngotpointercapture(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue oninputAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::oninput(*qjs_window));
}
static JSValue oninputAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOninput(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue oninvalidAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::oninvalid(*qjs_window));
}
static JSValue oninvalidAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOninvalid(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onkeydownAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onkeydown(*qjs_window));
}
static JSValue onkeydownAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnkeydown(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onkeypressAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onkeypress(*qjs_window));
}
static JSValue onkeypressAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnkeypress(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onkeyupAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onkeyup(*qjs_window));
}
static JSValue onkeyupAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnkeyup(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onloadAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onload(*qjs_window));
}
static JSValue onloadAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnload(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onloadeddataAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onloadeddata(*qjs_window));
}
static JSValue onloadeddataAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnloadeddata(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onloadedmetadataAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onloadedmetadata(*qjs_window));
}
static JSValue onloadedmetadataAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnloadedmetadata(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onloadstartAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onloadstart(*qjs_window));
}
static JSValue onloadstartAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnloadstart(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onlostpointercaptureAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onlostpointercapture(*qjs_window));
}
static JSValue onlostpointercaptureAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnlostpointercapture(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onmousedownAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onmousedown(*qjs_window));
}
static JSValue onmousedownAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnmousedown(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onmouseenterAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onmouseenter(*qjs_window));
}
static JSValue onmouseenterAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnmouseenter(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onmouseleaveAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onmouseleave(*qjs_window));
}
static JSValue onmouseleaveAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnmouseleave(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onmousemoveAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onmousemove(*qjs_window));
}
static JSValue onmousemoveAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnmousemove(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onmouseoutAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onmouseout(*qjs_window));
}
static JSValue onmouseoutAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnmouseout(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onmouseoverAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onmouseover(*qjs_window));
}
static JSValue onmouseoverAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnmouseover(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onmouseupAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onmouseup(*qjs_window));
}
static JSValue onmouseupAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnmouseup(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onpauseAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onpause(*qjs_window));
}
static JSValue onpauseAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnpause(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onplayAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onplay(*qjs_window));
}
static JSValue onplayAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnplay(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onplayingAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onplaying(*qjs_window));
}
static JSValue onplayingAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnplaying(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onpointercancelAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onpointercancel(*qjs_window));
}
static JSValue onpointercancelAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnpointercancel(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onpointerdownAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onpointerdown(*qjs_window));
}
static JSValue onpointerdownAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnpointerdown(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onpointerenterAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onpointerenter(*qjs_window));
}
static JSValue onpointerenterAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnpointerenter(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onpointerleaveAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onpointerleave(*qjs_window));
}
static JSValue onpointerleaveAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnpointerleave(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onpointermoveAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onpointermove(*qjs_window));
}
static JSValue onpointermoveAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnpointermove(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onpointeroutAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onpointerout(*qjs_window));
}
static JSValue onpointeroutAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnpointerout(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onpointeroverAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onpointerover(*qjs_window));
}
static JSValue onpointeroverAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnpointerover(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onpointerupAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onpointerup(*qjs_window));
}
static JSValue onpointerupAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnpointerup(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onratechangeAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onratechange(*qjs_window));
}
static JSValue onratechangeAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnratechange(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onresetAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onreset(*qjs_window));
}
static JSValue onresetAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnreset(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onresizeAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onresize(*qjs_window));
}
static JSValue onresizeAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnresize(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onscrollAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onscroll(*qjs_window));
}
static JSValue onscrollAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnscroll(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onseekedAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onseeked(*qjs_window));
}
static JSValue onseekedAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnseeked(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onseekingAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onseeking(*qjs_window));
}
static JSValue onseekingAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnseeking(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onselectAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onselect(*qjs_window));
}
static JSValue onselectAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnselect(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onselectionchangeAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onselectionchange(*qjs_window));
}
static JSValue onselectionchangeAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnselectionchange(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onselectstartAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onselectstart(*qjs_window));
}
static JSValue onselectstartAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnselectstart(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onstalledAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onstalled(*qjs_window));
}
static JSValue onstalledAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnstalled(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onsubmitAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onsubmit(*qjs_window));
}
static JSValue onsubmitAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnsubmit(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onsuspendAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onsuspend(*qjs_window));
}
static JSValue onsuspendAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnsuspend(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue ontoggleAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::ontoggle(*qjs_window));
}
static JSValue ontoggleAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOntoggle(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue ontouchcancelAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::ontouchcancel(*qjs_window));
}
static JSValue ontouchcancelAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOntouchcancel(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue ontouchendAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::ontouchend(*qjs_window));
}
static JSValue ontouchendAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOntouchend(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue ontouchmoveAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::ontouchmove(*qjs_window));
}
static JSValue ontouchmoveAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOntouchmove(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue ontouchstartAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::ontouchstart(*qjs_window));
}
static JSValue ontouchstartAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOntouchstart(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue ontransitioncancelAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::ontransitioncancel(*qjs_window));
}
static JSValue ontransitioncancelAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOntransitioncancel(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue ontransitionendAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::ontransitionend(*qjs_window));
}
static JSValue ontransitionendAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOntransitionend(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue ontransitionrunAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::ontransitionrun(*qjs_window));
}
static JSValue ontransitionrunAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOntransitionrun(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue ontransitionstartAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::ontransitionstart(*qjs_window));
}
static JSValue ontransitionstartAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOntransitionstart(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onwaitingAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onwaiting(*qjs_window));
}
static JSValue onwaitingAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnwaiting(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue onwheelAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_window = toScriptWrappable<Window>(this_val);
  assert(qjs_window != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, GlobalEventHandlers::onwheel(*qjs_window));
}
static JSValue onwheelAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_window = toScriptWrappable<Window>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  GlobalEventHandlers::setOnwheel(*qjs_window, v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
void QJSWindow::Install(ExecutingContext* context) {
   InstallPrototypeProperties(context); 
   InstallPrototypeMethods(context); 
   InstallConstructor(context); 
}
void QJSWindow::InstallPrototypeProperties(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue prototype = context->contextData()->prototypeForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::FunctionConfig> functionConfig {
    {"btoa", btoa, 1},
{"atob", atob, 1},
{"open", open, 1},
{"scroll", scroll, 2},
{"scrollTo", scrollTo, 1},
{"scrollBy", scrollBy, 1},
{"postMessage", postMessage, 2},
{"requestAnimationFrame", requestAnimationFrame, 1},
{"cancelAnimationFrame", cancelAnimationFrame, 1},
{"getComputedStyle", getComputedStyle, 2}
  };
  MemberInstaller::InstallFunctions(context, prototype, functionConfig);
}
void QJSWindow::InstallPrototypeMethods(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue prototype = context->contextData()->prototypeForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::AttributeConfig> attributesConfig {
    {defined_properties::kwindow.Impl(), windowAttributeGetCallback, nullptr},
{defined_properties::kparent.Impl(), parentAttributeGetCallback, nullptr},
{defined_properties::kself.Impl(), selfAttributeGetCallback, nullptr},
{defined_properties::kscreen.Impl(), screenAttributeGetCallback, nullptr},
{defined_properties::kscrollX.Impl(), scrollXAttributeGetCallback, nullptr},
{defined_properties::kscrollY.Impl(), scrollYAttributeGetCallback, nullptr},
{defined_properties::kpageXOffset.Impl(), pageXOffsetAttributeGetCallback, nullptr},
{defined_properties::kpageYOffset.Impl(), pageYOffsetAttributeGetCallback, nullptr},
{defined_properties::kdevicePixelRatio.Impl(), devicePixelRatioAttributeGetCallback, nullptr},
{defined_properties::kcolorScheme.Impl(), colorSchemeAttributeGetCallback, nullptr},
{defined_properties::kinnerWidth.Impl(), innerWidthAttributeGetCallback, nullptr},
{defined_properties::kinnerHeight.Impl(), innerHeightAttributeGetCallback, nullptr},
{defined_properties::konbeforeunload.Impl(), onbeforeunloadAttributeGetCallback, onbeforeunloadAttributeSetCallback},
{defined_properties::konhashchange.Impl(), onhashchangeAttributeGetCallback, onhashchangeAttributeSetCallback},
{defined_properties::konmessage.Impl(), onmessageAttributeGetCallback, onmessageAttributeSetCallback},
{defined_properties::konmessageerror.Impl(), onmessageerrorAttributeGetCallback, onmessageerrorAttributeSetCallback},
{defined_properties::konpagehide.Impl(), onpagehideAttributeGetCallback, onpagehideAttributeSetCallback},
{defined_properties::konpageshow.Impl(), onpageshowAttributeGetCallback, onpageshowAttributeSetCallback},
{defined_properties::konpopstate.Impl(), onpopstateAttributeGetCallback, onpopstateAttributeSetCallback},
{defined_properties::konrejectionhandled.Impl(), onrejectionhandledAttributeGetCallback, onrejectionhandledAttributeSetCallback},
{defined_properties::konunhandledrejection.Impl(), onunhandledrejectionAttributeGetCallback, onunhandledrejectionAttributeSetCallback},
{defined_properties::konunload.Impl(), onunloadAttributeGetCallback, onunloadAttributeSetCallback},
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
void QJSWindow::InstallConstructor(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue constructor = context->contextData()->constructorForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::AttributeConfig> attributeConfig {
    {defined_properties::kWindow.Impl(), nullptr, nullptr, constructor}
  };
  MemberInstaller::InstallAttributes(context, context->Global(), attributeConfig);
}
}