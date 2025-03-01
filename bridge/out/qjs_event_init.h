/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#ifndef BRIDGE_QJS_EVENT_INIT_H
#define BRIDGE_QJS_EVENT_INIT_H
#include <quickjs/quickjs.h>
#include "bindings/qjs/wrapper_type_info.h"
#include "bindings/qjs/generated_code_helper.h"
namespace webf {
class ExecutingContext;
class ExceptionState;
class EventInit : public DictionaryBase {
 public:
  using ImplType = std::shared_ptr<EventInit>;
  static std::shared_ptr<EventInit> Create();
  static std::shared_ptr<EventInit> Create(JSContext* ctx, JSValue value, ExceptionState& exception_state);
  explicit EventInit();
  explicit EventInit(JSContext* ctx, JSValue value, ExceptionState& exception_state);
  bool bubbles() const {
    assert(has_bubbles_);
    return bubbles_;
  }
  bool hasBubbles() const { return has_bubbles_; }
  void setBubbles(bool value) {
    bubbles_ = value;
    has_bubbles_ = true;
  }
  bool cancelable() const {
    assert(has_cancelable_);
    return cancelable_;
  }
  bool hasCancelable() const { return has_cancelable_; }
  void setCancelable(bool value) {
    cancelable_ = value;
    has_cancelable_ = true;
  }
  bool composed() const {
    assert(has_composed_);
    return composed_;
  }
  bool hasComposed() const { return has_composed_; }
  void setComposed(bool value) {
    composed_ = value;
    has_composed_ = true;
  }
  bool FillQJSObjectWithMembers(JSContext *ctx, JSValue qjs_dictionary) const override;
  bool FillMembersWithQJSObject(JSContext* ctx, JSValue value, ExceptionState& exception_state) override;
private:
  bool bubbles_;
  bool has_bubbles_ = false;
  bool cancelable_;
  bool has_cancelable_ = false;
  bool composed_;
  bool has_composed_ = false;
};
}
#endif // BRIDGE_QJS_EVENT_INIT_H