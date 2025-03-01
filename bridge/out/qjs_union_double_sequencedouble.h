/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
 */
#ifndef qjs_union_double_sequence_double_H_
#define qjs_union_double_sequence_double_H_
#include <vector>
#include <cassert>
#include "bindings/qjs/union_base.h"
#include "bindings/qjs/atomic_string.h"
#include "bindings/qjs/cppgc/member.h"
namespace webf {
class QJSUnionDoubleSequenceDouble final : public UnionBase {
 public:
  using ImplType = std::shared_ptr<QJSUnionDoubleSequenceDouble>;
  // The type of the content value of this IDL union.
  enum class ContentType { kDouble,kSequenceDouble };
  static std::shared_ptr<QJSUnionDoubleSequenceDouble> Create(
      JSContext* ctx,
      JSValue value,
      ExceptionState& exception_state);
   explicit QJSUnionDoubleSequenceDouble(const double& value);
   explicit QJSUnionDoubleSequenceDouble(const std::vector<double>& value);
  ~QJSUnionDoubleSequenceDouble ();
  // Returns the type of the content value.
  ContentType GetContentType() const { return content_type_; }
  bool IsDouble() const { return content_type_ == ContentType::kDouble; }
  const double& GetAsDouble() const {
    assert(content_type_ == ContentType::kDouble);
    return member_double_;
  }
  void Set(const double& value);
  void Set(double&& value);
  bool IsSequenceDouble() const { return content_type_ == ContentType::kSequenceDouble; }
  const std::vector<double>& GetAsSequenceDouble() const {
    assert(content_type_ == ContentType::kSequenceDouble);
    return member_5_;
  }
  void Set(const std::vector<double>& value);
  void Set(std::vector<double>&& value);
  JSValue ToQuickJSValue(JSContext* ctx, ExceptionState &exception_state) const override;
  void Trace(GCVisitor *visitor) const override;
 private:
  void Clear();
  ContentType content_type_;
  double member_double_;
  std::vector<double> member_5_;
};
}
#endif  // WEBF_OUT_QJS_UNION_STRING_DOUBLESEQUENCE_H_