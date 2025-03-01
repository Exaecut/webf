/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
 */
#ifndef qjs_union_add_event_listener_options_boolean_H_
#define qjs_union_add_event_listener_options_boolean_H_
#include <vector>
#include <cassert>
#include "bindings/qjs/union_base.h"
#include "bindings/qjs/atomic_string.h"
#include "bindings/qjs/cppgc/member.h"
namespace webf {
    class AddEventListenerOptions;
class QJSUnionAddEventListenerOptionsBoolean final : public UnionBase {
 public:
  using ImplType = std::shared_ptr<QJSUnionAddEventListenerOptionsBoolean>;
  // The type of the content value of this IDL union.
  enum class ContentType { kAddEventListenerOptions,kBoolean };
  static std::shared_ptr<QJSUnionAddEventListenerOptionsBoolean> Create(
      JSContext* ctx,
      JSValue value,
      ExceptionState& exception_state);
   explicit QJSUnionAddEventListenerOptionsBoolean(std::shared_ptr<AddEventListenerOptions>);
   explicit QJSUnionAddEventListenerOptionsBoolean(const bool& value);
  ~QJSUnionAddEventListenerOptionsBoolean ();
  // Returns the type of the content value.
  ContentType GetContentType() const { return content_type_; }
  bool IsAddEventListenerOptions() const { return content_type_ == ContentType::kAddEventListenerOptions; }
  std::shared_ptr<AddEventListenerOptions> GetAsAddEventListenerOptions() const {
    assert(content_type_ == ContentType::kAddEventListenerOptions);
    return member_AddEventListenerOptions_;
  }
  void Set(std::shared_ptr<AddEventListenerOptions> value);
  bool IsBoolean() const { return content_type_ == ContentType::kBoolean; }
  const bool& GetAsBoolean() const {
    assert(content_type_ == ContentType::kBoolean);
    return member_boolean_;
  }
  void Set(const bool& value);
  void Set(bool&& value);
  JSValue ToQuickJSValue(JSContext* ctx, ExceptionState &exception_state) const override;
  void Trace(GCVisitor *visitor) const override;
 private:
  void Clear();
  ContentType content_type_;
  std::shared_ptr<AddEventListenerOptions> member_AddEventListenerOptions_;
  bool member_boolean_;
};
}
#endif  // WEBF_OUT_QJS_UNION_STRING_DOUBLESEQUENCE_H_