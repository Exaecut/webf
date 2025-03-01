/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#ifndef BRIDGE_QJS_MUTATION_OBSERVER_INIT_H
#define BRIDGE_QJS_MUTATION_OBSERVER_INIT_H
#include <quickjs/quickjs.h>
#include "bindings/qjs/wrapper_type_info.h"
#include "bindings/qjs/generated_code_helper.h"
namespace webf {
class ExecutingContext;
class ExceptionState;
class MutationObserverInit : public DictionaryBase {
 public:
  using ImplType = std::shared_ptr<MutationObserverInit>;
  static std::shared_ptr<MutationObserverInit> Create();
  static std::shared_ptr<MutationObserverInit> Create(JSContext* ctx, JSValue value, ExceptionState& exception_state);
  explicit MutationObserverInit();
  explicit MutationObserverInit(JSContext* ctx, JSValue value, ExceptionState& exception_state);
  bool childList() const {
    assert(has_childList_);
    return childList_;
  }
  bool hasChildList() const { return has_childList_; }
  void setChildList(bool value) {
    childList_ = value;
    has_childList_ = true;
  }
  bool attributes() const {
    assert(has_attributes_);
    return attributes_;
  }
  bool hasAttributes() const { return has_attributes_; }
  void setAttributes(bool value) {
    attributes_ = value;
    has_attributes_ = true;
  }
  bool characterData() const {
    assert(has_characterData_);
    return characterData_;
  }
  bool hasCharacterData() const { return has_characterData_; }
  void setCharacterData(bool value) {
    characterData_ = value;
    has_characterData_ = true;
  }
  bool subtree() const {
    assert(has_subtree_);
    return subtree_;
  }
  bool hasSubtree() const { return has_subtree_; }
  void setSubtree(bool value) {
    subtree_ = value;
    has_subtree_ = true;
  }
  bool attributeOldValue() const {
    assert(has_attributeOldValue_);
    return attributeOldValue_;
  }
  bool hasAttributeOldValue() const { return has_attributeOldValue_; }
  void setAttributeOldValue(bool value) {
    attributeOldValue_ = value;
    has_attributeOldValue_ = true;
  }
  bool characterDataOldValue() const {
    assert(has_characterDataOldValue_);
    return characterDataOldValue_;
  }
  bool hasCharacterDataOldValue() const { return has_characterDataOldValue_; }
  void setCharacterDataOldValue(bool value) {
    characterDataOldValue_ = value;
    has_characterDataOldValue_ = true;
  }
  std::vector<AtomicString> attributeFilter() const {
    assert(has_attributeFilter_);
    return attributeFilter_;
  }
  bool hasAttributeFilter() const { return has_attributeFilter_; }
  void setAttributeFilter(std::vector<AtomicString> value) {
    attributeFilter_ = value;
    has_attributeFilter_ = true;
  }
  bool FillQJSObjectWithMembers(JSContext *ctx, JSValue qjs_dictionary) const override;
  bool FillMembersWithQJSObject(JSContext* ctx, JSValue value, ExceptionState& exception_state) override;
private:
  bool childList_;
  bool has_childList_ = false;
  bool attributes_;
  bool has_attributes_ = false;
  bool characterData_;
  bool has_characterData_ = false;
  bool subtree_;
  bool has_subtree_ = false;
  bool attributeOldValue_;
  bool has_attributeOldValue_ = false;
  bool characterDataOldValue_;
  bool has_characterDataOldValue_ = false;
  std::vector<AtomicString> attributeFilter_;
  bool has_attributeFilter_ = false;
};
}
#endif // BRIDGE_QJS_MUTATION_OBSERVER_INIT_H