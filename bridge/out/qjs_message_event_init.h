/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#ifndef BRIDGE_QJS_MESSAGE_EVENT_INIT_H
#define BRIDGE_QJS_MESSAGE_EVENT_INIT_H
#include <quickjs/quickjs.h>
#include "bindings/qjs/wrapper_type_info.h"
#include "bindings/qjs/generated_code_helper.h"
#include "qjs_event_init.h"
namespace webf {
class ExecutingContext;
class ExceptionState;
class MessageEventInit : public EventInit {
 public:
  using ImplType = std::shared_ptr<MessageEventInit>;
  static std::shared_ptr<MessageEventInit> Create();
  static std::shared_ptr<MessageEventInit> Create(JSContext* ctx, JSValue value, ExceptionState& exception_state);
  explicit MessageEventInit();
  explicit MessageEventInit(JSContext* ctx, JSValue value, ExceptionState& exception_state);
  ScriptValue data() const {
    assert(has_data_);
    return data_;
  }
  bool hasData() const { return has_data_; }
  void setData(ScriptValue value) {
    data_ = value;
    has_data_ = true;
  }
  AtomicString origin() const {
    assert(has_origin_);
    return origin_;
  }
  bool hasOrigin() const { return has_origin_; }
  void setOrigin(AtomicString value) {
    origin_ = value;
    has_origin_ = true;
  }
  AtomicString lastEventId() const {
    assert(has_lastEventId_);
    return lastEventId_;
  }
  bool hasLastEventId() const { return has_lastEventId_; }
  void setLastEventId(AtomicString value) {
    lastEventId_ = value;
    has_lastEventId_ = true;
  }
  AtomicString source() const {
    assert(has_source_);
    return source_;
  }
  bool hasSource() const { return has_source_; }
  void setSource(AtomicString value) {
    source_ = value;
    has_source_ = true;
  }
  bool FillQJSObjectWithMembers(JSContext *ctx, JSValue qjs_dictionary) const override;
  bool FillMembersWithQJSObject(JSContext* ctx, JSValue value, ExceptionState& exception_state) override;
private:
  ScriptValue data_;
  bool has_data_ = false;
  AtomicString origin_;
  bool has_origin_ = false;
  AtomicString lastEventId_;
  bool has_lastEventId_ = false;
  AtomicString source_;
  bool has_source_ = false;
};
}
#endif // BRIDGE_QJS_MESSAGE_EVENT_INIT_H