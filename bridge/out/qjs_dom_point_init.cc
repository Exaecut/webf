/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#include "qjs_dom_point_init.h"
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
std::shared_ptr<DOMPointInit> DOMPointInit::Create() {
  return std::make_shared<DOMPointInit>();
}
std::shared_ptr<DOMPointInit> DOMPointInit::Create(JSContext* ctx, JSValue value, ExceptionState& exception_state) {
  return std::make_shared<DOMPointInit>(ctx, value, exception_state);
}
DOMPointInit::DOMPointInit()  {}
DOMPointInit::DOMPointInit(JSContext* ctx, JSValue value, ExceptionState& exception_state): DOMPointInit() {
  FillMembersWithQJSObject(ctx, value, exception_state);
}
bool DOMPointInit::FillQJSObjectWithMembers(JSContext* ctx, JSValue qjs_dictionary) const {
  if (!JS_IsObject(qjs_dictionary)) {
    return false;
  }
  JS_SetPropertyStr(ctx, qjs_dictionary, "x", Converter<IDLOptional<IDLDouble>>::ToValue(ctx, x_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "y", Converter<IDLOptional<IDLDouble>>::ToValue(ctx, y_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "z", Converter<IDLOptional<IDLDouble>>::ToValue(ctx, z_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "w", Converter<IDLOptional<IDLDouble>>::ToValue(ctx, w_));
  return true;
}
bool DOMPointInit::FillMembersWithQJSObject(JSContext* ctx, JSValue value, ExceptionState& exception_state) {
  if (!JS_IsObject(value)) {
    return false;
  }
  {
    JSAtom key = JS_NewAtom(ctx, "x");
    if (JS_HasProperty(ctx, value, key)) {
      JSValue v = JS_GetProperty(ctx, value, key);
      x_ = Converter<IDLOptional<IDLDouble>>::FromValue(ctx, v, exception_state);
      JS_FreeValue(ctx, v);
      has_x_ = true;
    }
    JS_FreeAtom(ctx, key);
  }
  {
    JSAtom key = JS_NewAtom(ctx, "y");
    if (JS_HasProperty(ctx, value, key)) {
      JSValue v = JS_GetProperty(ctx, value, key);
      y_ = Converter<IDLOptional<IDLDouble>>::FromValue(ctx, v, exception_state);
      JS_FreeValue(ctx, v);
      has_y_ = true;
    }
    JS_FreeAtom(ctx, key);
  }
  {
    JSAtom key = JS_NewAtom(ctx, "z");
    if (JS_HasProperty(ctx, value, key)) {
      JSValue v = JS_GetProperty(ctx, value, key);
      z_ = Converter<IDLOptional<IDLDouble>>::FromValue(ctx, v, exception_state);
      JS_FreeValue(ctx, v);
      has_z_ = true;
    }
    JS_FreeAtom(ctx, key);
  }
  {
    JSAtom key = JS_NewAtom(ctx, "w");
    if (JS_HasProperty(ctx, value, key)) {
      JSValue v = JS_GetProperty(ctx, value, key);
      w_ = Converter<IDLOptional<IDLDouble>>::FromValue(ctx, v, exception_state);
      JS_FreeValue(ctx, v);
      has_w_ = true;
    }
    JS_FreeAtom(ctx, key);
  }
  return true;
}
}