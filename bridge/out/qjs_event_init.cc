/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#include "qjs_event_init.h"
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
std::shared_ptr<EventInit> EventInit::Create() {
  return std::make_shared<EventInit>();
}
std::shared_ptr<EventInit> EventInit::Create(JSContext* ctx, JSValue value, ExceptionState& exception_state) {
  return std::make_shared<EventInit>(ctx, value, exception_state);
}
EventInit::EventInit() : bubbles_(false),cancelable_(false),composed_(false) {}
EventInit::EventInit(JSContext* ctx, JSValue value, ExceptionState& exception_state): EventInit() {
  FillMembersWithQJSObject(ctx, value, exception_state);
}
bool EventInit::FillQJSObjectWithMembers(JSContext* ctx, JSValue qjs_dictionary) const {
  if (!JS_IsObject(qjs_dictionary)) {
    return false;
  }
  JS_SetPropertyStr(ctx, qjs_dictionary, "bubbles", Converter<IDLOptional<IDLBoolean>>::ToValue(ctx, bubbles_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "cancelable", Converter<IDLOptional<IDLBoolean>>::ToValue(ctx, cancelable_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "composed", Converter<IDLOptional<IDLBoolean>>::ToValue(ctx, composed_));
  return true;
}
bool EventInit::FillMembersWithQJSObject(JSContext* ctx, JSValue value, ExceptionState& exception_state) {
  if (!JS_IsObject(value)) {
    return false;
  }
  {
    JSAtom key = JS_NewAtom(ctx, "bubbles");
    if (JS_HasProperty(ctx, value, key)) {
      JSValue v = JS_GetProperty(ctx, value, key);
      bubbles_ = Converter<IDLOptional<IDLBoolean>>::FromValue(ctx, v, exception_state);
      JS_FreeValue(ctx, v);
      has_bubbles_ = true;
    }
    JS_FreeAtom(ctx, key);
  }
  {
    JSAtom key = JS_NewAtom(ctx, "cancelable");
    if (JS_HasProperty(ctx, value, key)) {
      JSValue v = JS_GetProperty(ctx, value, key);
      cancelable_ = Converter<IDLOptional<IDLBoolean>>::FromValue(ctx, v, exception_state);
      JS_FreeValue(ctx, v);
      has_cancelable_ = true;
    }
    JS_FreeAtom(ctx, key);
  }
  {
    JSAtom key = JS_NewAtom(ctx, "composed");
    if (JS_HasProperty(ctx, value, key)) {
      JSValue v = JS_GetProperty(ctx, value, key);
      composed_ = Converter<IDLOptional<IDLBoolean>>::FromValue(ctx, v, exception_state);
      JS_FreeValue(ctx, v);
      has_composed_ = true;
    }
    JS_FreeAtom(ctx, key);
  }
  return true;
}
}