 // Generated from template:
 //   code_generator/src/json/templates/element_type_helper.h.tpl
 // and input files:
 //   E:\Projects\Exaecut\sources\webf\bridge\core\html\html_tag_names.json5
#ifndef BRIDGE_CORE_HTML_TYPE_HELPER_H_
#define BRIDGE_CORE_HTML_TYPE_HELPER_H_
#include "core/dom/element.h"
#include "html_names.h"
#include "core/html/canvas/html_canvas_element.h"
#include "core/html/html_anchor_element.h"
#include "core/html/html_html_element.h"
#include "core/html/html_body_element.h"
#include "core/html/html_head_element.h"
#include "core/html/html_div_element.h"
#include "core/html/html_link_element.h"
#include "core/html/forms/html_input_element.h"
#include "core/html/forms/html_textarea_element.h"
#include "core/html/forms/html_form_element.h"
#include "core/html/html_template_element.h"
#include "core/html/html_image_element.h"
#include "core/html/html_script_element.h"
#include "core/html/html_iframe_element.h"
namespace webf {
class HTMLCanvasElement;
template <>
inline bool IsElementOfType<const HTMLCanvasElement>(const Node& node) {
 return IsA<HTMLCanvasElement>(node);
}
template <>
inline bool IsElementOfType<const HTMLCanvasElement>(const HTMLElement& element) {
 return IsA<HTMLCanvasElement>(element);
}
template <>
struct DowncastTraits<HTMLCanvasElement> {
 static bool AllowFrom(const Element& element) {
   return element.HasTagName(html_names::kcanvas);
 }
 static bool AllowFrom(const Node& node) {
   return node.IsHTMLElement() && IsA<HTMLCanvasElement>(To<HTMLElement>(node));
 }
 static bool AllowFrom(const EventTarget& event_target) {
    return event_target.IsNode() && To<Node>(event_target).IsHTMLElement() &&
            To<HTMLElement>(event_target).tagName() == html_names::kcanvas;
  }
};
class HTMLAElement;
template <>
inline bool IsElementOfType<const HTMLAElement>(const Node& node) {
 return IsA<HTMLAElement>(node);
}
template <>
inline bool IsElementOfType<const HTMLAElement>(const HTMLElement& element) {
 return IsA<HTMLAElement>(element);
}
template <>
struct DowncastTraits<HTMLAElement> {
 static bool AllowFrom(const Element& element) {
   return element.HasTagName(html_names::ka);
 }
 static bool AllowFrom(const Node& node) {
   return node.IsHTMLElement() && IsA<HTMLAElement>(To<HTMLElement>(node));
 }
 static bool AllowFrom(const EventTarget& event_target) {
    return event_target.IsNode() && To<Node>(event_target).IsHTMLElement() &&
            To<HTMLElement>(event_target).tagName() == html_names::ka;
  }
};
class HTMLHtmlElement;
template <>
inline bool IsElementOfType<const HTMLHtmlElement>(const Node& node) {
 return IsA<HTMLHtmlElement>(node);
}
template <>
inline bool IsElementOfType<const HTMLHtmlElement>(const HTMLElement& element) {
 return IsA<HTMLHtmlElement>(element);
}
template <>
struct DowncastTraits<HTMLHtmlElement> {
 static bool AllowFrom(const Element& element) {
   return element.HasTagName(html_names::khtml);
 }
 static bool AllowFrom(const Node& node) {
   return node.IsHTMLElement() && IsA<HTMLHtmlElement>(To<HTMLElement>(node));
 }
 static bool AllowFrom(const EventTarget& event_target) {
    return event_target.IsNode() && To<Node>(event_target).IsHTMLElement() &&
            To<HTMLElement>(event_target).tagName() == html_names::khtml;
  }
};
class HTMLBodyElement;
template <>
inline bool IsElementOfType<const HTMLBodyElement>(const Node& node) {
 return IsA<HTMLBodyElement>(node);
}
template <>
inline bool IsElementOfType<const HTMLBodyElement>(const HTMLElement& element) {
 return IsA<HTMLBodyElement>(element);
}
template <>
struct DowncastTraits<HTMLBodyElement> {
 static bool AllowFrom(const Element& element) {
   return element.HasTagName(html_names::kbody);
 }
 static bool AllowFrom(const Node& node) {
   return node.IsHTMLElement() && IsA<HTMLBodyElement>(To<HTMLElement>(node));
 }
 static bool AllowFrom(const EventTarget& event_target) {
    return event_target.IsNode() && To<Node>(event_target).IsHTMLElement() &&
            To<HTMLElement>(event_target).tagName() == html_names::kbody;
  }
};
class HTMLHeadElement;
template <>
inline bool IsElementOfType<const HTMLHeadElement>(const Node& node) {
 return IsA<HTMLHeadElement>(node);
}
template <>
inline bool IsElementOfType<const HTMLHeadElement>(const HTMLElement& element) {
 return IsA<HTMLHeadElement>(element);
}
template <>
struct DowncastTraits<HTMLHeadElement> {
 static bool AllowFrom(const Element& element) {
   return element.HasTagName(html_names::khead);
 }
 static bool AllowFrom(const Node& node) {
   return node.IsHTMLElement() && IsA<HTMLHeadElement>(To<HTMLElement>(node));
 }
 static bool AllowFrom(const EventTarget& event_target) {
    return event_target.IsNode() && To<Node>(event_target).IsHTMLElement() &&
            To<HTMLElement>(event_target).tagName() == html_names::khead;
  }
};
class HTMLDivElement;
template <>
inline bool IsElementOfType<const HTMLDivElement>(const Node& node) {
 return IsA<HTMLDivElement>(node);
}
template <>
inline bool IsElementOfType<const HTMLDivElement>(const HTMLElement& element) {
 return IsA<HTMLDivElement>(element);
}
template <>
struct DowncastTraits<HTMLDivElement> {
 static bool AllowFrom(const Element& element) {
   return element.HasTagName(html_names::kdiv);
 }
 static bool AllowFrom(const Node& node) {
   return node.IsHTMLElement() && IsA<HTMLDivElement>(To<HTMLElement>(node));
 }
 static bool AllowFrom(const EventTarget& event_target) {
    return event_target.IsNode() && To<Node>(event_target).IsHTMLElement() &&
            To<HTMLElement>(event_target).tagName() == html_names::kdiv;
  }
};
class HTMLLinkElement;
template <>
inline bool IsElementOfType<const HTMLLinkElement>(const Node& node) {
 return IsA<HTMLLinkElement>(node);
}
template <>
inline bool IsElementOfType<const HTMLLinkElement>(const HTMLElement& element) {
 return IsA<HTMLLinkElement>(element);
}
template <>
struct DowncastTraits<HTMLLinkElement> {
 static bool AllowFrom(const Element& element) {
   return element.HasTagName(html_names::klink);
 }
 static bool AllowFrom(const Node& node) {
   return node.IsHTMLElement() && IsA<HTMLLinkElement>(To<HTMLElement>(node));
 }
 static bool AllowFrom(const EventTarget& event_target) {
    return event_target.IsNode() && To<Node>(event_target).IsHTMLElement() &&
            To<HTMLElement>(event_target).tagName() == html_names::klink;
  }
};
class HTMLInputElement;
template <>
inline bool IsElementOfType<const HTMLInputElement>(const Node& node) {
 return IsA<HTMLInputElement>(node);
}
template <>
inline bool IsElementOfType<const HTMLInputElement>(const HTMLElement& element) {
 return IsA<HTMLInputElement>(element);
}
template <>
struct DowncastTraits<HTMLInputElement> {
 static bool AllowFrom(const Element& element) {
   return element.HasTagName(html_names::kinput);
 }
 static bool AllowFrom(const Node& node) {
   return node.IsHTMLElement() && IsA<HTMLInputElement>(To<HTMLElement>(node));
 }
 static bool AllowFrom(const EventTarget& event_target) {
    return event_target.IsNode() && To<Node>(event_target).IsHTMLElement() &&
            To<HTMLElement>(event_target).tagName() == html_names::kinput;
  }
};
class HTMLTextareaElement;
template <>
inline bool IsElementOfType<const HTMLTextareaElement>(const Node& node) {
 return IsA<HTMLTextareaElement>(node);
}
template <>
inline bool IsElementOfType<const HTMLTextareaElement>(const HTMLElement& element) {
 return IsA<HTMLTextareaElement>(element);
}
template <>
struct DowncastTraits<HTMLTextareaElement> {
 static bool AllowFrom(const Element& element) {
   return element.HasTagName(html_names::ktextarea);
 }
 static bool AllowFrom(const Node& node) {
   return node.IsHTMLElement() && IsA<HTMLTextareaElement>(To<HTMLElement>(node));
 }
 static bool AllowFrom(const EventTarget& event_target) {
    return event_target.IsNode() && To<Node>(event_target).IsHTMLElement() &&
            To<HTMLElement>(event_target).tagName() == html_names::ktextarea;
  }
};
class HTMLFormElement;
template <>
inline bool IsElementOfType<const HTMLFormElement>(const Node& node) {
 return IsA<HTMLFormElement>(node);
}
template <>
inline bool IsElementOfType<const HTMLFormElement>(const HTMLElement& element) {
 return IsA<HTMLFormElement>(element);
}
template <>
struct DowncastTraits<HTMLFormElement> {
 static bool AllowFrom(const Element& element) {
   return element.HasTagName(html_names::kform);
 }
 static bool AllowFrom(const Node& node) {
   return node.IsHTMLElement() && IsA<HTMLFormElement>(To<HTMLElement>(node));
 }
 static bool AllowFrom(const EventTarget& event_target) {
    return event_target.IsNode() && To<Node>(event_target).IsHTMLElement() &&
            To<HTMLElement>(event_target).tagName() == html_names::kform;
  }
};
class HTMLTemplateElement;
template <>
inline bool IsElementOfType<const HTMLTemplateElement>(const Node& node) {
 return IsA<HTMLTemplateElement>(node);
}
template <>
inline bool IsElementOfType<const HTMLTemplateElement>(const HTMLElement& element) {
 return IsA<HTMLTemplateElement>(element);
}
template <>
struct DowncastTraits<HTMLTemplateElement> {
 static bool AllowFrom(const Element& element) {
   return element.HasTagName(html_names::ktemplate);
 }
 static bool AllowFrom(const Node& node) {
   return node.IsHTMLElement() && IsA<HTMLTemplateElement>(To<HTMLElement>(node));
 }
 static bool AllowFrom(const EventTarget& event_target) {
    return event_target.IsNode() && To<Node>(event_target).IsHTMLElement() &&
            To<HTMLElement>(event_target).tagName() == html_names::ktemplate;
  }
};
class HTMLImgElement;
template <>
inline bool IsElementOfType<const HTMLImgElement>(const Node& node) {
 return IsA<HTMLImgElement>(node);
}
template <>
inline bool IsElementOfType<const HTMLImgElement>(const HTMLElement& element) {
 return IsA<HTMLImgElement>(element);
}
template <>
struct DowncastTraits<HTMLImgElement> {
 static bool AllowFrom(const Element& element) {
   return element.HasTagName(html_names::kimg);
 }
 static bool AllowFrom(const Node& node) {
   return node.IsHTMLElement() && IsA<HTMLImgElement>(To<HTMLElement>(node));
 }
 static bool AllowFrom(const EventTarget& event_target) {
    return event_target.IsNode() && To<Node>(event_target).IsHTMLElement() &&
            To<HTMLElement>(event_target).tagName() == html_names::kimg;
  }
};
class HTMLScriptElement;
template <>
inline bool IsElementOfType<const HTMLScriptElement>(const Node& node) {
 return IsA<HTMLScriptElement>(node);
}
template <>
inline bool IsElementOfType<const HTMLScriptElement>(const HTMLElement& element) {
 return IsA<HTMLScriptElement>(element);
}
template <>
struct DowncastTraits<HTMLScriptElement> {
 static bool AllowFrom(const Element& element) {
   return element.HasTagName(html_names::kscript);
 }
 static bool AllowFrom(const Node& node) {
   return node.IsHTMLElement() && IsA<HTMLScriptElement>(To<HTMLElement>(node));
 }
 static bool AllowFrom(const EventTarget& event_target) {
    return event_target.IsNode() && To<Node>(event_target).IsHTMLElement() &&
            To<HTMLElement>(event_target).tagName() == html_names::kscript;
  }
};
class HTMLIframeElement;
template <>
inline bool IsElementOfType<const HTMLIframeElement>(const Node& node) {
 return IsA<HTMLIframeElement>(node);
}
template <>
inline bool IsElementOfType<const HTMLIframeElement>(const HTMLElement& element) {
 return IsA<HTMLIframeElement>(element);
}
template <>
struct DowncastTraits<HTMLIframeElement> {
 static bool AllowFrom(const Element& element) {
   return element.HasTagName(html_names::kiframe);
 }
 static bool AllowFrom(const Node& node) {
   return node.IsHTMLElement() && IsA<HTMLIframeElement>(To<HTMLElement>(node));
 }
 static bool AllowFrom(const EventTarget& event_target) {
    return event_target.IsNode() && To<Node>(event_target).IsHTMLElement() &&
            To<HTMLElement>(event_target).tagName() == html_names::kiframe;
  }
};
}
#endif