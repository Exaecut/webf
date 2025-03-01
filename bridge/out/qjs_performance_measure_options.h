/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#ifndef BRIDGE_QJS_PERFORMANCE_MEASURE_OPTIONS_H
#define BRIDGE_QJS_PERFORMANCE_MEASURE_OPTIONS_H
#include <quickjs/quickjs.h>
#include "bindings/qjs/wrapper_type_info.h"
#include "bindings/qjs/generated_code_helper.h"
namespace webf {
class ExecutingContext;
class ExceptionState;
class PerformanceMeasureOptions : public DictionaryBase {
 public:
  using ImplType = std::shared_ptr<PerformanceMeasureOptions>;
  static std::shared_ptr<PerformanceMeasureOptions> Create();
  static std::shared_ptr<PerformanceMeasureOptions> Create(JSContext* ctx, JSValue value, ExceptionState& exception_state);
  explicit PerformanceMeasureOptions();
  explicit PerformanceMeasureOptions(JSContext* ctx, JSValue value, ExceptionState& exception_state);
  ScriptValue detail() const {
    assert(has_detail_);
    return detail_;
  }
  bool hasDetail() const { return has_detail_; }
  void setDetail(ScriptValue value) {
    detail_ = value;
    has_detail_ = true;
  }
  AtomicString start() const {
    assert(has_start_);
    return start_;
  }
  bool hasStart() const { return has_start_; }
  void setStart(AtomicString value) {
    start_ = value;
    has_start_ = true;
  }
  AtomicString end() const {
    assert(has_end_);
    return end_;
  }
  bool hasEnd() const { return has_end_; }
  void setEnd(AtomicString value) {
    end_ = value;
    has_end_ = true;
  }
  bool FillQJSObjectWithMembers(JSContext *ctx, JSValue qjs_dictionary) const override;
  bool FillMembersWithQJSObject(JSContext* ctx, JSValue value, ExceptionState& exception_state) override;
private:
  ScriptValue detail_;
  bool has_detail_ = false;
  AtomicString start_;
  bool has_start_ = false;
  AtomicString end_;
  bool has_end_ = false;
};
}
#endif // BRIDGE_QJS_PERFORMANCE_MEASURE_OPTIONS_H