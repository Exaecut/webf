/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
 */
#ifndef qjs_union_dom_string_node_H_
#define qjs_union_dom_string_node_H_
#include <vector>
#include <cassert>
#include "bindings/qjs/union_base.h"
#include "bindings/qjs/atomic_string.h"
#include "bindings/qjs/cppgc/member.h"
namespace webf {
    class Node;
class QJSUnionDomStringNode final : public UnionBase {
 public:
  using ImplType = std::shared_ptr<QJSUnionDomStringNode>;
  // The type of the content value of this IDL union.
  enum class ContentType { kDomString,kNode };
  static std::shared_ptr<QJSUnionDomStringNode> Create(
      JSContext* ctx,
      JSValue value,
      ExceptionState& exception_state);
   explicit QJSUnionDomStringNode(const AtomicString& value);
   explicit QJSUnionDomStringNode(Node*);
  ~QJSUnionDomStringNode ();
  // Returns the type of the content value.
  ContentType GetContentType() const { return content_type_; }
  bool IsDomString() const { return content_type_ == ContentType::kDomString; }
  const AtomicString& GetAsDomString() const {
    assert(content_type_ == ContentType::kDomString);
    return member_dom_string_;
  }
  void Set(const AtomicString& value);
  void Set(AtomicString&& value);
  bool IsNode() const { return content_type_ == ContentType::kNode; }
  Node* GetAsNode() const {
    assert(content_type_ == ContentType::kNode);
    return member_Node_;
  }
  void Set(Node* value);
  JSValue ToQuickJSValue(JSContext* ctx, ExceptionState &exception_state) const override;
  void Trace(GCVisitor *visitor) const override;
 private:
  void Clear();
  ContentType content_type_;
  AtomicString member_dom_string_;
  Member<Node> member_Node_;
};
}
#endif  // WEBF_OUT_QJS_UNION_STRING_DOUBLESEQUENCE_H_