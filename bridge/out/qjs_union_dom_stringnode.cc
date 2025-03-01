/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
 */
#include "core/html/html_image_element.h"
#include "core/html/canvas/html_canvas_element.h"
#include "core/html/canvas/canvas_gradient.h"
#include "qjs_union_dom_stringnode.h"
#include "bindings/qjs/converter_impl.h"
#include "core/html/html_image_element.h"
#include "core/html/canvas/html_canvas_element.h"
#include "core/html/canvas/path_2d.h"
#include "qjs_dom_point_init.h"
namespace webf {
std::shared_ptr<QJSUnionDomStringNode> QJSUnionDomStringNode::Create(JSContext* ctx, JSValue value, ExceptionState& exception_state) {
    if (JS_IsString(value)) {
      auto&& v = Converter<IDLDOMString>::FromValue(ctx, value, exception_state);
      if (UNLIKELY(exception_state.HasException())) {
        return nullptr;
      }
      return std::make_shared<QJSUnionDomStringNode>(v);
    }
    if (JS_IsObject(value)) {
      auto&& v = Converter<Node>::FromValue(ctx, value, exception_state);
      if (UNLIKELY(exception_state.HasException())) {
        return nullptr;
      }
      return std::make_shared<QJSUnionDomStringNode>(v);
    }
  auto&& v = Converter<IDLDOMString>::FromValue(ctx, value, exception_state);
  if (UNLIKELY(exception_state.HasException())) {
    return nullptr;
  }
  return std::make_shared<QJSUnionDomStringNode>(v);
}
QJSUnionDomStringNode::QJSUnionDomStringNode(const AtomicString& value): member_dom_string_(value), content_type_(ContentType::kDomString) {}
void QJSUnionDomStringNode::Set(AtomicString&& value) {
  Clear();
  member_dom_string_ = value;
  content_type_ = ContentType::kDomString;
}
void QJSUnionDomStringNode::Set(const AtomicString& value) {
  Clear();
  member_dom_string_ = value;
  content_type_ = ContentType::kDomString;
}
QJSUnionDomStringNode::QJSUnionDomStringNode(Node* value): member_Node_(value), content_type_(ContentType::kNode) {}
void QJSUnionDomStringNode::Set(Node* value) {
  Clear();
  member_Node_ = value;
  content_type_ = ContentType::kNode;
}
QJSUnionDomStringNode ::~QJSUnionDomStringNode () {
}
JSValue QJSUnionDomStringNode::ToQuickJSValue(JSContext* ctx, ExceptionState& exception_state) const {
  switch(content_type_) {
   case ContentType::kDomString: {
    return Converter<IDLDOMString>::ToValue(ctx, member_dom_string_);
   }
   case ContentType::kNode: {
    return Converter<Node>::ToValue(ctx, member_Node_);
   }
  }
  return JS_NULL;
}
void QJSUnionDomStringNode::Trace(GCVisitor* visitor) const {
  TraceIfNeeded<IDLDOMString>::Trace(visitor, member_dom_string_);
  TraceIfNeeded<Node>::Trace(visitor, member_Node_);
}
void QJSUnionDomStringNode::Clear() {
  member_dom_string_= AtomicString::Empty();
  member_Node_= nullptr;
}
}