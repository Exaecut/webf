/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#include "qjs_touch_init.h"
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
std::shared_ptr<TouchInit> TouchInit::Create() {
  return std::make_shared<TouchInit>();
}
std::shared_ptr<TouchInit> TouchInit::Create(JSContext* ctx, JSValue value, ExceptionState& exception_state) {
  return std::make_shared<TouchInit>(ctx, value, exception_state);
}
TouchInit::TouchInit()  {}
TouchInit::TouchInit(JSContext* ctx, JSValue value, ExceptionState& exception_state): TouchInit() {
  FillMembersWithQJSObject(ctx, value, exception_state);
}
bool TouchInit::FillQJSObjectWithMembers(JSContext* ctx, JSValue qjs_dictionary) const {
  if (!JS_IsObject(qjs_dictionary)) {
    return false;
  }
  JS_SetPropertyStr(ctx, qjs_dictionary, "identifier", Converter<IDLDouble>::ToValue(ctx, identifier_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "target", Converter<EventTarget>::ToValue(ctx, target_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "clientX", Converter<IDLOptional<IDLDouble>>::ToValue(ctx, clientX_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "clientY", Converter<IDLOptional<IDLDouble>>::ToValue(ctx, clientY_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "screenX", Converter<IDLOptional<IDLDouble>>::ToValue(ctx, screenX_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "screenY", Converter<IDLOptional<IDLDouble>>::ToValue(ctx, screenY_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "pageX", Converter<IDLOptional<IDLDouble>>::ToValue(ctx, pageX_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "pageY", Converter<IDLOptional<IDLDouble>>::ToValue(ctx, pageY_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "radiusX", Converter<IDLOptional<IDLDouble>>::ToValue(ctx, radiusX_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "radiusY", Converter<IDLOptional<IDLDouble>>::ToValue(ctx, radiusY_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "rotationAngle", Converter<IDLOptional<IDLDouble>>::ToValue(ctx, rotationAngle_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "force", Converter<IDLOptional<IDLDouble>>::ToValue(ctx, force_));
  return true;
}
bool TouchInit::FillMembersWithQJSObject(JSContext* ctx, JSValue value, ExceptionState& exception_state) {
  if (!JS_IsObject(value)) {
    return false;
  }
  {
    JSValue v = JS_GetPropertyStr(ctx, value, "identifier");
    has_identifier_ = true;
    identifier_ = Converter<IDLDouble>::FromValue(ctx, v, exception_state);
    JS_FreeValue(ctx, v);
  }
  {
    JSValue v = JS_GetPropertyStr(ctx, value, "target");
    has_target_ = true;
    target_ = Converter<EventTarget>::FromValue(ctx, v, exception_state);
    JS_FreeValue(ctx, v);
  }
  {
    JSAtom key = JS_NewAtom(ctx, "clientX");
    if (JS_HasProperty(ctx, value, key)) {
      JSValue v = JS_GetProperty(ctx, value, key);
      clientX_ = Converter<IDLOptional<IDLDouble>>::FromValue(ctx, v, exception_state);
      JS_FreeValue(ctx, v);
      has_clientX_ = true;
    }
    JS_FreeAtom(ctx, key);
  }
  {
    JSAtom key = JS_NewAtom(ctx, "clientY");
    if (JS_HasProperty(ctx, value, key)) {
      JSValue v = JS_GetProperty(ctx, value, key);
      clientY_ = Converter<IDLOptional<IDLDouble>>::FromValue(ctx, v, exception_state);
      JS_FreeValue(ctx, v);
      has_clientY_ = true;
    }
    JS_FreeAtom(ctx, key);
  }
  {
    JSAtom key = JS_NewAtom(ctx, "screenX");
    if (JS_HasProperty(ctx, value, key)) {
      JSValue v = JS_GetProperty(ctx, value, key);
      screenX_ = Converter<IDLOptional<IDLDouble>>::FromValue(ctx, v, exception_state);
      JS_FreeValue(ctx, v);
      has_screenX_ = true;
    }
    JS_FreeAtom(ctx, key);
  }
  {
    JSAtom key = JS_NewAtom(ctx, "screenY");
    if (JS_HasProperty(ctx, value, key)) {
      JSValue v = JS_GetProperty(ctx, value, key);
      screenY_ = Converter<IDLOptional<IDLDouble>>::FromValue(ctx, v, exception_state);
      JS_FreeValue(ctx, v);
      has_screenY_ = true;
    }
    JS_FreeAtom(ctx, key);
  }
  {
    JSAtom key = JS_NewAtom(ctx, "pageX");
    if (JS_HasProperty(ctx, value, key)) {
      JSValue v = JS_GetProperty(ctx, value, key);
      pageX_ = Converter<IDLOptional<IDLDouble>>::FromValue(ctx, v, exception_state);
      JS_FreeValue(ctx, v);
      has_pageX_ = true;
    }
    JS_FreeAtom(ctx, key);
  }
  {
    JSAtom key = JS_NewAtom(ctx, "pageY");
    if (JS_HasProperty(ctx, value, key)) {
      JSValue v = JS_GetProperty(ctx, value, key);
      pageY_ = Converter<IDLOptional<IDLDouble>>::FromValue(ctx, v, exception_state);
      JS_FreeValue(ctx, v);
      has_pageY_ = true;
    }
    JS_FreeAtom(ctx, key);
  }
  {
    JSAtom key = JS_NewAtom(ctx, "radiusX");
    if (JS_HasProperty(ctx, value, key)) {
      JSValue v = JS_GetProperty(ctx, value, key);
      radiusX_ = Converter<IDLOptional<IDLDouble>>::FromValue(ctx, v, exception_state);
      JS_FreeValue(ctx, v);
      has_radiusX_ = true;
    }
    JS_FreeAtom(ctx, key);
  }
  {
    JSAtom key = JS_NewAtom(ctx, "radiusY");
    if (JS_HasProperty(ctx, value, key)) {
      JSValue v = JS_GetProperty(ctx, value, key);
      radiusY_ = Converter<IDLOptional<IDLDouble>>::FromValue(ctx, v, exception_state);
      JS_FreeValue(ctx, v);
      has_radiusY_ = true;
    }
    JS_FreeAtom(ctx, key);
  }
  {
    JSAtom key = JS_NewAtom(ctx, "rotationAngle");
    if (JS_HasProperty(ctx, value, key)) {
      JSValue v = JS_GetProperty(ctx, value, key);
      rotationAngle_ = Converter<IDLOptional<IDLDouble>>::FromValue(ctx, v, exception_state);
      JS_FreeValue(ctx, v);
      has_rotationAngle_ = true;
    }
    JS_FreeAtom(ctx, key);
  }
  {
    JSAtom key = JS_NewAtom(ctx, "force");
    if (JS_HasProperty(ctx, value, key)) {
      JSValue v = JS_GetProperty(ctx, value, key);
      force_ = Converter<IDLOptional<IDLDouble>>::FromValue(ctx, v, exception_state);
      JS_FreeValue(ctx, v);
      has_force_ = true;
    }
    JS_FreeAtom(ctx, key);
  }
  return true;
}
}