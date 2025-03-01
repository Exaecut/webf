/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#ifndef BRIDGE_QJS_PROMISE_REJECTION_EVENT_INIT_H
#define BRIDGE_QJS_PROMISE_REJECTION_EVENT_INIT_H
#include <quickjs/quickjs.h>
#include "bindings/qjs/wrapper_type_info.h"
#include "bindings/qjs/generated_code_helper.h"
#include "qjs_event_init.h"
namespace webf {
class ExecutingContext;
class ExceptionState;
class PromiseRejectionEventInit : public EventInit {
 public:
  using ImplType = std::shared_ptr<PromiseRejectionEventInit>;
  static std::shared_ptr<PromiseRejectionEventInit> Create();
  static std::shared_ptr<PromiseRejectionEventInit> Create(JSContext* ctx, JSValue value, ExceptionState& exception_state);
  explicit PromiseRejectionEventInit();
  explicit PromiseRejectionEventInit(JSContext* ctx, JSValue value, ExceptionState& exception_state);
  ScriptValue promise() const {
    assert(has_promise_);
    return promise_;
  }
  bool hasPromise() const { return has_promise_; }
  void setPromise(ScriptValue value) {
    promise_ = value;
    has_promise_ = true;
  }
  ScriptValue reason() const {
    assert(has_reason_);
    return reason_;
  }
  bool hasReason() const { return has_reason_; }
  void setReason(ScriptValue value) {
    reason_ = value;
    has_reason_ = true;
  }
  bool FillQJSObjectWithMembers(JSContext *ctx, JSValue qjs_dictionary) const override;
  bool FillMembersWithQJSObject(JSContext* ctx, JSValue value, ExceptionState& exception_state) override;
private:
  ScriptValue promise_;
  bool has_promise_ = false;
  ScriptValue reason_;
  bool has_reason_ = false;
};
}
#endif // BRIDGE_QJS_PROMISE_REJECTION_EVENT_INIT_H