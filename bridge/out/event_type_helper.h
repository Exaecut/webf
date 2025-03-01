 // Generated from template:
 //   code_generator/src/json/templates/event_type_helper.h.tpl
 // and input files:
 //   E:\Projects\Exaecut\sources\webf\bridge\core\events\dart_created_events.json5
#ifndef BRIDGE_CORE_EVENT_TYPE_HELPER_H_
#define BRIDGE_CORE_EVENT_TYPE_HELPER_H_
#include "core/dom/events/event.h"
#include "event_type_names.h"
#include "core/events/close_event.h"
#include "core/events/pop_state_event.h"
#include "core/events/gesture_event.h"
#include "core/events/hashchange_event.h"
#include "core/events/input_event.h"
#include "core/events/hybrid_router_change_event.h"
#include "core/events/focus_event.h"
#include "core/events/intersection_change_event.h"
#include "core/events/message_event.h"
#include "core/events/touch_event.h"
#include "core/events/mouse_event.h"
namespace webf {
  class CloseEvent;
  template <>
  inline bool IsEventOfType<const CloseEvent>(const Event& event) {
    return IsA<CloseEvent>(event);
  }
  template <>
  struct DowncastTraits<CloseEvent> {
    static bool AllowFrom(const Event& event) {
      return event.IsCloseEvent();
    }
  };
  class PopStateEvent;
  template <>
  inline bool IsEventOfType<const PopStateEvent>(const Event& event) {
    return IsA<PopStateEvent>(event);
  }
  template <>
  struct DowncastTraits<PopStateEvent> {
    static bool AllowFrom(const Event& event) {
      return event.IsPopStateEvent();
    }
  };
  class GestureEvent;
  template <>
  inline bool IsEventOfType<const GestureEvent>(const Event& event) {
    return IsA<GestureEvent>(event);
  }
  template <>
  struct DowncastTraits<GestureEvent> {
    static bool AllowFrom(const Event& event) {
      return event.IsGestureEvent();
    }
  };
  class HashchangeEvent;
  template <>
  inline bool IsEventOfType<const HashchangeEvent>(const Event& event) {
    return IsA<HashchangeEvent>(event);
  }
  template <>
  struct DowncastTraits<HashchangeEvent> {
    static bool AllowFrom(const Event& event) {
      return event.IsHashchangeEvent();
    }
  };
  class InputEvent;
  template <>
  inline bool IsEventOfType<const InputEvent>(const Event& event) {
    return IsA<InputEvent>(event);
  }
  template <>
  struct DowncastTraits<InputEvent> {
    static bool AllowFrom(const Event& event) {
      return event.IsInputEvent();
    }
  };
  class HybridRouterChangeEvent;
  template <>
  inline bool IsEventOfType<const HybridRouterChangeEvent>(const Event& event) {
    return IsA<HybridRouterChangeEvent>(event);
  }
  template <>
  struct DowncastTraits<HybridRouterChangeEvent> {
    static bool AllowFrom(const Event& event) {
      return event.IsHybridRouterChangeEvent();
    }
  };
  class FocusEvent;
  template <>
  inline bool IsEventOfType<const FocusEvent>(const Event& event) {
    return IsA<FocusEvent>(event);
  }
  template <>
  struct DowncastTraits<FocusEvent> {
    static bool AllowFrom(const Event& event) {
      return event.IsFocusEvent();
    }
  };
  class IntersectionChangeEvent;
  template <>
  inline bool IsEventOfType<const IntersectionChangeEvent>(const Event& event) {
    return IsA<IntersectionChangeEvent>(event);
  }
  template <>
  struct DowncastTraits<IntersectionChangeEvent> {
    static bool AllowFrom(const Event& event) {
      return event.IsIntersectionChangeEvent();
    }
  };
  class MessageEvent;
  template <>
  inline bool IsEventOfType<const MessageEvent>(const Event& event) {
    return IsA<MessageEvent>(event);
  }
  template <>
  struct DowncastTraits<MessageEvent> {
    static bool AllowFrom(const Event& event) {
      return event.IsMessageEvent();
    }
  };
  class TouchEvent;
  template <>
  inline bool IsEventOfType<const TouchEvent>(const Event& event) {
    return IsA<TouchEvent>(event);
  }
  template <>
  struct DowncastTraits<TouchEvent> {
    static bool AllowFrom(const Event& event) {
      return event.IsTouchEvent();
    }
  };
  class MouseEvent;
  template <>
  inline bool IsEventOfType<const MouseEvent>(const Event& event) {
    return IsA<MouseEvent>(event);
  }
  template <>
  struct DowncastTraits<MouseEvent> {
    static bool AllowFrom(const Event& event) {
      return event.IsMouseEvent();
    }
  };
}
#endif