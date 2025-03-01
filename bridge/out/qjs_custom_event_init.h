/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#ifndef BRIDGE_QJS_CUSTOM_EVENT_INIT_H
#define BRIDGE_QJS_CUSTOM_EVENT_INIT_H
#include <quickjs/quickjs.h>
#include "bindings/qjs/wrapper_type_info.h"
#include "bindings/qjs/generated_code_helper.h"
#include "qjs_event_init.h"
namespace webf {
class ExecutingContext;
class ExceptionState;
class CustomEventInit : public EventInit {
 public:
  using ImplType = std::shared_ptr<CustomEventInit>;
  static std::shared_ptr<CustomEventInit> Create();
  static std::shared_ptr<CustomEventInit> Create(JSContext* ctx, JSValue value, ExceptionState& exception_state);
  explicit CustomEventInit();
  explicit CustomEventInit(JSContext* ctx, JSValue value, ExceptionState& exception_state);
  ScriptValue detail() const {
    assert(has_detail_);
    return detail_;
  }
  bool hasDetail() const { return has_detail_; }
  void setDetail(ScriptValue value) {
    detail_ = value;
    has_detail_ = true;
  }
  bool FillQJSObjectWithMembers(JSContext *ctx, JSValue qjs_dictionary) const override;
  bool FillMembersWithQJSObject(JSContext* ctx, JSValue value, ExceptionState& exception_state) override;
private:
  ScriptValue detail_;
  bool has_detail_ = false;
};
}
#endif // BRIDGE_QJS_CUSTOM_EVENT_INIT_H