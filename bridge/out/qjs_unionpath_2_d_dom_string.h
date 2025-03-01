/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
 */
#ifndef qjs_union_path_2_d_dom_string_H_
#define qjs_union_path_2_d_dom_string_H_
#include <vector>
#include <cassert>
#include "bindings/qjs/union_base.h"
#include "bindings/qjs/atomic_string.h"
#include "bindings/qjs/cppgc/member.h"
namespace webf {
    class Path2D;
class QJSUnionPath2DDomString final : public UnionBase {
 public:
  using ImplType = std::shared_ptr<QJSUnionPath2DDomString>;
  // The type of the content value of this IDL union.
  enum class ContentType { kPath2D,kDomString };
  static std::shared_ptr<QJSUnionPath2DDomString> Create(
      JSContext* ctx,
      JSValue value,
      ExceptionState& exception_state);
   explicit QJSUnionPath2DDomString(Path2D*);
   explicit QJSUnionPath2DDomString(const AtomicString& value);
  ~QJSUnionPath2DDomString ();
  // Returns the type of the content value.
  ContentType GetContentType() const { return content_type_; }
  bool IsPath2D() const { return content_type_ == ContentType::kPath2D; }
  Path2D* GetAsPath2D() const {
    assert(content_type_ == ContentType::kPath2D);
    return member_Path2D_;
  }
  void Set(Path2D* value);
  bool IsDomString() const { return content_type_ == ContentType::kDomString; }
  const AtomicString& GetAsDomString() const {
    assert(content_type_ == ContentType::kDomString);
    return member_dom_string_;
  }
  void Set(const AtomicString& value);
  void Set(AtomicString&& value);
  JSValue ToQuickJSValue(JSContext* ctx, ExceptionState &exception_state) const override;
  void Trace(GCVisitor *visitor) const override;
 private:
  void Clear();
  ContentType content_type_;
  Member<Path2D> member_Path2D_;
  AtomicString member_dom_string_;
};
}
#endif  // WEBF_OUT_QJS_UNION_STRING_DOUBLESEQUENCE_H_