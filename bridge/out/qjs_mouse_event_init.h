/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#ifndef BRIDGE_QJS_MOUSE_EVENT_INIT_H
#define BRIDGE_QJS_MOUSE_EVENT_INIT_H
#include <quickjs/quickjs.h>
#include "bindings/qjs/wrapper_type_info.h"
#include "bindings/qjs/generated_code_helper.h"
#include "qjs_ui_event_init.h"
namespace webf {
class ExecutingContext;
class ExceptionState;
class MouseEventInit : public UIEventInit {
 public:
  using ImplType = std::shared_ptr<MouseEventInit>;
  static std::shared_ptr<MouseEventInit> Create();
  static std::shared_ptr<MouseEventInit> Create(JSContext* ctx, JSValue value, ExceptionState& exception_state);
  explicit MouseEventInit();
  explicit MouseEventInit(JSContext* ctx, JSValue value, ExceptionState& exception_state);
  bool FillQJSObjectWithMembers(JSContext *ctx, JSValue qjs_dictionary) const override;
  bool FillMembersWithQJSObject(JSContext* ctx, JSValue value, ExceptionState& exception_state) override;
private:
};
}
#endif // BRIDGE_QJS_MOUSE_EVENT_INIT_H