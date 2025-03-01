/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#ifndef BRIDGE_QJS_INPUT_EVENT_INIT_H
#define BRIDGE_QJS_INPUT_EVENT_INIT_H
#include <quickjs/quickjs.h>
#include "bindings/qjs/wrapper_type_info.h"
#include "bindings/qjs/generated_code_helper.h"
#include "qjs_ui_event_init.h"
namespace webf {
class ExecutingContext;
class ExceptionState;
class InputEventInit : public UIEventInit {
 public:
  using ImplType = std::shared_ptr<InputEventInit>;
  static std::shared_ptr<InputEventInit> Create();
  static std::shared_ptr<InputEventInit> Create(JSContext* ctx, JSValue value, ExceptionState& exception_state);
  explicit InputEventInit();
  explicit InputEventInit(JSContext* ctx, JSValue value, ExceptionState& exception_state);
  AtomicString inputType() const {
    assert(has_inputType_);
    return inputType_;
  }
  bool hasInputType() const { return has_inputType_; }
  void setInputType(AtomicString value) {
    inputType_ = value;
    has_inputType_ = true;
  }
  AtomicString data() const {
    assert(has_data_);
    return data_;
  }
  bool hasData() const { return has_data_; }
  void setData(AtomicString value) {
    data_ = value;
    has_data_ = true;
  }
  bool FillQJSObjectWithMembers(JSContext *ctx, JSValue qjs_dictionary) const override;
  bool FillMembersWithQJSObject(JSContext* ctx, JSValue value, ExceptionState& exception_state) override;
private:
  AtomicString inputType_;
  bool has_inputType_ = false;
  AtomicString data_;
  bool has_data_ = false;
};
}
#endif // BRIDGE_QJS_INPUT_EVENT_INIT_H