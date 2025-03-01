/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#ifndef BRIDGE_QJS_ERROR_EVENT_INIT_H
#define BRIDGE_QJS_ERROR_EVENT_INIT_H
#include <quickjs/quickjs.h>
#include "bindings/qjs/wrapper_type_info.h"
#include "bindings/qjs/generated_code_helper.h"
#include "qjs_event_init.h"
namespace webf {
class ExecutingContext;
class ExceptionState;
class ErrorEventInit : public EventInit {
 public:
  using ImplType = std::shared_ptr<ErrorEventInit>;
  static std::shared_ptr<ErrorEventInit> Create();
  static std::shared_ptr<ErrorEventInit> Create(JSContext* ctx, JSValue value, ExceptionState& exception_state);
  explicit ErrorEventInit();
  explicit ErrorEventInit(JSContext* ctx, JSValue value, ExceptionState& exception_state);
  AtomicString message() const {
    assert(has_message_);
    return message_;
  }
  bool hasMessage() const { return has_message_; }
  void setMessage(AtomicString value) {
    message_ = value;
    has_message_ = true;
  }
  AtomicString filename() const {
    assert(has_filename_);
    return filename_;
  }
  bool hasFilename() const { return has_filename_; }
  void setFilename(AtomicString value) {
    filename_ = value;
    has_filename_ = true;
  }
  int64_t lineno() const {
    assert(has_lineno_);
    return lineno_;
  }
  bool hasLineno() const { return has_lineno_; }
  void setLineno(int64_t value) {
    lineno_ = value;
    has_lineno_ = true;
  }
  int64_t colno() const {
    assert(has_colno_);
    return colno_;
  }
  bool hasColno() const { return has_colno_; }
  void setColno(int64_t value) {
    colno_ = value;
    has_colno_ = true;
  }
  ScriptValue error() const {
    assert(has_error_);
    return error_;
  }
  bool hasError() const { return has_error_; }
  void setError(ScriptValue value) {
    error_ = value;
    has_error_ = true;
  }
  bool FillQJSObjectWithMembers(JSContext *ctx, JSValue qjs_dictionary) const override;
  bool FillMembersWithQJSObject(JSContext* ctx, JSValue value, ExceptionState& exception_state) override;
private:
  AtomicString message_;
  bool has_message_ = false;
  AtomicString filename_;
  bool has_filename_ = false;
  int64_t lineno_;
  bool has_lineno_ = false;
  int64_t colno_;
  bool has_colno_ = false;
  ScriptValue error_;
  bool has_error_ = false;
};
}
#endif // BRIDGE_QJS_ERROR_EVENT_INIT_H