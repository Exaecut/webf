/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
 */
#ifndef qjs_union_dom_string_canvas_gradient_H_
#define qjs_union_dom_string_canvas_gradient_H_
#include <vector>
#include <cassert>
#include "bindings/qjs/union_base.h"
#include "bindings/qjs/atomic_string.h"
#include "bindings/qjs/cppgc/member.h"
namespace webf {
    class CanvasGradient;
class QJSUnionDomStringCanvasGradient final : public UnionBase {
 public:
  using ImplType = std::shared_ptr<QJSUnionDomStringCanvasGradient>;
  // The type of the content value of this IDL union.
  enum class ContentType { kDomString,kCanvasGradient };
  static std::shared_ptr<QJSUnionDomStringCanvasGradient> Create(
      JSContext* ctx,
      JSValue value,
      ExceptionState& exception_state);
   explicit QJSUnionDomStringCanvasGradient(const AtomicString& value);
   explicit QJSUnionDomStringCanvasGradient(CanvasGradient*);
   ;
  ~QJSUnionDomStringCanvasGradient ();
  // Returns the type of the content value.
  ContentType GetContentType() const { return content_type_; }
  bool IsDomString() const { return content_type_ == ContentType::kDomString; }
  const AtomicString& GetAsDomString() const {
    assert(content_type_ == ContentType::kDomString);
    return member_dom_string_;
  }
  void Set(const AtomicString& value);
  void Set(AtomicString&& value);
  bool IsCanvasGradient() const { return content_type_ == ContentType::kCanvasGradient; }
  CanvasGradient* GetAsCanvasGradient() const {
    assert(content_type_ == ContentType::kCanvasGradient);
    return member_CanvasGradient_;
  }
  void Set(CanvasGradient* value);
  JSValue ToQuickJSValue(JSContext* ctx, ExceptionState &exception_state) const override;
  void Trace(GCVisitor *visitor) const override;
 private:
  void Clear();
  ContentType content_type_;
  AtomicString member_dom_string_;
  Member<CanvasGradient> member_CanvasGradient_;
};
}
#endif  // WEBF_OUT_QJS_UNION_STRING_DOUBLESEQUENCE_H_