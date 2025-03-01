/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#ifndef BRIDGE_QJS_POP_STATE_EVENT_INIT_H
#define BRIDGE_QJS_POP_STATE_EVENT_INIT_H
#include <quickjs/quickjs.h>
#include "bindings/qjs/wrapper_type_info.h"
#include "bindings/qjs/generated_code_helper.h"
#include "qjs_event_init.h"
namespace webf {
class ExecutingContext;
class ExceptionState;
class PopStateEventInit : public EventInit {
 public:
  using ImplType = std::shared_ptr<PopStateEventInit>;
  static std::shared_ptr<PopStateEventInit> Create();
  static std::shared_ptr<PopStateEventInit> Create(JSContext* ctx, JSValue value, ExceptionState& exception_state);
  explicit PopStateEventInit();
  explicit PopStateEventInit(JSContext* ctx, JSValue value, ExceptionState& exception_state);
  ScriptValue state() const {
    assert(has_state_);
    return state_;
  }
  bool hasState() const { return has_state_; }
  void setState(ScriptValue value) {
    state_ = value;
    has_state_ = true;
  }
  bool FillQJSObjectWithMembers(JSContext *ctx, JSValue qjs_dictionary) const override;
  bool FillMembersWithQJSObject(JSContext* ctx, JSValue value, ExceptionState& exception_state) override;
private:
  ScriptValue state_;
  bool has_state_ = false;
};
}
#endif // BRIDGE_QJS_POP_STATE_EVENT_INIT_H