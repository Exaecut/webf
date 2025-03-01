// Generated from template:
//   code_generator/src/json/templates/make_names.h.tmpl
// and input files:
//   E:\Projects\Exaecut\sources\webf\bridge\core\dom\element_namespace_uris.json5
#ifndef ELEMENT_NAMESPACE_URIS_H_
#define ELEMENT_NAMESPACE_URIS_H_
#include "bindings/qjs/atomic_string.h"
namespace webf {
namespace element_namespace_uris {
    extern thread_local const AtomicString& khtml;
    extern thread_local const AtomicString& ksvg;
    extern thread_local const AtomicString& kmathml;
constexpr unsigned kNamesCount = 3;
void Init(JSContext* ctx);
void Dispose();
}
} // webf
#endif  // #define ELEMENT_NAMESPACE_URIS