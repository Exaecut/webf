/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#include "qjs_animation_event_init.h"
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
std::shared_ptr<AnimationEventInit> AnimationEventInit::Create() {
  return std::make_shared<AnimationEventInit>();
}
std::shared_ptr<AnimationEventInit> AnimationEventInit::Create(JSContext* ctx, JSValue value, ExceptionState& exception_state) {
  return std::make_shared<AnimationEventInit>(ctx, value, exception_state);
}
AnimationEventInit::AnimationEventInit()  {}
AnimationEventInit::AnimationEventInit(JSContext* ctx, JSValue value, ExceptionState& exception_state): AnimationEventInit() {
  FillMembersWithQJSObject(ctx, value, exception_state);
}
bool AnimationEventInit::FillQJSObjectWithMembers(JSContext* ctx, JSValue qjs_dictionary) const {
  EventInit::FillQJSObjectWithMembers(ctx, qjs_dictionary);
  if (!JS_IsObject(qjs_dictionary)) {
    return false;
  }
  JS_SetPropertyStr(ctx, qjs_dictionary, "animationName", Converter<IDLOptional<IDLDOMString>>::ToValue(ctx, animationName_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "elapsedTime", Converter<IDLOptional<IDLDouble>>::ToValue(ctx, elapsedTime_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "pseudoElement", Converter<IDLOptional<IDLDOMString>>::ToValue(ctx, pseudoElement_));
  return true;
}
bool AnimationEventInit::FillMembersWithQJSObject(JSContext* ctx, JSValue value, ExceptionState& exception_state) {
  EventInit::FillMembersWithQJSObject(ctx, value, exception_state);
  if (!JS_IsObject(value)) {
    return false;
  }
  {
    JSAtom key = JS_NewAtom(ctx, "animationName");
    if (JS_HasProperty(ctx, value, key)) {
      JSValue v = JS_GetProperty(ctx, value, key);
      animationName_ = Converter<IDLOptional<IDLDOMString>>::FromValue(ctx, v, exception_state);
      JS_FreeValue(ctx, v);
      has_animationName_ = true;
    }
    JS_FreeAtom(ctx, key);
  }
  {
    JSAtom key = JS_NewAtom(ctx, "elapsedTime");
    if (JS_HasProperty(ctx, value, key)) {
      JSValue v = JS_GetProperty(ctx, value, key);
      elapsedTime_ = Converter<IDLOptional<IDLDouble>>::FromValue(ctx, v, exception_state);
      JS_FreeValue(ctx, v);
      has_elapsedTime_ = true;
    }
    JS_FreeAtom(ctx, key);
  }
  {
    JSAtom key = JS_NewAtom(ctx, "pseudoElement");
    if (JS_HasProperty(ctx, value, key)) {
      JSValue v = JS_GetProperty(ctx, value, key);
      pseudoElement_ = Converter<IDLOptional<IDLDOMString>>::FromValue(ctx, v, exception_state);
      JS_FreeValue(ctx, v);
      has_pseudoElement_ = true;
    }
    JS_FreeAtom(ctx, key);
  }
  return true;
}
}