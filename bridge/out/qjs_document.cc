/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#include "qjs_document.h"
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
const WrapperTypeInfo QJSDocument::wrapper_type_info_ {JS_CLASS_DOCUMENT, "Document", Node::GetStaticWrapperTypeInfo(), QJSDocument::ConstructorCallback};
const WrapperTypeInfo& Document::wrapper_type_info_ = QJSDocument::wrapper_type_info_;
JSValue QJSDocument::ConstructorCallback(JSContext* ctx, JSValue func_obj, JSValue this_val, int argc, JSValue* argv, int flags) {
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Document::constructor");
  MemberMutationScope scope{context};
  Document* return_value = nullptr;
  do {  // Dummy loop for use of 'break'.
    return_value = Document::Create(context, exception_state);
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
  static JSValue ___clear_cookies__(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Document::___clear_cookies__");
  MemberMutationScope scope{context};
  do {  // Dummy loop for use of 'break'.
    auto* self = toScriptWrappable<Document>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    NativeValue* arguments = nullptr;;
    self->InvokeBindingMethod(binding_call_methods::k___clear_cookies__, 0, arguments, FlushUICommandReason::kDependentsOnElement, exception_state);
    ;
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return JS_NULL;
  }
  static JSValue createElement(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 1) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'createElement' : 1 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Document::createElement");
  MemberMutationScope scope{context};
  Element* return_value = nullptr;
  do {  // Dummy loop for use of 'break'.
    auto&& args_tagName = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      auto* self = toScriptWrappable<Document>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->createElement(args_tagName,exception_state);
      break;
    }
    auto&& args_options = Converter<IDLOptional<IDLAny>>::FromValue(ctx, argv[1], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 2) {
      auto* self = toScriptWrappable<Document>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->createElement(args_tagName,args_options,exception_state);
      break;
    }
    auto* self = toScriptWrappable<Document>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->createElement(args_tagName,args_options,exception_state);
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<Element>::ToValue(ctx, std::move(return_value));
  }
  static JSValue createElementNS(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 2) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'createElementNS' : 2 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Document::createElementNS");
  MemberMutationScope scope{context};
  Element* return_value = nullptr;
  do {  // Dummy loop for use of 'break'.
    auto&& args_uri = Converter<IDLNullable<IDLDOMString>>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_tagName = Converter<IDLDOMString>::FromValue(ctx, argv[1], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 2) {
      auto* self = toScriptWrappable<Document>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->createElementNS(args_uri,args_tagName,exception_state);
      break;
    }
    auto&& args_options = Converter<IDLOptional<IDLAny>>::FromValue(ctx, argv[2], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 3) {
      auto* self = toScriptWrappable<Document>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->createElementNS(args_uri,args_tagName,args_options,exception_state);
      break;
    }
    auto* self = toScriptWrappable<Document>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->createElementNS(args_uri,args_tagName,args_options,exception_state);
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<Element>::ToValue(ctx, std::move(return_value));
  }
  static JSValue createTextNode(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 1) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'createTextNode' : 1 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Document::createTextNode");
  MemberMutationScope scope{context};
  Text* return_value = nullptr;
  do {  // Dummy loop for use of 'break'.
    auto&& args_value = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      auto* self = toScriptWrappable<Document>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->createTextNode(args_value,exception_state);
      break;
    }
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<Text>::ToValue(ctx, std::move(return_value));
  }
  static JSValue createDocumentFragment(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Document::createDocumentFragment");
  MemberMutationScope scope{context};
  DocumentFragment* return_value = nullptr;
  do {  // Dummy loop for use of 'break'.
    auto* self = toScriptWrappable<Document>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->createDocumentFragment(exception_state);
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<DocumentFragment>::ToValue(ctx, std::move(return_value));
  }
  static JSValue createComment(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 1) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'createComment' : 1 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Document::createComment");
  MemberMutationScope scope{context};
  Comment* return_value = nullptr;
  do {  // Dummy loop for use of 'break'.
    auto&& args_data = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      auto* self = toScriptWrappable<Document>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->createComment(args_data,exception_state);
      break;
    }
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<Comment>::ToValue(ctx, std::move(return_value));
  }
  static JSValue createEvent(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 1) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'createEvent' : 1 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Document::createEvent");
  MemberMutationScope scope{context};
  Event* return_value = nullptr;
  do {  // Dummy loop for use of 'break'.
    auto&& args_event_type = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      auto* self = toScriptWrappable<Document>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->createEvent(args_event_type,exception_state);
      break;
    }
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<Event>::ToValue(ctx, std::move(return_value));
  }
  static JSValue getElementById(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 1) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'getElementById' : 1 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Document::getElementById");
  MemberMutationScope scope{context};
  Element* return_value = nullptr;
  do {  // Dummy loop for use of 'break'.
    auto&& args_id = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      auto* self = toScriptWrappable<Document>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->getElementById(args_id,exception_state);
      break;
    }
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<IDLNullable<Element>>::ToValue(ctx, std::move(return_value));
  }
  static JSValue getElementsByClassName(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 1) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'getElementsByClassName' : 1 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Document::getElementsByClassName");
  MemberMutationScope scope{context};
  Converter<IDLSequence<Element>>::ImplType return_value;
  do {  // Dummy loop for use of 'break'.
    auto&& args_className = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      auto* self = toScriptWrappable<Document>(JS_IsUndefined(this_val) ? context->Global() : this_val);
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
  context->dartIsolateContext()->profiler()->StartTrackSteps("Document::getElementsByTagName");
  MemberMutationScope scope{context};
  Converter<IDLSequence<Element>>::ImplType return_value;
  do {  // Dummy loop for use of 'break'.
    auto&& args_tagName = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      auto* self = toScriptWrappable<Document>(JS_IsUndefined(this_val) ? context->Global() : this_val);
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
  static JSValue getElementsByName(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 1) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'getElementsByName' : 1 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Document::getElementsByName");
  MemberMutationScope scope{context};
  Converter<IDLSequence<Element>>::ImplType return_value;
  do {  // Dummy loop for use of 'break'.
    auto&& args_name = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      auto* self = toScriptWrappable<Document>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->getElementsByName(args_name,exception_state);
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
  context->dartIsolateContext()->profiler()->StartTrackSteps("Document::querySelector");
  MemberMutationScope scope{context};
  Element* return_value = nullptr;
  do {  // Dummy loop for use of 'break'.
    auto&& args_selectors = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      auto* self = toScriptWrappable<Document>(JS_IsUndefined(this_val) ? context->Global() : this_val);
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
  context->dartIsolateContext()->profiler()->StartTrackSteps("Document::querySelectorAll");
  MemberMutationScope scope{context};
  Converter<IDLSequence<Element>>::ImplType return_value;
  do {  // Dummy loop for use of 'break'.
    auto&& args_selectors = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      auto* self = toScriptWrappable<Document>(JS_IsUndefined(this_val) ? context->Global() : this_val);
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
  static JSValue elementFromPoint(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 2) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'elementFromPoint' : 2 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Document::elementFromPoint");
  MemberMutationScope scope{context};
  Element* return_value = nullptr;
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
      auto* self = toScriptWrappable<Document>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->elementFromPoint(args_x,args_y,exception_state);
      break;
    }
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<IDLNullable<Element>>::ToValue(ctx, std::move(return_value));
  }
  static JSValue prepend(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Document::prepend");
  MemberMutationScope scope{context};
  do {  // Dummy loop for use of 'break'.
    auto&& args_node = Converter<IDLSequence<QJSUnionDomStringNode>>::FromValue(ctx, argv + 0, argc - 0, exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto* self = toScriptWrappable<Document>(JS_IsUndefined(this_val) ? context->Global() : this_val);
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
  context->dartIsolateContext()->profiler()->StartTrackSteps("Document::append");
  MemberMutationScope scope{context};
  do {  // Dummy loop for use of 'break'.
    auto&& args_node = Converter<IDLSequence<QJSUnionDomStringNode>>::FromValue(ctx, argv + 0, argc - 0, exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto* self = toScriptWrappable<Document>(JS_IsUndefined(this_val) ? context->Global() : this_val);
     self->append(args_node,exception_state);
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return JS_NULL;
  }
static JSValue allAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_document = toScriptWrappable<Document>(this_val);
  assert(qjs_document != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Document::all");
  auto result = Converter<HTMLAllCollection>::ToValue(ctx, qjs_document->all());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue titleAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_document = toScriptWrappable<Document>(this_val);
  assert(qjs_document != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Document::title");
  ExceptionState exception_state;
  typename NativeTypeString::ImplType v = NativeValueConverter<NativeTypeString>::FromNativeValue(ctx, qjs_document->GetBindingProperty(binding_call_methods::ktitle, FlushUICommandReason::kDependentsOnElement  , exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLDOMString>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue titleAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_document = toScriptWrappable<Document>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_document->SetBindingProperty(binding_call_methods::ktitle, NativeValueConverter<NativeTypeString>::ToNativeValue(ctx, v),exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue bodyAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_document = toScriptWrappable<Document>(this_val);
  assert(qjs_document != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Document::body");
  auto result = Converter<IDLNullable<HTMLBodyElement>>::ToValue(ctx, qjs_document->body());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue bodyAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_document = toScriptWrappable<Document>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<HTMLBodyElement>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_document->setBody(v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue cookieAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_document = toScriptWrappable<Document>(this_val);
  assert(qjs_document != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Document::cookie");
  ExceptionState exception_state;
  typename NativeTypeString::ImplType v = NativeValueConverter<NativeTypeString>::FromNativeValue(ctx, qjs_document->GetBindingProperty(binding_call_methods::kcookie, FlushUICommandReason::kDependentsOnElement  , exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLDOMString>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue cookieAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_document = toScriptWrappable<Document>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_document->SetBindingProperty(binding_call_methods::kcookie, NativeValueConverter<NativeTypeString>::ToNativeValue(ctx, v),exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue domainAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_document = toScriptWrappable<Document>(this_val);
  assert(qjs_document != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Document::domain");
  auto result = Converter<IDLDOMString>::ToValue(ctx, qjs_document->domain());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue domainAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_document = toScriptWrappable<Document>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLDOMString>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_document->setDomain(v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue headAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_document = toScriptWrappable<Document>(this_val);
  assert(qjs_document != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Document::head");
  auto result = Converter<IDLNullable<HTMLHeadElement>>::ToValue(ctx, qjs_document->head());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue documentElementAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_document = toScriptWrappable<Document>(this_val);
  assert(qjs_document != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Document::documentElement");
  auto result = Converter<IDLNullable<HTMLHtmlElement>>::ToValue(ctx, qjs_document->documentElement());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue locationAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_document = toScriptWrappable<Document>(this_val);
  assert(qjs_document != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Document::location");
  auto result = Converter<IDLAny>::ToValue(ctx, qjs_document->location());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue compatModeAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_document = toScriptWrappable<Document>(this_val);
  assert(qjs_document != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Document::compatMode");
  auto result = Converter<IDLDOMString>::ToValue(ctx, qjs_document->compatMode());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue readyStateAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_document = toScriptWrappable<Document>(this_val);
  assert(qjs_document != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Document::readyState");
  auto result = Converter<IDLDOMString>::ToValue(ctx, qjs_document->readyState());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue visibilityStateAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_document = toScriptWrappable<Document>(this_val);
  assert(qjs_document != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Document::visibilityState");
  ExceptionState exception_state;
  typename NativeTypeString::ImplType v = NativeValueConverter<NativeTypeString>::FromNativeValue(ctx, qjs_document->GetBindingProperty(binding_call_methods::kvisibilityState, FlushUICommandReason::kDependentsOnElement  , exception_state));
  if (UNLIKELY(exception_state.HasException())) {
    context->dartIsolateContext()->profiler()->FinishTrackSteps();
    return exception_state.ToQuickJS();
  }
  auto result = Converter<IDLDOMString>::ToValue(ctx, v);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue hiddenAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_document = toScriptWrappable<Document>(this_val);
  assert(qjs_document != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Document::hidden");
  auto result = Converter<IDLBoolean>::ToValue(ctx, qjs_document->hidden());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue defaultViewAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_document = toScriptWrappable<Document>(this_val);
  assert(qjs_document != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Document::defaultView");
  auto result = Converter<Window>::ToValue(ctx, qjs_document->defaultView());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue onreadystatechangeAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_document = toScriptWrappable<Document>(this_val);
  assert(qjs_document != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Document::onreadystatechange");
  auto result = Converter<IDLNullable<IDLEventHandler>>::ToValue(ctx, qjs_document->onreadystatechange());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue onreadystatechangeAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_document = toScriptWrappable<Document>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLEventHandler>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_document->setOnreadystatechange(v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue firstElementChildAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_document = toScriptWrappable<Document>(this_val);
  assert(qjs_document != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<Element>>::ToValue(ctx, ParentNode::firstElementChild(*qjs_document));
}
static JSValue lastElementChildAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_document = toScriptWrappable<Document>(this_val);
  assert(qjs_document != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLNullable<Element>>::ToValue(ctx, ParentNode::lastElementChild(*qjs_document));
}
static JSValue childrenAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_document = toScriptWrappable<Document>(this_val);
  assert(qjs_document != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<HTMLCollection>::ToValue(ctx, ParentNode::children(*qjs_document));
}
static JSValue childElementCountAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_document = toScriptWrappable<Document>(this_val);
  assert(qjs_document != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  return Converter<IDLInt64>::ToValue(ctx, ParentNode::childElementCount(*qjs_document));
}
void QJSDocument::Install(ExecutingContext* context) {
   InstallPrototypeProperties(context); 
   InstallPrototypeMethods(context); 
   InstallConstructor(context); 
}
void QJSDocument::InstallPrototypeProperties(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue prototype = context->contextData()->prototypeForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::FunctionConfig> functionConfig {
    {"___clear_cookies__", ___clear_cookies__, 0},
{"createElement", createElement, 2},
{"createElementNS", createElementNS, 3},
{"createTextNode", createTextNode, 1},
{"createDocumentFragment", createDocumentFragment, 0},
{"createComment", createComment, 1},
{"createEvent", createEvent, 1},
{"getElementById", getElementById, 1},
{"getElementsByClassName", getElementsByClassName, 1},
{"getElementsByTagName", getElementsByTagName, 1},
{"getElementsByName", getElementsByName, 1},
{"querySelector", querySelector, 1},
{"querySelectorAll", querySelectorAll, 1},
{"elementFromPoint", elementFromPoint, 2},
{"prepend", prepend, 1},
{"append", append, 1}
  };
  MemberInstaller::InstallFunctions(context, prototype, functionConfig);
}
void QJSDocument::InstallPrototypeMethods(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue prototype = context->contextData()->prototypeForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::AttributeConfig> attributesConfig {
    {defined_properties::kall.Impl(), allAttributeGetCallback, nullptr},
{defined_properties::ktitle.Impl(), titleAttributeGetCallback, titleAttributeSetCallback},
{defined_properties::kbody.Impl(), bodyAttributeGetCallback, bodyAttributeSetCallback},
{defined_properties::kcookie.Impl(), cookieAttributeGetCallback, cookieAttributeSetCallback},
{defined_properties::kdomain.Impl(), domainAttributeGetCallback, domainAttributeSetCallback},
{defined_properties::khead.Impl(), headAttributeGetCallback, nullptr},
{defined_properties::kdocumentElement.Impl(), documentElementAttributeGetCallback, nullptr},
{defined_properties::klocation.Impl(), locationAttributeGetCallback, nullptr},
{defined_properties::kcompatMode.Impl(), compatModeAttributeGetCallback, nullptr},
{defined_properties::kreadyState.Impl(), readyStateAttributeGetCallback, nullptr},
{defined_properties::kvisibilityState.Impl(), visibilityStateAttributeGetCallback, nullptr},
{defined_properties::khidden.Impl(), hiddenAttributeGetCallback, nullptr},
{defined_properties::kdefaultView.Impl(), defaultViewAttributeGetCallback, nullptr},
{defined_properties::konreadystatechange.Impl(), onreadystatechangeAttributeGetCallback, onreadystatechangeAttributeSetCallback},
{defined_properties::kfirstElementChild.Impl(), firstElementChildAttributeGetCallback, nullptr},
{defined_properties::klastElementChild.Impl(), lastElementChildAttributeGetCallback, nullptr},
{defined_properties::kchildren.Impl(), childrenAttributeGetCallback, nullptr},
{defined_properties::kchildElementCount.Impl(), childElementCountAttributeGetCallback, nullptr}
  };
  MemberInstaller::InstallAttributes(context, prototype, attributesConfig);
}
void QJSDocument::InstallConstructor(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue constructor = context->contextData()->constructorForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::AttributeConfig> attributeConfig {
    {defined_properties::kDocument.Impl(), nullptr, nullptr, constructor}
  };
  MemberInstaller::InstallAttributes(context, context->Global(), attributeConfig);
}
}