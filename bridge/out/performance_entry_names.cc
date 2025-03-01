// Generated from template:
//   code_generator/src/json/templates/make_names.h.tmpl
// and input files:
//   E:\Projects\Exaecut\sources\webf\bridge\core\timing\performance_entry_names.json5
#include "performance_entry_names.h"
namespace webf {
namespace performance_entry_names {
thread_local void* names_storage[kNamesCount * ((sizeof(AtomicString) + sizeof(void *) - 1) / sizeof(void *))];
thread_local const AtomicString& kmark = reinterpret_cast<AtomicString*>(&names_storage)[0];
thread_local const AtomicString& kmeasure = reinterpret_cast<AtomicString*>(&names_storage)[1];
void Init(JSContext* ctx) {
  struct NameEntry {
      const char* str;
   };
  static const NameEntry kNames[] = {
          { "mark" },
          { "measure" },
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