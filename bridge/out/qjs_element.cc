/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#include "qjs_element.h"
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
const WrapperTypeInfo QJSElement::wrapper_type_info_ {JS_CLASS_ELEMENT, "Element", Node::GetStaticWrapperTypeInfo(), QJSElement::ConstructorCallback};
const WrapperTypeInfo& Element::wrapper_type_info_ = QJSElement::wrapper_type_info_;
JSValue QJSElement::ConstructorCallback(JSContext* ctx, JSValue func_obj, JSValue this_val, int argc, JSValue* argv, int flags) {
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Element::constructor");
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
  static JSValue getAttribute(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 1) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'getAttribute' : 1 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Element::getAttribute");
  MemberMutationScope scope{context};
  Converter<IDLNullable<IDLDOMString>>::ImplType return_value;
  do {  // Dummy loop for use of 'break'.
    auto&& args_qualifiedName = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      auto* self = toScriptWrappable<Element>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->getAttribute(args_qualifiedName,exception_state);
      break;
    }
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<IDLNullable<IDLDOMString>>::ToValue(ctx, std::move(return_value));
  }
  static JSValue setAttribute(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 2) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'setAttribute' : 2 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Element::setAttribute");
  MemberMutationScope scope{context};
  do {  // Dummy loop for use of 'break'.
    auto&& args_qualifiedName = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_value = Converter<IDLDOMString>::FromValue(ctx, argv[1], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 2) {
      auto* self = toScriptWrappable<Element>(JS_IsUndefined(this_val) ? context->Global() : this_val);
     self->setAttribute(args_qualifiedName,args_value,exception_state);
      break;
    }
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return JS_NULL;
  }
  static JSValue removeAttribute(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 1) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'removeAttribute' : 1 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Element::removeAttribute");
  MemberMutationScope scope{context};
  do {  // Dummy loop for use of 'break'.
    auto&& args_qualifiedName = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      auto* self = toScriptWrappable<Element>(JS_IsUndefined(this_val) ? context->Global() : this_val);
     self->removeAttribute(args_qualifiedName,exception_state);
      break;
    }
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return JS_NULL;
  }
  static JSValue hasAttribute(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 1) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'hasAttribute' : 1 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Element::hasAttribute");
  MemberMutationScope scope{context};
  Converter<IDLBoolean>::ImplType return_value;
  do {  // Dummy loop for use of 'break'.
    auto&& args_qualifiedName = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      auto* self = toScriptWrappable<Element>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->hasAttribute(args_qualifiedName,exception_state);
      break;
    }
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<IDLBoolean>::ToValue(ctx, std::move(return_value));
  }
  static JSValue getBoundingClientRect(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Element::getBoundingClientRect");
  MemberMutationScope scope{context};
  BoundingClientRect* return_value = nullptr;
  do {  // Dummy loop for use of 'break'.
    auto* self = toScriptWrappable<Element>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->getBoundingClientRect(exception_state);
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<BoundingClientRect>::ToValue(ctx, std::move(return_value));
  }
  static JSValue getClientRects(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Element::getClientRects");
  MemberMutationScope scope{context};
  Converter<IDLSequence<BoundingClientRect>>::ImplType return_value;
  do {  // Dummy loop for use of 'break'.
    auto* self = toScriptWrappable<Element>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->getClientRects(exception_state);
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<IDLSequence<BoundingClientRect>>::ToValue(ctx, std::move(return_value));
  }
  static JSValue getElementsByClassName(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 1) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'getElementsByClassName' : 1 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Element::getElementsByClassName");
  MemberMutationScope scope{context};
  Converter<IDLSequence<Element>>::ImplType return_value;
  do {  // Dummy loop for use of 'break'.
    auto&& args_className = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      auto* self = toScriptWrappable<Element>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->getElementsByClassName(args_className,exception_state);
      break;
    }
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<IDLSequence<Element>>::ToValue(ctx, std::move(return_value));
  }
  static JSValue getElementsByTagName(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 1) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'getElementsByTagName' : 1 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Element::getElementsByTagName");
  MemberMutationScope scope{context};
  Converter<IDLSequence<Element>>::ImplType return_value;
  do {  // Dummy loop for use of 'break'.
    auto&& args_tagName = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      auto* self = toScriptWrappable<Element>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->getElementsByTagName(args_tagName,exception_state);
      break;
    }
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<IDLSequence<Element>>::ToValue(ctx, std::move(return_value));
  }
  static JSValue querySelector(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 1) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'querySelector' : 1 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Element::querySelector");
  MemberMutationScope scope{context};
  Element* return_value = nullptr;
  do {  // Dummy loop for use of 'break'.
    auto&& args_selectors = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      auto* self = toScriptWrappable<Element>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->querySelector(args_selectors,exception_state);
      break;
    }
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<IDLNullable<Element>>::ToValue(ctx, std::move(return_value));
  }
  static JSValue querySelectorAll(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 1) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'querySelectorAll' : 1 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Element::querySelectorAll");
  MemberMutationScope scope{context};
  Converter<IDLSequence<Element>>::ImplType return_value;
  do {  // Dummy loop for use of 'break'.
    auto&& args_selectors = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      auto* self = toScriptWrappable<Element>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->querySelectorAll(args_selectors,exception_state);
      break;
    }
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<IDLSequence<Element>>::ToValue(ctx, std::move(return_value));
  }
  static JSValue matches(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 1) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'matches' : 1 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Element::matches");
  MemberMutationScope scope{context};
  Converter<IDLBoolean>::ImplType return_value;
  do {  // Dummy loop for use of 'break'.
    auto&& args_selectors = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      auto* self = toScriptWrappable<Element>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->matches(args_selectors,exception_state);
      break;
    }
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<IDLBoolean>::ToValue(ctx, std::move(return_value));
  }
  static JSValue closest(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 1) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'closest' : 1 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Element::closest");
  MemberMutationScope scope{context};
  Element* return_value = nullptr;
  do {  // Dummy loop for use of 'break'.
    auto&& args_selectors = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      auto* self = toScriptWrappable<Element>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->closest(args_selectors,exception_state);
      break;
    }
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<IDLNullable<Element>>::ToValue(ctx, std::move(return_value));
  }
static JSValue scroll_overload_0(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
          if (argc < 0) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'scroll' : 0 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Element::scroll");
  MemberMutationScope scope{context};
  do {  // Dummy loop for use of 'break'.
    if (argc <= 0) {
      auto* self = toScriptWrappable<Element>(JS_IsUndefined(this_val) ? context->Global() : this_val);
     self->scroll(exception_state);
      break;
    }
    auto&& args_options = Converter<IDLOptional<ScrollToOptions>>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      auto* self = toScriptWrappable<Element>(JS_IsUndefined(this_val) ? context->Global() : this_val);
     self->scroll(args_options,exception_state);
      break;
    }
    auto* self = toScriptWrappable<Element>(JS_IsUndefined(this_val) ? context->Global() : this_val);
     self->scroll(args_options,exception_state);
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return JS_NULL;
      }
static JSValue scroll_overload_1(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
          if (argc < 2) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'scroll' : 2 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Element::scroll");
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
      auto* self = toScriptWrappable<Element>(JS_IsUndefined(this_val) ? context->Global() : this_val);
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
    static JSValue scroll(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
if (1 == argc) {
  return scroll_overload_0(ctx, this_val, argc, argv);
}
if (2 == argc) {
  return scroll_overload_1(ctx, this_val, argc, argv);
}
return scroll_overload_0(ctx, this_val, argc, argv);
    }
static JSValue scrollBy_overload_0(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
          if (argc < 0) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'scrollBy' : 0 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Element::scrollBy");
  MemberMutationScope scope{context};
  do {  // Dummy loop for use of 'break'.
    if (argc <= 0) {
      auto* self = toScriptWrappable<Element>(JS_IsUndefined(this_val) ? context->Global() : this_val);
     self->scrollBy(exception_state);
      break;
    }
    auto&& args_options = Converter<IDLOptional<ScrollToOptions>>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      auto* self = toScriptWrappable<Element>(JS_IsUndefined(this_val) ? context->Global() : this_val);
     self->scrollBy(args_options,exception_state);
      break;
    }
    auto* self = toScriptWrappable<Element>(JS_IsUndefined(this_val) ? context->Global() : this_val);
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
  context->dartIsolateContext()->profiler()->StartTrackSteps("Element::scrollBy");
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
      auto* self = toScriptWrappable<Element>(JS_IsUndefined(this_val) ? context->Global() : this_val);
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
static JSValue scrollTo_overload_0(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
          if (argc < 0) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'scrollTo' : 0 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Element::scrollTo");
  MemberMutationScope scope{context};
  do {  // Dummy loop for use of 'break'.
    if (argc <= 0) {
      auto* self = toScriptWrappable<Element>(JS_IsUndefined(this_val) ? context->Global() : this_val);
     self->scrollTo(exception_state);
      break;
    }
    auto&& args_options = Converter<IDLOptional<ScrollToOptions>>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      auto* self = toScriptWrappable<Element>(JS_IsUndefined(this_val) ? context->Global() : this_val);
     self->scrollTo(args_options,exception_state);
      break;
    }
    auto* self = toScriptWrappable<Element>(JS_IsUndefined(this_val) ? context->Global() : this_val);
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
  context->dartIsolateContext()->profiler()->StartTrackSteps("Element::scrollTo");
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
      auto* self = toScriptWrappable<Element>(JS_IsUndefined(this_val) ? context->Global() : this_val);
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
  static JSValue toBlob(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 0) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'toBlob' : 0 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Element::toBlob");
  MemberMutationScope scope{context};
  Converter<IDLPromise>::ImplType return_value;
  do {  // Dummy loop for use of 'break'.
    if (argc <= 0) {
      auto* self = toScriptWrappable<Element>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->toBlob(exception_state);
      break;
    }
    auto&& args_devicePixelRatioValue = Converter<IDLOptional<IDLDouble>>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      auto* self = toScriptWrappable<Element>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->toBlob(args_devicePixelRatioValue,exception_state);
      break;
    }
    auto* self = toScriptWrappable<Element>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->toBlob(args_devicePixelRatioValue,exception_state);
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<IDLPromise>::ToValue(ctx, std::move(return_value));
  }
  static JSValue ___testGlobalToLocal__(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 2) {
    return JS_ThrowTypeError(ctx, "Failed to execute '___testGlobalToLocal__' : 2 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Element::___testGlobalToLocal__");
  MemberMutationScope scope{context};
  Converter<IDLAny>::ImplType return_value;
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
      auto* self = toScriptWrappable<Element>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->___testGlobalToLocal__(args_x,args_y,exception_state);
      break;
    }
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<IDLAny>::ToValue(ctx, std::move(return_value));
  }
  static JSValue prepend(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Element::prepend");
  MemberMutationScope scope{context};
  do {  // Dummy loop for use of 'break'.
    auto&& args_node = Converter<IDLSequence<QJSUnionDomStringNode>>::FromValue(ctx, argv + 0, argc - 0, exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto* self = toScriptWrappable<Element>(JS_IsUndefined(this_val) ? context->Global() : this_val);
     self->prepend(args_node,exception_state);
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return JS_NULL;
  }
  static JSValue append(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Element::append");
  MemberMutationScope scope{context};
  do {  // Dummy loop for use of 'break'.
    auto&& args_node = Converter<IDLSequence<QJSUnionDomStringNode>>::FromValue(ctx, argv + 0, argc - 0, exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto* self = toScriptWrappable<Element>(JS_IsUndefined(this_val) ? context->Global() : this_val);
     self->append(args_node,exception_state);
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return JS_NULL;
  }
  static JSValue before(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Element::before");
  MemberMutationScope scope{context};
  do {  // Dummy loop for use of 'break'.
    auto&& args_node = Converter<IDLSequence<QJSUnionDomStringNode>>::FromValue(ctx, argv + 0, argc - 0, exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto* self = toScriptWrappable<Element>(JS_IsUndefined(this_val) ? context->Global() : this_val);
     self->before(args_node,exception_state);
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return JS_NULL;
  }
  static JSValue after(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Element::after");
  MemberMutationScope scope{context};
  do {  // Dummy loop for use of 'break'.
    auto&& args_node = Converter<IDLSequence<QJSUnionDomStringNode>>::FromValue(ctx, argv + 0, argc - 0, exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto* self = toScriptWrappable<Element>(JS_IsUndefined(this_val) ? context->Global() : this_val);
     self->after(args_node,exception_state);
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return JS_NULL;
  }
static JSValue idAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_element = toScriptWrappable<Element>(this_val);
  assert(qjs_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Element::id");
  auto result = Converter<IDLDOMString>::ToValue(ctx, qjs_element->id());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue idAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_element = toScriptWrappable<Element>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_element->setId(v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue classNameAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_element = toScriptWrappable<Element>(this_val);
  assert(qjs_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Element::className");
  auto result = Converter<IDLDOMString>::ToValue(ctx, qjs_element->className());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue classNameAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_element = toScriptWrappable<Element>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_element->setClassName(v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue classListAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_element = toScriptWrappable<Element>(this_val);
  assert(qjs_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Element::classList");
  auto result = Converter<DOMTokenList>::ToValue(ctx, qjs_element->classList());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue datasetAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_element = toScriptWrappable<Element>(this_val);
  assert(qjs_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Element::dataset");
  auto result = Converter<DOMStringMap>::ToValue(ctx, qjs_element->dataset());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue nameAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_element = toScriptWrappable<Element>(this_val);
  assert(qjs_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Element::name");
  ExceptionState exception_state;
  typename NativeTypeString::ImplType v = NativeValueConverter<NativeTypeString>::FromNativeValue(ctx, qjs_element->GetBindingProperty(binding_call_methods::kname, FlushUICommandReason::kDependentsOnElement  , exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLDOMString>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue nameAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_element = toScriptWrappable<Element>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_element->SetBindingProperty(binding_call_methods::kname, NativeValueConverter<NativeTypeString>::ToNativeValue(ctx, v),exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue attributesAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_element = toScriptWrappable<Element>(this_val);
  assert(qjs_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Element::attributes");
  auto result = Converter<ElementAttributes>::ToValue(ctx, qjs_element->attributes());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue styleAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_element = toScriptWrappable<Element>(this_val);
  assert(qjs_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Element::style");
  auto result = Converter<CSSStyleDeclaration>::ToValue(ctx, qjs_element->style());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue clientHeightAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_element = toScriptWrappable<Element>(this_val);
  assert(qjs_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Element::clientHeight");
  ExceptionState exception_state;
  typename NativeTypeDouble::ImplType v = NativeValueConverter<NativeTypeDouble>::FromNativeValue(qjs_element->GetBindingProperty(binding_call_methods::kclientHeight, FlushUICommandReason::kDependentsOnElement  | FlushUICommandReason::kDependentsOnLayout, exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLDouble>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue clientLeftAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_element = toScriptWrappable<Element>(this_val);
  assert(qjs_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Element::clientLeft");
  ExceptionState exception_state;
  typename NativeTypeDouble::ImplType v = NativeValueConverter<NativeTypeDouble>::FromNativeValue(qjs_element->GetBindingProperty(binding_call_methods::kclientLeft, FlushUICommandReason::kDependentsOnElement  | FlushUICommandReason::kDependentsOnLayout, exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLDouble>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue clientTopAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_element = toScriptWrappable<Element>(this_val);
  assert(qjs_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Element::clientTop");
  ExceptionState exception_state;
  typename NativeTypeDouble::ImplType v = NativeValueConverter<NativeTypeDouble>::FromNativeValue(qjs_element->GetBindingProperty(binding_call_methods::kclientTop, FlushUICommandReason::kDependentsOnElement  | FlushUICommandReason::kDependentsOnLayout, exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLDouble>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue clientWidthAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_element = toScriptWrappable<Element>(this_val);
  assert(qjs_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Element::clientWidth");
  ExceptionState exception_state;
  typename NativeTypeDouble::ImplType v = NativeValueConverter<NativeTypeDouble>::FromNativeValue(qjs_element->GetBindingProperty(binding_call_methods::kclientWidth, FlushUICommandReason::kDependentsOnElement  | FlushUICommandReason::kDependentsOnLayout, exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLDouble>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue outerHTMLAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_element = toScriptWrappable<Element>(this_val);
  assert(qjs_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Element::outerHTML");
  auto result = Converter<IDLDOMString>::ToValue(ctx, qjs_element->outerHTML());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue innerHTMLAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_element = toScriptWrappable<Element>(this_val);
  assert(qjs_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Element::innerHTML");
  auto result = Converter<IDLDOMString>::ToValue(ctx, qjs_element->innerHTML());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue innerHTMLAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_element = toScriptWrappable<Element>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_element->setInnerHTML(v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue ownerDocumentAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_element = toScriptWrappable<Element>(this_val);
  assert(qjs_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Element::ownerDocument");
  auto result = Converter<Document>::ToValue(ctx, qjs_element->ownerDocument());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue scrollLeftAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_element = toScriptWrappable<Element>(this_val);
  assert(qjs_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Element::scrollLeft");
  ExceptionState exception_state;
  typename NativeTypeDouble::ImplType v = NativeValueConverter<NativeTypeDouble>::FromNativeValue(qjs_element->GetBindingProperty(binding_call_methods::kscrollLeft, FlushUICommandReason::kDependentsOnElement  | FlushUICommandReason::kDependentsOnLayout, exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLDouble>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue scrollLeftAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_element = toScriptWrappable<Element>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDouble>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_element->SetBindingProperty(binding_call_methods::kscrollLeft, NativeValueConverter<NativeTypeDouble>::ToNativeValue(v),exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue scrollTopAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_element = toScriptWrappable<Element>(this_val);
  assert(qjs_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Element::scrollTop");
  ExceptionState exception_state;
  typename NativeTypeDouble::ImplType v = NativeValueConverter<NativeTypeDouble>::FromNativeValue(qjs_element->GetBindingProperty(binding_call_methods::kscrollTop, FlushUICommandReason::kDependentsOnElement  | FlushUICommandReason::kDependentsOnLayout, exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLDouble>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue scrollTopAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_element = toScriptWrappable<Element>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDouble>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_element->SetBindingProperty(binding_call_methods::kscrollTop, NativeValueConverter<NativeTypeDouble>::ToNativeValue(v),exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue scrollWidthAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_element = toScriptWrappable<Element>(this_val);
  assert(qjs_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Element::scrollWidth");
  ExceptionState exception_state;
  typename NativeTypeDouble::ImplType v = NativeValueConverter<NativeTypeDouble>::FromNativeValue(qjs_element->GetBindingProperty(binding_call_methods::kscrollWidth, FlushUICommandReason::kDependentsOnElement  | FlushUICommandReason::kDependentsOnLayout, exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLDouble>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue scrollHeightAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_element = toScriptWrappable<Element>(this_val);
  assert(qjs_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Element::scrollHeight");
  ExceptionState exception_state;
  typename NativeTypeDouble::ImplType v = NativeValueConverter<NativeTypeDouble>::FromNativeValue(qjs_element->GetBindingProperty(binding_call_methods::kscrollHeight, FlushUICommandReason::kDependentsOnElement  | FlushUICommandReason::kDependentsOnLayout, exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLDouble>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue prefixAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_element = toScriptWrappable<Element>(this_val);
  assert(qjs_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Element::prefix");
  auto result = Converter<IDLNullable<IDLDOMString>>::ToValue(ctx, qjs_element->prefix());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue localNameAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_element = toScriptWrappable<Element>(this_val);
  assert(qjs_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Element::localName");
  auto result = Converter<IDLDOMString>::ToValue(ctx, qjs_element->localName());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue namespaceURIAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_element = toScriptWrappable<Element>(this_val);
  assert(qjs_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Element::namespaceURI");
  auto result = Converter<IDLNullable<IDLDOMString>>::ToValue(ctx, qjs_element->namespaceURI());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue tagNameAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_element = toScriptWrappable<Element>(this_val);
  assert(qjs_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Element::tagName");
  auto result = Converter<IDLDOMString>::ToValue(ctx, qjs_element->tagName());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue dirAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_element = toScriptWrappable<Element>(this_val);
  assert(qjs_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Element::dir");
  ExceptionState exception_state;
  typename NativeTypeString::ImplType v = NativeValueConverter<NativeTypeString>::FromNativeValue(ctx, qjs_element->GetBindingProperty(binding_call_methods::kdir, FlushUICommandReason::kDependentsOnElement  , exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLDOMString>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue dirAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_element = toScriptWrappable<Element>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_element->SetBindingProperty(binding_call_methods::kdir, NativeValueConverter<NativeTypeString>::ToNativeValue(ctx, v),exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue firstElementChildAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_element = toScriptWrappable<Element>(this_val);
  assert(qjs_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<Element>>::ToValue(ctx, ParentNode::firstElementChild(*qjs_element));
}
static JSValue lastElementChildAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_element = toScriptWrappable<Element>(this_val);
  assert(qjs_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<Element>>::ToValue(ctx, ParentNode::lastElementChild(*qjs_element));
}
static JSValue childrenAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_element = toScriptWrappable<Element>(this_val);
  assert(qjs_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<HTMLCollection>::ToValue(ctx, ParentNode::children(*qjs_element));
}
static JSValue childElementCountAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_element = toScriptWrappable<Element>(this_val);
  assert(qjs_element != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLInt64>::ToValue(ctx, ParentNode::childElementCount(*qjs_element));
}
void QJSElement::Install(ExecutingContext* context) {
   InstallPrototypeProperties(context); 
   InstallPrototypeMethods(context); 
   InstallConstructor(context); 
}
void QJSElement::InstallPrototypeProperties(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue prototype = context->contextData()->prototypeForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::FunctionConfig> functionConfig {
    {"getAttribute", getAttribute, 1},
{"setAttribute", setAttribute, 2},
{"removeAttribute", removeAttribute, 1},
{"hasAttribute", hasAttribute, 1},
{"getBoundingClientRect", getBoundingClientRect, 0},
{"getClientRects", getClientRects, 0},
{"getElementsByClassName", getElementsByClassName, 1},
{"getElementsByTagName", getElementsByTagName, 1},
{"querySelector", querySelector, 1},
{"querySelectorAll", querySelectorAll, 1},
{"matches", matches, 1},
{"closest", closest, 1},
{"scroll", scroll, 1},
{"scrollBy", scrollBy, 1},
{"scrollTo", scrollTo, 1},
{"toBlob", toBlob, 1},
{"___testGlobalToLocal__", ___testGlobalToLocal__, 2},
{"prepend", prepend, 1},
{"append", append, 1},
{"before", before, 1},
{"after", after, 1}
  };
  MemberInstaller::InstallFunctions(context, prototype, functionConfig);
}
void QJSElement::InstallPrototypeMethods(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue prototype = context->contextData()->prototypeForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::AttributeConfig> attributesConfig {
    {defined_properties::kid.Impl(), idAttributeGetCallback, idAttributeSetCallback},
{defined_properties::kclassName.Impl(), classNameAttributeGetCallback, classNameAttributeSetCallback},
{defined_properties::kclassList.Impl(), classListAttributeGetCallback, nullptr},
{defined_properties::kdataset.Impl(), datasetAttributeGetCallback, nullptr},
{defined_properties::kname.Impl(), nameAttributeGetCallback, nameAttributeSetCallback},
{defined_properties::kattributes.Impl(), attributesAttributeGetCallback, nullptr},
{defined_properties::kstyle.Impl(), styleAttributeGetCallback, nullptr},
{defined_properties::kclientHeight.Impl(), clientHeightAttributeGetCallback, nullptr},
{defined_properties::kclientLeft.Impl(), clientLeftAttributeGetCallback, nullptr},
{defined_properties::kclientTop.Impl(), clientTopAttributeGetCallback, nullptr},
{defined_properties::kclientWidth.Impl(), clientWidthAttributeGetCallback, nullptr},
{defined_properties::kouterHTML.Impl(), outerHTMLAttributeGetCallback, nullptr},
{defined_properties::kinnerHTML.Impl(), innerHTMLAttributeGetCallback, innerHTMLAttributeSetCallback},
{defined_properties::kownerDocument.Impl(), ownerDocumentAttributeGetCallback, nullptr},
{defined_properties::kscrollLeft.Impl(), scrollLeftAttributeGetCallback, scrollLeftAttributeSetCallback},
{defined_properties::kscrollTop.Impl(), scrollTopAttributeGetCallback, scrollTopAttributeSetCallback},
{defined_properties::kscrollWidth.Impl(), scrollWidthAttributeGetCallback, nullptr},
{defined_properties::kscrollHeight.Impl(), scrollHeightAttributeGetCallback, nullptr},
{defined_properties::kprefix.Impl(), prefixAttributeGetCallback, nullptr},
{defined_properties::klocalName.Impl(), localNameAttributeGetCallback, nullptr},
{defined_properties::knamespaceURI.Impl(), namespaceURIAttributeGetCallback, nullptr},
{defined_properties::ktagName.Impl(), tagNameAttributeGetCallback, nullptr},
{defined_properties::kdir.Impl(), dirAttributeGetCallback, dirAttributeSetCallback},
{defined_properties::kfirstElementChild.Impl(), firstElementChildAttributeGetCallback, nullptr},
{defined_properties::klastElementChild.Impl(), lastElementChildAttributeGetCallback, nullptr},
{defined_properties::kchildren.Impl(), childrenAttributeGetCallback, nullptr},
{defined_properties::kchildElementCount.Impl(), childElementCountAttributeGetCallback, nullptr}
  };
  MemberInstaller::InstallAttributes(context, prototype, attributesConfig);
}
void QJSElement::InstallConstructor(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue constructor = context->contextData()->constructorForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::AttributeConfig> attributeConfig {
    {defined_properties::kElement.Impl(), nullptr, nullptr, constructor}
  };
  MemberInstaller::InstallAttributes(context, context->Global(), attributeConfig);
}
}