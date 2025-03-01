/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
 */
#include "core/html/html_image_element.h"
#include "core/html/canvas/html_canvas_element.h"
#include "core/html/canvas/canvas_gradient.h"
#include "qjs_unionevent_listener_options_boolean.h"
#include "bindings/qjs/converter_impl.h"
#include "core/html/html_image_element.h"
#include "core/html/canvas/html_canvas_element.h"
#include "core/html/canvas/path_2d.h"
#include "qjs_dom_point_init.h"
namespace webf {
std::shared_ptr<QJSUnionEventListenerOptionsBoolean> QJSUnionEventListenerOptionsBoolean::Create(JSContext* ctx, JSValue value, ExceptionState& exception_state) {
    if (JS_IsObject(value)) {
      auto&& v = Converter<EventListenerOptions>::FromValue(ctx, value, exception_state);
      if (UNLIKELY(exception_state.HasException())) {
        return nullptr;
      }
      return std::make_shared<QJSUnionEventListenerOptionsBoolean>(v);
    }
    if (JS_IsBool(value)) {
      auto&& v = Converter<IDLBoolean>::FromValue(ctx, value, exception_state);
      if (UNLIKELY(exception_state.HasException())) {
        return nullptr;
      }
      return std::make_shared<QJSUnionEventListenerOptionsBoolean>(v);
    }
  return nullptr;
}
QJSUnionEventListenerOptionsBoolean::QJSUnionEventListenerOptionsBoolean(std::shared_ptr<EventListenerOptions> value): member_EventListenerOptions_(value), content_type_(ContentType::kEventListenerOptions) {}
void QJSUnionEventListenerOptionsBoolean::Set(std::shared_ptr<EventListenerOptions> value) {
  Clear();
  member_EventListenerOptions_ = value;
  content_type_ = ContentType::kEventListenerOptions;
}
QJSUnionEventListenerOptionsBoolean::QJSUnionEventListenerOptionsBoolean(const bool& value): member_boolean_(value), content_type_(ContentType::kBoolean) {}
void QJSUnionEventListenerOptionsBoolean::Set(bool&& value) {
  Clear();
  member_boolean_ = value;
  content_type_ = ContentType::kBoolean;
}
void QJSUnionEventListenerOptionsBoolean::Set(const bool& value) {
  Clear();
  member_boolean_ = value;
  content_type_ = ContentType::kBoolean;
}
QJSUnionEventListenerOptionsBoolean ::~QJSUnionEventListenerOptionsBoolean () {
}
JSValue QJSUnionEventListenerOptionsBoolean::ToQuickJSValue(JSContext* ctx, ExceptionState& exception_state) const {
  switch(content_type_) {
   case ContentType::kEventListenerOptions: {
    return Converter<EventListenerOptions>::ToValue(ctx, member_EventListenerOptions_);
   }
   case ContentType::kBoolean: {
    return Converter<IDLBoolean>::ToValue(ctx, member_boolean_);
   }
  }
  return JS_NULL;
}
void QJSUnionEventListenerOptionsBoolean::Trace(GCVisitor* visitor) const {
  TraceIfNeeded<EventListenerOptions>::Trace(visitor, member_EventListenerOptions_);
  TraceIfNeeded<IDLBoolean>::Trace(visitor, member_boolean_);
}
void QJSUnionEventListenerOptionsBoolean::Clear() {
  member_EventListenerOptions_= nullptr;
  member_boolean_= false;
}
}