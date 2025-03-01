/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#ifndef BRIDGE_QJS_INTERSECTION_CHANGE_EVENT_INIT_H
#define BRIDGE_QJS_INTERSECTION_CHANGE_EVENT_INIT_H
#include <quickjs/quickjs.h>
#include "bindings/qjs/wrapper_type_info.h"
#include "bindings/qjs/generated_code_helper.h"
#include "qjs_ui_event_init.h"
namespace webf {
class ExecutingContext;
class ExceptionState;
class IntersectionChangeEventInit : public UIEventInit {
 public:
  using ImplType = std::shared_ptr<IntersectionChangeEventInit>;
  static std::shared_ptr<IntersectionChangeEventInit> Create();
  static std::shared_ptr<IntersectionChangeEventInit> Create(JSContext* ctx, JSValue value, ExceptionState& exception_state);
  explicit IntersectionChangeEventInit();
  explicit IntersectionChangeEventInit(JSContext* ctx, JSValue value, ExceptionState& exception_state);
  double intersectionRatio() const {
    assert(has_intersectionRatio_);
    return intersectionRatio_;
  }
  bool hasIntersectionRatio() const { return has_intersectionRatio_; }
  void setIntersectionRatio(double value) {
    intersectionRatio_ = value;
    has_intersectionRatio_ = true;
  }
  bool FillQJSObjectWithMembers(JSContext *ctx, JSValue qjs_dictionary) const override;
  bool FillMembersWithQJSObject(JSContext* ctx, JSValue value, ExceptionState& exception_state) override;
private:
  double intersectionRatio_;
  bool has_intersectionRatio_ = false;
};
}
#endif // BRIDGE_QJS_INTERSECTION_CHANGE_EVENT_INIT_H