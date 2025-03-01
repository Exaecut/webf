/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#include "qjs_node.h"
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
const WrapperTypeInfo QJSNode::wrapper_type_info_ {JS_CLASS_NODE, "Node", EventTarget::GetStaticWrapperTypeInfo(), QJSNode::ConstructorCallback};
const WrapperTypeInfo& Node::wrapper_type_info_ = QJSNode::wrapper_type_info_;
JSValue QJSNode::ConstructorCallback(JSContext* ctx, JSValue func_obj, JSValue this_val, int argc, JSValue* argv, int flags) {
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Node::constructor");
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
  static JSValue hasChildNodes(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Node::hasChildNodes");
  MemberMutationScope scope{context};
  Converter<IDLBoolean>::ImplType return_value;
  do {  // Dummy loop for use of 'break'.
    auto* self = toScriptWrappable<Node>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->hasChildNodes(exception_state);
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<IDLBoolean>::ToValue(ctx, std::move(return_value));
  }
  static JSValue appendChild(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 1) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'appendChild' : 1 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Node::appendChild");
  MemberMutationScope scope{context};
  Node* return_value = nullptr;
  do {  // Dummy loop for use of 'break'.
    auto&& args_newNode = Converter<Node>::ArgumentsValue(context, argv[0], 0, exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      auto* self = toScriptWrappable<Node>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->appendChild(args_newNode,exception_state);
      break;
    }
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<Node>::ToValue(ctx, std::move(return_value));
  }
  static JSValue cloneNode(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 0) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'cloneNode' : 0 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Node::cloneNode");
  MemberMutationScope scope{context};
  Node* return_value = nullptr;
  do {  // Dummy loop for use of 'break'.
    if (argc <= 0) {
      auto* self = toScriptWrappable<Node>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->cloneNode(exception_state);
      break;
    }
    auto&& args_deep = Converter<IDLOptional<IDLBoolean>>::FromValue(ctx, argv[0], exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      auto* self = toScriptWrappable<Node>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->cloneNode(args_deep,exception_state);
      break;
    }
    auto* self = toScriptWrappable<Node>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->cloneNode(args_deep,exception_state);
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<Node>::ToValue(ctx, std::move(return_value));
  }
  static JSValue contains(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 1) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'contains' : 1 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Node::contains");
  MemberMutationScope scope{context};
  Converter<IDLBoolean>::ImplType return_value;
  do {  // Dummy loop for use of 'break'.
    auto&& args_other = Converter<IDLNullable<Node>>::ArgumentsValue(context, argv[0], 0, exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      auto* self = toScriptWrappable<Node>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->contains(args_other,exception_state);
      break;
    }
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<IDLBoolean>::ToValue(ctx, std::move(return_value));
  }
  static JSValue insertBefore(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 2) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'insertBefore' : 2 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Node::insertBefore");
  MemberMutationScope scope{context};
  Node* return_value = nullptr;
  do {  // Dummy loop for use of 'break'.
    auto&& args_newChild = Converter<Node>::ArgumentsValue(context, argv[0], 0, exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_refChild = Converter<IDLNullable<Node>>::ArgumentsValue(context, argv[1], 1, exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 2) {
      auto* self = toScriptWrappable<Node>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->insertBefore(args_newChild,args_refChild,exception_state);
      break;
    }
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<Node>::ToValue(ctx, std::move(return_value));
  }
  static JSValue isEqualNode(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 1) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'isEqualNode' : 1 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Node::isEqualNode");
  MemberMutationScope scope{context};
  Converter<IDLBoolean>::ImplType return_value;
  do {  // Dummy loop for use of 'break'.
    auto&& args_otherNode = Converter<IDLNullable<Node>>::ArgumentsValue(context, argv[0], 0, exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      auto* self = toScriptWrappable<Node>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->isEqualNode(args_otherNode,exception_state);
      break;
    }
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<IDLBoolean>::ToValue(ctx, std::move(return_value));
  }
  static JSValue isSameNode(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 1) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'isSameNode' : 1 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Node::isSameNode");
  MemberMutationScope scope{context};
  Converter<IDLBoolean>::ImplType return_value;
  do {  // Dummy loop for use of 'break'.
    auto&& args_otherNode = Converter<IDLNullable<Node>>::ArgumentsValue(context, argv[0], 0, exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      auto* self = toScriptWrappable<Node>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->isSameNode(args_otherNode,exception_state);
      break;
    }
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<IDLBoolean>::ToValue(ctx, std::move(return_value));
  }
  static JSValue removeChild(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 1) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'removeChild' : 1 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Node::removeChild");
  MemberMutationScope scope{context};
  Node* return_value = nullptr;
  do {  // Dummy loop for use of 'break'.
    auto&& args_oldChild = Converter<Node>::ArgumentsValue(context, argv[0], 0, exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 1) {
      auto* self = toScriptWrappable<Node>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->removeChild(args_oldChild,exception_state);
      break;
    }
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<Node>::ToValue(ctx, std::move(return_value));
  }
  static JSValue remove(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Node::remove");
  MemberMutationScope scope{context};
  do {  // Dummy loop for use of 'break'.
    auto* self = toScriptWrappable<Node>(JS_IsUndefined(this_val) ? context->Global() : this_val);
     self->remove(exception_state);
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return JS_NULL;
  }
  static JSValue replaceChild(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
      if (argc < 2) {
    return JS_ThrowTypeError(ctx, "Failed to execute 'replaceChild' : 2 argument required, but %d present.", argc);
  }
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  context->dartIsolateContext()->profiler()->StartTrackSteps("Node::replaceChild");
  MemberMutationScope scope{context};
  Node* return_value = nullptr;
  do {  // Dummy loop for use of 'break'.
    auto&& args_newChild = Converter<Node>::ArgumentsValue(context, argv[0], 0, exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    auto&& args_oldChild = Converter<Node>::ArgumentsValue(context, argv[1], 1, exception_state);
    if (UNLIKELY(exception_state.HasException())) {
      return exception_state.ToQuickJS();
    }
    if (argc <= 2) {
      auto* self = toScriptWrappable<Node>(JS_IsUndefined(this_val) ? context->Global() : this_val);
    return_value = self->replaceChild(args_newChild,args_oldChild,exception_state);
      break;
    }
  } while (false);
   context->dartIsolateContext()->profiler()->FinishTrackSteps();
  if (UNLIKELY(exception_state.HasException())) {
    return exception_state.ToQuickJS();
  }
  return Converter<Node>::ToValue(ctx, std::move(return_value));
  }
static JSValue ELEMENT_NODEAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_node = toScriptWrappable<Node>(this_val);
  assert(qjs_node != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Node::ELEMENT_NODE");
  auto result = Converter<IDLDouble>::ToValue(ctx, Node::ELEMENT_NODE);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue ATTRIBUTE_NODEAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_node = toScriptWrappable<Node>(this_val);
  assert(qjs_node != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Node::ATTRIBUTE_NODE");
  auto result = Converter<IDLDouble>::ToValue(ctx, Node::ATTRIBUTE_NODE);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue TEXT_NODEAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_node = toScriptWrappable<Node>(this_val);
  assert(qjs_node != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Node::TEXT_NODE");
  auto result = Converter<IDLDouble>::ToValue(ctx, Node::TEXT_NODE);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue COMMENT_NODEAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_node = toScriptWrappable<Node>(this_val);
  assert(qjs_node != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Node::COMMENT_NODE");
  auto result = Converter<IDLDouble>::ToValue(ctx, Node::COMMENT_NODE);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue DOCUMENT_NODEAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_node = toScriptWrappable<Node>(this_val);
  assert(qjs_node != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Node::DOCUMENT_NODE");
  auto result = Converter<IDLDouble>::ToValue(ctx, Node::DOCUMENT_NODE);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue DOCUMENT_TYPE_NODEAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_node = toScriptWrappable<Node>(this_val);
  assert(qjs_node != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Node::DOCUMENT_TYPE_NODE");
  auto result = Converter<IDLDouble>::ToValue(ctx, Node::DOCUMENT_TYPE_NODE);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue DOCUMENT_FRAGMENT_NODEAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_node = toScriptWrappable<Node>(this_val);
  assert(qjs_node != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Node::DOCUMENT_FRAGMENT_NODE");
  auto result = Converter<IDLDouble>::ToValue(ctx, Node::DOCUMENT_FRAGMENT_NODE);
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue nodeTypeAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_node = toScriptWrappable<Node>(this_val);
  assert(qjs_node != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Node::nodeType");
  auto result = Converter<IDLDouble>::ToValue(ctx, qjs_node->nodeType());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue nodeNameAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_node = toScriptWrappable<Node>(this_val);
  assert(qjs_node != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Node::nodeName");
  auto result = Converter<IDLDOMString>::ToValue(ctx, qjs_node->nodeName());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue nodeValueAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_node = toScriptWrappable<Node>(this_val);
  assert(qjs_node != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Node::nodeValue");
  auto result = Converter<IDLNullable<IDLDOMString>>::ToValue(ctx, qjs_node->nodeValue());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue nodeValueAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_node = toScriptWrappable<Node>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLDOMString>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_node->setNodeValue(v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
static JSValue childNodesAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_node = toScriptWrappable<Node>(this_val);
  assert(qjs_node != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Node::childNodes");
  auto result = Converter<NodeList>::ToValue(ctx, qjs_node->childNodes());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue firstChildAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_node = toScriptWrappable<Node>(this_val);
  assert(qjs_node != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Node::firstChild");
  auto result = Converter<IDLNullable<Node>>::ToValue(ctx, qjs_node->firstChild());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue isConnectedAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_node = toScriptWrappable<Node>(this_val);
  assert(qjs_node != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Node::isConnected");
  auto result = Converter<IDLBoolean>::ToValue(ctx, qjs_node->isConnected());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue lastChildAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_node = toScriptWrappable<Node>(this_val);
  assert(qjs_node != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Node::lastChild");
  auto result = Converter<IDLNullable<Node>>::ToValue(ctx, qjs_node->lastChild());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue nextSiblingAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_node = toScriptWrappable<Node>(this_val);
  assert(qjs_node != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Node::nextSibling");
  auto result = Converter<IDLNullable<Node>>::ToValue(ctx, qjs_node->nextSibling());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue ownerDocumentAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_node = toScriptWrappable<Node>(this_val);
  assert(qjs_node != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Node::ownerDocument");
  auto result = Converter<IDLNullable<Document>>::ToValue(ctx, qjs_node->ownerDocument());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue parentElementAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_node = toScriptWrappable<Node>(this_val);
  assert(qjs_node != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Node::parentElement");
  auto result = Converter<IDLNullable<Element>>::ToValue(ctx, qjs_node->parentElement());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue parentNodeAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_node = toScriptWrappable<Node>(this_val);
  assert(qjs_node != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Node::parentNode");
  auto result = Converter<IDLNullable<Node>>::ToValue(ctx, qjs_node->parentNode());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue previousSiblingAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_node = toScriptWrappable<Node>(this_val);
  assert(qjs_node != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Node::previousSibling");
  auto result = Converter<IDLNullable<Node>>::ToValue(ctx, qjs_node->previousSibling());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue textContentAttributeGetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
  auto* qjs_node = toScriptWrappable<Node>(this_val);
  assert(qjs_node != nullptr);
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  context->dartIsolateContext()->profiler()->StartTrackSteps("Node::textContent");
  auto result = Converter<IDLNullable<IDLDOMString>>::ToValue(ctx, qjs_node->textContent());
  context->dartIsolateContext()->profiler()->FinishTrackSteps();
  return result;
}
static JSValue textContentAttributeSetCallback(JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv) {
 auto* qjs_node = toScriptWrappable<Node>(this_val);
  ExceptionState exception_state;
  ExecutingContext* context = ExecutingContext::From(ctx);
  if (!context->IsContextValid()) return JS_NULL;
  MemberMutationScope scope{context};
  auto&& v = Converter<IDLNullable<IDLDOMString>>::FromValue(ctx, argv[0], exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  qjs_node->setTextContent(v, exception_state);
  if (exception_state.HasException()) {
    return exception_state.ToQuickJS();
  }
  return JS_DupValue(ctx, argv[0]);
}
void QJSNode::Install(ExecutingContext* context) {
   InstallPrototypeProperties(context); 
   InstallPrototypeMethods(context); 
   InstallConstructor(context); 
}
void QJSNode::InstallPrototypeProperties(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue prototype = context->contextData()->prototypeForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::FunctionConfig> functionConfig {
    {"hasChildNodes", hasChildNodes, 0},
{"appendChild", appendChild, 1},
{"cloneNode", cloneNode, 1},
{"contains", contains, 1},
{"insertBefore", insertBefore, 2},
{"isEqualNode", isEqualNode, 1},
{"isSameNode", isSameNode, 1},
{"removeChild", removeChild, 1},
{"remove", remove, 0},
{"replaceChild", replaceChild, 2}
  };
  MemberInstaller::InstallFunctions(context, prototype, functionConfig);
}
void QJSNode::InstallPrototypeMethods(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue prototype = context->contextData()->prototypeForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::AttributeConfig> attributesConfig {
    {defined_properties::kELEMENT_NODE.Impl(), ELEMENT_NODEAttributeGetCallback, nullptr},
{defined_properties::kATTRIBUTE_NODE.Impl(), ATTRIBUTE_NODEAttributeGetCallback, nullptr},
{defined_properties::kTEXT_NODE.Impl(), TEXT_NODEAttributeGetCallback, nullptr},
{defined_properties::kCOMMENT_NODE.Impl(), COMMENT_NODEAttributeGetCallback, nullptr},
{defined_properties::kDOCUMENT_NODE.Impl(), DOCUMENT_NODEAttributeGetCallback, nullptr},
{defined_properties::kDOCUMENT_TYPE_NODE.Impl(), DOCUMENT_TYPE_NODEAttributeGetCallback, nullptr},
{defined_properties::kDOCUMENT_FRAGMENT_NODE.Impl(), DOCUMENT_FRAGMENT_NODEAttributeGetCallback, nullptr},
{defined_properties::knodeType.Impl(), nodeTypeAttributeGetCallback, nullptr},
{defined_properties::knodeName.Impl(), nodeNameAttributeGetCallback, nullptr},
{defined_properties::knodeValue.Impl(), nodeValueAttributeGetCallback, nodeValueAttributeSetCallback},
{defined_properties::kchildNodes.Impl(), childNodesAttributeGetCallback, nullptr},
{defined_properties::kfirstChild.Impl(), firstChildAttributeGetCallback, nullptr},
{defined_properties::kisConnected.Impl(), isConnectedAttributeGetCallback, nullptr},
{defined_properties::klastChild.Impl(), lastChildAttributeGetCallback, nullptr},
{defined_properties::knextSibling.Impl(), nextSiblingAttributeGetCallback, nullptr},
{defined_properties::kownerDocument.Impl(), ownerDocumentAttributeGetCallback, nullptr},
{defined_properties::kparentElement.Impl(), parentElementAttributeGetCallback, nullptr},
{defined_properties::kparentNode.Impl(), parentNodeAttributeGetCallback, nullptr},
{defined_properties::kpreviousSibling.Impl(), previousSiblingAttributeGetCallback, nullptr},
{defined_properties::ktextContent.Impl(), textContentAttributeGetCallback, textContentAttributeSetCallback}
  };
  MemberInstaller::InstallAttributes(context, prototype, attributesConfig);
}
void QJSNode::InstallConstructor(ExecutingContext* context) {
  const WrapperTypeInfo* wrapperTypeInfo = GetWrapperTypeInfo();
  JSValue constructor = context->contextData()->constructorForType(wrapperTypeInfo);
  std::initializer_list<MemberInstaller::AttributeConfig> attributeConfig {
    {defined_properties::kNode.Impl(), nullptr, nullptr, constructor}
  };
  MemberInstaller::InstallAttributes(context, context->Global(), attributeConfig);
}
}