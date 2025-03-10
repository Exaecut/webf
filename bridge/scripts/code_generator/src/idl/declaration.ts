import {ParameterBaseType, ParameterType} from "./analyzer";

export enum FunctionArgumentType {
  // Basic types
  dom_string,
  object,
  promise,
  int32,
  int64,
  double,
  boolean,
  function,
  void,
  any,
  null,
  undefined,
  array,
  js_array_proto_methods,
  // enable LegacyNullToEmpty attribute for dom_string
  legacy_dom_string,
}

export class FunctionArguments {
  name: string;
  type: ParameterType;
  isDotDotDot: boolean;
  isSymbolKey: boolean;
  typeMode: ParameterMode;
  required: boolean;
}

export class ParameterMode {
  newObject?: boolean;
  dartImpl?: boolean;
  layoutDependent?: boolean;
  static?: boolean;
  staticMethod?: boolean;
}

export class PropsDeclaration {
  type: ParameterType;
  typeMode: ParameterMode;
  name: string;
  isSymbol?: boolean;
  readonly: boolean;
  optional: boolean;
}

export class IndexedPropertyDeclaration extends PropsDeclaration {
  indexKeyType: 'string' | 'number';
}

export class FunctionDeclaration extends PropsDeclaration {
  args: FunctionArguments[] =  [];
  returnType: ParameterType;
  returnTypeMode?: ParameterMode;
}

export enum ClassObjectKind {
  interface,
  dictionary,
  mixin
}

export class ClassObject {
  static globalClassMap: {[key: string]: ClassObject} = Object.create(null);
  static globalClassRelationMap: {[key: string]: string[]} = Object.create(null);
  name: string;
  parent: string;
  mixinParent: string[];
  props: PropsDeclaration[] = [];
  inheritedProps?: PropsDeclaration[] = [];
  indexedProp?: IndexedPropertyDeclaration;
  methods: FunctionDeclaration[] = [];
  staticMethods: FunctionDeclaration[] = [];
  construct?: FunctionDeclaration;
  kind: ClassObjectKind = ClassObjectKind.interface;
}

export class FunctionObject {
  declare: FunctionDeclaration
}
