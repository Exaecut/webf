/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
 // Generated from template:
 //   code_generator/src/json/templates/event_factory.cc.tmp
 // and input files:
 //   E:\Projects\Exaecut\sources\webf\bridge\core\events\dart_created_events.json5
#include "event_factory.h"
#include <unordered_map>
#include "event_type_names.h"
#include "bindings/qjs/cppgc/garbage_collected.h"
#include "core/dom/events/custom_event.h"
#include "qjs_close_event.h"
#include "qjs_pop_state_event.h"
#include "qjs_gesture_event.h"
#include "qjs_hashchange_event.h"
#include "qjs_input_event.h"
#include "qjs_hybrid_router_change_event.h"
#include "qjs_focus_event.h"
#include "qjs_intersection_change_event.h"
#include "qjs_message_event.h"
#include "qjs_touch_event.h"
#include "qjs_mouse_event.h"
namespace webf {
using EventConstructorFunction = Event* (*)(ExecutingContext* context, const AtomicString& type, RawEvent* raw_event);
using EventMap = std::unordered_map<AtomicString, EventConstructorFunction, AtomicString::KeyHasher>;
static thread_local EventMap* g_event_constructors = nullptr;
struct CreateEventFunctionMapData {
  const AtomicString& tag;
  EventConstructorFunction func;
};
    static Event* CloseEventConstructor(ExecutingContext* context, const AtomicString& type, RawEvent* raw_event) {
      if (raw_event == nullptr) {
        return MakeGarbageCollected<CloseEvent>(context, type, ASSERT_NO_EXCEPTION());
      }
      if (raw_event->length == sizeof(NativeCloseEvent) / sizeof(int64_t)) {
        return MakeGarbageCollected<CloseEvent>(context, type, toNativeEvent<NativeCloseEvent>(raw_event));
      }
      return MakeGarbageCollected<Event>(context, type, toNativeEvent<NativeEvent>(raw_event));
    }
    static Event* PopStateEventConstructor(ExecutingContext* context, const AtomicString& type, RawEvent* raw_event) {
      if (raw_event == nullptr) {
        return MakeGarbageCollected<PopStateEvent>(context, type, ASSERT_NO_EXCEPTION());
      }
      if (raw_event->length == sizeof(NativePopStateEvent) / sizeof(int64_t)) {
        return MakeGarbageCollected<PopStateEvent>(context, type, toNativeEvent<NativePopStateEvent>(raw_event));
      }
      return MakeGarbageCollected<Event>(context, type, toNativeEvent<NativeEvent>(raw_event));
    }
    static Event* GestureEventConstructor(ExecutingContext* context, const AtomicString& type, RawEvent* raw_event) {
      if (raw_event == nullptr) {
        return MakeGarbageCollected<GestureEvent>(context, type, ASSERT_NO_EXCEPTION());
      }
      if (raw_event->length == sizeof(NativeGestureEvent) / sizeof(int64_t)) {
        return MakeGarbageCollected<GestureEvent>(context, type, toNativeEvent<NativeGestureEvent>(raw_event));
      }
      return MakeGarbageCollected<Event>(context, type, toNativeEvent<NativeEvent>(raw_event));
    }
    static Event* HashchangeEventConstructor(ExecutingContext* context, const AtomicString& type, RawEvent* raw_event) {
      if (raw_event == nullptr) {
        return MakeGarbageCollected<HashchangeEvent>(context, type, ASSERT_NO_EXCEPTION());
      }
      if (raw_event->length == sizeof(NativeHashchangeEvent) / sizeof(int64_t)) {
        return MakeGarbageCollected<HashchangeEvent>(context, type, toNativeEvent<NativeHashchangeEvent>(raw_event));
      }
      return MakeGarbageCollected<Event>(context, type, toNativeEvent<NativeEvent>(raw_event));
    }
    static Event* InputEventConstructor(ExecutingContext* context, const AtomicString& type, RawEvent* raw_event) {
      if (raw_event == nullptr) {
        return MakeGarbageCollected<InputEvent>(context, type, ASSERT_NO_EXCEPTION());
      }
      if (raw_event->length == sizeof(NativeInputEvent) / sizeof(int64_t)) {
        return MakeGarbageCollected<InputEvent>(context, type, toNativeEvent<NativeInputEvent>(raw_event));
      }
      return MakeGarbageCollected<Event>(context, type, toNativeEvent<NativeEvent>(raw_event));
    }
    static Event* HybridRouterChangeEventConstructor(ExecutingContext* context, const AtomicString& type, RawEvent* raw_event) {
      if (raw_event == nullptr) {
        return MakeGarbageCollected<HybridRouterChangeEvent>(context, type, ASSERT_NO_EXCEPTION());
      }
      if (raw_event->length == sizeof(NativeHybridRouterChangeEvent) / sizeof(int64_t)) {
        return MakeGarbageCollected<HybridRouterChangeEvent>(context, type, toNativeEvent<NativeHybridRouterChangeEvent>(raw_event));
      }
      return MakeGarbageCollected<Event>(context, type, toNativeEvent<NativeEvent>(raw_event));
    }
    static Event* FocusEventConstructor(ExecutingContext* context, const AtomicString& type, RawEvent* raw_event) {
      if (raw_event == nullptr) {
        return MakeGarbageCollected<FocusEvent>(context, type, ASSERT_NO_EXCEPTION());
      }
      if (raw_event->length == sizeof(NativeFocusEvent) / sizeof(int64_t)) {
        return MakeGarbageCollected<FocusEvent>(context, type, toNativeEvent<NativeFocusEvent>(raw_event));
      }
      return MakeGarbageCollected<Event>(context, type, toNativeEvent<NativeEvent>(raw_event));
    }
    static Event* IntersectionChangeEventConstructor(ExecutingContext* context, const AtomicString& type, RawEvent* raw_event) {
      if (raw_event == nullptr) {
        return MakeGarbageCollected<IntersectionChangeEvent>(context, type, ASSERT_NO_EXCEPTION());
      }
      if (raw_event->length == sizeof(NativeIntersectionChangeEvent) / sizeof(int64_t)) {
        return MakeGarbageCollected<IntersectionChangeEvent>(context, type, toNativeEvent<NativeIntersectionChangeEvent>(raw_event));
      }
      return MakeGarbageCollected<Event>(context, type, toNativeEvent<NativeEvent>(raw_event));
    }
    static Event* MessageEventConstructor(ExecutingContext* context, const AtomicString& type, RawEvent* raw_event) {
      if (raw_event == nullptr) {
        return MakeGarbageCollected<MessageEvent>(context, type, ASSERT_NO_EXCEPTION());
      }
      if (raw_event->length == sizeof(NativeMessageEvent) / sizeof(int64_t)) {
        return MakeGarbageCollected<MessageEvent>(context, type, toNativeEvent<NativeMessageEvent>(raw_event));
      }
      return MakeGarbageCollected<Event>(context, type, toNativeEvent<NativeEvent>(raw_event));
    }
    static Event* TouchEventConstructor(ExecutingContext* context, const AtomicString& type, RawEvent* raw_event) {
      if (raw_event == nullptr) {
        return MakeGarbageCollected<TouchEvent>(context, type, ASSERT_NO_EXCEPTION());
      }
      if (raw_event->length == sizeof(NativeTouchEvent) / sizeof(int64_t)) {
        return MakeGarbageCollected<TouchEvent>(context, type, toNativeEvent<NativeTouchEvent>(raw_event));
      }
      return MakeGarbageCollected<Event>(context, type, toNativeEvent<NativeEvent>(raw_event));
    }
    static Event* MouseEventConstructor(ExecutingContext* context, const AtomicString& type, RawEvent* raw_event) {
      if (raw_event == nullptr) {
        return MakeGarbageCollected<MouseEvent>(context, type, ASSERT_NO_EXCEPTION());
      }
      if (raw_event->length == sizeof(NativeMouseEvent) / sizeof(int64_t)) {
        return MakeGarbageCollected<MouseEvent>(context, type, toNativeEvent<NativeMouseEvent>(raw_event));
      }
      return MakeGarbageCollected<Event>(context, type, toNativeEvent<NativeEvent>(raw_event));
    }
static void CreateEventFunctionMap() {
  assert(!g_event_constructors);
  g_event_constructors = new EventMap();
  // Empty array initializer lists are illegal [dcl.init.aggr] and will not
  // compile in MSVC. If tags list is empty, add check to skip this.
  const CreateEventFunctionMapData data[] = {
            {event_type_names::kclose, CloseEventConstructor},
              {event_type_names::kpopstate, PopStateEventConstructor},
              {event_type_names::kgesturestart, GestureEventConstructor},
              {event_type_names::kgesturechange, GestureEventConstructor},
              {event_type_names::kgestureend, GestureEventConstructor},
            {event_type_names::khashchange, HashchangeEventConstructor},
            {event_type_names::kinput, InputEventConstructor},
              {event_type_names::khybridrouterchange, HybridRouterChangeEventConstructor},
              {event_type_names::kfocus, FocusEventConstructor},
              {event_type_names::kblur, FocusEventConstructor},
              {event_type_names::kfocusin, FocusEventConstructor},
              {event_type_names::kfocusout, FocusEventConstructor},
              {event_type_names::kintersectionchange, IntersectionChangeEventConstructor},
            {event_type_names::kmessage, MessageEventConstructor},
              {event_type_names::ktouchstart, TouchEventConstructor},
              {event_type_names::ktouchend, TouchEventConstructor},
              {event_type_names::ktouchcancel, TouchEventConstructor},
              {event_type_names::ktouchmove, TouchEventConstructor},
              {event_type_names::kclick, MouseEventConstructor},
              {event_type_names::kdbclick, MouseEventConstructor},
              {event_type_names::klongpress, MouseEventConstructor},
  };
  for (size_t i = 0; i < std::size(data); i++)
    g_event_constructors->insert(std::make_pair(data[i].tag, data[i].func));
}
Event* EventFactory::Create(ExecutingContext* context, const AtomicString& type, RawEvent* raw_event) {
  if (!g_event_constructors)
    CreateEventFunctionMap();
  if (raw_event != nullptr && raw_event->is_custom_event) {
    return MakeGarbageCollected<CustomEvent>(context, type, toNativeEvent<NativeCustomEvent>(raw_event));
  }
  auto it = g_event_constructors->find(type);
  if (it == g_event_constructors->end()) {
    if (raw_event == nullptr) {
      return MakeGarbageCollected<Event>(context, type);
    }
    return MakeGarbageCollected<Event>(context, type, toNativeEvent<NativeEvent>(raw_event));
  }
  EventConstructorFunction function = it->second;
  return function(context, type, raw_event);
}
void EventFactory::Dispose() {
  delete g_event_constructors;
  g_event_constructors = nullptr;
}
}  // namespace webf