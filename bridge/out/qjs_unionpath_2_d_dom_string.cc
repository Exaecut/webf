/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
 */
#include "core/html/html_image_element.h"
#include "core/html/canvas/html_canvas_element.h"
#include "core/html/canvas/canvas_gradient.h"
#include "qjs_unionpath_2_d_dom_string.h"
#include "bindings/qjs/converter_impl.h"
#include "core/html/html_image_element.h"
#include "core/html/canvas/html_canvas_element.h"
#include "core/html/canvas/path_2d.h"
#include "qjs_dom_point_init.h"
namespace webf {
std::shared_ptr<QJSUnionPath2DDomString> QJSUnionPath2DDomString::Create(JSContext* ctx, JSValue value, ExceptionState& exception_state) {
    if (JS_IsObject(value)) {
      auto&& v = Converter<Path2D>::FromValue(ctx, value, exception_state);
      if (UNLIKELY(exception_state.HasException())) {
        return nullptr;
      }
      return std::make_shared<QJSUnionPath2DDomString>(v);
    }
    if (JS_IsString(value)) {
      auto&& v = Converter<IDLDOMString>::FromValue(ctx, value, exception_state);
      if (UNLIKELY(exception_state.HasException())) {
        return nullptr;
      }
      return std::make_shared<QJSUnionPath2DDomString>(v);
    }
  auto&& v = Converter<IDLDOMString>::FromValue(ctx, value, exception_state);
  if (UNLIKELY(exception_state.HasException())) {
    return nullptr;
  }
  return std::make_shared<QJSUnionPath2DDomString>(v);
}
QJSUnionPath2DDomString::QJSUnionPath2DDomString(Path2D* value): member_Path2D_(value), content_type_(ContentType::kPath2D) {}
void QJSUnionPath2DDomString::Set(Path2D* value) {
  Clear();
  member_Path2D_ = value;
  content_type_ = ContentType::kPath2D;
}
QJSUnionPath2DDomString::QJSUnionPath2DDomString(const AtomicString& value): member_dom_string_(value), content_type_(ContentType::kDomString) {}
void QJSUnionPath2DDomString::Set(AtomicString&& value) {
  Clear();
  member_dom_string_ = value;
  content_type_ = ContentType::kDomString;
}
void QJSUnionPath2DDomString::Set(const AtomicString& value) {
  Clear();
  member_dom_string_ = value;
  content_type_ = ContentType::kDomString;
}
QJSUnionPath2DDomString ::~QJSUnionPath2DDomString () {
}
JSValue QJSUnionPath2DDomString::ToQuickJSValue(JSContext* ctx, ExceptionState& exception_state) const {
  switch(content_type_) {
   case ContentType::kPath2D: {
    return Converter<Path2D>::ToValue(ctx, member_Path2D_);
   }
   case ContentType::kDomString: {
    return Converter<IDLDOMString>::ToValue(ctx, member_dom_string_);
   }
  }
  return JS_NULL;
}
void QJSUnionPath2DDomString::Trace(GCVisitor* visitor) const {
  TraceIfNeeded<Path2D>::Trace(visitor, member_Path2D_);
  TraceIfNeeded<IDLDOMString>::Trace(visitor, member_dom_string_);
}
void QJSUnionPath2DDomString::Clear() {
  member_Path2D_= nullptr;
  member_dom_string_= AtomicString::Empty();
}
}