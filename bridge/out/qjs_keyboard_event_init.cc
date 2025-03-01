/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#include "qjs_keyboard_event_init.h"
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
std::shared_ptr<KeyboardEventInit> KeyboardEventInit::Create() {
  return std::make_shared<KeyboardEventInit>();
}
std::shared_ptr<KeyboardEventInit> KeyboardEventInit::Create(JSContext* ctx, JSValue value, ExceptionState& exception_state) {
  return std::make_shared<KeyboardEventInit>(ctx, value, exception_state);
}
KeyboardEventInit::KeyboardEventInit() : altKey_(false),ctrlKey_(false),isComposing_(false),metaKey_(false),repeat_(false),shiftKey_(false) {}
KeyboardEventInit::KeyboardEventInit(JSContext* ctx, JSValue value, ExceptionState& exception_state): KeyboardEventInit() {
  FillMembersWithQJSObject(ctx, value, exception_state);
}
bool KeyboardEventInit::FillQJSObjectWithMembers(JSContext* ctx, JSValue qjs_dictionary) const {
  UIEventInit::FillQJSObjectWithMembers(ctx, qjs_dictionary);
  if (!JS_IsObject(qjs_dictionary)) {
    return false;
  }
  JS_SetPropertyStr(ctx, qjs_dictionary, "altKey", Converter<IDLOptional<IDLBoolean>>::ToValue(ctx, altKey_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "charCode", Converter<IDLOptional<IDLDouble>>::ToValue(ctx, charCode_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "code", Converter<IDLOptional<IDLDOMString>>::ToValue(ctx, code_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "ctrlKey", Converter<IDLOptional<IDLBoolean>>::ToValue(ctx, ctrlKey_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "isComposing", Converter<IDLOptional<IDLBoolean>>::ToValue(ctx, isComposing_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "key", Converter<IDLOptional<IDLDOMString>>::ToValue(ctx, key_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "keyCode", Converter<IDLOptional<IDLDouble>>::ToValue(ctx, keyCode_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "location", Converter<IDLOptional<IDLDouble>>::ToValue(ctx, location_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "metaKey", Converter<IDLOptional<IDLBoolean>>::ToValue(ctx, metaKey_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "repeat", Converter<IDLOptional<IDLBoolean>>::ToValue(ctx, repeat_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "shiftKey", Converter<IDLOptional<IDLBoolean>>::ToValue(ctx, shiftKey_));
  return true;
}
bool KeyboardEventInit::FillMembersWithQJSObject(JSContext* ctx, JSValue value, ExceptionState& exception_state) {
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
    JSAtom key = JS_NewAtom(ctx, "charCode");
    if (JS_HasProperty(ctx, value, key)) {
      JSValue v = JS_GetProperty(ctx, value, key);
      charCode_ = Converter<IDLOptional<IDLDouble>>::FromValue(ctx, v, exception_state);
      JS_FreeValue(ctx, v);
      has_charCode_ = true;
    }
    JS_FreeAtom(ctx, key);
  }
  {
    JSAtom key = JS_NewAtom(ctx, "code");
    if (JS_HasProperty(ctx, value, key)) {
      JSValue v = JS_GetProperty(ctx, value, key);
      code_ = Converter<IDLOptional<IDLDOMString>>::FromValue(ctx, v, exception_state);
      JS_FreeValue(ctx, v);
      has_code_ = true;
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
    JSAtom key = JS_NewAtom(ctx, "isComposing");
    if (JS_HasProperty(ctx, value, key)) {
      JSValue v = JS_GetProperty(ctx, value, key);
      isComposing_ = Converter<IDLOptional<IDLBoolean>>::FromValue(ctx, v, exception_state);
      JS_FreeValue(ctx, v);
      has_isComposing_ = true;
    }
    JS_FreeAtom(ctx, key);
  }
  {
    JSAtom key = JS_NewAtom(ctx, "key");
    if (JS_HasProperty(ctx, value, key)) {
      JSValue v = JS_GetProperty(ctx, value, key);
      key_ = Converter<IDLOptional<IDLDOMString>>::FromValue(ctx, v, exception_state);
      JS_FreeValue(ctx, v);
      has_key_ = true;
    }
    JS_FreeAtom(ctx, key);
  }
  {
    JSAtom key = JS_NewAtom(ctx, "keyCode");
    if (JS_HasProperty(ctx, value, key)) {
      JSValue v = JS_GetProperty(ctx, value, key);
      keyCode_ = Converter<IDLOptional<IDLDouble>>::FromValue(ctx, v, exception_state);
      JS_FreeValue(ctx, v);
      has_keyCode_ = true;
    }
    JS_FreeAtom(ctx, key);
  }
  {
    JSAtom key = JS_NewAtom(ctx, "location");
    if (JS_HasProperty(ctx, value, key)) {
      JSValue v = JS_GetProperty(ctx, value, key);
      location_ = Converter<IDLOptional<IDLDouble>>::FromValue(ctx, v, exception_state);
      JS_FreeValue(ctx, v);
      has_location_ = true;
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
    JSAtom key = JS_NewAtom(ctx, "repeat");
    if (JS_HasProperty(ctx, value, key)) {
      JSValue v = JS_GetProperty(ctx, value, key);
      repeat_ = Converter<IDLOptional<IDLBoolean>>::FromValue(ctx, v, exception_state);
      JS_FreeValue(ctx, v);
      has_repeat_ = true;
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
  return true;
}
}