/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#include "qjs_dom_matrix_init.h"
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
std::shared_ptr<DOMMatrixInit> DOMMatrixInit::Create() {
  return std::make_shared<DOMMatrixInit>();
}
std::shared_ptr<DOMMatrixInit> DOMMatrixInit::Create(JSContext* ctx, JSValue value, ExceptionState& exception_state) {
  return std::make_shared<DOMMatrixInit>(ctx, value, exception_state);
}
DOMMatrixInit::DOMMatrixInit() : is2D_(false),isIdentity_(false) {}
DOMMatrixInit::DOMMatrixInit(JSContext* ctx, JSValue value, ExceptionState& exception_state): DOMMatrixInit() {
  FillMembersWithQJSObject(ctx, value, exception_state);
}
bool DOMMatrixInit::FillQJSObjectWithMembers(JSContext* ctx, JSValue qjs_dictionary) const {
  if (!JS_IsObject(qjs_dictionary)) {
    return false;
  }
  JS_SetPropertyStr(ctx, qjs_dictionary, "m11", Converter<IDLDouble>::ToValue(ctx, m11_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "m12", Converter<IDLDouble>::ToValue(ctx, m12_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "m13", Converter<IDLDouble>::ToValue(ctx, m13_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "m14", Converter<IDLDouble>::ToValue(ctx, m14_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "m21", Converter<IDLDouble>::ToValue(ctx, m21_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "m22", Converter<IDLDouble>::ToValue(ctx, m22_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "m23", Converter<IDLDouble>::ToValue(ctx, m23_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "m24", Converter<IDLDouble>::ToValue(ctx, m24_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "m31", Converter<IDLDouble>::ToValue(ctx, m31_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "m32", Converter<IDLDouble>::ToValue(ctx, m32_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "m33", Converter<IDLDouble>::ToValue(ctx, m33_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "m34", Converter<IDLDouble>::ToValue(ctx, m34_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "m41", Converter<IDLDouble>::ToValue(ctx, m41_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "m42", Converter<IDLDouble>::ToValue(ctx, m42_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "m43", Converter<IDLDouble>::ToValue(ctx, m43_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "m44", Converter<IDLDouble>::ToValue(ctx, m44_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "is2D", Converter<IDLBoolean>::ToValue(ctx, is2D_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "isIdentity", Converter<IDLBoolean>::ToValue(ctx, isIdentity_));
  return true;
}
bool DOMMatrixInit::FillMembersWithQJSObject(JSContext* ctx, JSValue value, ExceptionState& exception_state) {
  if (!JS_IsObject(value)) {
    return false;
  }
  {
    JSValue v = JS_GetPropertyStr(ctx, value, "m11");
    has_m11_ = true;
    m11_ = Converter<IDLDouble>::FromValue(ctx, v, exception_state);
    JS_FreeValue(ctx, v);
  }
  {
    JSValue v = JS_GetPropertyStr(ctx, value, "m12");
    has_m12_ = true;
    m12_ = Converter<IDLDouble>::FromValue(ctx, v, exception_state);
    JS_FreeValue(ctx, v);
  }
  {
    JSValue v = JS_GetPropertyStr(ctx, value, "m13");
    has_m13_ = true;
    m13_ = Converter<IDLDouble>::FromValue(ctx, v, exception_state);
    JS_FreeValue(ctx, v);
  }
  {
    JSValue v = JS_GetPropertyStr(ctx, value, "m14");
    has_m14_ = true;
    m14_ = Converter<IDLDouble>::FromValue(ctx, v, exception_state);
    JS_FreeValue(ctx, v);
  }
  {
    JSValue v = JS_GetPropertyStr(ctx, value, "m21");
    has_m21_ = true;
    m21_ = Converter<IDLDouble>::FromValue(ctx, v, exception_state);
    JS_FreeValue(ctx, v);
  }
  {
    JSValue v = JS_GetPropertyStr(ctx, value, "m22");
    has_m22_ = true;
    m22_ = Converter<IDLDouble>::FromValue(ctx, v, exception_state);
    JS_FreeValue(ctx, v);
  }
  {
    JSValue v = JS_GetPropertyStr(ctx, value, "m23");
    has_m23_ = true;
    m23_ = Converter<IDLDouble>::FromValue(ctx, v, exception_state);
    JS_FreeValue(ctx, v);
  }
  {
    JSValue v = JS_GetPropertyStr(ctx, value, "m24");
    has_m24_ = true;
    m24_ = Converter<IDLDouble>::FromValue(ctx, v, exception_state);
    JS_FreeValue(ctx, v);
  }
  {
    JSValue v = JS_GetPropertyStr(ctx, value, "m31");
    has_m31_ = true;
    m31_ = Converter<IDLDouble>::FromValue(ctx, v, exception_state);
    JS_FreeValue(ctx, v);
  }
  {
    JSValue v = JS_GetPropertyStr(ctx, value, "m32");
    has_m32_ = true;
    m32_ = Converter<IDLDouble>::FromValue(ctx, v, exception_state);
    JS_FreeValue(ctx, v);
  }
  {
    JSValue v = JS_GetPropertyStr(ctx, value, "m33");
    has_m33_ = true;
    m33_ = Converter<IDLDouble>::FromValue(ctx, v, exception_state);
    JS_FreeValue(ctx, v);
  }
  {
    JSValue v = JS_GetPropertyStr(ctx, value, "m34");
    has_m34_ = true;
    m34_ = Converter<IDLDouble>::FromValue(ctx, v, exception_state);
    JS_FreeValue(ctx, v);
  }
  {
    JSValue v = JS_GetPropertyStr(ctx, value, "m41");
    has_m41_ = true;
    m41_ = Converter<IDLDouble>::FromValue(ctx, v, exception_state);
    JS_FreeValue(ctx, v);
  }
  {
    JSValue v = JS_GetPropertyStr(ctx, value, "m42");
    has_m42_ = true;
    m42_ = Converter<IDLDouble>::FromValue(ctx, v, exception_state);
    JS_FreeValue(ctx, v);
  }
  {
    JSValue v = JS_GetPropertyStr(ctx, value, "m43");
    has_m43_ = true;
    m43_ = Converter<IDLDouble>::FromValue(ctx, v, exception_state);
    JS_FreeValue(ctx, v);
  }
  {
    JSValue v = JS_GetPropertyStr(ctx, value, "m44");
    has_m44_ = true;
    m44_ = Converter<IDLDouble>::FromValue(ctx, v, exception_state);
    JS_FreeValue(ctx, v);
  }
  {
    JSValue v = JS_GetPropertyStr(ctx, value, "is2D");
    has_is2D_ = true;
    is2D_ = Converter<IDLBoolean>::FromValue(ctx, v, exception_state);
    JS_FreeValue(ctx, v);
  }
  {
    JSValue v = JS_GetPropertyStr(ctx, value, "isIdentity");
    has_isIdentity_ = true;
    isIdentity_ = Converter<IDLBoolean>::FromValue(ctx, v, exception_state);
    JS_FreeValue(ctx, v);
  }
  return true;
}
}