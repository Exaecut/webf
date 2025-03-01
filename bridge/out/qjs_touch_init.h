/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#ifndef BRIDGE_QJS_TOUCH_INIT_H
#define BRIDGE_QJS_TOUCH_INIT_H
#include <quickjs/quickjs.h>
#include "bindings/qjs/wrapper_type_info.h"
#include "bindings/qjs/generated_code_helper.h"
namespace webf {
class ExecutingContext;
class ExceptionState;
class TouchInit : public DictionaryBase {
 public:
  using ImplType = std::shared_ptr<TouchInit>;
  static std::shared_ptr<TouchInit> Create();
  static std::shared_ptr<TouchInit> Create(JSContext* ctx, JSValue value, ExceptionState& exception_state);
  explicit TouchInit();
  explicit TouchInit(JSContext* ctx, JSValue value, ExceptionState& exception_state);
  double identifier() const {
    assert(has_identifier_);
    return identifier_;
  }
  bool hasIdentifier() const { return has_identifier_; }
  void setIdentifier(double value) {
    identifier_ = value;
    has_identifier_ = true;
  }
  EventTarget* target() const {
    assert(has_target_);
    return target_;
  }
  bool hasTarget() const { return has_target_; }
  void setTarget(EventTarget* value) {
    target_ = value;
    has_target_ = true;
  }
  double clientX() const {
    assert(has_clientX_);
    return clientX_;
  }
  bool hasClientX() const { return has_clientX_; }
  void setClientX(double value) {
    clientX_ = value;
    has_clientX_ = true;
  }
  double clientY() const {
    assert(has_clientY_);
    return clientY_;
  }
  bool hasClientY() const { return has_clientY_; }
  void setClientY(double value) {
    clientY_ = value;
    has_clientY_ = true;
  }
  double screenX() const {
    assert(has_screenX_);
    return screenX_;
  }
  bool hasScreenX() const { return has_screenX_; }
  void setScreenX(double value) {
    screenX_ = value;
    has_screenX_ = true;
  }
  double screenY() const {
    assert(has_screenY_);
    return screenY_;
  }
  bool hasScreenY() const { return has_screenY_; }
  void setScreenY(double value) {
    screenY_ = value;
    has_screenY_ = true;
  }
  double pageX() const {
    assert(has_pageX_);
    return pageX_;
  }
  bool hasPageX() const { return has_pageX_; }
  void setPageX(double value) {
    pageX_ = value;
    has_pageX_ = true;
  }
  double pageY() const {
    assert(has_pageY_);
    return pageY_;
  }
  bool hasPageY() const { return has_pageY_; }
  void setPageY(double value) {
    pageY_ = value;
    has_pageY_ = true;
  }
  double radiusX() const {
    assert(has_radiusX_);
    return radiusX_;
  }
  bool hasRadiusX() const { return has_radiusX_; }
  void setRadiusX(double value) {
    radiusX_ = value;
    has_radiusX_ = true;
  }
  double radiusY() const {
    assert(has_radiusY_);
    return radiusY_;
  }
  bool hasRadiusY() const { return has_radiusY_; }
  void setRadiusY(double value) {
    radiusY_ = value;
    has_radiusY_ = true;
  }
  double rotationAngle() const {
    assert(has_rotationAngle_);
    return rotationAngle_;
  }
  bool hasRotationAngle() const { return has_rotationAngle_; }
  void setRotationAngle(double value) {
    rotationAngle_ = value;
    has_rotationAngle_ = true;
  }
  double force() const {
    assert(has_force_);
    return force_;
  }
  bool hasForce() const { return has_force_; }
  void setForce(double value) {
    force_ = value;
    has_force_ = true;
  }
  bool FillQJSObjectWithMembers(JSContext *ctx, JSValue qjs_dictionary) const override;
  bool FillMembersWithQJSObject(JSContext* ctx, JSValue value, ExceptionState& exception_state) override;
private:
  double identifier_;
  bool has_identifier_ = false;
  EventTarget* target_;
  bool has_target_ = false;
  double clientX_;
  bool has_clientX_ = false;
  double clientY_;
  bool has_clientY_ = false;
  double screenX_;
  bool has_screenX_ = false;
  double screenY_;
  bool has_screenY_ = false;
  double pageX_;
  bool has_pageX_ = false;
  double pageY_;
  bool has_pageY_ = false;
  double radiusX_;
  bool has_radiusX_ = false;
  double radiusY_;
  bool has_radiusY_ = false;
  double rotationAngle_;
  bool has_rotationAngle_ = false;
  double force_;
  bool has_force_ = false;
};
}
#endif // BRIDGE_QJS_TOUCH_INIT_H