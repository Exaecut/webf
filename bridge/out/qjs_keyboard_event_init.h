/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#ifndef BRIDGE_QJS_KEYBOARD_EVENT_INIT_H
#define BRIDGE_QJS_KEYBOARD_EVENT_INIT_H
#include <quickjs/quickjs.h>
#include "bindings/qjs/wrapper_type_info.h"
#include "bindings/qjs/generated_code_helper.h"
#include "qjs_ui_event_init.h"
namespace webf {
class ExecutingContext;
class ExceptionState;
class KeyboardEventInit : public UIEventInit {
 public:
  using ImplType = std::shared_ptr<KeyboardEventInit>;
  static std::shared_ptr<KeyboardEventInit> Create();
  static std::shared_ptr<KeyboardEventInit> Create(JSContext* ctx, JSValue value, ExceptionState& exception_state);
  explicit KeyboardEventInit();
  explicit KeyboardEventInit(JSContext* ctx, JSValue value, ExceptionState& exception_state);
  bool altKey() const {
    assert(has_altKey_);
    return altKey_;
  }
  bool hasAltKey() const { return has_altKey_; }
  void setAltKey(bool value) {
    altKey_ = value;
    has_altKey_ = true;
  }
  double charCode() const {
    assert(has_charCode_);
    return charCode_;
  }
  bool hasCharCode() const { return has_charCode_; }
  void setCharCode(double value) {
    charCode_ = value;
    has_charCode_ = true;
  }
  AtomicString code() const {
    assert(has_code_);
    return code_;
  }
  bool hasCode() const { return has_code_; }
  void setCode(AtomicString value) {
    code_ = value;
    has_code_ = true;
  }
  bool ctrlKey() const {
    assert(has_ctrlKey_);
    return ctrlKey_;
  }
  bool hasCtrlKey() const { return has_ctrlKey_; }
  void setCtrlKey(bool value) {
    ctrlKey_ = value;
    has_ctrlKey_ = true;
  }
  bool isComposing() const {
    assert(has_isComposing_);
    return isComposing_;
  }
  bool hasIsComposing() const { return has_isComposing_; }
  void setIsComposing(bool value) {
    isComposing_ = value;
    has_isComposing_ = true;
  }
  AtomicString key() const {
    assert(has_key_);
    return key_;
  }
  bool hasKey() const { return has_key_; }
  void setKey(AtomicString value) {
    key_ = value;
    has_key_ = true;
  }
  double keyCode() const {
    assert(has_keyCode_);
    return keyCode_;
  }
  bool hasKeyCode() const { return has_keyCode_; }
  void setKeyCode(double value) {
    keyCode_ = value;
    has_keyCode_ = true;
  }
  double location() const {
    assert(has_location_);
    return location_;
  }
  bool hasLocation() const { return has_location_; }
  void setLocation(double value) {
    location_ = value;
    has_location_ = true;
  }
  bool metaKey() const {
    assert(has_metaKey_);
    return metaKey_;
  }
  bool hasMetaKey() const { return has_metaKey_; }
  void setMetaKey(bool value) {
    metaKey_ = value;
    has_metaKey_ = true;
  }
  bool repeat() const {
    assert(has_repeat_);
    return repeat_;
  }
  bool hasRepeat() const { return has_repeat_; }
  void setRepeat(bool value) {
    repeat_ = value;
    has_repeat_ = true;
  }
  bool shiftKey() const {
    assert(has_shiftKey_);
    return shiftKey_;
  }
  bool hasShiftKey() const { return has_shiftKey_; }
  void setShiftKey(bool value) {
    shiftKey_ = value;
    has_shiftKey_ = true;
  }
  bool FillQJSObjectWithMembers(JSContext *ctx, JSValue qjs_dictionary) const override;
  bool FillMembersWithQJSObject(JSContext* ctx, JSValue value, ExceptionState& exception_state) override;
private:
  bool altKey_;
  bool has_altKey_ = false;
  double charCode_;
  bool has_charCode_ = false;
  AtomicString code_;
  bool has_code_ = false;
  bool ctrlKey_;
  bool has_ctrlKey_ = false;
  bool isComposing_;
  bool has_isComposing_ = false;
  AtomicString key_;
  bool has_key_ = false;
  double keyCode_;
  bool has_keyCode_ = false;
  double location_;
  bool has_location_ = false;
  bool metaKey_;
  bool has_metaKey_ = false;
  bool repeat_;
  bool has_repeat_ = false;
  bool shiftKey_;
  bool has_shiftKey_ = false;
};
}
#endif // BRIDGE_QJS_KEYBOARD_EVENT_INIT_H