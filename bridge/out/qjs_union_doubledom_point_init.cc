/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
 */
#include "core/html/html_image_element.h"
#include "core/html/canvas/html_canvas_element.h"
#include "core/html/canvas/canvas_gradient.h"
#include "qjs_union_doubledom_point_init.h"
#include "bindings/qjs/converter_impl.h"
#include "core/html/html_image_element.h"
#include "core/html/canvas/html_canvas_element.h"
#include "core/html/canvas/path_2d.h"
#include "qjs_dom_point_init.h"
namespace webf {
std::shared_ptr<QJSUnionDoubleDOMPointInit> QJSUnionDoubleDOMPointInit::Create(JSContext* ctx, JSValue value, ExceptionState& exception_state) {
    if (JS_IsNumber(value)) {
      auto&& v = Converter<IDLDouble>::FromValue(ctx, value, exception_state);
      if (UNLIKELY(exception_state.HasException())) {
        return nullptr;
      }
      return std::make_shared<QJSUnionDoubleDOMPointInit>(v);
    }
    if (JS_IsObject(value)) {
      auto&& v = Converter<DOMPointInit>::FromValue(ctx, value, exception_state);
      if (UNLIKELY(exception_state.HasException())) {
        return nullptr;
      }
      return std::make_shared<QJSUnionDoubleDOMPointInit>(v);
    }
  return nullptr;
}
QJSUnionDoubleDOMPointInit::QJSUnionDoubleDOMPointInit(const double& value): member_double_(value), content_type_(ContentType::kDouble) {}
void QJSUnionDoubleDOMPointInit::Set(double&& value) {
  Clear();
  member_double_ = value;
  content_type_ = ContentType::kDouble;
}
void QJSUnionDoubleDOMPointInit::Set(const double& value) {
  Clear();
  member_double_ = value;
  content_type_ = ContentType::kDouble;
}
QJSUnionDoubleDOMPointInit::QJSUnionDoubleDOMPointInit(std::shared_ptr<DOMPointInit> value): member_DOMPointInit_(value), content_type_(ContentType::kDOMPointInit) {}
void QJSUnionDoubleDOMPointInit::Set(std::shared_ptr<DOMPointInit> value) {
  Clear();
  member_DOMPointInit_ = value;
  content_type_ = ContentType::kDOMPointInit;
}
QJSUnionDoubleDOMPointInit ::~QJSUnionDoubleDOMPointInit () {
}
JSValue QJSUnionDoubleDOMPointInit::ToQuickJSValue(JSContext* ctx, ExceptionState& exception_state) const {
  switch(content_type_) {
   case ContentType::kDouble: {
    return Converter<IDLDouble>::ToValue(ctx, member_double_);
   }
   case ContentType::kDOMPointInit: {
    return Converter<DOMPointInit>::ToValue(ctx, member_DOMPointInit_);
   }
  }
  return JS_NULL;
}
void QJSUnionDoubleDOMPointInit::Trace(GCVisitor* visitor) const {
  TraceIfNeeded<IDLDouble>::Trace(visitor, member_double_);
  TraceIfNeeded<DOMPointInit>::Trace(visitor, member_DOMPointInit_);
}
void QJSUnionDoubleDOMPointInit::Clear() {
  member_double_= 0.0;
  member_DOMPointInit_= nullptr;
}
}