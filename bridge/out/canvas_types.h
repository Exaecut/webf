// Generated from template:
//   code_generator/src/json/templates/make_names.h.tmpl
// and input files:
//   E:\Projects\Exaecut\sources\webf\bridge\core\html\canvas_types.json5
#ifndef CANVAS_TYPES_H_
#define CANVAS_TYPES_H_
#include "bindings/qjs/atomic_string.h"
namespace webf {
namespace canvas_types {
  extern thread_local const AtomicString& k2d;
constexpr unsigned kNamesCount = 1;
void Init(JSContext* ctx);
void Dispose();
}
} // webf
#endif  // #define CANVAS_TYPES