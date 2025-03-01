/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
 */
#include "core/html/html_image_element.h"
#include "core/html/canvas/html_canvas_element.h"
#include "core/html/canvas/canvas_gradient.h"
#include "qjs_union_dom_stringcanvas_gradient.h"
#include "bindings/qjs/converter_impl.h"
#include "core/html/html_image_element.h"
#include "core/html/canvas/html_canvas_element.h"
#include "core/html/canvas/path_2d.h"
#include "qjs_dom_point_init.h"
namespace webf {
std::shared_ptr<QJSUnionDomStringCanvasGradient> QJSUnionDomStringCanvasGradient::Create(JSContext* ctx, JSValue value, ExceptionState& exception_state) {
    if (JS_IsString(value)) {
      auto&& v = Converter<IDLDOMString>::FromValue(ctx, value, exception_state);
      if (UNLIKELY(exception_state.HasException())) {
        return nullptr;
      }
      return std::make_shared<QJSUnionDomStringCanvasGradient>(v);
    }
    if (JS_IsObject(value)) {
      auto&& v = Converter<CanvasGradient>::FromValue(ctx, value, exception_state);
      if (UNLIKELY(exception_state.HasException())) {
        return nullptr;
      }
      return std::make_shared<QJSUnionDomStringCanvasGradient>(v);
    }
  auto&& v = Converter<IDLDOMString>::FromValue(ctx, value, exception_state);
  if (UNLIKELY(exception_state.HasException())) {
    return nullptr;
  }
  return std::make_shared<QJSUnionDomStringCanvasGradient>(v);
}
QJSUnionDomStringCanvasGradient::QJSUnionDomStringCanvasGradient(const AtomicString& value): member_dom_string_(value), content_type_(ContentType::kDomString) {}
void QJSUnionDomStringCanvasGradient::Set(AtomicString&& value) {
  Clear();
  member_dom_string_ = value;
  content_type_ = ContentType::kDomString;
}
void QJSUnionDomStringCanvasGradient::Set(const AtomicString& value) {
  Clear();
  member_dom_string_ = value;
  content_type_ = ContentType::kDomString;
}
QJSUnionDomStringCanvasGradient::QJSUnionDomStringCanvasGradient(CanvasGradient* value): member_CanvasGradient_(value), content_type_(ContentType::kCanvasGradient) {}
void QJSUnionDomStringCanvasGradient::Set(CanvasGradient* value) {
  Clear();
  member_CanvasGradient_ = value;
  content_type_ = ContentType::kCanvasGradient;
}
QJSUnionDomStringCanvasGradient ::~QJSUnionDomStringCanvasGradient () {
}
JSValue QJSUnionDomStringCanvasGradient::ToQuickJSValue(JSContext* ctx, ExceptionState& exception_state) const {
  switch(content_type_) {
   case ContentType::kDomString: {
    return Converter<IDLDOMString>::ToValue(ctx, member_dom_string_);
   }
   case ContentType::kCanvasGradient: {
    return Converter<CanvasGradient>::ToValue(ctx, member_CanvasGradient_);
   }
  }
  return JS_NULL;
}
void QJSUnionDomStringCanvasGradient::Trace(GCVisitor* visitor) const {
  TraceIfNeeded<IDLDOMString>::Trace(visitor, member_dom_string_);
  TraceIfNeeded<CanvasGradient>::Trace(visitor, member_CanvasGradient_);
}
void QJSUnionDomStringCanvasGradient::Clear() {
  member_dom_string_= AtomicString::Empty();
  member_CanvasGradient_= nullptr;
}
}