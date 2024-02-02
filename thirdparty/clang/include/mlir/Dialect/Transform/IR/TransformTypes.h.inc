/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* TypeDef Declarations                                                       *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_TYPEDEF_CLASSES
#undef GET_TYPEDEF_CLASSES


namespace mlir {
class AsmParser;
class AsmPrinter;
} // namespace mlir
namespace mlir {
namespace transform {
class AffineMapParamType;
class AnyOpType;
class AnyValueType;
class OperationType;
class ParamType;
class TypeParamType;
class AffineMapParamType : public ::mlir::Type::TypeBase<AffineMapParamType, ::mlir::Type, ::mlir::TypeStorage, ::mlir::transform::TransformParamTypeInterface::Trait> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"affine_map"};
  }

  static ::mlir::Type parse(::mlir::AsmParser &odsParser);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::DiagnosedSilenceableFailure checkPayload(::mlir::Location loc, ::mlir::ArrayRef<::mlir::Attribute> payload) const;
};
class AnyOpType : public ::mlir::Type::TypeBase<AnyOpType, ::mlir::Type, ::mlir::TypeStorage, ::mlir::transform::TransformHandleTypeInterface::Trait> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"any_op"};
  }

  static ::mlir::Type parse(::mlir::AsmParser &odsParser);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::DiagnosedSilenceableFailure checkPayload(::mlir::Location loc, ::mlir::ArrayRef<::mlir::Operation *> payload) const;
};
class AnyValueType : public ::mlir::Type::TypeBase<AnyValueType, ::mlir::Type, ::mlir::TypeStorage, ::mlir::transform::TransformValueHandleTypeInterface::Trait> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"any_value"};
  }

  static ::mlir::Type parse(::mlir::AsmParser &odsParser);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::DiagnosedSilenceableFailure checkPayload(::mlir::Location loc, ::mlir::ArrayRef<::mlir::Value> payload) const;
};
namespace detail {
struct OperationTypeStorage;
} // namespace detail
class OperationType : public ::mlir::Type::TypeBase<OperationType, ::mlir::Type, detail::OperationTypeStorage, ::mlir::transform::TransformHandleTypeInterface::Trait> {
public:
  using Base::Base;
  static OperationType get(::mlir::MLIRContext *context, ::llvm::StringRef operation_name);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"op"};
  }

  static ::mlir::Type parse(::mlir::AsmParser &odsParser);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::llvm::StringRef getOperationName() const;
  ::mlir::DiagnosedSilenceableFailure checkPayload(::mlir::Location loc, ::mlir::ArrayRef<::mlir::Operation *> payload) const;
};
namespace detail {
struct ParamTypeStorage;
} // namespace detail
class ParamType : public ::mlir::Type::TypeBase<ParamType, ::mlir::Type, detail::ParamTypeStorage, ::mlir::transform::TransformParamTypeInterface::Trait> {
public:
  using Base::Base;
  using Base::getChecked;
  static ParamType get(::mlir::MLIRContext *context, ::mlir::Type type);
  static ParamType getChecked(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, ::mlir::MLIRContext *context, ::mlir::Type type);
  static ::mlir::LogicalResult verify(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, ::mlir::Type type);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"param"};
  }

  static ::mlir::Type parse(::mlir::AsmParser &odsParser);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::Type getType() const;
  ::mlir::DiagnosedSilenceableFailure checkPayload(::mlir::Location loc, ::mlir::ArrayRef<::mlir::Attribute> payload) const;
};
class TypeParamType : public ::mlir::Type::TypeBase<TypeParamType, ::mlir::Type, ::mlir::TypeStorage, ::mlir::transform::TransformParamTypeInterface::Trait> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"type"};
  }

  static ::mlir::Type parse(::mlir::AsmParser &odsParser);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::DiagnosedSilenceableFailure checkPayload(::mlir::Location loc, ::mlir::ArrayRef<::mlir::Attribute> payload) const;
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::AffineMapParamType)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::AnyOpType)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::AnyValueType)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::OperationType)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::ParamType)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::TypeParamType)

#endif  // GET_TYPEDEF_CLASSES
