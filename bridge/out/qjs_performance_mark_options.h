/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#ifndef BRIDGE_QJS_PERFORMANCE_MARK_OPTIONS_H
#define BRIDGE_QJS_PERFORMANCE_MARK_OPTIONS_H
#include <quickjs/quickjs.h>
#include "bindings/qjs/wrapper_type_info.h"
#include "bindings/qjs/generated_code_helper.h"
namespace webf {
class ExecutingContext;
class ExceptionState;
class PerformanceMarkOptions : public DictionaryBase {
 public:
  using ImplType = std::shared_ptr<PerformanceMarkOptions>;
  static std::shared_ptr<PerformanceMarkOptions> Create();
  static std::shared_ptr<PerformanceMarkOptions> Create(JSContext* ctx, JSValue value, ExceptionState& exception_state);
  explicit PerformanceMarkOptions();
  explicit PerformanceMarkOptions(JSContext* ctx, JSValue value, ExceptionState& exception_state);
  ScriptValue detail() const {
    assert(has_detail_);
    return detail_;
  }
  bool hasDetail() const { return has_detail_; }
  void setDetail(ScriptValue value) {
    detail_ = value;
    has_detail_ = true;
  }
  double startTime() const {
    assert(has_startTime_);
    return startTime_;
  }
  bool hasStartTime() const { return has_startTime_; }
  void setStartTime(double value) {
    startTime_ = value;
    has_startTime_ = true;
  }
  bool FillQJSObjectWithMembers(JSContext *ctx, JSValue qjs_dictionary) const override;
  bool FillMembersWithQJSObject(JSContext* ctx, JSValue value, ExceptionState& exception_state) override;
private:
  ScriptValue detail_;
  bool has_detail_ = false;
  double startTime_;
  bool has_startTime_ = false;
};
}
#endif // BRIDGE_QJS_PERFORMANCE_MARK_OPTIONS_H