// Generated from template:
//   code_generator/src/json/templates/names_installer.cc.tmpl
#include "binding_call_methods.h"
#include "built_in_string.h"
#include "defined_properties.h"
#include "element_attribute_names.h"
#include "element_namespace_uris.h"
#include "mutation_record_types.h"
#include "event_type_names.h"
#include "canvas_types.h"
#include "html_names.h"
#include "script_type_names.h"
#include "svg_names.h"
#include "performance_entry_names.h"
#include "performance_mark_constants.h"
namespace webf {
namespace names_installer {
void Init(JSContext* ctx) {
  binding_call_methods::Init(ctx);
  built_in_string::Init(ctx);
  defined_properties::Init(ctx);
  element_attribute_names::Init(ctx);
  element_namespace_uris::Init(ctx);
  mutation_record_types::Init(ctx);
  event_type_names::Init(ctx);
  canvas_types::Init(ctx);
  html_names::Init(ctx);
  script_type_names::Init(ctx);
  svg_names::Init(ctx);
  performance_entry_names::Init(ctx);
  performance_mark_constants::Init(ctx);
}
void Dispose() {
  binding_call_methods::Dispose();
  built_in_string::Dispose();
  defined_properties::Dispose();
  element_attribute_names::Dispose();
  element_namespace_uris::Dispose();
  mutation_record_types::Dispose();
  event_type_names::Dispose();
  canvas_types::Dispose();
  html_names::Dispose();
  script_type_names::Dispose();
  svg_names::Dispose();
  performance_entry_names::Dispose();
  performance_mark_constants::Dispose();
}
}
} // webf