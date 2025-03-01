/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#ifndef BRIDGE_QJS_UI_EVENT_INIT_H
#define BRIDGE_QJS_UI_EVENT_INIT_H
#include <quickjs/quickjs.h>
#include "bindings/qjs/wrapper_type_info.h"
#include "bindings/qjs/generated_code_helper.h"
#include "qjs_event_init.h"
namespace webf {
class ExecutingContext;
class ExceptionState;
class UIEventInit : public EventInit {
 public:
  using ImplType = std::shared_ptr<UIEventInit>;
  static std::shared_ptr<UIEventInit> Create();
  static std::shared_ptr<UIEventInit> Create(JSContext* ctx, JSValue value, ExceptionState& exception_state);
  explicit UIEventInit();
  explicit UIEventInit(JSContext* ctx, JSValue value, ExceptionState& exception_state);
  double detail() const {
    assert(has_detail_);
    return detail_;
  }
  bool hasDetail() const { return has_detail_; }
  void setDetail(double value) {
    detail_ = value;
    has_detail_ = true;
  }
  Window* view() const {
    assert(has_view_);
    return view_;
  }
  bool hasView() const { return has_view_; }
  void setView(Window* value) {
    view_ = value;
    has_view_ = true;
  }
  double which() const {
    assert(has_which_);
    return which_;
  }
  bool hasWhich() const { return has_which_; }
  void setWhich(double value) {
    which_ = value;
    has_which_ = true;
  }
  bool FillQJSObjectWithMembers(JSContext *ctx, JSValue qjs_dictionary) const override;
  bool FillMembersWithQJSObject(JSContext* ctx, JSValue value, ExceptionState& exception_state) override;
private:
  double detail_;
  bool has_detail_ = false;
  Window* view_;
  bool has_view_ = false;
  double which_;
  bool has_which_ = false;
};
}
#endif // BRIDGE_QJS_UI_EVENT_INIT_H