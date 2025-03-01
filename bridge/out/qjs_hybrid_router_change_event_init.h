/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#ifndef BRIDGE_QJS_HYBRID_ROUTER_CHANGE_EVENT_INIT_H
#define BRIDGE_QJS_HYBRID_ROUTER_CHANGE_EVENT_INIT_H
#include <quickjs/quickjs.h>
#include "bindings/qjs/wrapper_type_info.h"
#include "bindings/qjs/generated_code_helper.h"
#include "qjs_event_init.h"
namespace webf {
class ExecutingContext;
class ExceptionState;
class HybridRouterChangeEventInit : public EventInit {
 public:
  using ImplType = std::shared_ptr<HybridRouterChangeEventInit>;
  static std::shared_ptr<HybridRouterChangeEventInit> Create();
  static std::shared_ptr<HybridRouterChangeEventInit> Create(JSContext* ctx, JSValue value, ExceptionState& exception_state);
  explicit HybridRouterChangeEventInit();
  explicit HybridRouterChangeEventInit(JSContext* ctx, JSValue value, ExceptionState& exception_state);
  AtomicString kind() const {
    assert(has_kind_);
    return kind_;
  }
  bool hasKind() const { return has_kind_; }
  void setKind(AtomicString value) {
    kind_ = value;
    has_kind_ = true;
  }
  AtomicString name() const {
    assert(has_name_);
    return name_;
  }
  bool hasName() const { return has_name_; }
  void setName(AtomicString value) {
    name_ = value;
    has_name_ = true;
  }
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
  AtomicString kind_;
  bool has_kind_ = false;
  AtomicString name_;
  bool has_name_ = false;
  ScriptValue state_;
  bool has_state_ = false;
};
}
#endif // BRIDGE_QJS_HYBRID_ROUTER_CHANGE_EVENT_INIT_H