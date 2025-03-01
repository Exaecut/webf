/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#include "qjs_mouse_event_init.h"
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
std::shared_ptr<MouseEventInit> MouseEventInit::Create() {
  return std::make_shared<MouseEventInit>();
}
std::shared_ptr<MouseEventInit> MouseEventInit::Create(JSContext* ctx, JSValue value, ExceptionState& exception_state) {
  return std::make_shared<MouseEventInit>(ctx, value, exception_state);
}
MouseEventInit::MouseEventInit()  {}
MouseEventInit::MouseEventInit(JSContext* ctx, JSValue value, ExceptionState& exception_state): MouseEventInit() {
  FillMembersWithQJSObject(ctx, value, exception_state);
}
bool MouseEventInit::FillQJSObjectWithMembers(JSContext* ctx, JSValue qjs_dictionary) const {
  UIEventInit::FillQJSObjectWithMembers(ctx, qjs_dictionary);
  if (!JS_IsObject(qjs_dictionary)) {
    return false;
  }
  return true;
}
bool MouseEventInit::FillMembersWithQJSObject(JSContext* ctx, JSValue value, ExceptionState& exception_state) {
  UIEventInit::FillMembersWithQJSObject(ctx, value, exception_state);
  if (!JS_IsObject(value)) {
    return false;
  }
  return true;
}
}