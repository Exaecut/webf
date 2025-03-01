/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#ifndef BRIDGE_QJS_EVENT_LISTENER_OPTIONS_H
#define BRIDGE_QJS_EVENT_LISTENER_OPTIONS_H
#include <quickjs/quickjs.h>
#include "bindings/qjs/wrapper_type_info.h"
#include "bindings/qjs/generated_code_helper.h"
namespace webf {
class ExecutingContext;
class ExceptionState;
class EventListenerOptions : public DictionaryBase {
 public:
  using ImplType = std::shared_ptr<EventListenerOptions>;
  static std::shared_ptr<EventListenerOptions> Create();
  static std::shared_ptr<EventListenerOptions> Create(JSContext* ctx, JSValue value, ExceptionState& exception_state);
  explicit EventListenerOptions();
  explicit EventListenerOptions(JSContext* ctx, JSValue value, ExceptionState& exception_state);
  bool capture() const {
    assert(has_capture_);
    return capture_;
  }
  bool hasCapture() const { return has_capture_; }
  void setCapture(bool value) {
    capture_ = value;
    has_capture_ = true;
  }
  bool FillQJSObjectWithMembers(JSContext *ctx, JSValue qjs_dictionary) const override;
  bool FillMembersWithQJSObject(JSContext* ctx, JSValue value, ExceptionState& exception_state) override;
private:
  bool capture_;
  bool has_capture_ = false;
};
}
#endif // BRIDGE_QJS_EVENT_LISTENER_OPTIONS_H