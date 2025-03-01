/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#ifndef BRIDGE_QJS_CLOSE_EVENT_H
#define BRIDGE_QJS_CLOSE_EVENT_H
#include <quickjs/quickjs.h>
#include "bindings/qjs/wrapper_type_info.h"
#include "bindings/qjs/generated_code_helper.h"
#include "core/events/close_event.h"
#include "qjs_event.h"
namespace webf {
class ExecutingContext;
// Dart generated nativeEvent member are force align to 64-bit system. So all members in NativeEvent should have 64 bit
// width.
#if ANDROID_32_BIT
struct NativeCloseEvent {
  NativeEvent native_event;
int64_t code;
int64_t reason;
int64_t wasClean;
};
#else
// Use pointer instead of int64_t on 64 bit system can help compiler to choose best register for better running
// performance.
struct NativeCloseEvent {
NativeEvent native_event;
int64_t code;
SharedNativeString* reason;
int64_t wasClean;
};
#endif
class QJSCloseEvent : public QJSInterfaceBridge<QJSCloseEvent, CloseEvent> {
 public:
  static void Install(ExecutingContext* context);
  static WrapperTypeInfo* GetWrapperTypeInfo() {
    return const_cast<WrapperTypeInfo*>(&wrapper_type_info_);
  }
   static JSValue ConstructorCallback(JSContext* ctx, JSValue func_obj, JSValue this_val, int argc, JSValue* argv, int flags); 
  static const WrapperTypeInfo wrapper_type_info_;
 private:
  static void InstallPrototypeMethods(ExecutingContext* context); 
  static void InstallConstructor(ExecutingContext* context); 
  static int PropertyEnumerateCallback(JSContext* ctx, JSPropertyEnum** ptab, uint32_t* plen, JSValueConst obj);
  static bool PropertyCheckerCallback(JSContext* ctx, JSValueConst obj, JSAtom atom);
  static JSValue StringPropertyGetterCallback(JSContext* ctx, JSValue obj, JSAtom key);
  static bool StringPropertySetterCallback(JSContext* ctx, JSValueConst obj, JSAtom key, JSValueConst value);
    static bool StringPropertyDeleterCallback(JSContext* ctx, JSValueConst obj, JSAtom key);
};
}
#endif // BRIDGE_QJS_CLOSE_EVENT_H