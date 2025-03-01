/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#ifndef BRIDGE_QJS_DOM_MATRIX_INIT_H
#define BRIDGE_QJS_DOM_MATRIX_INIT_H
#include <quickjs/quickjs.h>
#include "bindings/qjs/wrapper_type_info.h"
#include "bindings/qjs/generated_code_helper.h"
namespace webf {
class ExecutingContext;
class ExceptionState;
class DOMMatrixInit : public DictionaryBase {
 public:
  using ImplType = std::shared_ptr<DOMMatrixInit>;
  static std::shared_ptr<DOMMatrixInit> Create();
  static std::shared_ptr<DOMMatrixInit> Create(JSContext* ctx, JSValue value, ExceptionState& exception_state);
  explicit DOMMatrixInit();
  explicit DOMMatrixInit(JSContext* ctx, JSValue value, ExceptionState& exception_state);
  double m11() const {
    assert(has_m11_);
    return m11_;
  }
  bool hasM11() const { return has_m11_; }
  void setM11(double value) {
    m11_ = value;
    has_m11_ = true;
  }
  double m12() const {
    assert(has_m12_);
    return m12_;
  }
  bool hasM12() const { return has_m12_; }
  void setM12(double value) {
    m12_ = value;
    has_m12_ = true;
  }
  double m13() const {
    assert(has_m13_);
    return m13_;
  }
  bool hasM13() const { return has_m13_; }
  void setM13(double value) {
    m13_ = value;
    has_m13_ = true;
  }
  double m14() const {
    assert(has_m14_);
    return m14_;
  }
  bool hasM14() const { return has_m14_; }
  void setM14(double value) {
    m14_ = value;
    has_m14_ = true;
  }
  double m21() const {
    assert(has_m21_);
    return m21_;
  }
  bool hasM21() const { return has_m21_; }
  void setM21(double value) {
    m21_ = value;
    has_m21_ = true;
  }
  double m22() const {
    assert(has_m22_);
    return m22_;
  }
  bool hasM22() const { return has_m22_; }
  void setM22(double value) {
    m22_ = value;
    has_m22_ = true;
  }
  double m23() const {
    assert(has_m23_);
    return m23_;
  }
  bool hasM23() const { return has_m23_; }
  void setM23(double value) {
    m23_ = value;
    has_m23_ = true;
  }
  double m24() const {
    assert(has_m24_);
    return m24_;
  }
  bool hasM24() const { return has_m24_; }
  void setM24(double value) {
    m24_ = value;
    has_m24_ = true;
  }
  double m31() const {
    assert(has_m31_);
    return m31_;
  }
  bool hasM31() const { return has_m31_; }
  void setM31(double value) {
    m31_ = value;
    has_m31_ = true;
  }
  double m32() const {
    assert(has_m32_);
    return m32_;
  }
  bool hasM32() const { return has_m32_; }
  void setM32(double value) {
    m32_ = value;
    has_m32_ = true;
  }
  double m33() const {
    assert(has_m33_);
    return m33_;
  }
  bool hasM33() const { return has_m33_; }
  void setM33(double value) {
    m33_ = value;
    has_m33_ = true;
  }
  double m34() const {
    assert(has_m34_);
    return m34_;
  }
  bool hasM34() const { return has_m34_; }
  void setM34(double value) {
    m34_ = value;
    has_m34_ = true;
  }
  double m41() const {
    assert(has_m41_);
    return m41_;
  }
  bool hasM41() const { return has_m41_; }
  void setM41(double value) {
    m41_ = value;
    has_m41_ = true;
  }
  double m42() const {
    assert(has_m42_);
    return m42_;
  }
  bool hasM42() const { return has_m42_; }
  void setM42(double value) {
    m42_ = value;
    has_m42_ = true;
  }
  double m43() const {
    assert(has_m43_);
    return m43_;
  }
  bool hasM43() const { return has_m43_; }
  void setM43(double value) {
    m43_ = value;
    has_m43_ = true;
  }
  double m44() const {
    assert(has_m44_);
    return m44_;
  }
  bool hasM44() const { return has_m44_; }
  void setM44(double value) {
    m44_ = value;
    has_m44_ = true;
  }
  bool is2D() const {
    assert(has_is2D_);
    return is2D_;
  }
  bool hasIs2D() const { return has_is2D_; }
  void setIs2D(bool value) {
    is2D_ = value;
    has_is2D_ = true;
  }
  bool isIdentity() const {
    assert(has_isIdentity_);
    return isIdentity_;
  }
  bool hasIsIdentity() const { return has_isIdentity_; }
  void setIsIdentity(bool value) {
    isIdentity_ = value;
    has_isIdentity_ = true;
  }
  bool FillQJSObjectWithMembers(JSContext *ctx, JSValue qjs_dictionary) const override;
  bool FillMembersWithQJSObject(JSContext* ctx, JSValue value, ExceptionState& exception_state) override;
private:
  double m11_;
  bool has_m11_ = false;
  double m12_;
  bool has_m12_ = false;
  double m13_;
  bool has_m13_ = false;
  double m14_;
  bool has_m14_ = false;
  double m21_;
  bool has_m21_ = false;
  double m22_;
  bool has_m22_ = false;
  double m23_;
  bool has_m23_ = false;
  double m24_;
  bool has_m24_ = false;
  double m31_;
  bool has_m31_ = false;
  double m32_;
  bool has_m32_ = false;
  double m33_;
  bool has_m33_ = false;
  double m34_;
  bool has_m34_ = false;
  double m41_;
  bool has_m41_ = false;
  double m42_;
  bool has_m42_ = false;
  double m43_;
  bool has_m43_ = false;
  double m44_;
  bool has_m44_ = false;
  bool is2D_;
  bool has_is2D_ = false;
  bool isIdentity_;
  bool has_isIdentity_ = false;
};
}
#endif // BRIDGE_QJS_DOM_MATRIX_INIT_H