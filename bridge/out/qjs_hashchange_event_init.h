/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#ifndef BRIDGE_QJS_HASHCHANGE_EVENT_INIT_H
#define BRIDGE_QJS_HASHCHANGE_EVENT_INIT_H
#include <quickjs/quickjs.h>
#include "bindings/qjs/wrapper_type_info.h"
#include "bindings/qjs/generated_code_helper.h"
#include "qjs_event_init.h"
namespace webf {
class ExecutingContext;
class ExceptionState;
class HashchangeEventInit : public EventInit {
 public:
  using ImplType = std::shared_ptr<HashchangeEventInit>;
  static std::shared_ptr<HashchangeEventInit> Create();
  static std::shared_ptr<HashchangeEventInit> Create(JSContext* ctx, JSValue value, ExceptionState& exception_state);
  explicit HashchangeEventInit();
  explicit HashchangeEventInit(JSContext* ctx, JSValue value, ExceptionState& exception_state);
  AtomicString oldURL() const {
    assert(has_oldURL_);
    return oldURL_;
  }
  bool hasOldURL() const { return has_oldURL_; }
  void setOldURL(AtomicString value) {
    oldURL_ = value;
    has_oldURL_ = true;
  }
  AtomicString newURL() const {
    assert(has_newURL_);
    return newURL_;
  }
  bool hasNewURL() const { return has_newURL_; }
  void setNewURL(AtomicString value) {
    newURL_ = value;
    has_newURL_ = true;
  }
  bool FillQJSObjectWithMembers(JSContext *ctx, JSValue qjs_dictionary) const override;
  bool FillMembersWithQJSObject(JSContext* ctx, JSValue value, ExceptionState& exception_state) override;
private:
  AtomicString oldURL_;
  bool has_oldURL_ = false;
  AtomicString newURL_;
  bool has_newURL_ = false;
};
}
#endif // BRIDGE_QJS_HASHCHANGE_EVENT_INIT_H