/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#ifndef BRIDGE_QJS_ANIMATION_EVENT_INIT_H
#define BRIDGE_QJS_ANIMATION_EVENT_INIT_H
#include <quickjs/quickjs.h>
#include "bindings/qjs/wrapper_type_info.h"
#include "bindings/qjs/generated_code_helper.h"
#include "qjs_event_init.h"
namespace webf {
class ExecutingContext;
class ExceptionState;
class AnimationEventInit : public EventInit {
 public:
  using ImplType = std::shared_ptr<AnimationEventInit>;
  static std::shared_ptr<AnimationEventInit> Create();
  static std::shared_ptr<AnimationEventInit> Create(JSContext* ctx, JSValue value, ExceptionState& exception_state);
  explicit AnimationEventInit();
  explicit AnimationEventInit(JSContext* ctx, JSValue value, ExceptionState& exception_state);
  AtomicString animationName() const {
    assert(has_animationName_);
    return animationName_;
  }
  bool hasAnimationName() const { return has_animationName_; }
  void setAnimationName(AtomicString value) {
    animationName_ = value;
    has_animationName_ = true;
  }
  double elapsedTime() const {
    assert(has_elapsedTime_);
    return elapsedTime_;
  }
  bool hasElapsedTime() const { return has_elapsedTime_; }
  void setElapsedTime(double value) {
    elapsedTime_ = value;
    has_elapsedTime_ = true;
  }
  AtomicString pseudoElement() const {
    assert(has_pseudoElement_);
    return pseudoElement_;
  }
  bool hasPseudoElement() const { return has_pseudoElement_; }
  void setPseudoElement(AtomicString value) {
    pseudoElement_ = value;
    has_pseudoElement_ = true;
  }
  bool FillQJSObjectWithMembers(JSContext *ctx, JSValue qjs_dictionary) const override;
  bool FillMembersWithQJSObject(JSContext* ctx, JSValue value, ExceptionState& exception_state) override;
private:
  AtomicString animationName_;
  bool has_animationName_ = false;
  double elapsedTime_;
  bool has_elapsedTime_ = false;
  AtomicString pseudoElement_;
  bool has_pseudoElement_ = false;
};
}
#endif // BRIDGE_QJS_ANIMATION_EVENT_INIT_H