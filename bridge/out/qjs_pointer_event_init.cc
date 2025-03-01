/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#include "qjs_pointer_event_init.h"
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
std::shared_ptr<PointerEventInit> PointerEventInit::Create() {
  return std::make_shared<PointerEventInit>();
}
std::shared_ptr<PointerEventInit> PointerEventInit::Create(JSContext* ctx, JSValue value, ExceptionState& exception_state) {
  return std::make_shared<PointerEventInit>(ctx, value, exception_state);
}
PointerEventInit::PointerEventInit() : isPrimary_(false) {}
PointerEventInit::PointerEventInit(JSContext* ctx, JSValue value, ExceptionState& exception_state): PointerEventInit() {
  FillMembersWithQJSObject(ctx, value, exception_state);
}
bool PointerEventInit::FillQJSObjectWithMembers(JSContext* ctx, JSValue qjs_dictionary) const {
  MouseEventInit::FillQJSObjectWithMembers(ctx, qjs_dictionary);
  if (!JS_IsObject(qjs_dictionary)) {
    return false;
  }
  JS_SetPropertyStr(ctx, qjs_dictionary, "isPrimary", Converter<IDLOptional<IDLBoolean>>::ToValue(ctx, isPrimary_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "pointerId", Converter<IDLOptional<IDLDouble>>::ToValue(ctx, pointerId_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "pointerType", Converter<IDLOptional<IDLDOMString>>::ToValue(ctx, pointerType_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "pressure", Converter<IDLOptional<IDLDouble>>::ToValue(ctx, pressure_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "tangentialPressure", Converter<IDLOptional<IDLDouble>>::ToValue(ctx, tangentialPressure_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "tiltX", Converter<IDLOptional<IDLDouble>>::ToValue(ctx, tiltX_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "tiltY", Converter<IDLOptional<IDLDouble>>::ToValue(ctx, tiltY_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "twist", Converter<IDLOptional<IDLDouble>>::ToValue(ctx, twist_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "width", Converter<IDLOptional<IDLDouble>>::ToValue(ctx, width_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "height", Converter<IDLOptional<IDLDouble>>::ToValue(ctx, height_));
  return true;
}
bool PointerEventInit::FillMembersWithQJSObject(JSContext* ctx, JSValue value, ExceptionState& exception_state) {
  MouseEventInit::FillMembersWithQJSObject(ctx, value, exception_state);
  if (!JS_IsObject(value)) {
    return false;
  }
  {
    JSAtom key = JS_NewAtom(ctx, "isPrimary");
    if (JS_HasProperty(ctx, value, key)) {
      JSValue v = JS_GetProperty(ctx, value, key);
      isPrimary_ = Converter<IDLOptional<IDLBoolean>>::FromValue(ctx, v, exception_state);
      JS_FreeValue(ctx, v);
      has_isPrimary_ = true;
    }
    JS_FreeAtom(ctx, key);
  }
  {
    JSAtom key = JS_NewAtom(ctx, "pointerId");
    if (JS_HasProperty(ctx, value, key)) {
      JSValue v = JS_GetProperty(ctx, value, key);
      pointerId_ = Converter<IDLOptional<IDLDouble>>::FromValue(ctx, v, exception_state);
      JS_FreeValue(ctx, v);
      has_pointerId_ = true;
    }
    JS_FreeAtom(ctx, key);
  }
  {
    JSAtom key = JS_NewAtom(ctx, "pointerType");
    if (JS_HasProperty(ctx, value, key)) {
      JSValue v = JS_GetProperty(ctx, value, key);
      pointerType_ = Converter<IDLOptional<IDLDOMString>>::FromValue(ctx, v, exception_state);
      JS_FreeValue(ctx, v);
      has_pointerType_ = true;
    }
    JS_FreeAtom(ctx, key);
  }
  {
    JSAtom key = JS_NewAtom(ctx, "pressure");
    if (JS_HasProperty(ctx, value, key)) {
      JSValue v = JS_GetProperty(ctx, value, key);
      pressure_ = Converter<IDLOptional<IDLDouble>>::FromValue(ctx, v, exception_state);
      JS_FreeValue(ctx, v);
      has_pressure_ = true;
    }
    JS_FreeAtom(ctx, key);
  }
  {
    JSAtom key = JS_NewAtom(ctx, "tangentialPressure");
    if (JS_HasProperty(ctx, value, key)) {
      JSValue v = JS_GetProperty(ctx, value, key);
      tangentialPressure_ = Converter<IDLOptional<IDLDouble>>::FromValue(ctx, v, exception_state);
      JS_FreeValue(ctx, v);
      has_tangentialPressure_ = true;
    }
    JS_FreeAtom(ctx, key);
  }
  {
    JSAtom key = JS_NewAtom(ctx, "tiltX");
    if (JS_HasProperty(ctx, value, key)) {
      JSValue v = JS_GetProperty(ctx, value, key);
      tiltX_ = Converter<IDLOptional<IDLDouble>>::FromValue(ctx, v, exception_state);
      JS_FreeValue(ctx, v);
      has_tiltX_ = true;
    }
    JS_FreeAtom(ctx, key);
  }
  {
    JSAtom key = JS_NewAtom(ctx, "tiltY");
    if (JS_HasProperty(ctx, value, key)) {
      JSValue v = JS_GetProperty(ctx, value, key);
      tiltY_ = Converter<IDLOptional<IDLDouble>>::FromValue(ctx, v, exception_state);
      JS_FreeValue(ctx, v);
      has_tiltY_ = true;
    }
    JS_FreeAtom(ctx, key);
  }
  {
    JSAtom key = JS_NewAtom(ctx, "twist");
    if (JS_HasProperty(ctx, value, key)) {
      JSValue v = JS_GetProperty(ctx, value, key);
      twist_ = Converter<IDLOptional<IDLDouble>>::FromValue(ctx, v, exception_state);
      JS_FreeValue(ctx, v);
      has_twist_ = true;
    }
    JS_FreeAtom(ctx, key);
  }
  {
    JSAtom key = JS_NewAtom(ctx, "width");
    if (JS_HasProperty(ctx, value, key)) {
      JSValue v = JS_GetProperty(ctx, value, key);
      width_ = Converter<IDLOptional<IDLDouble>>::FromValue(ctx, v, exception_state);
      JS_FreeValue(ctx, v);
      has_width_ = true;
    }
    JS_FreeAtom(ctx, key);
  }
  {
    JSAtom key = JS_NewAtom(ctx, "height");
    if (JS_HasProperty(ctx, value, key)) {
      JSValue v = JS_GetProperty(ctx, value, key);
      height_ = Converter<IDLOptional<IDLDouble>>::FromValue(ctx, v, exception_state);
      JS_FreeValue(ctx, v);
      has_height_ = true;
    }
    JS_FreeAtom(ctx, key);
  }
  return true;
}
}