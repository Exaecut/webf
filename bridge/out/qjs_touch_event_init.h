/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#ifndef BRIDGE_QJS_TOUCH_EVENT_INIT_H
#define BRIDGE_QJS_TOUCH_EVENT_INIT_H
#include <quickjs/quickjs.h>
#include "bindings/qjs/wrapper_type_info.h"
#include "bindings/qjs/generated_code_helper.h"
#include "qjs_ui_event_init.h"
namespace webf {
class ExecutingContext;
class ExceptionState;
class TouchEventInit : public UIEventInit {
 public:
  using ImplType = std::shared_ptr<TouchEventInit>;
  static std::shared_ptr<TouchEventInit> Create();
  static std::shared_ptr<TouchEventInit> Create(JSContext* ctx, JSValue value, ExceptionState& exception_state);
  explicit TouchEventInit();
  explicit TouchEventInit(JSContext* ctx, JSValue value, ExceptionState& exception_state);
  bool altKey() const {
    assert(has_altKey_);
    return altKey_;
  }
  bool hasAltKey() const { return has_altKey_; }
  void setAltKey(bool value) {
    altKey_ = value;
    has_altKey_ = true;
  }
  TouchList* changedTouches() const {
    assert(has_changedTouches_);
    return changedTouches_;
  }
  bool hasChangedTouches() const { return has_changedTouches_; }
  void setChangedTouches(TouchList* value) {
    changedTouches_ = value;
    has_changedTouches_ = true;
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
  bool metaKey() const {
    assert(has_metaKey_);
    return metaKey_;
  }
  bool hasMetaKey() const { return has_metaKey_; }
  void setMetaKey(bool value) {
    metaKey_ = value;
    has_metaKey_ = true;
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
  TouchList* targetTouches() const {
    assert(has_targetTouches_);
    return targetTouches_;
  }
  bool hasTargetTouches() const { return has_targetTouches_; }
  void setTargetTouches(TouchList* value) {
    targetTouches_ = value;
    has_targetTouches_ = true;
  }
  TouchList* touches() const {
    assert(has_touches_);
    return touches_;
  }
  bool hasTouches() const { return has_touches_; }
  void setTouches(TouchList* value) {
    touches_ = value;
    has_touches_ = true;
  }
  bool FillQJSObjectWithMembers(JSContext *ctx, JSValue qjs_dictionary) const override;
  bool FillMembersWithQJSObject(JSContext* ctx, JSValue value, ExceptionState& exception_state) override;
private:
  bool altKey_;
  bool has_altKey_ = false;
  TouchList* changedTouches_;
  bool has_changedTouches_ = false;
  bool ctrlKey_;
  bool has_ctrlKey_ = false;
  bool metaKey_;
  bool has_metaKey_ = false;
  bool shiftKey_;
  bool has_shiftKey_ = false;
  TouchList* targetTouches_;
  bool has_targetTouches_ = false;
  TouchList* touches_;
  bool has_touches_ = false;
};
}
#endif // BRIDGE_QJS_TOUCH_EVENT_INIT_H