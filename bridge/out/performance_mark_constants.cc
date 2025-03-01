// Generated from template:
//   code_generator/src/json/templates/make_names.h.tmpl
// and input files:
//   E:\Projects\Exaecut\sources\webf\bridge\core\timing\performance_mark_constants.json5
#include "performance_mark_constants.h"
namespace webf {
namespace performance_mark_constants {
thread_local void* names_storage[kNamesCount * ((sizeof(AtomicString) + sizeof(void *) - 1) / sizeof(void *))];
thread_local const AtomicString& kwidget_creation_cost = reinterpret_cast<AtomicString*>(&names_storage)[0];
thread_local const AtomicString& kcontroller_properties_init_cost = reinterpret_cast<AtomicString*>(&names_storage)[1];
thread_local const AtomicString& kview_controller_properties_init_cost = reinterpret_cast<AtomicString*>(&names_storage)[2];
thread_local const AtomicString& kbridge_init_cost = reinterpret_cast<AtomicString*>(&names_storage)[3];
thread_local const AtomicString& kbridge_register_dart_method_cost = reinterpret_cast<AtomicString*>(&names_storage)[4];
thread_local const AtomicString& kcreate_viewport = reinterpret_cast<AtomicString*>(&names_storage)[5];
thread_local const AtomicString& kelement_manager_init_cost = reinterpret_cast<AtomicString*>(&names_storage)[6];
thread_local const AtomicString& kelement_manager_property_init_cost = reinterpret_cast<AtomicString*>(&names_storage)[7];
thread_local const AtomicString& kroot_element_init_cost = reinterpret_cast<AtomicString*>(&names_storage)[8];
thread_local const AtomicString& kroot_element_property_init_cost = reinterpret_cast<AtomicString*>(&names_storage)[9];
thread_local const AtomicString& kjs_context_init_cost = reinterpret_cast<AtomicString*>(&names_storage)[10];
thread_local const AtomicString& knative_method_init_cost = reinterpret_cast<AtomicString*>(&names_storage)[11];
thread_local const AtomicString& kpolyfill_init_cost = reinterpret_cast<AtomicString*>(&names_storage)[12];
thread_local const AtomicString& kjs_bundle_load_cost = reinterpret_cast<AtomicString*>(&names_storage)[13];
thread_local const AtomicString& kjs_bundle_eval_cost = reinterpret_cast<AtomicString*>(&names_storage)[14];
thread_local const AtomicString& kjs_parse_time_cost = reinterpret_cast<AtomicString*>(&names_storage)[15];
thread_local const AtomicString& kjs_host_class_init_cost = reinterpret_cast<AtomicString*>(&names_storage)[16];
thread_local const AtomicString& kjs_native_function_call_cost = reinterpret_cast<AtomicString*>(&names_storage)[17];
thread_local const AtomicString& kjs_host_class_get_property_cost = reinterpret_cast<AtomicString*>(&names_storage)[18];
thread_local const AtomicString& kjs_host_class_set_property_cost = reinterpret_cast<AtomicString*>(&names_storage)[19];
thread_local const AtomicString& kflush_ui_command_cost = reinterpret_cast<AtomicString*>(&names_storage)[20];
thread_local const AtomicString& kcreate_element_cost = reinterpret_cast<AtomicString*>(&names_storage)[21];
thread_local const AtomicString& kcreate_text_node_cost = reinterpret_cast<AtomicString*>(&names_storage)[22];
thread_local const AtomicString& kcreate_comment_cost = reinterpret_cast<AtomicString*>(&names_storage)[23];
thread_local const AtomicString& kdispose_event_target_cost = reinterpret_cast<AtomicString*>(&names_storage)[24];
thread_local const AtomicString& kadd_event_cost = reinterpret_cast<AtomicString*>(&names_storage)[25];
thread_local const AtomicString& kinsert_adjacent_node_cost = reinterpret_cast<AtomicString*>(&names_storage)[26];
thread_local const AtomicString& kremove_node_cost = reinterpret_cast<AtomicString*>(&names_storage)[27];
thread_local const AtomicString& kset_style_cost = reinterpret_cast<AtomicString*>(&names_storage)[28];
thread_local const AtomicString& kparse_css_cost = reinterpret_cast<AtomicString*>(&names_storage)[29];
thread_local const AtomicString& kparse_inline_css_cost = reinterpret_cast<AtomicString*>(&names_storage)[30];
thread_local const AtomicString& kmatch_element_rule_cost = reinterpret_cast<AtomicString*>(&names_storage)[31];
thread_local const AtomicString& kflush_style_cost = reinterpret_cast<AtomicString*>(&names_storage)[32];
thread_local const AtomicString& kdom_force_layout_cost = reinterpret_cast<AtomicString*>(&names_storage)[33];
thread_local const AtomicString& kdom_flush_ui_command_cost = reinterpret_cast<AtomicString*>(&names_storage)[34];
thread_local const AtomicString& kset_properties_cost = reinterpret_cast<AtomicString*>(&names_storage)[35];
thread_local const AtomicString& kremove_properties_cost = reinterpret_cast<AtomicString*>(&names_storage)[36];
thread_local const AtomicString& kflex_layout_cost = reinterpret_cast<AtomicString*>(&names_storage)[37];
thread_local const AtomicString& kflow_layout_cost = reinterpret_cast<AtomicString*>(&names_storage)[38];
thread_local const AtomicString& kintrinsic_layout_cost = reinterpret_cast<AtomicString*>(&names_storage)[39];
thread_local const AtomicString& ksilver_layout_cost = reinterpret_cast<AtomicString*>(&names_storage)[40];
thread_local const AtomicString& kpaint_cost = reinterpret_cast<AtomicString*>(&names_storage)[41];
thread_local const AtomicString& kcontroller_init_start = reinterpret_cast<AtomicString*>(&names_storage)[42];
thread_local const AtomicString& kcontroller_init_end = reinterpret_cast<AtomicString*>(&names_storage)[43];
thread_local const AtomicString& kcontroller_properties_init = reinterpret_cast<AtomicString*>(&names_storage)[44];
thread_local const AtomicString& kview_controller_init_start = reinterpret_cast<AtomicString*>(&names_storage)[45];
thread_local const AtomicString& kview_controller_property_init = reinterpret_cast<AtomicString*>(&names_storage)[46];
thread_local const AtomicString& kbridge_init_start = reinterpret_cast<AtomicString*>(&names_storage)[47];
thread_local const AtomicString& kbridge_init_end = reinterpret_cast<AtomicString*>(&names_storage)[48];
thread_local const AtomicString& kbridge_register_dart_method_start = reinterpret_cast<AtomicString*>(&names_storage)[49];
thread_local const AtomicString& kbridge_register_dart_method_end = reinterpret_cast<AtomicString*>(&names_storage)[50];
thread_local const AtomicString& kcreate_viewport_start = reinterpret_cast<AtomicString*>(&names_storage)[51];
thread_local const AtomicString& kcreate_viewport_end = reinterpret_cast<AtomicString*>(&names_storage)[52];
thread_local const AtomicString& kelement_manager_init_start = reinterpret_cast<AtomicString*>(&names_storage)[53];
thread_local const AtomicString& kelement_manager_init_end = reinterpret_cast<AtomicString*>(&names_storage)[54];
thread_local const AtomicString& kelement_manager_property_init = reinterpret_cast<AtomicString*>(&names_storage)[55];
thread_local const AtomicString& kroot_element_init_start = reinterpret_cast<AtomicString*>(&names_storage)[56];
thread_local const AtomicString& kroot_element_init_end = reinterpret_cast<AtomicString*>(&names_storage)[57];
thread_local const AtomicString& kroot_element_property_init = reinterpret_cast<AtomicString*>(&names_storage)[58];
thread_local const AtomicString& kjs_context_start = reinterpret_cast<AtomicString*>(&names_storage)[59];
thread_local const AtomicString& kjs_context_end = reinterpret_cast<AtomicString*>(&names_storage)[60];
thread_local const AtomicString& kjs_host_class_get_property_start = reinterpret_cast<AtomicString*>(&names_storage)[61];
thread_local const AtomicString& kjs_host_class_get_property_end = reinterpret_cast<AtomicString*>(&names_storage)[62];
thread_local const AtomicString& kjs_host_class_set_property_start = reinterpret_cast<AtomicString*>(&names_storage)[63];
thread_local const AtomicString& kjs_host_class_set_property_end = reinterpret_cast<AtomicString*>(&names_storage)[64];
thread_local const AtomicString& kjs_host_class_init_start = reinterpret_cast<AtomicString*>(&names_storage)[65];
thread_local const AtomicString& kjs_host_class_init_end = reinterpret_cast<AtomicString*>(&names_storage)[66];
thread_local const AtomicString& kjs_native_function_call_start = reinterpret_cast<AtomicString*>(&names_storage)[67];
thread_local const AtomicString& kjs_native_function_call_end = reinterpret_cast<AtomicString*>(&names_storage)[68];
thread_local const AtomicString& kinit_native_method_start = reinterpret_cast<AtomicString*>(&names_storage)[69];
thread_local const AtomicString& kinit_native_method_end = reinterpret_cast<AtomicString*>(&names_storage)[70];
thread_local const AtomicString& kinit_js_polyfill_start = reinterpret_cast<AtomicString*>(&names_storage)[71];
thread_local const AtomicString& kinit_js_polyfill_end = reinterpret_cast<AtomicString*>(&names_storage)[72];
thread_local const AtomicString& kjs_bundle_load_start = reinterpret_cast<AtomicString*>(&names_storage)[73];
thread_local const AtomicString& kjs_bundle_load_end = reinterpret_cast<AtomicString*>(&names_storage)[74];
thread_local const AtomicString& kjs_bundle_eval_start = reinterpret_cast<AtomicString*>(&names_storage)[75];
thread_local const AtomicString& kjs_bundle_eval_end = reinterpret_cast<AtomicString*>(&names_storage)[76];
thread_local const AtomicString& kjs_parse_time_start = reinterpret_cast<AtomicString*>(&names_storage)[77];
thread_local const AtomicString& kjs_parse_time_end = reinterpret_cast<AtomicString*>(&names_storage)[78];
thread_local const AtomicString& kflush_ui_command_start = reinterpret_cast<AtomicString*>(&names_storage)[79];
thread_local const AtomicString& kflush_ui_command_end = reinterpret_cast<AtomicString*>(&names_storage)[80];
thread_local const AtomicString& kcreate_element_start = reinterpret_cast<AtomicString*>(&names_storage)[81];
thread_local const AtomicString& kcreate_element_end = reinterpret_cast<AtomicString*>(&names_storage)[82];
thread_local const AtomicString& kcreate_text_node_start = reinterpret_cast<AtomicString*>(&names_storage)[83];
thread_local const AtomicString& kcreate_text_node_end = reinterpret_cast<AtomicString*>(&names_storage)[84];
thread_local const AtomicString& kcreate_comment_start = reinterpret_cast<AtomicString*>(&names_storage)[85];
thread_local const AtomicString& kcreate_comment_end = reinterpret_cast<AtomicString*>(&names_storage)[86];
thread_local const AtomicString& kdispose_event_target_start = reinterpret_cast<AtomicString*>(&names_storage)[87];
thread_local const AtomicString& kdispose_event_target_end = reinterpret_cast<AtomicString*>(&names_storage)[88];
thread_local const AtomicString& kadd_event_start = reinterpret_cast<AtomicString*>(&names_storage)[89];
thread_local const AtomicString& kadd_event_end = reinterpret_cast<AtomicString*>(&names_storage)[90];
thread_local const AtomicString& kinsert_adjacent_node_start = reinterpret_cast<AtomicString*>(&names_storage)[91];
thread_local const AtomicString& kinsert_adjacent_node_end = reinterpret_cast<AtomicString*>(&names_storage)[92];
thread_local const AtomicString& kremove_node_start = reinterpret_cast<AtomicString*>(&names_storage)[93];
thread_local const AtomicString& kremove_node_end = reinterpret_cast<AtomicString*>(&names_storage)[94];
thread_local const AtomicString& kset_style_start = reinterpret_cast<AtomicString*>(&names_storage)[95];
thread_local const AtomicString& kset_style_end = reinterpret_cast<AtomicString*>(&names_storage)[96];
thread_local const AtomicString& kparse_css_start = reinterpret_cast<AtomicString*>(&names_storage)[97];
thread_local const AtomicString& kparse_css_end = reinterpret_cast<AtomicString*>(&names_storage)[98];
thread_local const AtomicString& kparse_inline_css_start = reinterpret_cast<AtomicString*>(&names_storage)[99];
thread_local const AtomicString& kparse_inline_css_end = reinterpret_cast<AtomicString*>(&names_storage)[100];
thread_local const AtomicString& kmatch_element_rule_start = reinterpret_cast<AtomicString*>(&names_storage)[101];
thread_local const AtomicString& kmatch_element_rule_end = reinterpret_cast<AtomicString*>(&names_storage)[102];
thread_local const AtomicString& kflush_style_start = reinterpret_cast<AtomicString*>(&names_storage)[103];
thread_local const AtomicString& kflush_style_end = reinterpret_cast<AtomicString*>(&names_storage)[104];
thread_local const AtomicString& kdom_force_layout_start = reinterpret_cast<AtomicString*>(&names_storage)[105];
thread_local const AtomicString& kdom_force_layout_end = reinterpret_cast<AtomicString*>(&names_storage)[106];
thread_local const AtomicString& kdom_flush_ui_command_start = reinterpret_cast<AtomicString*>(&names_storage)[107];
thread_local const AtomicString& kdom_flush_ui_command_end = reinterpret_cast<AtomicString*>(&names_storage)[108];
thread_local const AtomicString& kset_properties_start = reinterpret_cast<AtomicString*>(&names_storage)[109];
thread_local const AtomicString& kset_properties_end = reinterpret_cast<AtomicString*>(&names_storage)[110];
thread_local const AtomicString& kremove_properties_start = reinterpret_cast<AtomicString*>(&names_storage)[111];
thread_local const AtomicString& kremove_properties_end = reinterpret_cast<AtomicString*>(&names_storage)[112];
thread_local const AtomicString& kflex_layout_start = reinterpret_cast<AtomicString*>(&names_storage)[113];
thread_local const AtomicString& kflex_layout_end = reinterpret_cast<AtomicString*>(&names_storage)[114];
thread_local const AtomicString& kflow_layout_start = reinterpret_cast<AtomicString*>(&names_storage)[115];
thread_local const AtomicString& kflow_layout_end = reinterpret_cast<AtomicString*>(&names_storage)[116];
thread_local const AtomicString& kintrinsic_layout_start = reinterpret_cast<AtomicString*>(&names_storage)[117];
thread_local const AtomicString& kintrinsic_layout_end = reinterpret_cast<AtomicString*>(&names_storage)[118];
thread_local const AtomicString& ksilver_layout_start = reinterpret_cast<AtomicString*>(&names_storage)[119];
thread_local const AtomicString& ksilver_layout_end = reinterpret_cast<AtomicString*>(&names_storage)[120];
thread_local const AtomicString& kpaint_start = reinterpret_cast<AtomicString*>(&names_storage)[121];
thread_local const AtomicString& kpaint_end = reinterpret_cast<AtomicString*>(&names_storage)[122];
void Init(JSContext* ctx) {
  struct NameEntry {
      const char* str;
   };
  static const NameEntry kNames[] = {
          { "widget_creation_cost" },
          { "controller_properties_init_cost" },
          { "view_controller_properties_init_cost" },
          { "bridge_init_cost" },
          { "bridge_register_dart_method_cost" },
          { "create_viewport" },
          { "element_manager_init_cost" },
          { "element_manager_property_init_cost" },
          { "root_element_init_cost" },
          { "root_element_property_init_cost" },
          { "js_context_init_cost" },
          { "native_method_init_cost" },
          { "polyfill_init_cost" },
          { "js_bundle_load_cost" },
          { "js_bundle_eval_cost" },
          { "js_parse_time_cost" },
          { "js_host_class_init_cost" },
          { "js_native_function_call_cost" },
          { "js_host_class_get_property_cost" },
          { "js_host_class_set_property_cost" },
          { "flush_ui_command_cost" },
          { "create_element_cost" },
          { "create_text_node_cost" },
          { "create_comment_cost" },
          { "dispose_event_target_cost" },
          { "add_event_cost" },
          { "insert_adjacent_node_cost" },
          { "remove_node_cost" },
          { "set_style_cost" },
          { "parse_css_cost" },
          { "parse_inline_css_cost" },
          { "match_element_rule_cost" },
          { "flush_style_cost" },
          { "dom_force_layout_cost" },
          { "dom_flush_ui_command_cost" },
          { "set_properties_cost" },
          { "remove_properties_cost" },
          { "flex_layout_cost" },
          { "flow_layout_cost" },
          { "intrinsic_layout_cost" },
          { "silver_layout_cost" },
          { "paint_cost" },
          { "controller_init_start" },
          { "controller_init_end" },
          { "controller_properties_init" },
          { "view_controller_init_start" },
          { "view_controller_property_init" },
          { "bridge_init_start" },
          { "bridge_init_end" },
          { "bridge_register_dart_method_start" },
          { "bridge_register_dart_method_end" },
          { "create_viewport_start" },
          { "create_viewport_end" },
          { "element_manager_init_start" },
          { "element_manager_init_end" },
          { "element_manager_property_init" },
          { "root_element_init_start" },
          { "root_element_init_end" },
          { "root_element_property_init" },
          { "js_context_start" },
          { "js_context_end" },
          { "js_host_class_get_property_start" },
          { "js_host_class_get_property_end" },
          { "js_host_class_set_property_start" },
          { "js_host_class_set_property_end" },
          { "js_host_class_init_start" },
          { "js_host_class_init_end" },
          { "js_native_function_call_start" },
          { "js_native_function_call_end" },
          { "init_native_method_start" },
          { "init_native_method_end" },
          { "init_js_polyfill_start" },
          { "init_js_polyfill_end" },
          { "js_bundle_load_start" },
          { "js_bundle_load_end" },
          { "js_bundle_eval_start" },
          { "js_bundle_eval_end" },
          { "js_parse_time_start" },
          { "js_parse_time_end" },
          { "flush_ui_command_start" },
          { "flush_ui_command_end" },
          { "create_element_start" },
          { "create_element_end" },
          { "create_text_node_start" },
          { "create_text_node_end" },
          { "create_comment_start" },
          { "create_comment_end" },
          { "dispose_event_target_start" },
          { "dispose_event_target_end" },
          { "add_event_start" },
          { "add_event_end" },
          { "insert_adjacent_node_start" },
          { "insert_adjacent_node_end" },
          { "remove_node_start" },
          { "remove_node_end" },
          { "set_style_start" },
          { "set_style_end" },
          { "parse_css_start" },
          { "parse_css_end" },
          { "parse_inline_css_start" },
          { "parse_inline_css_end" },
          { "match_element_rule_start" },
          { "match_element_rule_end" },
          { "flush_style_start" },
          { "flush_style_end" },
          { "dom_force_layout_start" },
          { "dom_force_layout_end" },
          { "dom_flush_ui_command_start" },
          { "dom_flush_ui_command_end" },
          { "set_properties_start" },
          { "set_properties_end" },
          { "remove_properties_start" },
          { "remove_properties_end" },
          { "flex_layout_start" },
          { "flex_layout_end" },
          { "flow_layout_start" },
          { "flow_layout_end" },
          { "intrinsic_layout_start" },
          { "intrinsic_layout_end" },
          { "silver_layout_start" },
          { "silver_layout_end" },
          { "paint_start" },
          { "paint_end" },
  };
  for(size_t i = 0; i < std::size(kNames); i ++) {
    void* address = reinterpret_cast<AtomicString*>(&names_storage) + i;
      new (address) AtomicString(ctx, kNames[i].str);
  }
};
void Dispose(){
  for(size_t i = 0; i < kNamesCount; i ++) {
    AtomicString* atomic_string = reinterpret_cast<AtomicString*>(&names_storage) + i;
    atomic_string->~AtomicString();
  }
  memset(names_storage, 0x00, sizeof(AtomicString) * kNamesCount);
};
}
} // webf