/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#ifndef BRIDGE_QJS_SCROLL_OPTIONS_H
#define BRIDGE_QJS_SCROLL_OPTIONS_H
#include <quickjs/quickjs.h>
#include "bindings/qjs/wrapper_type_info.h"
#include "bindings/qjs/generated_code_helper.h"
namespace webf {
class ExecutingContext;
class ExceptionState;
class ScrollOptions : public DictionaryBase {
 public:
  using ImplType = std::shared_ptr<ScrollOptions>;
  static std::shared_ptr<ScrollOptions> Create();
  static std::shared_ptr<ScrollOptions> Create(JSContext* ctx, JSValue value, ExceptionState& exception_state);
  explicit ScrollOptions();
  explicit ScrollOptions(JSContext* ctx, JSValue value, ExceptionState& exception_state);
  AtomicString behavior() const {
    assert(has_behavior_);
    return behavior_;
  }
  bool hasBehavior() const { return has_behavior_; }
  void setBehavior(AtomicString value) {
    behavior_ = value;
    has_behavior_ = true;
  }
  bool FillQJSObjectWithMembers(JSContext *ctx, JSValue qjs_dictionary) const override;
  bool FillMembersWithQJSObject(JSContext* ctx, JSValue value, ExceptionState& exception_state) override;
private:
  AtomicString behavior_;
  bool has_behavior_ = false;
};
}
#endif // BRIDGE_QJS_SCROLL_OPTIONS_H