/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
 */
#ifndef qjs_union_double_dom_point_init_H_
#define qjs_union_double_dom_point_init_H_
#include <vector>
#include <cassert>
#include "bindings/qjs/union_base.h"
#include "bindings/qjs/atomic_string.h"
#include "bindings/qjs/cppgc/member.h"
namespace webf {
    class DOMPointInit;
class QJSUnionDoubleDOMPointInit final : public UnionBase {
 public:
  using ImplType = std::shared_ptr<QJSUnionDoubleDOMPointInit>;
  // The type of the content value of this IDL union.
  enum class ContentType { kDouble,kDOMPointInit };
  static std::shared_ptr<QJSUnionDoubleDOMPointInit> Create(
      JSContext* ctx,
      JSValue value,
      ExceptionState& exception_state);
   explicit QJSUnionDoubleDOMPointInit(const double& value);
   explicit QJSUnionDoubleDOMPointInit(std::shared_ptr<DOMPointInit>);
  ~QJSUnionDoubleDOMPointInit ();
  // Returns the type of the content value.
  ContentType GetContentType() const { return content_type_; }
  bool IsDouble() const { return content_type_ == ContentType::kDouble; }
  const double& GetAsDouble() const {
    assert(content_type_ == ContentType::kDouble);
    return member_double_;
  }
  void Set(const double& value);
  void Set(double&& value);
  bool IsDOMPointInit() const { return content_type_ == ContentType::kDOMPointInit; }
  std::shared_ptr<DOMPointInit> GetAsDOMPointInit() const {
    assert(content_type_ == ContentType::kDOMPointInit);
    return member_DOMPointInit_;
  }
  void Set(std::shared_ptr<DOMPointInit> value);
  JSValue ToQuickJSValue(JSContext* ctx, ExceptionState &exception_state) const override;
  void Trace(GCVisitor *visitor) const override;
 private:
  void Clear();
  ContentType content_type_;
  double member_double_;
  std::shared_ptr<DOMPointInit> member_DOMPointInit_;
};
}
#endif  // WEBF_OUT_QJS_UNION_STRING_DOUBLESEQUENCE_H_