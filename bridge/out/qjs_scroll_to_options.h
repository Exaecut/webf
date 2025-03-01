/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#ifndef BRIDGE_QJS_SCROLL_TO_OPTIONS_H
#define BRIDGE_QJS_SCROLL_TO_OPTIONS_H
#include <quickjs/quickjs.h>
#include "bindings/qjs/wrapper_type_info.h"
#include "bindings/qjs/generated_code_helper.h"
#include "qjs_scroll_options.h"
namespace webf {
class ExecutingContext;
class ExceptionState;
class ScrollToOptions : public ScrollOptions {
 public:
  using ImplType = std::shared_ptr<ScrollToOptions>;
  static std::shared_ptr<ScrollToOptions> Create();
  static std::shared_ptr<ScrollToOptions> Create(JSContext* ctx, JSValue value, ExceptionState& exception_state);
  explicit ScrollToOptions();
  explicit ScrollToOptions(JSContext* ctx, JSValue value, ExceptionState& exception_state);
  double top() const {
    assert(has_top_);
    return top_;
  }
  bool hasTop() const { return has_top_; }
  void setTop(double value) {
    top_ = value;
    has_top_ = true;
  }
  double left() const {
    assert(has_left_);
    return left_;
  }
  bool hasLeft() const { return has_left_; }
  void setLeft(double value) {
    left_ = value;
    has_left_ = true;
  }
  bool FillQJSObjectWithMembers(JSContext *ctx, JSValue qjs_dictionary) const override;
  bool FillMembersWithQJSObject(JSContext* ctx, JSValue value, ExceptionState& exception_state) override;
private:
  double top_;
  bool has_top_ = false;
  double left_;
  bool has_left_ = false;
};
}
#endif // BRIDGE_QJS_SCROLL_TO_OPTIONS_H