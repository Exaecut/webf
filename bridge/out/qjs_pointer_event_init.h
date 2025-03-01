/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#ifndef BRIDGE_QJS_POINTER_EVENT_INIT_H
#define BRIDGE_QJS_POINTER_EVENT_INIT_H
#include <quickjs/quickjs.h>
#include "bindings/qjs/wrapper_type_info.h"
#include "bindings/qjs/generated_code_helper.h"
#include "qjs_mouse_event_init.h"
namespace webf {
class ExecutingContext;
class ExceptionState;
class PointerEventInit : public MouseEventInit {
 public:
  using ImplType = std::shared_ptr<PointerEventInit>;
  static std::shared_ptr<PointerEventInit> Create();
  static std::shared_ptr<PointerEventInit> Create(JSContext* ctx, JSValue value, ExceptionState& exception_state);
  explicit PointerEventInit();
  explicit PointerEventInit(JSContext* ctx, JSValue value, ExceptionState& exception_state);
  bool isPrimary() const {
    assert(has_isPrimary_);
    return isPrimary_;
  }
  bool hasIsPrimary() const { return has_isPrimary_; }
  void setIsPrimary(bool value) {
    isPrimary_ = value;
    has_isPrimary_ = true;
  }
  double pointerId() const {
    assert(has_pointerId_);
    return pointerId_;
  }
  bool hasPointerId() const { return has_pointerId_; }
  void setPointerId(double value) {
    pointerId_ = value;
    has_pointerId_ = true;
  }
  AtomicString pointerType() const {
    assert(has_pointerType_);
    return pointerType_;
  }
  bool hasPointerType() const { return has_pointerType_; }
  void setPointerType(AtomicString value) {
    pointerType_ = value;
    has_pointerType_ = true;
  }
  double pressure() const {
    assert(has_pressure_);
    return pressure_;
  }
  bool hasPressure() const { return has_pressure_; }
  void setPressure(double value) {
    pressure_ = value;
    has_pressure_ = true;
  }
  double tangentialPressure() const {
    assert(has_tangentialPressure_);
    return tangentialPressure_;
  }
  bool hasTangentialPressure() const { return has_tangentialPressure_; }
  void setTangentialPressure(double value) {
    tangentialPressure_ = value;
    has_tangentialPressure_ = true;
  }
  double tiltX() const {
    assert(has_tiltX_);
    return tiltX_;
  }
  bool hasTiltX() const { return has_tiltX_; }
  void setTiltX(double value) {
    tiltX_ = value;
    has_tiltX_ = true;
  }
  double tiltY() const {
    assert(has_tiltY_);
    return tiltY_;
  }
  bool hasTiltY() const { return has_tiltY_; }
  void setTiltY(double value) {
    tiltY_ = value;
    has_tiltY_ = true;
  }
  double twist() const {
    assert(has_twist_);
    return twist_;
  }
  bool hasTwist() const { return has_twist_; }
  void setTwist(double value) {
    twist_ = value;
    has_twist_ = true;
  }
  double width() const {
    assert(has_width_);
    return width_;
  }
  bool hasWidth() const { return has_width_; }
  void setWidth(double value) {
    width_ = value;
    has_width_ = true;
  }
  double height() const {
    assert(has_height_);
    return height_;
  }
  bool hasHeight() const { return has_height_; }
  void setHeight(double value) {
    height_ = value;
    has_height_ = true;
  }
  bool FillQJSObjectWithMembers(JSContext *ctx, JSValue qjs_dictionary) const override;
  bool FillMembersWithQJSObject(JSContext* ctx, JSValue value, ExceptionState& exception_state) override;
private:
  bool isPrimary_;
  bool has_isPrimary_ = false;
  double pointerId_;
  bool has_pointerId_ = false;
  AtomicString pointerType_;
  bool has_pointerType_ = false;
  double pressure_;
  bool has_pressure_ = false;
  double tangentialPressure_;
  bool has_tangentialPressure_ = false;
  double tiltX_;
  bool has_tiltX_ = false;
  double tiltY_;
  bool has_tiltY_ = false;
  double twist_;
  bool has_twist_ = false;
  double width_;
  bool has_width_ = false;
  double height_;
  bool has_height_ = false;
};
}
#endif // BRIDGE_QJS_POINTER_EVENT_INIT_H