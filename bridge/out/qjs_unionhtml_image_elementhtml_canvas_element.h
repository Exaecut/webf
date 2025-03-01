/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
 */
#ifndef qjs_union_html_image_element_html_canvas_element_H_
#define qjs_union_html_image_element_html_canvas_element_H_
#include <vector>
#include <cassert>
#include "bindings/qjs/union_base.h"
#include "bindings/qjs/atomic_string.h"
#include "bindings/qjs/cppgc/member.h"
namespace webf {
    class HTMLImageElement;
    class HTMLCanvasElement;
class QJSUnionHTMLImageElementHTMLCanvasElement final : public UnionBase {
 public:
  using ImplType = std::shared_ptr<QJSUnionHTMLImageElementHTMLCanvasElement>;
  // The type of the content value of this IDL union.
  enum class ContentType { kHTMLImageElement,kHTMLCanvasElement };
  static std::shared_ptr<QJSUnionHTMLImageElementHTMLCanvasElement> Create(
      JSContext* ctx,
      JSValue value,
      ExceptionState& exception_state);
   explicit QJSUnionHTMLImageElementHTMLCanvasElement(HTMLImageElement*);
   explicit QJSUnionHTMLImageElementHTMLCanvasElement(HTMLCanvasElement*);
  ~QJSUnionHTMLImageElementHTMLCanvasElement ();
  // Returns the type of the content value.
  ContentType GetContentType() const { return content_type_; }
  bool IsHTMLImageElement() const { return content_type_ == ContentType::kHTMLImageElement; }
  HTMLImageElement* GetAsHTMLImageElement() const {
    assert(content_type_ == ContentType::kHTMLImageElement);
    return member_HTMLImageElement_;
  }
  void Set(HTMLImageElement* value);
  bool IsHTMLCanvasElement() const { return content_type_ == ContentType::kHTMLCanvasElement; }
  HTMLCanvasElement* GetAsHTMLCanvasElement() const {
    assert(content_type_ == ContentType::kHTMLCanvasElement);
    return member_HTMLCanvasElement_;
  }
  void Set(HTMLCanvasElement* value);
  JSValue ToQuickJSValue(JSContext* ctx, ExceptionState &exception_state) const override;
  void Trace(GCVisitor *visitor) const override;
 private:
  void Clear();
  ContentType content_type_;
  Member<HTMLImageElement> member_HTMLImageElement_;
  Member<HTMLCanvasElement> member_HTMLCanvasElement_;
};
}
#endif  // WEBF_OUT_QJS_UNION_STRING_DOUBLESEQUENCE_H_