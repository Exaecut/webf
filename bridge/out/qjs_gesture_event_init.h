/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#ifndef BRIDGE_QJS_GESTURE_EVENT_INIT_H
#define BRIDGE_QJS_GESTURE_EVENT_INIT_H
#include <quickjs/quickjs.h>
#include "bindings/qjs/wrapper_type_info.h"
#include "bindings/qjs/generated_code_helper.h"
#include "qjs_event_init.h"
namespace webf {
class ExecutingContext;
class ExceptionState;
class GestureEventInit : public EventInit {
 public:
  using ImplType = std::shared_ptr<GestureEventInit>;
  static std::shared_ptr<GestureEventInit> Create();
  static std::shared_ptr<GestureEventInit> Create(JSContext* ctx, JSValue value, ExceptionState& exception_state);
  explicit GestureEventInit();
  explicit GestureEventInit(JSContext* ctx, JSValue value, ExceptionState& exception_state);
  AtomicString state() const {
    assert(has_state_);
    return state_;
  }
  bool hasState() const { return has_state_; }
  void setState(AtomicString value) {
    state_ = value;
    has_state_ = true;
  }
  AtomicString direction() const {
    assert(has_direction_);
    return direction_;
  }
  bool hasDirection() const { return has_direction_; }
  void setDirection(AtomicString value) {
    direction_ = value;
    has_direction_ = true;
  }
  double deltaX() const {
    assert(has_deltaX_);
    return deltaX_;
  }
  bool hasDeltaX() const { return has_deltaX_; }
  void setDeltaX(double value) {
    deltaX_ = value;
    has_deltaX_ = true;
  }
  double deltaY() const {
    assert(has_deltaY_);
    return deltaY_;
  }
  bool hasDeltaY() const { return has_deltaY_; }
  void setDeltaY(double value) {
    deltaY_ = value;
    has_deltaY_ = true;
  }
  double velocityX() const {
    assert(has_velocityX_);
    return velocityX_;
  }
  bool hasVelocityX() const { return has_velocityX_; }
  void setVelocityX(double value) {
    velocityX_ = value;
    has_velocityX_ = true;
  }
  double velocityY() const {
    assert(has_velocityY_);
    return velocityY_;
  }
  bool hasVelocityY() const { return has_velocityY_; }
  void setVelocityY(double value) {
    velocityY_ = value;
    has_velocityY_ = true;
  }
  double scale() const {
    assert(has_scale_);
    return scale_;
  }
  bool hasScale() const { return has_scale_; }
  void setScale(double value) {
    scale_ = value;
    has_scale_ = true;
  }
  double rotation() const {
    assert(has_rotation_);
    return rotation_;
  }
  bool hasRotation() const { return has_rotation_; }
  void setRotation(double value) {
    rotation_ = value;
    has_rotation_ = true;
  }
  bool FillQJSObjectWithMembers(JSContext *ctx, JSValue qjs_dictionary) const override;
  bool FillMembersWithQJSObject(JSContext* ctx, JSValue value, ExceptionState& exception_state) override;
private:
  AtomicString state_;
  bool has_state_ = false;
  AtomicString direction_;
  bool has_direction_ = false;
  double deltaX_;
  bool has_deltaX_ = false;
  double deltaY_;
  bool has_deltaY_ = false;
  double velocityX_;
  bool has_velocityX_ = false;
  double velocityY_;
  bool has_velocityY_ = false;
  double scale_;
  bool has_scale_ = false;
  double rotation_;
  bool has_rotation_ = false;
};
}
#endif // BRIDGE_QJS_GESTURE_EVENT_INIT_H