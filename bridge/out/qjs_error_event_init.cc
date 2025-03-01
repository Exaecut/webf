/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#include "qjs_error_event_init.h"
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
std::shared_ptr<ErrorEventInit> ErrorEventInit::Create() {
  return std::make_shared<ErrorEventInit>();
}
std::shared_ptr<ErrorEventInit> ErrorEventInit::Create(JSContext* ctx, JSValue value, ExceptionState& exception_state) {
  return std::make_shared<ErrorEventInit>(ctx, value, exception_state);
}
ErrorEventInit::ErrorEventInit()  {}
ErrorEventInit::ErrorEventInit(JSContext* ctx, JSValue value, ExceptionState& exception_state): ErrorEventInit() {
  FillMembersWithQJSObject(ctx, value, exception_state);
}
bool ErrorEventInit::FillQJSObjectWithMembers(JSContext* ctx, JSValue qjs_dictionary) const {
  EventInit::FillQJSObjectWithMembers(ctx, qjs_dictionary);
  if (!JS_IsObject(qjs_dictionary)) {
    return false;
  }
  JS_SetPropertyStr(ctx, qjs_dictionary, "message", Converter<IDLOptional<IDLDOMString>>::ToValue(ctx, message_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "filename", Converter<IDLOptional<IDLDOMString>>::ToValue(ctx, filename_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "lineno", Converter<IDLInt64>::ToValue(ctx, lineno_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "colno", Converter<IDLInt64>::ToValue(ctx, colno_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "error", Converter<IDLAny>::ToValue(ctx, error_));
  return true;
}
bool ErrorEventInit::FillMembersWithQJSObject(JSContext* ctx, JSValue value, ExceptionState& exception_state) {
  EventInit::FillMembersWithQJSObject(ctx, value, exception_state);
  if (!JS_IsObject(value)) {
    return false;
  }
  {
    JSAtom key = JS_NewAtom(ctx, "message");
    if (JS_HasProperty(ctx, value, key)) {
      JSValue v = JS_GetProperty(ctx, value, key);
      message_ = Converter<IDLOptional<IDLDOMString>>::FromValue(ctx, v, exception_state);
      JS_FreeValue(ctx, v);
      has_message_ = true;
    }
    JS_FreeAtom(ctx, key);
  }
  {
    JSAtom key = JS_NewAtom(ctx, "filename");
    if (JS_HasProperty(ctx, value, key)) {
      JSValue v = JS_GetProperty(ctx, value, key);
      filename_ = Converter<IDLOptional<IDLDOMString>>::FromValue(ctx, v, exception_state);
      JS_FreeValue(ctx, v);
      has_filename_ = true;
    }
    JS_FreeAtom(ctx, key);
  }
  {
    JSValue v = JS_GetPropertyStr(ctx, value, "lineno");
    has_lineno_ = true;
    lineno_ = Converter<IDLInt64>::FromValue(ctx, v, exception_state);
    JS_FreeValue(ctx, v);
  }
  {
    JSValue v = JS_GetPropertyStr(ctx, value, "colno");
    has_colno_ = true;
    colno_ = Converter<IDLInt64>::FromValue(ctx, v, exception_state);
    JS_FreeValue(ctx, v);
  }
  {
    JSValue v = JS_GetPropertyStr(ctx, value, "error");
    has_error_ = true;
    error_ = Converter<IDLAny>::FromValue(ctx, v, exception_state);
    JS_FreeValue(ctx, v);
  }
  return true;
}
}