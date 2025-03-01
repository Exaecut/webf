/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
#ifndef BRIDGE_CORE_SVG_ELEMENT_FACTORY_H_
#define BRIDGE_CORE_SVG_ELEMENT_FACTORY_H_
#include "bindings/qjs/atomic_string.h"
namespace webf {
class Document;
class SVGElement;
class SVGElementFactory {
 public:
  // If |local_name| is unknown, nullptr is returned.
  static SVGElement* Create(const AtomicString& local_name, Document&);
  static void Dispose();
};
}  // namespace webf
#endif  // BRIDGE_CORE_SVG_ELEMENT_FACTORY_H_