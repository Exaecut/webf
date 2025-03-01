/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
 */
#ifndef qjs_union_sequence_double_dom_matrix_init_H_
#define qjs_union_sequence_double_dom_matrix_init_H_
#include <vector>
#include <cassert>
#include "bindings/qjs/union_base.h"
#include "bindings/qjs/atomic_string.h"
#include "bindings/qjs/cppgc/member.h"
namespace webf {
    class DOMMatrixInit;
class QJSUnionSequenceDoubleDOMMatrixInit final : public UnionBase {
 public:
  using ImplType = std::shared_ptr<QJSUnionSequenceDoubleDOMMatrixInit>;
  // The type of the content value of this IDL union.
  enum class ContentType { kSequenceDouble,kDOMMatrixInit };
  static std::shared_ptr<QJSUnionSequenceDoubleDOMMatrixInit> Create(
      JSContext* ctx,
      JSValue value,
      ExceptionState& exception_state);
   explicit QJSUnionSequenceDoubleDOMMatrixInit(const std::vector<double>& value);
   explicit QJSUnionSequenceDoubleDOMMatrixInit(std::shared_ptr<DOMMatrixInit>);
  ~QJSUnionSequenceDoubleDOMMatrixInit ();
  // Returns the type of the content value.
  ContentType GetContentType() const { return content_type_; }
  bool IsSequenceDouble() const { return content_type_ == ContentType::kSequenceDouble; }
  const std::vector<double>& GetAsSequenceDouble() const {
    assert(content_type_ == ContentType::kSequenceDouble);
    return member_5_;
  }
  void Set(const std::vector<double>& value);
  void Set(std::vector<double>&& value);
  bool IsDOMMatrixInit() const { return content_type_ == ContentType::kDOMMatrixInit; }
  std::shared_ptr<DOMMatrixInit> GetAsDOMMatrixInit() const {
    assert(content_type_ == ContentType::kDOMMatrixInit);
    return member_DOMMatrixInit_;
  }
  void Set(std::shared_ptr<DOMMatrixInit> value);
  JSValue ToQuickJSValue(JSContext* ctx, ExceptionState &exception_state) const override;
  void Trace(GCVisitor *visitor) const override;
 private:
  void Clear();
  ContentType content_type_;
  std::vector<double> member_5_;
  std::shared_ptr<DOMMatrixInit> member_DOMMatrixInit_;
};
}
#endif  // WEBF_OUT_QJS_UNION_STRING_DOUBLESEQUENCE_H_