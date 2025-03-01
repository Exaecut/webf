/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
 */
#include "core/html/html_image_element.h"
#include "core/html/canvas/html_canvas_element.h"
#include "core/html/canvas/canvas_gradient.h"
#include "qjs_unionadd_event_listener_options_boolean.h"
#include "bindings/qjs/converter_impl.h"
#include "core/html/html_image_element.h"
#include "core/html/canvas/html_canvas_element.h"
#include "core/html/canvas/path_2d.h"
#include "qjs_dom_point_init.h"
namespace webf {
std::shared_ptr<QJSUnionAddEventListenerOptionsBoolean> QJSUnionAddEventListenerOptionsBoolean::Create(JSContext* ctx, JSValue value, ExceptionState& exception_state) {
    if (JS_IsObject(value)) {
      auto&& v = Converter<AddEventListenerOptions>::FromValue(ctx, value, exception_state);
      if (UNLIKELY(exception_state.HasException())) {
        return nullptr;
      }
      return std::make_shared<QJSUnionAddEventListenerOptionsBoolean>(v);
    }
    if (JS_IsBool(value)) {
      auto&& v = Converter<IDLBoolean>::FromValue(ctx, value, exception_state);
      if (UNLIKELY(exception_state.HasException())) {
        return nullptr;
      }
      return std::make_shared<QJSUnionAddEventListenerOptionsBoolean>(v);
    }
  return nullptr;
}
QJSUnionAddEventListenerOptionsBoolean::QJSUnionAddEventListenerOptionsBoolean(std::shared_ptr<AddEventListenerOptions> value): member_AddEventListenerOptions_(value), content_type_(ContentType::kAddEventListenerOptions) {}
void QJSUnionAddEventListenerOptionsBoolean::Set(std::shared_ptr<AddEventListenerOptions> value) {
  Clear();
  member_AddEventListenerOptions_ = value;
  content_type_ = ContentType::kAddEventListenerOptions;
}
QJSUnionAddEventListenerOptionsBoolean::QJSUnionAddEventListenerOptionsBoolean(const bool& value): member_boolean_(value), content_type_(ContentType::kBoolean) {}
void QJSUnionAddEventListenerOptionsBoolean::Set(bool&& value) {
  Clear();
  member_boolean_ = value;
  content_type_ = ContentType::kBoolean;
}
void QJSUnionAddEventListenerOptionsBoolean::Set(const bool& value) {
  Clear();
  member_boolean_ = value;
  content_type_ = ContentType::kBoolean;
}
QJSUnionAddEventListenerOptionsBoolean ::~QJSUnionAddEventListenerOptionsBoolean () {
}
JSValue QJSUnionAddEventListenerOptionsBoolean::ToQuickJSValue(JSContext* ctx, ExceptionState& exception_state) const {
  switch(content_type_) {
   case ContentType::kAddEventListenerOptions: {
    return Converter<AddEventListenerOptions>::ToValue(ctx, member_AddEventListenerOptions_);
   }
   case ContentType::kBoolean: {
    return Converter<IDLBoolean>::ToValue(ctx, member_boolean_);
   }
  }
  return JS_NULL;
}
void QJSUnionAddEventListenerOptionsBoolean::Trace(GCVisitor* visitor) const {
  TraceIfNeeded<AddEventListenerOptions>::Trace(visitor, member_AddEventListenerOptions_);
  TraceIfNeeded<IDLBoolean>::Trace(visitor, member_boolean_);
}
void QJSUnionAddEventListenerOptionsBoolean::Clear() {
  member_AddEventListenerOptions_= nullptr;
  member_boolean_= false;
}
}