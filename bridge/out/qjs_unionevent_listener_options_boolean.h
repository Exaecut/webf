/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
 */
#ifndef qjs_union_event_listener_options_boolean_H_
#define qjs_union_event_listener_options_boolean_H_
#include <vector>
#include <cassert>
#include "bindings/qjs/union_base.h"
#include "bindings/qjs/atomic_string.h"
#include "bindings/qjs/cppgc/member.h"
namespace webf {
    class EventListenerOptions;
class QJSUnionEventListenerOptionsBoolean final : public UnionBase {
 public:
  using ImplType = std::shared_ptr<QJSUnionEventListenerOptionsBoolean>;
  // The type of the content value of this IDL union.
  enum class ContentType { kEventListenerOptions,kBoolean };
  static std::shared_ptr<QJSUnionEventListenerOptionsBoolean> Create(
      JSContext* ctx,
      JSValue value,
      ExceptionState& exception_state);
   explicit QJSUnionEventListenerOptionsBoolean(std::shared_ptr<EventListenerOptions>);
   explicit QJSUnionEventListenerOptionsBoolean(const bool& value);
  ~QJSUnionEventListenerOptionsBoolean ();
  // Returns the type of the content value.
  ContentType GetContentType() const { return content_type_; }
  bool IsEventListenerOptions() const { return content_type_ == ContentType::kEventListenerOptions; }
  std::shared_ptr<EventListenerOptions> GetAsEventListenerOptions() const {
    assert(content_type_ == ContentType::kEventListenerOptions);
    return member_EventListenerOptions_;
  }
  void Set(std::shared_ptr<EventListenerOptions> value);
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
  std::shared_ptr<EventListenerOptions> member_EventListenerOptions_;
  bool member_boolean_;
};
}
#endif  // WEBF_OUT_QJS_UNION_STRING_DOUBLESEQUENCE_H_