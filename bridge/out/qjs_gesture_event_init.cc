/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#include "qjs_gesture_event_init.h"
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
std::shared_ptr<GestureEventInit> GestureEventInit::Create() {
  return std::make_shared<GestureEventInit>();
}
std::shared_ptr<GestureEventInit> GestureEventInit::Create(JSContext* ctx, JSValue value, ExceptionState& exception_state) {
  return std::make_shared<GestureEventInit>(ctx, value, exception_state);
}
GestureEventInit::GestureEventInit()  {}
GestureEventInit::GestureEventInit(JSContext* ctx, JSValue value, ExceptionState& exception_state): GestureEventInit() {
  FillMembersWithQJSObject(ctx, value, exception_state);
}
bool GestureEventInit::FillQJSObjectWithMembers(JSContext* ctx, JSValue qjs_dictionary) const {
  EventInit::FillQJSObjectWithMembers(ctx, qjs_dictionary);
  if (!JS_IsObject(qjs_dictionary)) {
    return false;
  }
  JS_SetPropertyStr(ctx, qjs_dictionary, "state", Converter<IDLOptional<IDLDOMString>>::ToValue(ctx, state_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "direction", Converter<IDLOptional<IDLDOMString>>::ToValue(ctx, direction_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "deltaX", Converter<IDLOptional<IDLDouble>>::ToValue(ctx, deltaX_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "deltaY", Converter<IDLOptional<IDLDouble>>::ToValue(ctx, deltaY_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "velocityX", Converter<IDLOptional<IDLDouble>>::ToValue(ctx, velocityX_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "velocityY", Converter<IDLOptional<IDLDouble>>::ToValue(ctx, velocityY_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "scale", Converter<IDLOptional<IDLDouble>>::ToValue(ctx, scale_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "rotation", Converter<IDLOptional<IDLDouble>>::ToValue(ctx, rotation_));
  return true;
}
bool GestureEventInit::FillMembersWithQJSObject(JSContext* ctx, JSValue value, ExceptionState& exception_state) {
  EventInit::FillMembersWithQJSObject(ctx, value, exception_state);
  if (!JS_IsObject(value)) {
    return false;
  }
  {
    JSAtom key = JS_NewAtom(ctx, "state");
    if (JS_HasProperty(ctx, value, key)) {
      JSValue v = JS_GetProperty(ctx, value, key);
      state_ = Converter<IDLOptional<IDLDOMString>>::FromValue(ctx, v, exception_state);
      JS_FreeValue(ctx, v);
      has_state_ = true;
    }
    JS_FreeAtom(ctx, key);
  }
  {
    JSAtom key = JS_NewAtom(ctx, "direction");
    if (JS_HasProperty(ctx, value, key)) {
      JSValue v = JS_GetProperty(ctx, value, key);
      direction_ = Converter<IDLOptional<IDLDOMString>>::FromValue(ctx, v, exception_state);
      JS_FreeValue(ctx, v);
      has_direction_ = true;
    }
    JS_FreeAtom(ctx, key);
  }
  {
    JSAtom key = JS_NewAtom(ctx, "deltaX");
    if (JS_HasProperty(ctx, value, key)) {
      JSValue v = JS_GetProperty(ctx, value, key);
      deltaX_ = Converter<IDLOptional<IDLDouble>>::FromValue(ctx, v, exception_state);
      JS_FreeValue(ctx, v);
      has_deltaX_ = true;
    }
    JS_FreeAtom(ctx, key);
  }
  {
    JSAtom key = JS_NewAtom(ctx, "deltaY");
    if (JS_HasProperty(ctx, value, key)) {
      JSValue v = JS_GetProperty(ctx, value, key);
      deltaY_ = Converter<IDLOptional<IDLDouble>>::FromValue(ctx, v, exception_state);
      JS_FreeValue(ctx, v);
      has_deltaY_ = true;
    }
    JS_FreeAtom(ctx, key);
  }
  {
    JSAtom key = JS_NewAtom(ctx, "velocityX");
    if (JS_HasProperty(ctx, value, key)) {
      JSValue v = JS_GetProperty(ctx, value, key);
      velocityX_ = Converter<IDLOptional<IDLDouble>>::FromValue(ctx, v, exception_state);
      JS_FreeValue(ctx, v);
      has_velocityX_ = true;
    }
    JS_FreeAtom(ctx, key);
  }
  {
    JSAtom key = JS_NewAtom(ctx, "velocityY");
    if (JS_HasProperty(ctx, value, key)) {
      JSValue v = JS_GetProperty(ctx, value, key);
      velocityY_ = Converter<IDLOptional<IDLDouble>>::FromValue(ctx, v, exception_state);
      JS_FreeValue(ctx, v);
      has_velocityY_ = true;
    }
    JS_FreeAtom(ctx, key);
  }
  {
    JSAtom key = JS_NewAtom(ctx, "scale");
    if (JS_HasProperty(ctx, value, key)) {
      JSValue v = JS_GetProperty(ctx, value, key);
      scale_ = Converter<IDLOptional<IDLDouble>>::FromValue(ctx, v, exception_state);
      JS_FreeValue(ctx, v);
      has_scale_ = true;
    }
    JS_FreeAtom(ctx, key);
  }
  {
    JSAtom key = JS_NewAtom(ctx, "rotation");
    if (JS_HasProperty(ctx, value, key)) {
      JSValue v = JS_GetProperty(ctx, value, key);
      rotation_ = Converter<IDLOptional<IDLDouble>>::FromValue(ctx, v, exception_state);
      JS_FreeValue(ctx, v);
      has_rotation_ = true;
    }
    JS_FreeAtom(ctx, key);
  }
  return true;
}
}