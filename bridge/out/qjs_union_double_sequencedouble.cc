/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
 */
#include "core/html/html_image_element.h"
#include "core/html/canvas/html_canvas_element.h"
#include "core/html/canvas/canvas_gradient.h"
#include "qjs_union_double_sequencedouble.h"
#include "bindings/qjs/converter_impl.h"
#include "core/html/html_image_element.h"
#include "core/html/canvas/html_canvas_element.h"
#include "core/html/canvas/path_2d.h"
#include "qjs_dom_point_init.h"
namespace webf {
std::shared_ptr<QJSUnionDoubleSequenceDouble> QJSUnionDoubleSequenceDouble::Create(JSContext* ctx, JSValue value, ExceptionState& exception_state) {
    if (JS_IsNumber(value)) {
      auto&& v = Converter<IDLDouble>::FromValue(ctx, value, exception_state);
      if (UNLIKELY(exception_state.HasException())) {
        return nullptr;
      }
      return std::make_shared<QJSUnionDoubleSequenceDouble>(v);
    }
    if (JS_IsArray(ctx, value)) {
      auto&& v = Converter<IDLSequence<IDLDouble>>::FromValue(ctx, value, exception_state);
      if (UNLIKELY(exception_state.HasException())) {
        return nullptr;
      }
      return std::make_shared<QJSUnionDoubleSequenceDouble>(v);
    }
  return nullptr;
}
QJSUnionDoubleSequenceDouble::QJSUnionDoubleSequenceDouble(const double& value): member_double_(value), content_type_(ContentType::kDouble) {}
void QJSUnionDoubleSequenceDouble::Set(double&& value) {
  Clear();
  member_double_ = value;
  content_type_ = ContentType::kDouble;
}
void QJSUnionDoubleSequenceDouble::Set(const double& value) {
  Clear();
  member_double_ = value;
  content_type_ = ContentType::kDouble;
}
QJSUnionDoubleSequenceDouble::QJSUnionDoubleSequenceDouble(const std::vector<double>& value): member_5_(value), content_type_(ContentType::kSequenceDouble) {}
void QJSUnionDoubleSequenceDouble::Set(std::vector<double>&& value) {
  Clear();
  member_5_ = value;
  content_type_ = ContentType::kSequenceDouble;
}
void QJSUnionDoubleSequenceDouble::Set(const std::vector<double>& value) {
  Clear();
  member_5_ = value;
  content_type_ = ContentType::kSequenceDouble;
}
QJSUnionDoubleSequenceDouble ::~QJSUnionDoubleSequenceDouble () {
}
JSValue QJSUnionDoubleSequenceDouble::ToQuickJSValue(JSContext* ctx, ExceptionState& exception_state) const {
  switch(content_type_) {
   case ContentType::kDouble: {
    return Converter<IDLDouble>::ToValue(ctx, member_double_);
   }
   case ContentType::kSequenceDouble: {
    return Converter<IDLSequence<IDLDouble>>::ToValue(ctx, member_5_);
   }
  }
  return JS_NULL;
}
void QJSUnionDoubleSequenceDouble::Trace(GCVisitor* visitor) const {
  TraceIfNeeded<IDLDouble>::Trace(visitor, member_double_);
  TraceIfNeeded<IDLSequence<IDLDouble>>::Trace(visitor, member_5_);
}
void QJSUnionDoubleSequenceDouble::Clear() {
  member_double_= 0.0;
  member_5_.clear();
}
}