/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#ifndef BRIDGE_QJS_DOM_POINT_INIT_H
#define BRIDGE_QJS_DOM_POINT_INIT_H
#include <quickjs/quickjs.h>
#include "bindings/qjs/wrapper_type_info.h"
#include "bindings/qjs/generated_code_helper.h"
namespace webf {
class ExecutingContext;
class ExceptionState;
class DOMPointInit : public DictionaryBase {
 public:
  using ImplType = std::shared_ptr<DOMPointInit>;
  static std::shared_ptr<DOMPointInit> Create();
  static std::shared_ptr<DOMPointInit> Create(JSContext* ctx, JSValue value, ExceptionState& exception_state);
  explicit DOMPointInit();
  explicit DOMPointInit(JSContext* ctx, JSValue value, ExceptionState& exception_state);
  double x() const {
    assert(has_x_);
    return x_;
  }
  bool hasX() const { return has_x_; }
  void setX(double value) {
    x_ = value;
    has_x_ = true;
  }
  double y() const {
    assert(has_y_);
    return y_;
  }
  bool hasY() const { return has_y_; }
  void setY(double value) {
    y_ = value;
    has_y_ = true;
  }
  double z() const {
    assert(has_z_);
    return z_;
  }
  bool hasZ() const { return has_z_; }
  void setZ(double value) {
    z_ = value;
    has_z_ = true;
  }
  double w() const {
    assert(has_w_);
    return w_;
  }
  bool hasW() const { return has_w_; }
  void setW(double value) {
    w_ = value;
    has_w_ = true;
  }
  bool FillQJSObjectWithMembers(JSContext *ctx, JSValue qjs_dictionary) const override;
  bool FillMembersWithQJSObject(JSContext* ctx, JSValue value, ExceptionState& exception_state) override;
private:
  double x_;
  bool has_x_ = false;
  double y_;
  bool has_y_ = false;
  double z_;
  bool has_z_ = false;
  double w_;
  bool has_w_ = false;
};
}
#endif // BRIDGE_QJS_DOM_POINT_INIT_H