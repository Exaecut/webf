/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#include "qjs_performance_mark_options.h"
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
std::shared_ptr<PerformanceMarkOptions> PerformanceMarkOptions::Create() {
  return std::make_shared<PerformanceMarkOptions>();
}
std::shared_ptr<PerformanceMarkOptions> PerformanceMarkOptions::Create(JSContext* ctx, JSValue value, ExceptionState& exception_state) {
  return std::make_shared<PerformanceMarkOptions>(ctx, value, exception_state);
}
PerformanceMarkOptions::PerformanceMarkOptions()  {}
PerformanceMarkOptions::PerformanceMarkOptions(JSContext* ctx, JSValue value, ExceptionState& exception_state): PerformanceMarkOptions() {
  FillMembersWithQJSObject(ctx, value, exception_state);
}
bool PerformanceMarkOptions::FillQJSObjectWithMembers(JSContext* ctx, JSValue qjs_dictionary) const {
  if (!JS_IsObject(qjs_dictionary)) {
    return false;
  }
  JS_SetPropertyStr(ctx, qjs_dictionary, "detail", Converter<IDLOptional<IDLAny>>::ToValue(ctx, detail_));
  JS_SetPropertyStr(ctx, qjs_dictionary, "startTime", Converter<IDLOptional<IDLDouble>>::ToValue(ctx, startTime_));
  return true;
}
bool PerformanceMarkOptions::FillMembersWithQJSObject(JSContext* ctx, JSValue value, ExceptionState& exception_state) {
  if (!JS_IsObject(value)) {
    return false;
  }
  {
    JSAtom key = JS_NewAtom(ctx, "detail");
    if (JS_HasProperty(ctx, value, key)) {
      JSValue v = JS_GetProperty(ctx, value, key);
      detail_ = Converter<IDLOptional<IDLAny>>::FromValue(ctx, v, exception_state);
      JS_FreeValue(ctx, v);
      has_detail_ = true;
    }
    JS_FreeAtom(ctx, key);
  }
  {
    JSAtom key = JS_NewAtom(ctx, "startTime");
    if (JS_HasProperty(ctx, value, key)) {
      JSValue v = JS_GetProperty(ctx, value, key);
      startTime_ = Converter<IDLOptional<IDLDouble>>::FromValue(ctx, v, exception_state);
      JS_FreeValue(ctx, v);
      has_startTime_ = true;
    }
    JS_FreeAtom(ctx, key);
  }
  return true;
}
}