/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
 */
#include "core/html/html_image_element.h"
#include "core/html/canvas/html_canvas_element.h"
#include "core/html/canvas/canvas_gradient.h"
#include "qjs_union_sequencedoubledom_matrix_init.h"
#include "bindings/qjs/converter_impl.h"
#include "core/html/html_image_element.h"
#include "core/html/canvas/html_canvas_element.h"
#include "core/html/canvas/path_2d.h"
#include "qjs_dom_point_init.h"
namespace webf {
std::shared_ptr<QJSUnionSequenceDoubleDOMMatrixInit> QJSUnionSequenceDoubleDOMMatrixInit::Create(JSContext* ctx, JSValue value, ExceptionState& exception_state) {
    if (JS_IsArray(ctx, value)) {
      auto&& v = Converter<IDLSequence<IDLDouble>>::FromValue(ctx, value, exception_state);
      if (UNLIKELY(exception_state.HasException())) {
        return nullptr;
      }
      return std::make_shared<QJSUnionSequenceDoubleDOMMatrixInit>(v);
    }
    if (JS_IsObject(value)) {
      auto&& v = Converter<DOMMatrixInit>::FromValue(ctx, value, exception_state);
      if (UNLIKELY(exception_state.HasException())) {
        return nullptr;
      }
      return std::make_shared<QJSUnionSequenceDoubleDOMMatrixInit>(v);
    }
  return nullptr;
}
QJSUnionSequenceDoubleDOMMatrixInit::QJSUnionSequenceDoubleDOMMatrixInit(const std::vector<double>& value): member_5_(value), content_type_(ContentType::kSequenceDouble) {}
void QJSUnionSequenceDoubleDOMMatrixInit::Set(std::vector<double>&& value) {
  Clear();
  member_5_ = value;
  content_type_ = ContentType::kSequenceDouble;
}
void QJSUnionSequenceDoubleDOMMatrixInit::Set(const std::vector<double>& value) {
  Clear();
  member_5_ = value;
  content_type_ = ContentType::kSequenceDouble;
}
QJSUnionSequenceDoubleDOMMatrixInit::QJSUnionSequenceDoubleDOMMatrixInit(std::shared_ptr<DOMMatrixInit> value): member_DOMMatrixInit_(value), content_type_(ContentType::kDOMMatrixInit) {}
void QJSUnionSequenceDoubleDOMMatrixInit::Set(std::shared_ptr<DOMMatrixInit> value) {
  Clear();
  member_DOMMatrixInit_ = value;
  content_type_ = ContentType::kDOMMatrixInit;
}
QJSUnionSequenceDoubleDOMMatrixInit ::~QJSUnionSequenceDoubleDOMMatrixInit () {
}
JSValue QJSUnionSequenceDoubleDOMMatrixInit::ToQuickJSValue(JSContext* ctx, ExceptionState& exception_state) const {
  switch(content_type_) {
   case ContentType::kSequenceDouble: {
    return Converter<IDLSequence<IDLDouble>>::ToValue(ctx, member_5_);
   }
   case ContentType::kDOMMatrixInit: {
    return Converter<DOMMatrixInit>::ToValue(ctx, member_DOMMatrixInit_);
   }
  }
  return JS_NULL;
}
void QJSUnionSequenceDoubleDOMMatrixInit::Trace(GCVisitor* visitor) const {
  TraceIfNeeded<IDLSequence<IDLDouble>>::Trace(visitor, member_5_);
  TraceIfNeeded<DOMMatrixInit>::Trace(visitor, member_DOMMatrixInit_);
}
void QJSUnionSequenceDoubleDOMMatrixInit::Clear() {
  member_5_.clear();
  member_DOMMatrixInit_= nullptr;
}
}