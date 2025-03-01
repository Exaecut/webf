/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
 */
#include "core/html/html_image_element.h"
#include "core/html/canvas/html_canvas_element.h"
#include "core/html/canvas/canvas_gradient.h"
#include "qjs_unionhtml_image_elementhtml_canvas_element.h"
#include "bindings/qjs/converter_impl.h"
#include "core/html/html_image_element.h"
#include "core/html/canvas/html_canvas_element.h"
#include "core/html/canvas/path_2d.h"
#include "qjs_dom_point_init.h"
namespace webf {
std::shared_ptr<QJSUnionHTMLImageElementHTMLCanvasElement> QJSUnionHTMLImageElementHTMLCanvasElement::Create(JSContext* ctx, JSValue value, ExceptionState& exception_state) {
    if (JS_IsObject(value)) {
      auto&& v = Converter<HTMLImageElement>::FromValue(ctx, value, exception_state);
      if (UNLIKELY(exception_state.HasException())) {
        return nullptr;
      }
      return std::make_shared<QJSUnionHTMLImageElementHTMLCanvasElement>(v);
    }
    if (JS_IsObject(value)) {
      auto&& v = Converter<HTMLCanvasElement>::FromValue(ctx, value, exception_state);
      if (UNLIKELY(exception_state.HasException())) {
        return nullptr;
      }
      return std::make_shared<QJSUnionHTMLImageElementHTMLCanvasElement>(v);
    }
  return nullptr;
}
QJSUnionHTMLImageElementHTMLCanvasElement::QJSUnionHTMLImageElementHTMLCanvasElement(HTMLImageElement* value): member_HTMLImageElement_(value), content_type_(ContentType::kHTMLImageElement) {}
void QJSUnionHTMLImageElementHTMLCanvasElement::Set(HTMLImageElement* value) {
  Clear();
  member_HTMLImageElement_ = value;
  content_type_ = ContentType::kHTMLImageElement;
}
QJSUnionHTMLImageElementHTMLCanvasElement::QJSUnionHTMLImageElementHTMLCanvasElement(HTMLCanvasElement* value): member_HTMLCanvasElement_(value), content_type_(ContentType::kHTMLCanvasElement) {}
void QJSUnionHTMLImageElementHTMLCanvasElement::Set(HTMLCanvasElement* value) {
  Clear();
  member_HTMLCanvasElement_ = value;
  content_type_ = ContentType::kHTMLCanvasElement;
}
QJSUnionHTMLImageElementHTMLCanvasElement ::~QJSUnionHTMLImageElementHTMLCanvasElement () {
}
JSValue QJSUnionHTMLImageElementHTMLCanvasElement::ToQuickJSValue(JSContext* ctx, ExceptionState& exception_state) const {
  switch(content_type_) {
   case ContentType::kHTMLImageElement: {
    return Converter<HTMLImageElement>::ToValue(ctx, member_HTMLImageElement_);
   }
   case ContentType::kHTMLCanvasElement: {
    return Converter<HTMLCanvasElement>::ToValue(ctx, member_HTMLCanvasElement_);
   }
  }
  return JS_NULL;
}
void QJSUnionHTMLImageElementHTMLCanvasElement::Trace(GCVisitor* visitor) const {
  TraceIfNeeded<HTMLImageElement>::Trace(visitor, member_HTMLImageElement_);
  TraceIfNeeded<HTMLCanvasElement>::Trace(visitor, member_HTMLCanvasElement_);
}
void QJSUnionHTMLImageElementHTMLCanvasElement::Clear() {
  member_HTMLImageElement_= nullptr;
  member_HTMLCanvasElement_= nullptr;
}
}