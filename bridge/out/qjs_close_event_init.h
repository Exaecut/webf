/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#ifndef BRIDGE_QJS_CLOSE_EVENT_INIT_H
#define BRIDGE_QJS_CLOSE_EVENT_INIT_H
#include <quickjs/quickjs.h>
#include "bindings/qjs/wrapper_type_info.h"
#include "bindings/qjs/generated_code_helper.h"
#include "qjs_event_init.h"
namespace webf {
class ExecutingContext;
class ExceptionState;
class CloseEventInit : public EventInit {
 public:
  using ImplType = std::shared_ptr<CloseEventInit>;
  static std::shared_ptr<CloseEventInit> Create();
  static std::shared_ptr<CloseEventInit> Create(JSContext* ctx, JSValue value, ExceptionState& exception_state);
  explicit CloseEventInit();
  explicit CloseEventInit(JSContext* ctx, JSValue value, ExceptionState& exception_state);
  int64_t code() const {
    assert(has_code_);
    return code_;
  }
  bool hasCode() const { return has_code_; }
  void setCode(int64_t value) {
    code_ = value;
    has_code_ = true;
  }
  AtomicString reason() const {
    assert(has_reason_);
    return reason_;
  }
  bool hasReason() const { return has_reason_; }
  void setReason(AtomicString value) {
    reason_ = value;
    has_reason_ = true;
  }
  bool wasClean() const {
    assert(has_wasClean_);
    return wasClean_;
  }
  bool hasWasClean() const { return has_wasClean_; }
  void setWasClean(bool value) {
    wasClean_ = value;
    has_wasClean_ = true;
  }
  bool FillQJSObjectWithMembers(JSContext *ctx, JSValue qjs_dictionary) const override;
  bool FillMembersWithQJSObject(JSContext* ctx, JSValue value, ExceptionState& exception_state) override;
private:
  int64_t code_;
  bool has_code_ = false;
  AtomicString reason_;
  bool has_reason_ = false;
  bool wasClean_;
  bool has_wasClean_ = false;
};
}
#endif // BRIDGE_QJS_CLOSE_EVENT_INIT_H