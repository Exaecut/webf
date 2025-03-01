/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#ifndef BRIDGE_QJS_ADD_EVENT_LISTENER_OPTIONS_H
#define BRIDGE_QJS_ADD_EVENT_LISTENER_OPTIONS_H
#include <quickjs/quickjs.h>
#include "bindings/qjs/wrapper_type_info.h"
#include "bindings/qjs/generated_code_helper.h"
#include "qjs_event_listener_options.h"
namespace webf {
class ExecutingContext;
class ExceptionState;
class AddEventListenerOptions : public EventListenerOptions {
 public:
  using ImplType = std::shared_ptr<AddEventListenerOptions>;
  static std::shared_ptr<AddEventListenerOptions> Create();
  static std::shared_ptr<AddEventListenerOptions> Create(JSContext* ctx, JSValue value, ExceptionState& exception_state);
  explicit AddEventListenerOptions();
  explicit AddEventListenerOptions(JSContext* ctx, JSValue value, ExceptionState& exception_state);
  bool passive() const {
    assert(has_passive_);
    return passive_;
  }
  bool hasPassive() const { return has_passive_; }
  void setPassive(bool value) {
    passive_ = value;
    has_passive_ = true;
  }
  bool once() const {
    assert(has_once_);
    return once_;
  }
  bool hasOnce() const { return has_once_; }
  void setOnce(bool value) {
    once_ = value;
    has_once_ = true;
  }
  bool FillQJSObjectWithMembers(JSContext *ctx, JSValue qjs_dictionary) const override;
  bool FillMembersWithQJSObject(JSContext* ctx, JSValue value, ExceptionState& exception_state) override;
private:
  bool passive_;
  bool has_passive_ = false;
  bool once_;
  bool has_once_ = false;
};
}
#endif // BRIDGE_QJS_ADD_EVENT_LISTENER_OPTIONS_H