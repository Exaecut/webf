// Generated from template:
//   code_generator/src/json/templates/make_names.h.tmpl
// and input files:
//   E:\Projects\Exaecut\sources\webf\bridge\core\svg\svg_tag_names.json5
#ifndef SVG_NAMES_H_
#define SVG_NAMES_H_
#include "bindings/qjs/atomic_string.h"
namespace webf {
namespace svg_names {
    extern thread_local const AtomicString& ksvg;
  extern thread_local const AtomicString& krect;
  extern thread_local const AtomicString& kpath;
  extern thread_local const AtomicString& ktext;
  extern thread_local const AtomicString& kg;
  extern thread_local const AtomicString& kcircle;
  extern thread_local const AtomicString& kellipse;
  extern thread_local const AtomicString& kstyle;
  extern thread_local const AtomicString& kline;
constexpr unsigned kNamesCount = 9;
void Init(JSContext* ctx);
void Dispose();
}
} // webf
#endif  // #define SVG_NAMES