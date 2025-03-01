/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#ifndef BRIDGE_QJS_FOCUS_EVENT_INIT_H
#define BRIDGE_QJS_FOCUS_EVENT_INIT_H
#include <quickjs/quickjs.h>
#include "bindings/qjs/wrapper_type_info.h"
#include "bindings/qjs/generated_code_helper.h"
#include "qjs_ui_event_init.h"
namespace webf {
class ExecutingContext;
class ExceptionState;
class FocusEventInit : public UIEventInit {
 public:
  using ImplType = std::shared_ptr<FocusEventInit>;
  static std::shared_ptr<FocusEventInit> Create();
  static std::shared_ptr<FocusEventInit> Create(JSContext* ctx, JSValue value, ExceptionState& exception_state);
  explicit FocusEventInit();
  explicit FocusEventInit(JSContext* ctx, JSValue value, ExceptionState& exception_state);
  EventTarget* relatedTarget() const {
    assert(has_relatedTarget_);
    return relatedTarget_;
  }
  bool hasRelatedTarget() const { return has_relatedTarget_; }
  void setRelatedTarget(EventTarget* value) {
    relatedTarget_ = value;
    has_relatedTarget_ = true;
  }
  bool FillQJSObjectWithMembers(JSContext *ctx, JSValue qjs_dictionary) const override;
  bool FillMembersWithQJSObject(JSContext* ctx, JSValue value, ExceptionState& exception_state) override;
private:
  EventTarget* relatedTarget_;
  bool has_relatedTarget_ = false;
};
}
#endif // BRIDGE_QJS_FOCUS_EVENT_INIT_H