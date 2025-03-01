/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#include "qjs_scroll_options.h"
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
std::shared_ptr<ScrollOptions> ScrollOptions::Create() {
  return std::make_shared<ScrollOptions>();
}
std::shared_ptr<ScrollOptions> ScrollOptions::Create(JSContext* ctx, JSValue value, ExceptionState& exception_state) {
  return std::make_shared<ScrollOptions>(ctx, value, exception_state);
}
ScrollOptions::ScrollOptions()  {}
ScrollOptions::ScrollOptions(JSContext* ctx, JSValue value, ExceptionState& exception_state): ScrollOptions() {
  FillMembersWithQJSObject(ctx, value, exception_state);
}
bool ScrollOptions::FillQJSObjectWithMembers(JSContext* ctx, JSValue qjs_dictionary) const {
  if (!JS_IsObject(qjs_dictionary)) {
    return false;
  }
  JS_SetPropertyStr(ctx, qjs_dictionary, "behavior", Converter<IDLDOMString>::ToValue(ctx, behavior_));
  return true;
}
bool ScrollOptions::FillMembersWithQJSObject(JSContext* ctx, JSValue value, ExceptionState& exception_state) {
  if (!JS_IsObject(value)) {
    return false;
  }
  {
    JSValue v = JS_GetPropertyStr(ctx, value, "behavior");
    has_behavior_ = true;
    behavior_ = Converter<IDLDOMString>::FromValue(ctx, v, exception_state);
    JS_FreeValue(ctx, v);
  }
  return true;
}
}