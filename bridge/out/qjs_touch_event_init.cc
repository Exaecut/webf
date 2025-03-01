/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#include "qjs_touch_event_init.h"
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
std::shared_ptr<TouchEventInit> TouchEventInit::Create() {
  return std::make_shared<TouchEventInit>();
}
std::shared_ptr<TouchEventInit> TouchEventInit::Create(JSContext* ctx, JSValue value, ExceptionState& exception_state) {
  return std::make_shared<TouchEventInit>(ctx, value, exception_state);
}
TouchEventInit::TouchEventInit() : altKey_(false),ctrlKey_(false),metaKey_(false),shiftKey_(false) {}
TouchEventInit::TouchEventInit(JSContext* ctx, JSValue value, ExceptionState& exception_state): TouchEventInit() {
  FillMembersWithQJSObject(ctx, value, exception_state);
}
bool TouchEventInit::FillQJSObjectWithMembers(JSContext* ctx, JSValue qjs_dictionary) const {
  UIEventInit::FillQJSObjectWithMembers(ctx, qjs_dictionary);
  if (!JS_IsObject(qjs_dictionary)) {
    return false;
  }
  JS_SetPropertyStr(ctx, qjs_dictionary, "altKey", Converter<IDLOptional<IDLBoolean>>::ToValue(ctx, altKey_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "changedTouches", Converter<IDLOptional<TouchList>>::ToValue(ctx, changedTouches_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "ctrlKey", Converter<IDLOptional<IDLBoolean>>::ToValue(ctx, ctrlKey_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "metaKey", Converter<IDLOptional<IDLBoolean>>::ToValue(ctx, metaKey_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "shiftKey", Converter<IDLOptional<IDLBoolean>>::ToValue(ctx, shiftKey_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "targetTouches", Converter<IDLOptional<TouchList>>::ToValue(ctx, targetTouches_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "touches", Converter<IDLOptional<TouchList>>::ToValue(ctx, touches_));
  return true;
}
bool TouchEventInit::FillMembersWithQJSObject(JSContext* ctx, JSValue value, ExceptionState& exception_state) {
  UIEventInit::FillMembersWithQJSObject(ctx, value, exception_state);
  if (!JS_IsObject(value)) {
    return false;
  }
  {
    JSAtom key = JS_NewAtom(ctx, "altKey");
    if (JS_HasProperty(ctx, value, key)) {
      JSValue v = JS_GetProperty(ctx, value, key);
      altKey_ = Converter<IDLOptional<IDLBoolean>>::FromValue(ctx, v, exception_state);
      JS_FreeValue(ctx, v);
      has_altKey_ = true;
    }
    JS_FreeAtom(ctx, key);
  }
  {
    JSAtom key = JS_NewAtom(ctx, "changedTouches");
    if (JS_HasProperty(ctx, value, key)) {
      JSValue v = JS_GetProperty(ctx, value, key);
      changedTouches_ = Converter<IDLOptional<TouchList>>::FromValue(ctx, v, exception_state);
      JS_FreeValue(ctx, v);
      has_changedTouches_ = true;
    }
    JS_FreeAtom(ctx, key);
  }
  {
    JSAtom key = JS_NewAtom(ctx, "ctrlKey");
    if (JS_HasProperty(ctx, value, key)) {
      JSValue v = JS_GetProperty(ctx, value, key);
      ctrlKey_ = Converter<IDLOptional<IDLBoolean>>::FromValue(ctx, v, exception_state);
      JS_FreeValue(ctx, v);
      has_ctrlKey_ = true;
    }
    JS_FreeAtom(ctx, key);
  }
  {
    JSAtom key = JS_NewAtom(ctx, "metaKey");
    if (JS_HasProperty(ctx, value, key)) {
      JSValue v = JS_GetProperty(ctx, value, key);
      metaKey_ = Converter<IDLOptional<IDLBoolean>>::FromValue(ctx, v, exception_state);
      JS_FreeValue(ctx, v);
      has_metaKey_ = true;
    }
    JS_FreeAtom(ctx, key);
  }
  {
    JSAtom key = JS_NewAtom(ctx, "shiftKey");
    if (JS_HasProperty(ctx, value, key)) {
      JSValue v = JS_GetProperty(ctx, value, key);
      shiftKey_ = Converter<IDLOptional<IDLBoolean>>::FromValue(ctx, v, exception_state);
      JS_FreeValue(ctx, v);
      has_shiftKey_ = true;
    }
    JS_FreeAtom(ctx, key);
  }
  {
    JSAtom key = JS_NewAtom(ctx, "targetTouches");
    if (JS_HasProperty(ctx, value, key)) {
      JSValue v = JS_GetProperty(ctx, value, key);
      targetTouches_ = Converter<IDLOptional<TouchList>>::FromValue(ctx, v, exception_state);
      JS_FreeValue(ctx, v);
      has_targetTouches_ = true;
    }
    JS_FreeAtom(ctx, key);
  }
  {
    JSAtom key = JS_NewAtom(ctx, "touches");
    if (JS_HasProperty(ctx, value, key)) {
      JSValue v = JS_GetProperty(ctx, value, key);
      touches_ = Converter<IDLOptional<TouchList>>::FromValue(ctx, v, exception_state);
      JS_FreeValue(ctx, v);
      has_touches_ = true;
    }
    JS_FreeAtom(ctx, key);
  }
  return true;
}
}