/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/
 // Generated from template:
 //   code_generator/src/json/templates/element_factory.cc.tmp
 // and input files:
 //   E:\Projects\Exaecut\sources\webf\bridge\core\svg\svg_tag_names.json5
#include "svg_element_factory.h"
#include <unordered_map>
#include "svg_names.h"
#include "bindings/qjs/cppgc/garbage_collected.h"
#include "core/svg/svg_svg_element.h"
#include "core/svg/svg_rect_element.h"
#include "core/svg/svg_path_element.h"
#include "core/svg/svg_text_element.h"
#include "core/svg/svg_g_element.h"
#include "core/svg/svg_circle_element.h"
#include "core/svg/svg_ellipse_element.h"
#include "core/svg/svg_style_element.h"
#include "core/svg/svg_line_element.h"
namespace webf {
using ElementType = SVGElement;
using ConstructorFunction = ElementType* (*)(Document&);
using FunctionMap = std::unordered_map<AtomicString, ConstructorFunction, AtomicString::KeyHasher>;
static thread_local FunctionMap* g_constructors = nullptr;
struct CreateFunctionMapData {
  const AtomicString& tag;
  ConstructorFunction func;
};
static ElementType* SVGSVGElementConstructor(Document& document) {
  return MakeGarbageCollected<SVGSVGElement>(document);
}
static ElementType* SVGRectElementConstructor(Document& document) {
  return MakeGarbageCollected<SVGRectElement>(document);
}
static ElementType* SVGPathElementConstructor(Document& document) {
  return MakeGarbageCollected<SVGPathElement>(document);
}
static ElementType* SVGTextElementConstructor(Document& document) {
  return MakeGarbageCollected<SVGTextElement>(document);
}
static ElementType* SVGGElementConstructor(Document& document) {
  return MakeGarbageCollected<SVGGElement>(document);
}
static ElementType* SVGCircleElementConstructor(Document& document) {
  return MakeGarbageCollected<SVGCircleElement>(document);
}
static ElementType* SVGEllipseElementConstructor(Document& document) {
  return MakeGarbageCollected<SVGEllipseElement>(document);
}
static ElementType* SVGStyleElementConstructor(Document& document) {
  return MakeGarbageCollected<SVGStyleElement>(document);
}
static ElementType* SVGLineElementConstructor(Document& document) {
  return MakeGarbageCollected<SVGLineElement>(document);
}
static void CreateFunctionMap() {
  assert(!g_constructors);
  g_constructors = new FunctionMap();
  // Empty array initializer lists are illegal [dcl.init.aggr] and will not
  // compile in MSVC. If tags list is empty, add check to skip this.
  const CreateFunctionMapData data[] = {
    {svg_names::ksvg, SVGSVGElementConstructor},
    {svg_names::krect, SVGRectElementConstructor},
    {svg_names::kpath, SVGPathElementConstructor},
    {svg_names::ktext, SVGTextElementConstructor},
    {svg_names::kg, SVGGElementConstructor},
    {svg_names::kcircle, SVGCircleElementConstructor},
    {svg_names::kellipse, SVGEllipseElementConstructor},
    {svg_names::kstyle, SVGStyleElementConstructor},
    {svg_names::kline, SVGLineElementConstructor},
  };
  for (size_t i = 0; i < std::size(data); i++)
    g_constructors->insert(std::make_pair(data[i].tag, data[i].func));
}
ElementType* SVGElementFactory::Create(const AtomicString& name, Document& document) {
  if (!g_constructors)
    CreateFunctionMap();
  auto it = g_constructors->find(name);
  if (it == g_constructors->end())
    return nullptr;
  ConstructorFunction function = it->second;
  return function(document);
}
void SVGElementFactory::Dispose() {
  delete g_constructors;
  g_constructors = nullptr;
}
}  // namespace webf