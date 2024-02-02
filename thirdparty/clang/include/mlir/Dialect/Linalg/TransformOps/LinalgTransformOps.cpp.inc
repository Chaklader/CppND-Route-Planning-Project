/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

::mlir::transform::ApplyEraseUnnecessaryInputsPatternsOp,
::mlir::transform::ApplyFoldUnitExtentDimsViaReshapesPatternsOp,
::mlir::transform::ApplyFoldUnitExtentDimsViaSlicesPatternsOp,
::mlir::transform::ApplyTilingCanonicalizationPatternsOp,
::mlir::transform::BufferizeToAllocationOp,
::mlir::transform::ConvertConv2DToImg2ColOp,
::mlir::transform::DecomposeInterfaceOp,
::mlir::transform::DecomposeOp,
::mlir::transform::EliminateLinalgOpAnchoredEmptyTensorsOp,
::mlir::transform::FuseIntoContainingOp,
::mlir::transform::FuseOp,
::mlir::transform::GeneralizeOp,
::mlir::transform::HoistPadBuildPackingLoopNestOp,
::mlir::transform::HoistPadOp,
::mlir::transform::HoistRedundantTensorSubsetsOp,
::mlir::transform::HoistRedundantVectorTransfersOp,
::mlir::transform::InsertSliceToCopyOp,
::mlir::transform::InterchangeOp,
::mlir::transform::LowerPackOp,
::mlir::transform::LowerUnPackOp,
::mlir::transform::MapCopyToThreadsOp,
::mlir::transform::MaskedVectorizeOp,
::mlir::transform::MatchOp,
::mlir::transform::MultiTileSizesOp,
::mlir::transform::PackGreedilyOp,
::mlir::transform::PackOp,
::mlir::transform::PackTransposeOp,
::mlir::transform::PadOp,
::mlir::transform::PromoteOp,
::mlir::transform::ReplaceOp,
::mlir::transform::RewriteInDestinationPassingStyleOp,
::mlir::transform::ScalarizeOp,
::mlir::transform::SplitOp,
::mlir::transform::SplitReductionOp,
::mlir::transform::TileOp,
::mlir::transform::TileReductionUsingForallOp,
::mlir::transform::TileReductionUsingScfOp,
::mlir::transform::TileToForallOp,
::mlir::transform::TileToScfForOp,
::mlir::transform::VectorizeOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace transform {

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_LinalgTransformOps0(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::transform::TransformHandleTypeInterface>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be TransformHandleTypeInterface instance, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_LinalgTransformOps1(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::transform::AnyValueType>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be , but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_LinalgTransformOps2(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::transform::AnyOpType>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be , but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_LinalgTransformOps3(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::transform::OperationType>(type))) && ((::llvm::cast<::mlir::transform::OperationType>(type).getOperationName() == "tensor.pack")))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be Transform IR handle to tensor.pack operations, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_LinalgTransformOps4(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::transform::OperationType>(type))) && ((::llvm::cast<::mlir::transform::OperationType>(type).getOperationName() == "tensor.pad")))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be Transform IR handle to tensor.pad operations, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_LinalgTransformOps5(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::transform::OperationType>(type))) && ((::llvm::cast<::mlir::transform::OperationType>(type).getOperationName() == "tensor.expand_shape")))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be Transform IR handle to tensor.expand_shape operations, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_LinalgTransformOps6(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::transform::OperationType>(type))) && ((::llvm::cast<::mlir::transform::OperationType>(type).getOperationName() == "linalg.transpose")))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be Transform IR handle to linalg.transpose operations, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_LinalgTransformOps7(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::transform::OperationType>(type))) && ((::llvm::cast<::mlir::transform::OperationType>(type).getOperationName() == "tensor.unpack")))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be Transform IR handle to tensor.unpack operations, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_LinalgTransformOps8(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::transform::OperationType>(type))) && ((::llvm::cast<::mlir::transform::OperationType>(type).getOperationName() == "tensor.empty")))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be Transform IR handle to tensor.empty operations, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_LinalgTransformOps9(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::transform::OperationType>(type))) && ((::llvm::cast<::mlir::transform::OperationType>(type).getOperationName() == "tensor.collapse_shape")))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be Transform IR handle to tensor.collapse_shape operations, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_LinalgTransformOps10(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::transform::OperationType>(type))) && ((::llvm::cast<::mlir::transform::OperationType>(type).getOperationName() == "tensor.extract_slice")))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be Transform IR handle to tensor.extract_slice operations, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_LinalgTransformOps11(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::transform::TransformHandleTypeInterface>(type))) || ((::llvm::isa<::mlir::transform::ParamType>(type))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be transform 'param' type or any handle type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps0(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
  if (attr && !((true)))
    return getDiag() << "attribute '" << attrName
        << "' failed to satisfy constraint: any attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps0(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_LinalgTransformOps0(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps1(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
  if (attr && !((::llvm::isa<::mlir::StringAttr>(attr))))
    return getDiag() << "attribute '" << attrName
        << "' failed to satisfy constraint: string attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps1(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_LinalgTransformOps1(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps2(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
  if (attr && !((::llvm::isa<::mlir::UnitAttr>(attr))))
    return getDiag() << "attribute '" << attrName
        << "' failed to satisfy constraint: unit attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps2(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_LinalgTransformOps2(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps3(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
  if (attr && !(((::llvm::isa<::mlir::ArrayAttr>(attr))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(attr), [&](::mlir::Attribute attr) { return attr && (((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(64)))); }))))
    return getDiag() << "attribute '" << attrName
        << "' failed to satisfy constraint: 64-bit integer array attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps3(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_LinalgTransformOps3(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps4(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
  if (attr && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(attr))))
    return getDiag() << "attribute '" << attrName
        << "' failed to satisfy constraint: i64 dense array attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps4(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_LinalgTransformOps4(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps5(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
  if (attr && !(((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(64)))))
    return getDiag() << "attribute '" << attrName
        << "' failed to satisfy constraint: 64-bit signless integer attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps5(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_LinalgTransformOps5(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps6(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
  if (attr && !(((::llvm::isa<::mlir::DenseI64ArrayAttr>(attr))) && ((::llvm::all_of(::llvm::cast<DenseI64ArrayAttr>(attr).asArrayRef(), [&](auto v) { return v >= 0; })))))
    return getDiag() << "attribute '" << attrName
        << "' failed to satisfy constraint: i64 dense array attribute whose value is non-negative";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps6(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_LinalgTransformOps6(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps7(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
  if (attr && !((::llvm::isa<::mlir::DenseBoolArrayAttr>(attr))))
    return getDiag() << "attribute '" << attrName
        << "' failed to satisfy constraint: i1 dense array attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps7(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_LinalgTransformOps7(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps8(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
  if (attr && !(((::llvm::isa<::mlir::ArrayAttr>(attr))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(attr), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::StringAttr>(attr))); }))))
    return getDiag() << "attribute '" << attrName
        << "' failed to satisfy constraint: string array attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps8(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_LinalgTransformOps8(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps9(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
  if (attr && !((::llvm::isa<mlir::transform::MatchInterfaceEnumAttr>(attr))))
    return getDiag() << "attribute '" << attrName
        << "' failed to satisfy constraint: An interface to match";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps9(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_LinalgTransformOps9(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps10(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
  if (attr && !((::llvm::isa<::mlir::DictionaryAttr>(attr))))
    return getDiag() << "attribute '" << attrName
        << "' failed to satisfy constraint: dictionary of named attribute values";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps10(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_LinalgTransformOps10(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps11(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
  if (attr && !(((::llvm::isa<::mlir::TypeAttr>(attr))) && ((::llvm::isa<::mlir::Type>(::llvm::cast<::mlir::TypeAttr>(attr).getValue()))) && ((true))))
    return getDiag() << "attribute '" << attrName
        << "' failed to satisfy constraint: any type attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps11(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_LinalgTransformOps11(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps12(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
  if (attr && !(((::llvm::isa<::mlir::DenseI64ArrayAttr>(attr))) && ((::llvm::cast<::mlir::DenseArrayAttr>(attr).size() == 3))))
    return getDiag() << "attribute '" << attrName
        << "' failed to satisfy constraint: i64 dense array attribute with exactly 3 elements";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps12(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_LinalgTransformOps12(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps13(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
  if (attr && !(((::llvm::isa<::mlir::DenseI64ArrayAttr>(attr))) && (((::llvm::cast<::mlir::DenseArrayAttr>(attr).size() == 0)) || ((::llvm::cast<::mlir::DenseArrayAttr>(attr).size() == 3)))))
    return getDiag() << "attribute '" << attrName
        << "' failed to satisfy constraint: i64 dense array attribute with 0 or 3 elements";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps13(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_LinalgTransformOps13(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps14(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
  if (attr && !((::llvm::isa<::mlir::ArrayAttr>(attr))))
    return getDiag() << "attribute '" << attrName
        << "' failed to satisfy constraint: array attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps14(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_LinalgTransformOps14(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps15(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
  if (attr && !(((::llvm::isa<::mlir::ArrayAttr>(attr))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(attr), [&](::mlir::Attribute attr) { return attr && (((::llvm::isa<::mlir::ArrayAttr>(attr))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(attr), [&](::mlir::Attribute attr) { return attr && (((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(64)))); }))); }))))
    return getDiag() << "attribute '" << attrName
        << "' failed to satisfy constraint: array of arrays of i64";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps15(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_LinalgTransformOps15(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps16(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
  if (attr && !((::llvm::isa<::mlir::BoolAttr>(attr))))
    return getDiag() << "attribute '" << attrName
        << "' failed to satisfy constraint: bool attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps16(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_LinalgTransformOps16(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps17(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
  if (attr && !(((::llvm::isa<::mlir::ArrayAttr>(attr))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(attr), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::BoolAttr>(attr))); }))))
    return getDiag() << "attribute '" << attrName
        << "' failed to satisfy constraint: 1-bit boolean array attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps17(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_LinalgTransformOps17(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps18(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
  if (attr && !(((::llvm::isa<::mlir::ArrayAttr>(attr))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(attr), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::DeviceMappingAttrInterface>(attr))); }))))
    return getDiag() << "attribute '" << attrName
        << "' failed to satisfy constraint: Device Mapping array attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps18(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_LinalgTransformOps18(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_region_constraint_LinalgTransformOps0(
    ::mlir::Operation *op, ::mlir::Region &region, ::llvm::StringRef regionName,
    unsigned regionIndex) {
  if (!((::llvm::hasNItems(region, 1)))) {
    return op->emitOpError("region #") << regionIndex
        << (regionName.empty() ? " " : " ('" + regionName + "') ")
        << "failed to verify constraint: region with 1 blocks";
  }
  return ::mlir::success();
}
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyEraseUnnecessaryInputsPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ApplyEraseUnnecessaryInputsPatternsOpGenericAdaptorBase::ApplyEraseUnnecessaryInputsPatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.apply_patterns.linalg.erase_unnecessary_inputs", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> ApplyEraseUnnecessaryInputsPatternsOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ApplyEraseUnnecessaryInputsPatternsOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ApplyEraseUnnecessaryInputsPatternsOpAdaptor::ApplyEraseUnnecessaryInputsPatternsOpAdaptor(ApplyEraseUnnecessaryInputsPatternsOp op) : ApplyEraseUnnecessaryInputsPatternsOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult ApplyEraseUnnecessaryInputsPatternsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ApplyEraseUnnecessaryInputsPatternsOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ApplyEraseUnnecessaryInputsPatternsOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ApplyEraseUnnecessaryInputsPatternsOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ApplyEraseUnnecessaryInputsPatternsOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void ApplyEraseUnnecessaryInputsPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ApplyEraseUnnecessaryInputsPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyEraseUnnecessaryInputsPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ApplyEraseUnnecessaryInputsPatternsOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::mlir::LogicalResult ApplyEraseUnnecessaryInputsPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyEraseUnnecessaryInputsPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyEraseUnnecessaryInputsPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyEraseUnnecessaryInputsPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyFoldUnitExtentDimsViaReshapesPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ApplyFoldUnitExtentDimsViaReshapesPatternsOpGenericAdaptorBase::ApplyFoldUnitExtentDimsViaReshapesPatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.apply_patterns.linalg.fold_unit_extent_dims_via_reshapes", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> ApplyFoldUnitExtentDimsViaReshapesPatternsOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ApplyFoldUnitExtentDimsViaReshapesPatternsOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ApplyFoldUnitExtentDimsViaReshapesPatternsOpAdaptor::ApplyFoldUnitExtentDimsViaReshapesPatternsOpAdaptor(ApplyFoldUnitExtentDimsViaReshapesPatternsOp op) : ApplyFoldUnitExtentDimsViaReshapesPatternsOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult ApplyFoldUnitExtentDimsViaReshapesPatternsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ApplyFoldUnitExtentDimsViaReshapesPatternsOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ApplyFoldUnitExtentDimsViaReshapesPatternsOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ApplyFoldUnitExtentDimsViaReshapesPatternsOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ApplyFoldUnitExtentDimsViaReshapesPatternsOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void ApplyFoldUnitExtentDimsViaReshapesPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ApplyFoldUnitExtentDimsViaReshapesPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyFoldUnitExtentDimsViaReshapesPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ApplyFoldUnitExtentDimsViaReshapesPatternsOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::mlir::LogicalResult ApplyFoldUnitExtentDimsViaReshapesPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyFoldUnitExtentDimsViaReshapesPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyFoldUnitExtentDimsViaReshapesPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyFoldUnitExtentDimsViaReshapesPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyFoldUnitExtentDimsViaSlicesPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ApplyFoldUnitExtentDimsViaSlicesPatternsOpGenericAdaptorBase::ApplyFoldUnitExtentDimsViaSlicesPatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.apply_patterns.linalg.fold_unit_extent_dims_via_slices", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> ApplyFoldUnitExtentDimsViaSlicesPatternsOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ApplyFoldUnitExtentDimsViaSlicesPatternsOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ApplyFoldUnitExtentDimsViaSlicesPatternsOpAdaptor::ApplyFoldUnitExtentDimsViaSlicesPatternsOpAdaptor(ApplyFoldUnitExtentDimsViaSlicesPatternsOp op) : ApplyFoldUnitExtentDimsViaSlicesPatternsOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult ApplyFoldUnitExtentDimsViaSlicesPatternsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ApplyFoldUnitExtentDimsViaSlicesPatternsOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ApplyFoldUnitExtentDimsViaSlicesPatternsOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ApplyFoldUnitExtentDimsViaSlicesPatternsOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ApplyFoldUnitExtentDimsViaSlicesPatternsOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void ApplyFoldUnitExtentDimsViaSlicesPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ApplyFoldUnitExtentDimsViaSlicesPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyFoldUnitExtentDimsViaSlicesPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ApplyFoldUnitExtentDimsViaSlicesPatternsOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::mlir::LogicalResult ApplyFoldUnitExtentDimsViaSlicesPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyFoldUnitExtentDimsViaSlicesPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyFoldUnitExtentDimsViaSlicesPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyFoldUnitExtentDimsViaSlicesPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyTilingCanonicalizationPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ApplyTilingCanonicalizationPatternsOpGenericAdaptorBase::ApplyTilingCanonicalizationPatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.apply_patterns.linalg.tiling_canonicalization", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> ApplyTilingCanonicalizationPatternsOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ApplyTilingCanonicalizationPatternsOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ApplyTilingCanonicalizationPatternsOpAdaptor::ApplyTilingCanonicalizationPatternsOpAdaptor(ApplyTilingCanonicalizationPatternsOp op) : ApplyTilingCanonicalizationPatternsOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult ApplyTilingCanonicalizationPatternsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ApplyTilingCanonicalizationPatternsOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ApplyTilingCanonicalizationPatternsOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ApplyTilingCanonicalizationPatternsOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ApplyTilingCanonicalizationPatternsOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void ApplyTilingCanonicalizationPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ApplyTilingCanonicalizationPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyTilingCanonicalizationPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ApplyTilingCanonicalizationPatternsOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::mlir::LogicalResult ApplyTilingCanonicalizationPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyTilingCanonicalizationPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyTilingCanonicalizationPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyTilingCanonicalizationPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::BufferizeToAllocationOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
BufferizeToAllocationOpGenericAdaptorBase::BufferizeToAllocationOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.structured.bufferize_to_allocation", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> BufferizeToAllocationOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr BufferizeToAllocationOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Attribute BufferizeToAllocationOpGenericAdaptorBase::getMemorySpaceAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::Attribute>(getProperties().memory_space);
  return attr;
}

::std::optional<::mlir::Attribute> BufferizeToAllocationOpGenericAdaptorBase::getMemorySpace() {
  auto attr = getMemorySpaceAttr();
  return attr ? ::std::optional<::mlir::Attribute>(attr) : (::std::nullopt);
}

::mlir::StringAttr BufferizeToAllocationOpGenericAdaptorBase::getMemcpyOpAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::StringAttr>(getProperties().memcpy_op);
  return attr;
}

::llvm::StringRef BufferizeToAllocationOpGenericAdaptorBase::getMemcpyOp() {
  auto attr = getMemcpyOpAttr();
  return attr.getValue();
}

::mlir::StringAttr BufferizeToAllocationOpGenericAdaptorBase::getAllocOpAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::StringAttr>(getProperties().alloc_op);
  return attr;
}

::llvm::StringRef BufferizeToAllocationOpGenericAdaptorBase::getAllocOp() {
  auto attr = getAllocOpAttr();
  return attr.getValue();
}

::mlir::UnitAttr BufferizeToAllocationOpGenericAdaptorBase::getBufferizeDestinationOnlyAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().bufferize_destination_only);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool BufferizeToAllocationOpGenericAdaptorBase::getBufferizeDestinationOnly() {
  auto attr = getBufferizeDestinationOnlyAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

} // namespace detail
BufferizeToAllocationOpAdaptor::BufferizeToAllocationOpAdaptor(BufferizeToAllocationOp op) : BufferizeToAllocationOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult BufferizeToAllocationOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_alloc_op = getProperties().alloc_op; (void)tblgen_alloc_op;
  auto tblgen_bufferize_destination_only = getProperties().bufferize_destination_only; (void)tblgen_bufferize_destination_only;
  auto tblgen_memcpy_op = getProperties().memcpy_op; (void)tblgen_memcpy_op;
  auto tblgen_memory_space = getProperties().memory_space; (void)tblgen_memory_space;

  if (tblgen_memory_space && !((true)))
    return emitError(loc, "'transform.structured.bufferize_to_allocation' op ""attribute 'memory_space' failed to satisfy constraint: any attribute");

  if (tblgen_memcpy_op && !((::llvm::isa<::mlir::StringAttr>(tblgen_memcpy_op))))
    return emitError(loc, "'transform.structured.bufferize_to_allocation' op ""attribute 'memcpy_op' failed to satisfy constraint: string attribute");

  if (tblgen_alloc_op && !((::llvm::isa<::mlir::StringAttr>(tblgen_alloc_op))))
    return emitError(loc, "'transform.structured.bufferize_to_allocation' op ""attribute 'alloc_op' failed to satisfy constraint: string attribute");

  if (tblgen_bufferize_destination_only && !((::llvm::isa<::mlir::UnitAttr>(tblgen_bufferize_destination_only))))
    return emitError(loc, "'transform.structured.bufferize_to_allocation' op ""attribute 'bufferize_destination_only' failed to satisfy constraint: unit attribute");
  return ::mlir::success();
}

void BufferizeToAllocationOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "allocated_buffer");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "new_ops");
}

std::pair<unsigned, unsigned> BufferizeToAllocationOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BufferizeToAllocationOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> BufferizeToAllocationOp::getTarget() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
}

::mlir::MutableOperandRange BufferizeToAllocationOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> BufferizeToAllocationOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BufferizeToAllocationOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::AnyValueType> BufferizeToAllocationOp::getAllocatedBuffer() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::AnyValueType>>(*getODSResults(0).begin());
}

::mlir::TypedValue<::mlir::transform::AnyOpType> BufferizeToAllocationOp::getNewOps() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::AnyOpType>>(*getODSResults(1).begin());
}

::mlir::LogicalResult BufferizeToAllocationOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::mlir::InFlightDiagnostic *diag) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    if (diag)
      *diag << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.alloc_op;
       auto attr = dict.get("alloc_op");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for alloc_op in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `alloc_op` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.bufferize_destination_only;
       auto attr = dict.get("bufferize_destination_only");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for bufferize_destination_only in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `bufferize_destination_only` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.memcpy_op;
       auto attr = dict.get("memcpy_op");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for memcpy_op in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `memcpy_op` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.memory_space;
       auto attr = dict.get("memory_space");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for memory_space in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `memory_space` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute BufferizeToAllocationOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.alloc_op;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("alloc_op",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.bufferize_destination_only;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("bufferize_destination_only",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.memcpy_op;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("memcpy_op",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.memory_space;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("memory_space",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code BufferizeToAllocationOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.alloc_op.getAsOpaquePointer()), 
    llvm::hash_value(prop.bufferize_destination_only.getAsOpaquePointer()), 
    llvm::hash_value(prop.memcpy_op.getAsOpaquePointer()), 
    llvm::hash_value(prop.memory_space.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> BufferizeToAllocationOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "alloc_op")
      return prop.alloc_op;

    if (name == "bufferize_destination_only")
      return prop.bufferize_destination_only;

    if (name == "memcpy_op")
      return prop.memcpy_op;

    if (name == "memory_space")
      return prop.memory_space;
  return std::nullopt;
}

void BufferizeToAllocationOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "alloc_op") {
       prop.alloc_op = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.alloc_op)>>(value);
       return;
    }

    if (name == "bufferize_destination_only") {
       prop.bufferize_destination_only = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.bufferize_destination_only)>>(value);
       return;
    }

    if (name == "memcpy_op") {
       prop.memcpy_op = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.memcpy_op)>>(value);
       return;
    }

    if (name == "memory_space") {
       prop.memory_space = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.memory_space)>>(value);
       return;
    }
}

void BufferizeToAllocationOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.alloc_op) attrs.append("alloc_op", prop.alloc_op);

    if (prop.bufferize_destination_only) attrs.append("bufferize_destination_only", prop.bufferize_destination_only);

    if (prop.memcpy_op) attrs.append("memcpy_op", prop.memcpy_op);

    if (prop.memory_space) attrs.append("memory_space", prop.memory_space);
}

::mlir::LogicalResult BufferizeToAllocationOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
    {
      ::mlir::Attribute attr = attrs.get(getAllocOpAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps1(attr, "alloc_op", getDiag)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getBufferizeDestinationOnlyAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps2(attr, "bufferize_destination_only", getDiag)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getMemcpyOpAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps1(attr, "memcpy_op", getDiag)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getMemorySpaceAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps0(attr, "memory_space", getDiag)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult BufferizeToAllocationOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.alloc_op)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.bufferize_destination_only)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.memcpy_op)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.memory_space)))
    return ::mlir::failure();
  return ::mlir::success();
}

void BufferizeToAllocationOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.alloc_op);

  writer.writeOptionalAttribute(prop.bufferize_destination_only);

  writer.writeOptionalAttribute(prop.memcpy_op);

  writer.writeOptionalAttribute(prop.memory_space);
}

::mlir::Attribute BufferizeToAllocationOp::getMemorySpaceAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::Attribute>(getProperties().memory_space);
}

::std::optional<::mlir::Attribute> BufferizeToAllocationOp::getMemorySpace() {
  auto attr = getMemorySpaceAttr();
  return attr ? ::std::optional<::mlir::Attribute>(attr) : (::std::nullopt);
}

::mlir::StringAttr BufferizeToAllocationOp::getMemcpyOpAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::StringAttr>(getProperties().memcpy_op);
}

::llvm::StringRef BufferizeToAllocationOp::getMemcpyOp() {
  auto attr = getMemcpyOpAttr();
  return attr.getValue();
}

::mlir::StringAttr BufferizeToAllocationOp::getAllocOpAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::StringAttr>(getProperties().alloc_op);
}

::llvm::StringRef BufferizeToAllocationOp::getAllocOp() {
  auto attr = getAllocOpAttr();
  return attr.getValue();
}

::mlir::UnitAttr BufferizeToAllocationOp::getBufferizeDestinationOnlyAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().bufferize_destination_only);
}

bool BufferizeToAllocationOp::getBufferizeDestinationOnly() {
  auto attr = getBufferizeDestinationOnlyAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

void BufferizeToAllocationOp::setMemorySpaceAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getMemorySpaceAttrName(), attr);
}

void BufferizeToAllocationOp::setMemcpyOpAttr(::mlir::StringAttr attr) {
  (*this)->setAttr(getMemcpyOpAttrName(), attr);
}

void BufferizeToAllocationOp::setMemcpyOp(::llvm::StringRef attrValue) {
  (*this)->setAttr(getMemcpyOpAttrName(), ::mlir::Builder((*this)->getContext()).getStringAttr(attrValue));
}

void BufferizeToAllocationOp::setAllocOpAttr(::mlir::StringAttr attr) {
  (*this)->setAttr(getAllocOpAttrName(), attr);
}

void BufferizeToAllocationOp::setAllocOp(::llvm::StringRef attrValue) {
  (*this)->setAttr(getAllocOpAttrName(), ::mlir::Builder((*this)->getContext()).getStringAttr(attrValue));
}

void BufferizeToAllocationOp::setBufferizeDestinationOnlyAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getBufferizeDestinationOnlyAttrName(), attr);
}

void BufferizeToAllocationOp::setBufferizeDestinationOnly(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getBufferizeDestinationOnlyAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getBufferizeDestinationOnlyAttrName());
}

::mlir::Attribute BufferizeToAllocationOp::removeMemorySpaceAttr() {
    auto &attr = getProperties().memory_space;
    attr = {};
    return attr;
}

::mlir::Attribute BufferizeToAllocationOp::removeBufferizeDestinationOnlyAttr() {
    auto &attr = getProperties().bufferize_destination_only;
    attr = {};
    return attr;
}

void BufferizeToAllocationOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type allocated_buffer, ::mlir::Type new_ops, ::mlir::Value target, /*optional*/::mlir::Attribute memory_space, ::mlir::StringAttr memcpy_op, ::mlir::StringAttr alloc_op, /*optional*/::mlir::UnitAttr bufferize_destination_only) {
  odsState.addOperands(target);
  if (memory_space) {
    odsState.getOrAddProperties<Properties>().memory_space = memory_space;
  }
  if (memcpy_op) {
    odsState.getOrAddProperties<Properties>().memcpy_op = memcpy_op;
  }
  if (alloc_op) {
    odsState.getOrAddProperties<Properties>().alloc_op = alloc_op;
  }
  if (bufferize_destination_only) {
    odsState.getOrAddProperties<Properties>().bufferize_destination_only = bufferize_destination_only;
  }
  odsState.addTypes(allocated_buffer);
  odsState.addTypes(new_ops);
}

void BufferizeToAllocationOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, /*optional*/::mlir::Attribute memory_space, ::mlir::StringAttr memcpy_op, ::mlir::StringAttr alloc_op, /*optional*/::mlir::UnitAttr bufferize_destination_only) {
  odsState.addOperands(target);
  if (memory_space) {
    odsState.getOrAddProperties<Properties>().memory_space = memory_space;
  }
  if (memcpy_op) {
    odsState.getOrAddProperties<Properties>().memcpy_op = memcpy_op;
  }
  if (alloc_op) {
    odsState.getOrAddProperties<Properties>().alloc_op = alloc_op;
  }
  if (bufferize_destination_only) {
    odsState.getOrAddProperties<Properties>().bufferize_destination_only = bufferize_destination_only;
  }
  assert(resultTypes.size() == 2u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BufferizeToAllocationOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type allocated_buffer, ::mlir::Type new_ops, ::mlir::Value target, /*optional*/::mlir::Attribute memory_space, ::llvm::StringRef memcpy_op, ::llvm::StringRef alloc_op, /*optional*/bool bufferize_destination_only) {
  odsState.addOperands(target);
  if (memory_space) {
    odsState.getOrAddProperties<Properties>().memory_space = memory_space;
  }
  odsState.getOrAddProperties<Properties>().memcpy_op = odsBuilder.getStringAttr(memcpy_op);
  odsState.getOrAddProperties<Properties>().alloc_op = odsBuilder.getStringAttr(alloc_op);
  if (bufferize_destination_only) {
    odsState.getOrAddProperties<Properties>().bufferize_destination_only = ((bufferize_destination_only) ? odsBuilder.getUnitAttr() : nullptr);
  }
  odsState.addTypes(allocated_buffer);
  odsState.addTypes(new_ops);
}

void BufferizeToAllocationOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, /*optional*/::mlir::Attribute memory_space, ::llvm::StringRef memcpy_op, ::llvm::StringRef alloc_op, /*optional*/bool bufferize_destination_only) {
  odsState.addOperands(target);
  if (memory_space) {
    odsState.getOrAddProperties<Properties>().memory_space = memory_space;
  }
  odsState.getOrAddProperties<Properties>().memcpy_op = odsBuilder.getStringAttr(memcpy_op);
  odsState.getOrAddProperties<Properties>().alloc_op = odsBuilder.getStringAttr(alloc_op);
  if (bufferize_destination_only) {
    odsState.getOrAddProperties<Properties>().bufferize_destination_only = ((bufferize_destination_only) ? odsBuilder.getUnitAttr() : nullptr);
  }
  assert(resultTypes.size() == 2u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BufferizeToAllocationOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 2u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void BufferizeToAllocationOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.memcpy_op)
    properties.memcpy_op = odsBuilder.getStringAttr("memref.tensor_store");
  if (!properties.alloc_op)
    properties.alloc_op = odsBuilder.getStringAttr("memref.alloc");
}

::mlir::LogicalResult BufferizeToAllocationOp::verifyInvariantsImpl() {
  auto tblgen_alloc_op = getProperties().alloc_op; (void)tblgen_alloc_op;
  auto tblgen_bufferize_destination_only = getProperties().bufferize_destination_only; (void)tblgen_bufferize_destination_only;
  auto tblgen_memcpy_op = getProperties().memcpy_op; (void)tblgen_memcpy_op;
  auto tblgen_memory_space = getProperties().memory_space; (void)tblgen_memory_space;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps0(*this, tblgen_memory_space, "memory_space")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps1(*this, tblgen_memcpy_op, "memcpy_op")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps1(*this, tblgen_alloc_op, "alloc_op")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps2(*this, tblgen_bufferize_destination_only, "bufferize_destination_only")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps2(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult BufferizeToAllocationOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult BufferizeToAllocationOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(targetRawOperands);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::mlir::Type targetRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> targetTypes(targetRawTypes);

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::transform::TransformHandleTypeInterface type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    targetRawTypes[0] = type;
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getType<::mlir::transform::AnyValueType>();
  ::mlir::Type odsBuildableType1 = parser.getBuilder().getType<::mlir::transform::AnyOpType>();
  result.addTypes(odsBuildableType0);
  result.addTypes(odsBuildableType1);
  if (parser.resolveOperands(targetOperands, targetTypes, targetOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void BufferizeToAllocationOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getMemcpyOpAttr();
     if(attr && (attr == odsBuilder.getStringAttr("memref.tensor_store")))
       elidedAttrs.push_back("memcpy_op");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getAllocOpAttr();
     if(attr && (attr == odsBuilder.getStringAttr("memref.alloc")))
       elidedAttrs.push_back("alloc_op");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getBufferizeDestinationOnlyAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("bufferize_destination_only");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getTarget().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::transform::TransformHandleTypeInterface>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::BufferizeToAllocationOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ConvertConv2DToImg2ColOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ConvertConv2DToImg2ColOpGenericAdaptorBase::ConvertConv2DToImg2ColOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.structured.convert_conv2d_to_img2col", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> ConvertConv2DToImg2ColOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ConvertConv2DToImg2ColOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ConvertConv2DToImg2ColOpAdaptor::ConvertConv2DToImg2ColOpAdaptor(ConvertConv2DToImg2ColOp op) : ConvertConv2DToImg2ColOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult ConvertConv2DToImg2ColOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void ConvertConv2DToImg2ColOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "img2col_tensor");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "transformed");
}

std::pair<unsigned, unsigned> ConvertConv2DToImg2ColOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ConvertConv2DToImg2ColOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> ConvertConv2DToImg2ColOp::getTarget() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
}

::mlir::MutableOperandRange ConvertConv2DToImg2ColOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> ConvertConv2DToImg2ColOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ConvertConv2DToImg2ColOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> ConvertConv2DToImg2ColOp::getImg2colTensor() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(0).begin());
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> ConvertConv2DToImg2ColOp::getTransformed() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(1).begin());
}

void ConvertConv2DToImg2ColOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type img2col_tensor, ::mlir::Type transformed, ::mlir::Value target) {
  odsState.addOperands(target);
  odsState.addTypes(img2col_tensor);
  odsState.addTypes(transformed);
}

void ConvertConv2DToImg2ColOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target) {
  odsState.addOperands(target);
  assert(resultTypes.size() == 2u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ConvertConv2DToImg2ColOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 2u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ConvertConv2DToImg2ColOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ConvertConv2DToImg2ColOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ConvertConv2DToImg2ColOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(targetRawOperands);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> targetTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType target__allResult_functionType;
  if (parser.parseType(target__allResult_functionType))
    return ::mlir::failure();
  targetTypes = target__allResult_functionType.getInputs();
  allResultTypes = target__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(targetOperands, targetTypes, targetOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ConvertConv2DToImg2ColOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(::llvm::ArrayRef<::mlir::Type>(getTarget().getType()), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ConvertConv2DToImg2ColOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::DecomposeInterfaceOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
DecomposeInterfaceOpGenericAdaptorBase::DecomposeInterfaceOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.structured.decompose_interface", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> DecomposeInterfaceOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr DecomposeInterfaceOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
DecomposeInterfaceOpAdaptor::DecomposeInterfaceOpAdaptor(DecomposeInterfaceOp op) : DecomposeInterfaceOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult DecomposeInterfaceOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> DecomposeInterfaceOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range DecomposeInterfaceOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> DecomposeInterfaceOp::getTarget() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
}

::mlir::MutableOperandRange DecomposeInterfaceOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> DecomposeInterfaceOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range DecomposeInterfaceOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> DecomposeInterfaceOp::getTransformed() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(0).begin());
}

void DecomposeInterfaceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target) {
  odsState.addOperands(target);
  odsState.addTypes(transformed);
}

void DecomposeInterfaceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target) {
  odsState.addOperands(target);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void DecomposeInterfaceOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult DecomposeInterfaceOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult DecomposeInterfaceOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult DecomposeInterfaceOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(targetRawOperands);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(targetOperands, allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void DecomposeInterfaceOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::DecomposeInterfaceOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::DecomposeOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
DecomposeOpGenericAdaptorBase::DecomposeOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.structured.decompose", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> DecomposeOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr DecomposeOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
DecomposeOpAdaptor::DecomposeOpAdaptor(DecomposeOp op) : DecomposeOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult DecomposeOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> DecomposeOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range DecomposeOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> DecomposeOp::getTarget() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
}

::mlir::MutableOperandRange DecomposeOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> DecomposeOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range DecomposeOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> DecomposeOp::getTransformed() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(0).begin());
}

void DecomposeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target) {
  odsState.addOperands(target);
  odsState.addTypes(transformed);
}

void DecomposeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target) {
  odsState.addOperands(target);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void DecomposeOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult DecomposeOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult DecomposeOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult DecomposeOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(targetRawOperands);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(targetOperands, allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void DecomposeOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::DecomposeOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::EliminateLinalgOpAnchoredEmptyTensorsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
EliminateLinalgOpAnchoredEmptyTensorsOpGenericAdaptorBase::EliminateLinalgOpAnchoredEmptyTensorsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.structured.eliminate_empty_tensors", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> EliminateLinalgOpAnchoredEmptyTensorsOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr EliminateLinalgOpAnchoredEmptyTensorsOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
EliminateLinalgOpAnchoredEmptyTensorsOpAdaptor::EliminateLinalgOpAnchoredEmptyTensorsOpAdaptor(EliminateLinalgOpAnchoredEmptyTensorsOp op) : EliminateLinalgOpAnchoredEmptyTensorsOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult EliminateLinalgOpAnchoredEmptyTensorsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> EliminateLinalgOpAnchoredEmptyTensorsOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range EliminateLinalgOpAnchoredEmptyTensorsOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> EliminateLinalgOpAnchoredEmptyTensorsOp::getTarget() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
}

::mlir::MutableOperandRange EliminateLinalgOpAnchoredEmptyTensorsOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> EliminateLinalgOpAnchoredEmptyTensorsOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range EliminateLinalgOpAnchoredEmptyTensorsOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void EliminateLinalgOpAnchoredEmptyTensorsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value target) {
  odsState.addOperands(target);
}

void EliminateLinalgOpAnchoredEmptyTensorsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target) {
  odsState.addOperands(target);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void EliminateLinalgOpAnchoredEmptyTensorsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult EliminateLinalgOpAnchoredEmptyTensorsOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult EliminateLinalgOpAnchoredEmptyTensorsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult EliminateLinalgOpAnchoredEmptyTensorsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(targetRawOperands);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::mlir::Type targetRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> targetTypes(targetRawTypes);

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::transform::TransformHandleTypeInterface type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    targetRawTypes[0] = type;
  }
  if (parser.resolveOperands(targetOperands, targetTypes, targetOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void EliminateLinalgOpAnchoredEmptyTensorsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getTarget().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::transform::TransformHandleTypeInterface>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::EliminateLinalgOpAnchoredEmptyTensorsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::FuseIntoContainingOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
FuseIntoContainingOpGenericAdaptorBase::FuseIntoContainingOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.structured.fuse_into_containing_op", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> FuseIntoContainingOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr FuseIntoContainingOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
FuseIntoContainingOpAdaptor::FuseIntoContainingOpAdaptor(FuseIntoContainingOp op) : FuseIntoContainingOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult FuseIntoContainingOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void FuseIntoContainingOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "fused_op");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "new_containing_op");
}

std::pair<unsigned, unsigned> FuseIntoContainingOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range FuseIntoContainingOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> FuseIntoContainingOp::getProducerOp() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> FuseIntoContainingOp::getContainingOp() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(1).begin());
}

::mlir::MutableOperandRange FuseIntoContainingOp::getProducerOpMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::mlir::MutableOperandRange FuseIntoContainingOp::getContainingOpMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> FuseIntoContainingOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range FuseIntoContainingOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> FuseIntoContainingOp::getFusedOp() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(0).begin());
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> FuseIntoContainingOp::getNewContainingOp() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(1).begin());
}

void FuseIntoContainingOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type fused_op, ::mlir::Type new_containing_op, ::mlir::Value producer_op, ::mlir::Value containing_op) {
  odsState.addOperands(producer_op);
  odsState.addOperands(containing_op);
  odsState.addTypes(fused_op);
  odsState.addTypes(new_containing_op);
}

void FuseIntoContainingOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value producer_op, ::mlir::Value containing_op) {
  odsState.addOperands(producer_op);
  odsState.addOperands(containing_op);
  assert(resultTypes.size() == 2u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void FuseIntoContainingOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 2u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult FuseIntoContainingOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult FuseIntoContainingOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult FuseIntoContainingOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand producer_opRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> producer_opOperands(producer_opRawOperands);  ::llvm::SMLoc producer_opOperandsLoc;
  (void)producer_opOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand containing_opRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> containing_opOperands(containing_opRawOperands);  ::llvm::SMLoc containing_opOperandsLoc;
  (void)containing_opOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  producer_opOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(producer_opRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseKeyword("into"))
    return ::mlir::failure();

  containing_opOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(containing_opRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(::llvm::concat<const ::mlir::OpAsmParser::UnresolvedOperand>(producer_opOperands, containing_opOperands), allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void FuseIntoContainingOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getProducerOp();
  _odsPrinter << ' ' << "into";
  _odsPrinter << ' ';
  _odsPrinter << getContainingOp();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::FuseIntoContainingOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::FuseOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
FuseOpGenericAdaptorBase::FuseOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.structured.fuse", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> FuseOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr FuseOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::ArrayAttr FuseOpGenericAdaptorBase::getTileSizesAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().tile_sizes);
  return attr;
}

::mlir::ArrayAttr FuseOpGenericAdaptorBase::getTileSizes() {
  auto attr = getTileSizesAttr();
  return attr;
}

::mlir::ArrayAttr FuseOpGenericAdaptorBase::getTileInterchangeAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().tile_interchange);
  return attr;
}

::mlir::ArrayAttr FuseOpGenericAdaptorBase::getTileInterchange() {
  auto attr = getTileInterchangeAttr();
  return attr;
}

} // namespace detail
FuseOpAdaptor::FuseOpAdaptor(FuseOp op) : FuseOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult FuseOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_tile_interchange = getProperties().tile_interchange; (void)tblgen_tile_interchange;
  auto tblgen_tile_sizes = getProperties().tile_sizes; (void)tblgen_tile_sizes;

  if (tblgen_tile_sizes && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_tile_sizes))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_tile_sizes), [&](::mlir::Attribute attr) { return attr && (((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(64)))); }))))
    return emitError(loc, "'transform.structured.fuse' op ""attribute 'tile_sizes' failed to satisfy constraint: 64-bit integer array attribute");

  if (tblgen_tile_interchange && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_tile_interchange))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_tile_interchange), [&](::mlir::Attribute attr) { return attr && (((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(64)))); }))))
    return emitError(loc, "'transform.structured.fuse' op ""attribute 'tile_interchange' failed to satisfy constraint: 64-bit integer array attribute");
  return ::mlir::success();
}

void FuseOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "transformed");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "loops");
}

std::pair<unsigned, unsigned> FuseOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range FuseOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> FuseOp::getTarget() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
}

::mlir::MutableOperandRange FuseOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> FuseOp::getODSResultIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumResults() - 1) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::result_range FuseOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> FuseOp::getTransformed() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(0).begin());
}

::mlir::Operation::result_range FuseOp::getLoops() {
  return getODSResults(1);
}

::mlir::LogicalResult FuseOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::mlir::InFlightDiagnostic *diag) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    if (diag)
      *diag << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.tile_interchange;
       auto attr = dict.get("tile_interchange");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for tile_interchange in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `tile_interchange` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.tile_sizes;
       auto attr = dict.get("tile_sizes");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for tile_sizes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `tile_sizes` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute FuseOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.tile_interchange;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("tile_interchange",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.tile_sizes;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("tile_sizes",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code FuseOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.tile_interchange.getAsOpaquePointer()), 
    llvm::hash_value(prop.tile_sizes.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> FuseOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "tile_interchange")
      return prop.tile_interchange;

    if (name == "tile_sizes")
      return prop.tile_sizes;
  return std::nullopt;
}

void FuseOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "tile_interchange") {
       prop.tile_interchange = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.tile_interchange)>>(value);
       return;
    }

    if (name == "tile_sizes") {
       prop.tile_sizes = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.tile_sizes)>>(value);
       return;
    }
}

void FuseOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.tile_interchange) attrs.append("tile_interchange", prop.tile_interchange);

    if (prop.tile_sizes) attrs.append("tile_sizes", prop.tile_sizes);
}

::mlir::LogicalResult FuseOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
    {
      ::mlir::Attribute attr = attrs.get(getTileInterchangeAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps3(attr, "tile_interchange", getDiag)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getTileSizesAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps3(attr, "tile_sizes", getDiag)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult FuseOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.tile_interchange)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.tile_sizes)))
    return ::mlir::failure();
  return ::mlir::success();
}

void FuseOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.tile_interchange);

  writer.writeOptionalAttribute(prop.tile_sizes);
}

::mlir::ArrayAttr FuseOp::getTileSizesAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().tile_sizes);
}

::mlir::ArrayAttr FuseOp::getTileSizes() {
  auto attr = getTileSizesAttr();
  return attr;
}

::mlir::ArrayAttr FuseOp::getTileInterchangeAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().tile_interchange);
}

::mlir::ArrayAttr FuseOp::getTileInterchange() {
  auto attr = getTileInterchangeAttr();
  return attr;
}

void FuseOp::setTileSizesAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getTileSizesAttrName(), attr);
}

void FuseOp::setTileInterchangeAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getTileInterchangeAttrName(), attr);
}

void FuseOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::TypeRange loops, ::mlir::Value target, ::mlir::ArrayAttr tile_sizes, ::mlir::ArrayAttr tile_interchange) {
  odsState.addOperands(target);
  if (tile_sizes) {
    odsState.getOrAddProperties<Properties>().tile_sizes = tile_sizes;
  }
  if (tile_interchange) {
    odsState.getOrAddProperties<Properties>().tile_interchange = tile_interchange;
  }
  odsState.addTypes(transformed);
  odsState.addTypes(loops);
}

void FuseOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ArrayAttr tile_sizes, ::mlir::ArrayAttr tile_interchange) {
  odsState.addOperands(target);
  if (tile_sizes) {
    odsState.getOrAddProperties<Properties>().tile_sizes = tile_sizes;
  }
  if (tile_interchange) {
    odsState.getOrAddProperties<Properties>().tile_interchange = tile_interchange;
  }
  assert(resultTypes.size() >= 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void FuseOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() >= 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void FuseOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.tile_sizes)
    properties.tile_sizes = odsBuilder.getI64ArrayAttr({});
  if (!properties.tile_interchange)
    properties.tile_interchange = odsBuilder.getI64ArrayAttr({});
}

::mlir::LogicalResult FuseOp::verifyInvariantsImpl() {
  auto tblgen_tile_interchange = getProperties().tile_interchange; (void)tblgen_tile_interchange;
  auto tblgen_tile_sizes = getProperties().tile_sizes; (void)tblgen_tile_sizes;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps3(*this, tblgen_tile_sizes, "tile_sizes")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps3(*this, tblgen_tile_interchange, "tile_interchange")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult FuseOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::FuseOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::GeneralizeOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
GeneralizeOpGenericAdaptorBase::GeneralizeOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.structured.generalize", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> GeneralizeOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr GeneralizeOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
GeneralizeOpAdaptor::GeneralizeOpAdaptor(GeneralizeOp op) : GeneralizeOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult GeneralizeOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> GeneralizeOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range GeneralizeOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> GeneralizeOp::getTarget() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
}

::mlir::MutableOperandRange GeneralizeOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> GeneralizeOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range GeneralizeOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> GeneralizeOp::getTransformed() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(0).begin());
}

void GeneralizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target) {
  odsState.addOperands(target);
  odsState.addTypes(transformed);
}

void GeneralizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target) {
  odsState.addOperands(target);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void GeneralizeOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult GeneralizeOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult GeneralizeOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult GeneralizeOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(targetRawOperands);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::mlir::Type targetRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> targetTypes(targetRawTypes);
  ::mlir::Type transformedRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> transformedTypes(transformedRawTypes);

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();
  {
    if (parseSemiFunctionType(parser, targetRawTypes[0], transformedRawTypes[0]))
      return ::mlir::failure();
  }
  result.addTypes(transformedTypes);
  if (parser.resolveOperands(targetOperands, targetTypes, targetOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void GeneralizeOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  printSemiFunctionType(_odsPrinter, *this, getTarget().getType(), getTransformed().getType());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::GeneralizeOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::HoistPadBuildPackingLoopNestOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
HoistPadBuildPackingLoopNestOpGenericAdaptorBase::HoistPadBuildPackingLoopNestOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.structured.hoist_pad.build_packing_loop_nest", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> HoistPadBuildPackingLoopNestOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr HoistPadBuildPackingLoopNestOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::DenseI64ArrayAttr HoistPadBuildPackingLoopNestOpGenericAdaptorBase::getTransposeAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().transpose);
  return attr;
}

::llvm::ArrayRef<int64_t> HoistPadBuildPackingLoopNestOpGenericAdaptorBase::getTranspose() {
  auto attr = getTransposeAttr();
  return attr;
}

} // namespace detail
HoistPadBuildPackingLoopNestOpAdaptor::HoistPadBuildPackingLoopNestOpAdaptor(HoistPadBuildPackingLoopNestOp op) : HoistPadBuildPackingLoopNestOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult HoistPadBuildPackingLoopNestOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_transpose = getProperties().transpose; (void)tblgen_transpose;

  if (tblgen_transpose && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_transpose))))
    return emitError(loc, "'transform.structured.hoist_pad.build_packing_loop_nest' op ""attribute 'transpose' failed to satisfy constraint: i64 dense array attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> HoistPadBuildPackingLoopNestOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range HoistPadBuildPackingLoopNestOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> HoistPadBuildPackingLoopNestOp::getTarget() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> HoistPadBuildPackingLoopNestOp::getLoop() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(1).begin());
}

::mlir::MutableOperandRange HoistPadBuildPackingLoopNestOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::mlir::MutableOperandRange HoistPadBuildPackingLoopNestOp::getLoopMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> HoistPadBuildPackingLoopNestOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range HoistPadBuildPackingLoopNestOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> HoistPadBuildPackingLoopNestOp::getPackingLoop() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(0).begin());
}

::mlir::LogicalResult HoistPadBuildPackingLoopNestOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::mlir::InFlightDiagnostic *diag) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    if (diag)
      *diag << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.transpose;
       auto attr = dict.get("transpose");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for transpose in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `transpose` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute HoistPadBuildPackingLoopNestOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.transpose;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("transpose",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code HoistPadBuildPackingLoopNestOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.transpose.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> HoistPadBuildPackingLoopNestOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "transpose")
      return prop.transpose;
  return std::nullopt;
}

void HoistPadBuildPackingLoopNestOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "transpose") {
       prop.transpose = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.transpose)>>(value);
       return;
    }
}

void HoistPadBuildPackingLoopNestOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.transpose) attrs.append("transpose", prop.transpose);
}

::mlir::LogicalResult HoistPadBuildPackingLoopNestOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
    {
      ::mlir::Attribute attr = attrs.get(getTransposeAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps4(attr, "transpose", getDiag)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult HoistPadBuildPackingLoopNestOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.transpose)))
    return ::mlir::failure();
  return ::mlir::success();
}

void HoistPadBuildPackingLoopNestOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.transpose);
}

::mlir::DenseI64ArrayAttr HoistPadBuildPackingLoopNestOp::getTransposeAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().transpose);
}

::llvm::ArrayRef<int64_t> HoistPadBuildPackingLoopNestOp::getTranspose() {
  auto attr = getTransposeAttr();
  return attr;
}

void HoistPadBuildPackingLoopNestOp::setTransposeAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getTransposeAttrName(), attr);
}

void HoistPadBuildPackingLoopNestOp::setTranspose(::llvm::ArrayRef<int64_t> attrValue) {
  (*this)->setAttr(getTransposeAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(attrValue));
}

void HoistPadBuildPackingLoopNestOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type packing_loop, ::mlir::Value target, ::mlir::Value loop, ::mlir::DenseI64ArrayAttr transpose) {
  odsState.addOperands(target);
  odsState.addOperands(loop);
  if (transpose) {
    odsState.getOrAddProperties<Properties>().transpose = transpose;
  }
  odsState.addTypes(packing_loop);
}

void HoistPadBuildPackingLoopNestOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::Value loop, ::mlir::DenseI64ArrayAttr transpose) {
  odsState.addOperands(target);
  odsState.addOperands(loop);
  if (transpose) {
    odsState.getOrAddProperties<Properties>().transpose = transpose;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void HoistPadBuildPackingLoopNestOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type packing_loop, ::mlir::Value target, ::mlir::Value loop, ::llvm::ArrayRef<int64_t> transpose) {
  odsState.addOperands(target);
  odsState.addOperands(loop);
  odsState.getOrAddProperties<Properties>().transpose = odsBuilder.getDenseI64ArrayAttr(transpose);
  odsState.addTypes(packing_loop);
}

void HoistPadBuildPackingLoopNestOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::Value loop, ::llvm::ArrayRef<int64_t> transpose) {
  odsState.addOperands(target);
  odsState.addOperands(loop);
  odsState.getOrAddProperties<Properties>().transpose = odsBuilder.getDenseI64ArrayAttr(transpose);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void HoistPadBuildPackingLoopNestOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void HoistPadBuildPackingLoopNestOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.transpose)
    properties.transpose = odsBuilder.getDenseI64ArrayAttr({});
}

::mlir::LogicalResult HoistPadBuildPackingLoopNestOp::verifyInvariantsImpl() {
  auto tblgen_transpose = getProperties().transpose; (void)tblgen_transpose;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps4(*this, tblgen_transpose, "transpose")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult HoistPadBuildPackingLoopNestOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult HoistPadBuildPackingLoopNestOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(targetRawOperands);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand loopRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> loopOperands(loopRawOperands);  ::llvm::SMLoc loopOperandsLoc;
  (void)loopOperandsLoc;
  ::mlir::DenseI64ArrayAttr transposeAttr;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseKeyword("above"))
    return ::mlir::failure();

  loopOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(loopRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalComma())) {
  if (parser.parseKeyword("transpose"))
    return ::mlir::failure();
  if (parser.parseKeyword("by"))
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(transposeAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (transposeAttr) result.getOrAddProperties<HoistPadBuildPackingLoopNestOp::Properties>().transpose = transposeAttr;
  }
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(::llvm::concat<const ::mlir::OpAsmParser::UnresolvedOperand>(targetOperands, loopOperands), allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void HoistPadBuildPackingLoopNestOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  _odsPrinter << ' ' << "above";
  _odsPrinter << ' ';
  _odsPrinter << getLoop();
  if (getTransposeAttr() && getTransposeAttr() != ::mlir::OpBuilder((*this)->getContext()).getDenseI64ArrayAttr({})) {
    _odsPrinter << ",";
    _odsPrinter << ' ' << "transpose";
    _odsPrinter << ' ' << "by";
    _odsPrinter << ' ';
  _odsPrinter.printStrippedAttrOrType(getTransposeAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("transpose");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getTransposeAttr();
     if(attr && (attr == odsBuilder.getDenseI64ArrayAttr({})))
       elidedAttrs.push_back("transpose");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::HoistPadBuildPackingLoopNestOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::HoistPadOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
HoistPadOpGenericAdaptorBase::HoistPadOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.structured.hoist_pad", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> HoistPadOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr HoistPadOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr HoistPadOpGenericAdaptorBase::getNumLoopsAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().num_loops);
  return attr;
}

uint64_t HoistPadOpGenericAdaptorBase::getNumLoops() {
  auto attr = getNumLoopsAttr();
  return attr.getValue().getZExtValue();
}

::mlir::DenseI64ArrayAttr HoistPadOpGenericAdaptorBase::getTransposeAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().transpose);
  return attr;
}

::llvm::ArrayRef<int64_t> HoistPadOpGenericAdaptorBase::getTranspose() {
  auto attr = getTransposeAttr();
  return attr;
}

} // namespace detail
HoistPadOpAdaptor::HoistPadOpAdaptor(HoistPadOp op) : HoistPadOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult HoistPadOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_num_loops = getProperties().num_loops; (void)tblgen_num_loops;
  if (!tblgen_num_loops) return emitError(loc, "'transform.structured.hoist_pad' op ""requires attribute 'num_loops'");
  auto tblgen_transpose = getProperties().transpose; (void)tblgen_transpose;

  if (tblgen_num_loops && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_num_loops))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_num_loops).getType().isSignlessInteger(64)))))
    return emitError(loc, "'transform.structured.hoist_pad' op ""attribute 'num_loops' failed to satisfy constraint: 64-bit signless integer attribute");

  if (tblgen_transpose && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_transpose))))
    return emitError(loc, "'transform.structured.hoist_pad' op ""attribute 'transpose' failed to satisfy constraint: i64 dense array attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> HoistPadOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range HoistPadOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> HoistPadOp::getTarget() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
}

::mlir::MutableOperandRange HoistPadOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> HoistPadOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range HoistPadOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> HoistPadOp::getTransformed() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(0).begin());
}

::mlir::LogicalResult HoistPadOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::mlir::InFlightDiagnostic *diag) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    if (diag)
      *diag << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.num_loops;
       auto attr = dict.get("num_loops");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for num_loops in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `num_loops` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.transpose;
       auto attr = dict.get("transpose");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for transpose in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `transpose` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute HoistPadOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.num_loops;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("num_loops",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.transpose;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("transpose",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code HoistPadOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.num_loops.getAsOpaquePointer()), 
    llvm::hash_value(prop.transpose.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> HoistPadOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "num_loops")
      return prop.num_loops;

    if (name == "transpose")
      return prop.transpose;
  return std::nullopt;
}

void HoistPadOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "num_loops") {
       prop.num_loops = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.num_loops)>>(value);
       return;
    }

    if (name == "transpose") {
       prop.transpose = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.transpose)>>(value);
       return;
    }
}

void HoistPadOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.num_loops) attrs.append("num_loops", prop.num_loops);

    if (prop.transpose) attrs.append("transpose", prop.transpose);
}

::mlir::LogicalResult HoistPadOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
    {
      ::mlir::Attribute attr = attrs.get(getNumLoopsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps5(attr, "num_loops", getDiag)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getTransposeAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps4(attr, "transpose", getDiag)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult HoistPadOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.num_loops)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.transpose)))
    return ::mlir::failure();
  return ::mlir::success();
}

void HoistPadOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.num_loops);

  writer.writeOptionalAttribute(prop.transpose);
}

::mlir::IntegerAttr HoistPadOp::getNumLoopsAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().num_loops);
}

uint64_t HoistPadOp::getNumLoops() {
  auto attr = getNumLoopsAttr();
  return attr.getValue().getZExtValue();
}

::mlir::DenseI64ArrayAttr HoistPadOp::getTransposeAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().transpose);
}

::llvm::ArrayRef<int64_t> HoistPadOp::getTranspose() {
  auto attr = getTransposeAttr();
  return attr;
}

void HoistPadOp::setNumLoopsAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getNumLoopsAttrName(), attr);
}

void HoistPadOp::setNumLoops(uint64_t attrValue) {
  (*this)->setAttr(getNumLoopsAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), attrValue));
}

void HoistPadOp::setTransposeAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getTransposeAttrName(), attr);
}

void HoistPadOp::setTranspose(::llvm::ArrayRef<int64_t> attrValue) {
  (*this)->setAttr(getTransposeAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(attrValue));
}

void HoistPadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, ::mlir::IntegerAttr num_loops, ::mlir::DenseI64ArrayAttr transpose) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().num_loops = num_loops;
  if (transpose) {
    odsState.getOrAddProperties<Properties>().transpose = transpose;
  }
  odsState.addTypes(transformed);
}

void HoistPadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::IntegerAttr num_loops, ::mlir::DenseI64ArrayAttr transpose) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().num_loops = num_loops;
  if (transpose) {
    odsState.getOrAddProperties<Properties>().transpose = transpose;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void HoistPadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, uint64_t num_loops, ::llvm::ArrayRef<int64_t> transpose) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().num_loops = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), num_loops);
  odsState.getOrAddProperties<Properties>().transpose = odsBuilder.getDenseI64ArrayAttr(transpose);
  odsState.addTypes(transformed);
}

void HoistPadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, uint64_t num_loops, ::llvm::ArrayRef<int64_t> transpose) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().num_loops = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), num_loops);
  odsState.getOrAddProperties<Properties>().transpose = odsBuilder.getDenseI64ArrayAttr(transpose);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void HoistPadOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void HoistPadOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.transpose)
    properties.transpose = odsBuilder.getDenseI64ArrayAttr({});
}

::mlir::LogicalResult HoistPadOp::verifyInvariantsImpl() {
  auto tblgen_num_loops = getProperties().num_loops; (void)tblgen_num_loops;
  if (!tblgen_num_loops) return emitOpError("requires attribute 'num_loops'");
  auto tblgen_transpose = getProperties().transpose; (void)tblgen_transpose;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps5(*this, tblgen_num_loops, "num_loops")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps4(*this, tblgen_transpose, "transpose")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult HoistPadOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult HoistPadOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(targetRawOperands);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::mlir::IntegerAttr num_loopsAttr;
  ::mlir::DenseI64ArrayAttr transposeAttr;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseKeyword("by"))
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(num_loopsAttr, parser.getBuilder().getIntegerType(64))) {
    return ::mlir::failure();
  }
  if (num_loopsAttr) result.getOrAddProperties<HoistPadOp::Properties>().num_loops = num_loopsAttr;
  if (parser.parseKeyword("loops"))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalComma())) {
  if (parser.parseKeyword("transpose"))
    return ::mlir::failure();
  if (parser.parseKeyword("by"))
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(transposeAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (transposeAttr) result.getOrAddProperties<HoistPadOp::Properties>().transpose = transposeAttr;
  }
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(targetOperands, allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void HoistPadOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  _odsPrinter << ' ' << "by";
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getNumLoopsAttr());
  _odsPrinter << ' ' << "loops";
  if (getTransposeAttr() && getTransposeAttr() != ::mlir::OpBuilder((*this)->getContext()).getDenseI64ArrayAttr({})) {
    _odsPrinter << ",";
    _odsPrinter << ' ' << "transpose";
    _odsPrinter << ' ' << "by";
    _odsPrinter << ' ';
  _odsPrinter.printStrippedAttrOrType(getTransposeAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("num_loops");
  elidedAttrs.push_back("transpose");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getTransposeAttr();
     if(attr && (attr == odsBuilder.getDenseI64ArrayAttr({})))
       elidedAttrs.push_back("transpose");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::HoistPadOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::HoistRedundantTensorSubsetsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
HoistRedundantTensorSubsetsOpGenericAdaptorBase::HoistRedundantTensorSubsetsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.structured.hoist_redundant_tensor_subsets", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> HoistRedundantTensorSubsetsOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr HoistRedundantTensorSubsetsOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
HoistRedundantTensorSubsetsOpAdaptor::HoistRedundantTensorSubsetsOpAdaptor(HoistRedundantTensorSubsetsOp op) : HoistRedundantTensorSubsetsOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult HoistRedundantTensorSubsetsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> HoistRedundantTensorSubsetsOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range HoistRedundantTensorSubsetsOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> HoistRedundantTensorSubsetsOp::getTarget() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
}

::mlir::MutableOperandRange HoistRedundantTensorSubsetsOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> HoistRedundantTensorSubsetsOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range HoistRedundantTensorSubsetsOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void HoistRedundantTensorSubsetsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value target) {
  odsState.addOperands(target);
}

void HoistRedundantTensorSubsetsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target) {
  odsState.addOperands(target);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void HoistRedundantTensorSubsetsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult HoistRedundantTensorSubsetsOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult HoistRedundantTensorSubsetsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult HoistRedundantTensorSubsetsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(targetRawOperands);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(targetOperands, allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void HoistRedundantTensorSubsetsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::HoistRedundantTensorSubsetsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::HoistRedundantVectorTransfersOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
HoistRedundantVectorTransfersOpGenericAdaptorBase::HoistRedundantVectorTransfersOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.structured.hoist_redundant_vector_transfers", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> HoistRedundantVectorTransfersOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr HoistRedundantVectorTransfersOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
HoistRedundantVectorTransfersOpAdaptor::HoistRedundantVectorTransfersOpAdaptor(HoistRedundantVectorTransfersOp op) : HoistRedundantVectorTransfersOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult HoistRedundantVectorTransfersOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> HoistRedundantVectorTransfersOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range HoistRedundantVectorTransfersOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> HoistRedundantVectorTransfersOp::getTarget() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
}

::mlir::MutableOperandRange HoistRedundantVectorTransfersOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> HoistRedundantVectorTransfersOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range HoistRedundantVectorTransfersOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> HoistRedundantVectorTransfersOp::getTransformed() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(0).begin());
}

void HoistRedundantVectorTransfersOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target) {
  odsState.addOperands(target);
  odsState.addTypes(transformed);
}

void HoistRedundantVectorTransfersOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target) {
  odsState.addOperands(target);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void HoistRedundantVectorTransfersOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult HoistRedundantVectorTransfersOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult HoistRedundantVectorTransfersOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult HoistRedundantVectorTransfersOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(targetRawOperands);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(targetOperands, allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void HoistRedundantVectorTransfersOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::HoistRedundantVectorTransfersOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::InsertSliceToCopyOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
InsertSliceToCopyOpGenericAdaptorBase::InsertSliceToCopyOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.structured.insert_slice_to_copy", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> InsertSliceToCopyOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr InsertSliceToCopyOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
InsertSliceToCopyOpAdaptor::InsertSliceToCopyOpAdaptor(InsertSliceToCopyOp op) : InsertSliceToCopyOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult InsertSliceToCopyOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> InsertSliceToCopyOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range InsertSliceToCopyOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> InsertSliceToCopyOp::getTarget() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
}

::mlir::MutableOperandRange InsertSliceToCopyOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> InsertSliceToCopyOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range InsertSliceToCopyOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> InsertSliceToCopyOp::getTransformed() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(0).begin());
}

void InsertSliceToCopyOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target) {
  odsState.addOperands(target);
  odsState.addTypes(transformed);
}

void InsertSliceToCopyOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target) {
  odsState.addOperands(target);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void InsertSliceToCopyOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult InsertSliceToCopyOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult InsertSliceToCopyOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult InsertSliceToCopyOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(targetRawOperands);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(targetOperands, allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void InsertSliceToCopyOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::InsertSliceToCopyOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::InterchangeOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
InterchangeOpGenericAdaptorBase::InterchangeOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.structured.interchange", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> InterchangeOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr InterchangeOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::DenseI64ArrayAttr InterchangeOpGenericAdaptorBase::getIteratorInterchangeAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().iterator_interchange);
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getDenseI64ArrayAttr({});
  return attr;
}

::llvm::ArrayRef<int64_t> InterchangeOpGenericAdaptorBase::getIteratorInterchange() {
  auto attr = getIteratorInterchangeAttr();
    if (!attr)
      return ::mlir::Builder(odsAttrs.getContext()).getDenseI64ArrayAttr({});
  return attr;
}

} // namespace detail
InterchangeOpAdaptor::InterchangeOpAdaptor(InterchangeOp op) : InterchangeOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult InterchangeOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_iterator_interchange = getProperties().iterator_interchange; (void)tblgen_iterator_interchange;

  if (tblgen_iterator_interchange && !(((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_iterator_interchange))) && ((::llvm::all_of(::llvm::cast<DenseI64ArrayAttr>(tblgen_iterator_interchange).asArrayRef(), [&](auto v) { return v >= 0; })))))
    return emitError(loc, "'transform.structured.interchange' op ""attribute 'iterator_interchange' failed to satisfy constraint: i64 dense array attribute whose value is non-negative");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> InterchangeOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range InterchangeOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> InterchangeOp::getTarget() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
}

::mlir::MutableOperandRange InterchangeOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> InterchangeOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range InterchangeOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> InterchangeOp::getTransformed() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(0).begin());
}

::mlir::LogicalResult InterchangeOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::mlir::InFlightDiagnostic *diag) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    if (diag)
      *diag << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.iterator_interchange;
       auto attr = dict.get("iterator_interchange");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for iterator_interchange in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `iterator_interchange` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute InterchangeOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.iterator_interchange;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("iterator_interchange",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code InterchangeOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.iterator_interchange.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> InterchangeOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "iterator_interchange")
      return prop.iterator_interchange;
  return std::nullopt;
}

void InterchangeOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "iterator_interchange") {
       prop.iterator_interchange = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.iterator_interchange)>>(value);
       return;
    }
}

void InterchangeOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.iterator_interchange) attrs.append("iterator_interchange", prop.iterator_interchange);
}

::mlir::LogicalResult InterchangeOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
    {
      ::mlir::Attribute attr = attrs.get(getIteratorInterchangeAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps6(attr, "iterator_interchange", getDiag)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult InterchangeOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.iterator_interchange)))
    return ::mlir::failure();
  return ::mlir::success();
}

void InterchangeOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.iterator_interchange);
}

::mlir::DenseI64ArrayAttr InterchangeOp::getIteratorInterchangeAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().iterator_interchange);
}

::llvm::ArrayRef<int64_t> InterchangeOp::getIteratorInterchange() {
  auto attr = getIteratorInterchangeAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr({});
  return attr;
}

void InterchangeOp::setIteratorInterchangeAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getIteratorInterchangeAttrName(), attr);
}

void InterchangeOp::setIteratorInterchange(::std::optional<::llvm::ArrayRef<int64_t>> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getIteratorInterchangeAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(*attrValue));
    (*this)->removeAttr(getIteratorInterchangeAttrName());
}

::mlir::Attribute InterchangeOp::removeIteratorInterchangeAttr() {
    auto &attr = getProperties().iterator_interchange;
    attr = {};
    return attr;
}

void InterchangeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, /*optional*/::mlir::DenseI64ArrayAttr iterator_interchange) {
  odsState.addOperands(target);
  if (iterator_interchange) {
    odsState.getOrAddProperties<Properties>().iterator_interchange = iterator_interchange;
  }
  odsState.addTypes(transformed);
}

void InterchangeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, /*optional*/::mlir::DenseI64ArrayAttr iterator_interchange) {
  odsState.addOperands(target);
  if (iterator_interchange) {
    odsState.getOrAddProperties<Properties>().iterator_interchange = iterator_interchange;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void InterchangeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, /*optional*/::llvm::ArrayRef<int64_t> iterator_interchange) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().iterator_interchange = odsBuilder.getDenseI64ArrayAttr(iterator_interchange);
  odsState.addTypes(transformed);
}

void InterchangeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, /*optional*/::llvm::ArrayRef<int64_t> iterator_interchange) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().iterator_interchange = odsBuilder.getDenseI64ArrayAttr(iterator_interchange);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void InterchangeOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult InterchangeOp::verifyInvariantsImpl() {
  auto tblgen_iterator_interchange = getProperties().iterator_interchange; (void)tblgen_iterator_interchange;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps6(*this, tblgen_iterator_interchange, "iterator_interchange")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult InterchangeOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult InterchangeOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(targetRawOperands);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::mlir::DenseI64ArrayAttr iterator_interchangeAttr;
  ::mlir::Type targetRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> targetTypes(targetRawTypes);
  ::mlir::Type transformedRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> transformedTypes(transformedRawTypes);

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("iterator_interchange"))) {
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(iterator_interchangeAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (iterator_interchangeAttr) result.getOrAddProperties<InterchangeOp::Properties>().iterator_interchange = iterator_interchangeAttr;
  }
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();
  {
    if (parseSemiFunctionType(parser, targetRawTypes[0], transformedRawTypes[0]))
      return ::mlir::failure();
  }
  result.addTypes(transformedTypes);
  if (parser.resolveOperands(targetOperands, targetTypes, targetOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void InterchangeOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  if (getIteratorInterchangeAttr()) {
    _odsPrinter << ' ' << "iterator_interchange";
    _odsPrinter << ' ' << "=";
    _odsPrinter << ' ';
  _odsPrinter.printStrippedAttrOrType(getIteratorInterchangeAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("iterator_interchange");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getIteratorInterchangeAttr();
     if(attr && (attr == odsBuilder.getDenseI64ArrayAttr({})))
       elidedAttrs.push_back("iterator_interchange");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  printSemiFunctionType(_odsPrinter, *this, getTarget().getType(), getTransformed().getType());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::InterchangeOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::LowerPackOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
LowerPackOpGenericAdaptorBase::LowerPackOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.structured.lower_pack", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> LowerPackOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr LowerPackOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
LowerPackOpAdaptor::LowerPackOpAdaptor(LowerPackOp op) : LowerPackOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult LowerPackOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void LowerPackOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "pad_op");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "expand_shape_op");
  auto resultGroup2 = getODSResults(2);
  if (!resultGroup2.empty())
    setNameFn(*resultGroup2.begin(), "transpose_op");
}

std::pair<unsigned, unsigned> LowerPackOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range LowerPackOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::OperationType> LowerPackOp::getTarget() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::OperationType>>(*getODSOperands(0).begin());
}

::mlir::MutableOperandRange LowerPackOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> LowerPackOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range LowerPackOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::OperationType> LowerPackOp::getPadOp() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::OperationType>>(*getODSResults(0).begin());
}

::mlir::TypedValue<::mlir::transform::OperationType> LowerPackOp::getExpandShapeOp() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::OperationType>>(*getODSResults(1).begin());
}

::mlir::TypedValue<::mlir::transform::OperationType> LowerPackOp::getTransposeOp() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::OperationType>>(*getODSResults(2).begin());
}

void LowerPackOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type pad_op, ::mlir::Type expand_shape_op, ::mlir::Type transpose_op, ::mlir::Value target) {
  odsState.addOperands(target);
  odsState.addTypes(pad_op);
  odsState.addTypes(expand_shape_op);
  odsState.addTypes(transpose_op);
}

void LowerPackOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target) {
  odsState.addOperands(target);
  assert(resultTypes.size() == 3u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void LowerPackOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 3u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult LowerPackOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps4(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps5(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSResults(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps6(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult LowerPackOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult LowerPackOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(targetRawOperands);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(targetOperands, allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void LowerPackOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::LowerPackOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::LowerUnPackOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
LowerUnPackOpGenericAdaptorBase::LowerUnPackOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.structured.lower_unpack", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> LowerUnPackOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr LowerUnPackOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
LowerUnPackOpAdaptor::LowerUnPackOpAdaptor(LowerUnPackOp op) : LowerUnPackOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult LowerUnPackOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void LowerUnPackOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "empty_op");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "transpose_op");
  auto resultGroup2 = getODSResults(2);
  if (!resultGroup2.empty())
    setNameFn(*resultGroup2.begin(), "collapse_shape_op");
  auto resultGroup3 = getODSResults(3);
  if (!resultGroup3.empty())
    setNameFn(*resultGroup3.begin(), "extract_slice_op");
}

std::pair<unsigned, unsigned> LowerUnPackOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range LowerUnPackOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::OperationType> LowerUnPackOp::getTarget() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::OperationType>>(*getODSOperands(0).begin());
}

::mlir::MutableOperandRange LowerUnPackOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> LowerUnPackOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range LowerUnPackOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::OperationType> LowerUnPackOp::getEmptyOp() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::OperationType>>(*getODSResults(0).begin());
}

::mlir::TypedValue<::mlir::transform::OperationType> LowerUnPackOp::getTransposeOp() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::OperationType>>(*getODSResults(1).begin());
}

::mlir::TypedValue<::mlir::transform::OperationType> LowerUnPackOp::getCollapseShapeOp() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::OperationType>>(*getODSResults(2).begin());
}

::mlir::TypedValue<::mlir::transform::OperationType> LowerUnPackOp::getExtractSliceOp() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::OperationType>>(*getODSResults(3).begin());
}

void LowerUnPackOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type empty_op, ::mlir::Type transpose_op, ::mlir::Type collapse_shape_op, ::mlir::Type extract_slice_op, ::mlir::Value target) {
  odsState.addOperands(target);
  odsState.addTypes(empty_op);
  odsState.addTypes(transpose_op);
  odsState.addTypes(collapse_shape_op);
  odsState.addTypes(extract_slice_op);
}

void LowerUnPackOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target) {
  odsState.addOperands(target);
  assert(resultTypes.size() == 4u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void LowerUnPackOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 4u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult LowerUnPackOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps8(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps6(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSResults(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps9(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSResults(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps10(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult LowerUnPackOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult LowerUnPackOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(targetRawOperands);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(targetOperands, allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void LowerUnPackOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::LowerUnPackOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::MapCopyToThreadsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MapCopyToThreadsOpGenericAdaptorBase::MapCopyToThreadsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.structured.gpu.map_copy_to_threads", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> MapCopyToThreadsOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MapCopyToThreadsOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr MapCopyToThreadsOpGenericAdaptorBase::getTotalNumThreadsAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().total_num_threads);
  return attr;
}

uint64_t MapCopyToThreadsOpGenericAdaptorBase::getTotalNumThreads() {
  auto attr = getTotalNumThreadsAttr();
  return attr.getValue().getZExtValue();
}

::mlir::IntegerAttr MapCopyToThreadsOpGenericAdaptorBase::getDesiredBitAlignmentAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().desired_bit_alignment);
  return attr;
}

uint64_t MapCopyToThreadsOpGenericAdaptorBase::getDesiredBitAlignment() {
  auto attr = getDesiredBitAlignmentAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
MapCopyToThreadsOpAdaptor::MapCopyToThreadsOpAdaptor(MapCopyToThreadsOp op) : MapCopyToThreadsOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult MapCopyToThreadsOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_desired_bit_alignment = getProperties().desired_bit_alignment; (void)tblgen_desired_bit_alignment;
  if (!tblgen_desired_bit_alignment) return emitError(loc, "'transform.structured.gpu.map_copy_to_threads' op ""requires attribute 'desired_bit_alignment'");
  auto tblgen_total_num_threads = getProperties().total_num_threads; (void)tblgen_total_num_threads;
  if (!tblgen_total_num_threads) return emitError(loc, "'transform.structured.gpu.map_copy_to_threads' op ""requires attribute 'total_num_threads'");

  if (tblgen_total_num_threads && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_total_num_threads))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_total_num_threads).getType().isSignlessInteger(64)))))
    return emitError(loc, "'transform.structured.gpu.map_copy_to_threads' op ""attribute 'total_num_threads' failed to satisfy constraint: 64-bit signless integer attribute");

  if (tblgen_desired_bit_alignment && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_desired_bit_alignment))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_desired_bit_alignment).getType().isSignlessInteger(64)))))
    return emitError(loc, "'transform.structured.gpu.map_copy_to_threads' op ""attribute 'desired_bit_alignment' failed to satisfy constraint: 64-bit signless integer attribute");
  return ::mlir::success();
}

void MapCopyToThreadsOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "forall_op");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "tiled_op");
}

std::pair<unsigned, unsigned> MapCopyToThreadsOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MapCopyToThreadsOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> MapCopyToThreadsOp::getTarget() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
}

::mlir::MutableOperandRange MapCopyToThreadsOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> MapCopyToThreadsOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MapCopyToThreadsOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> MapCopyToThreadsOp::getForallOp() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(0).begin());
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> MapCopyToThreadsOp::getTiledOp() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(1).begin());
}

::mlir::LogicalResult MapCopyToThreadsOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::mlir::InFlightDiagnostic *diag) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    if (diag)
      *diag << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.desired_bit_alignment;
       auto attr = dict.get("desired_bit_alignment");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for desired_bit_alignment in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `desired_bit_alignment` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.total_num_threads;
       auto attr = dict.get("total_num_threads");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for total_num_threads in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `total_num_threads` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute MapCopyToThreadsOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.desired_bit_alignment;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("desired_bit_alignment",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.total_num_threads;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("total_num_threads",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code MapCopyToThreadsOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.desired_bit_alignment.getAsOpaquePointer()), 
    llvm::hash_value(prop.total_num_threads.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> MapCopyToThreadsOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "desired_bit_alignment")
      return prop.desired_bit_alignment;

    if (name == "total_num_threads")
      return prop.total_num_threads;
  return std::nullopt;
}

void MapCopyToThreadsOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "desired_bit_alignment") {
       prop.desired_bit_alignment = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.desired_bit_alignment)>>(value);
       return;
    }

    if (name == "total_num_threads") {
       prop.total_num_threads = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.total_num_threads)>>(value);
       return;
    }
}

void MapCopyToThreadsOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.desired_bit_alignment) attrs.append("desired_bit_alignment", prop.desired_bit_alignment);

    if (prop.total_num_threads) attrs.append("total_num_threads", prop.total_num_threads);
}

::mlir::LogicalResult MapCopyToThreadsOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
    {
      ::mlir::Attribute attr = attrs.get(getDesiredBitAlignmentAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps5(attr, "desired_bit_alignment", getDiag)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getTotalNumThreadsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps5(attr, "total_num_threads", getDiag)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult MapCopyToThreadsOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.desired_bit_alignment)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.total_num_threads)))
    return ::mlir::failure();
  return ::mlir::success();
}

void MapCopyToThreadsOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.desired_bit_alignment);
  writer.writeAttribute(prop.total_num_threads);
}

::mlir::IntegerAttr MapCopyToThreadsOp::getTotalNumThreadsAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().total_num_threads);
}

uint64_t MapCopyToThreadsOp::getTotalNumThreads() {
  auto attr = getTotalNumThreadsAttr();
  return attr.getValue().getZExtValue();
}

::mlir::IntegerAttr MapCopyToThreadsOp::getDesiredBitAlignmentAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().desired_bit_alignment);
}

uint64_t MapCopyToThreadsOp::getDesiredBitAlignment() {
  auto attr = getDesiredBitAlignmentAttr();
  return attr.getValue().getZExtValue();
}

void MapCopyToThreadsOp::setTotalNumThreadsAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getTotalNumThreadsAttrName(), attr);
}

void MapCopyToThreadsOp::setTotalNumThreads(uint64_t attrValue) {
  (*this)->setAttr(getTotalNumThreadsAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), attrValue));
}

void MapCopyToThreadsOp::setDesiredBitAlignmentAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getDesiredBitAlignmentAttrName(), attr);
}

void MapCopyToThreadsOp::setDesiredBitAlignment(uint64_t attrValue) {
  (*this)->setAttr(getDesiredBitAlignmentAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), attrValue));
}

void MapCopyToThreadsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type forall_op, ::mlir::Type tiled_op, ::mlir::Value target, ::mlir::IntegerAttr total_num_threads, ::mlir::IntegerAttr desired_bit_alignment) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().total_num_threads = total_num_threads;
  odsState.getOrAddProperties<Properties>().desired_bit_alignment = desired_bit_alignment;
  odsState.addTypes(forall_op);
  odsState.addTypes(tiled_op);
}

void MapCopyToThreadsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::IntegerAttr total_num_threads, ::mlir::IntegerAttr desired_bit_alignment) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().total_num_threads = total_num_threads;
  odsState.getOrAddProperties<Properties>().desired_bit_alignment = desired_bit_alignment;
  assert(resultTypes.size() == 2u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MapCopyToThreadsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type forall_op, ::mlir::Type tiled_op, ::mlir::Value target, uint64_t total_num_threads, uint64_t desired_bit_alignment) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().total_num_threads = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), total_num_threads);
  odsState.getOrAddProperties<Properties>().desired_bit_alignment = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), desired_bit_alignment);
  odsState.addTypes(forall_op);
  odsState.addTypes(tiled_op);
}

void MapCopyToThreadsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, uint64_t total_num_threads, uint64_t desired_bit_alignment) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().total_num_threads = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), total_num_threads);
  odsState.getOrAddProperties<Properties>().desired_bit_alignment = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), desired_bit_alignment);
  assert(resultTypes.size() == 2u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MapCopyToThreadsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 2u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult MapCopyToThreadsOp::verifyInvariantsImpl() {
  auto tblgen_desired_bit_alignment = getProperties().desired_bit_alignment; (void)tblgen_desired_bit_alignment;
  if (!tblgen_desired_bit_alignment) return emitOpError("requires attribute 'desired_bit_alignment'");
  auto tblgen_total_num_threads = getProperties().total_num_threads; (void)tblgen_total_num_threads;
  if (!tblgen_total_num_threads) return emitOpError("requires attribute 'total_num_threads'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps5(*this, tblgen_total_num_threads, "total_num_threads")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps5(*this, tblgen_desired_bit_alignment, "desired_bit_alignment")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult MapCopyToThreadsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult MapCopyToThreadsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(targetRawOperands);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::mlir::IntegerAttr total_num_threadsAttr;
  ::mlir::IntegerAttr desired_bit_alignmentAttr;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseKeyword("total_num_threads"))
    return ::mlir::failure();
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(total_num_threadsAttr, parser.getBuilder().getIntegerType(64))) {
    return ::mlir::failure();
  }
  if (total_num_threadsAttr) result.getOrAddProperties<MapCopyToThreadsOp::Properties>().total_num_threads = total_num_threadsAttr;
  if (parser.parseKeyword("desired_bit_alignment"))
    return ::mlir::failure();
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(desired_bit_alignmentAttr, parser.getBuilder().getIntegerType(64))) {
    return ::mlir::failure();
  }
  if (desired_bit_alignmentAttr) result.getOrAddProperties<MapCopyToThreadsOp::Properties>().desired_bit_alignment = desired_bit_alignmentAttr;
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(targetOperands, allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MapCopyToThreadsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  _odsPrinter << ' ' << "total_num_threads";
  _odsPrinter << ' ' << "=";
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getTotalNumThreadsAttr());
  _odsPrinter << ' ' << "desired_bit_alignment";
  _odsPrinter << ' ' << "=";
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getDesiredBitAlignmentAttr());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("total_num_threads");
  elidedAttrs.push_back("desired_bit_alignment");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::MapCopyToThreadsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::MaskedVectorizeOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MaskedVectorizeOpGenericAdaptorBase::MaskedVectorizeOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.structured.masked_vectorize", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> MaskedVectorizeOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperandsSize - 1) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::DictionaryAttr MaskedVectorizeOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::UnitAttr MaskedVectorizeOpGenericAdaptorBase::getVectorizeNdExtractAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().vectorize_nd_extract);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool MaskedVectorizeOpGenericAdaptorBase::getVectorizeNdExtract() {
  auto attr = getVectorizeNdExtractAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::DenseBoolArrayAttr MaskedVectorizeOpGenericAdaptorBase::getScalableSizesAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseBoolArrayAttr>(getProperties().scalable_sizes);
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getDenseBoolArrayAttr({});
  return attr;
}

::llvm::ArrayRef<bool> MaskedVectorizeOpGenericAdaptorBase::getScalableSizes() {
  auto attr = getScalableSizesAttr();
    if (!attr)
      return ::mlir::Builder(odsAttrs.getContext()).getDenseBoolArrayAttr({});
  return attr;
}

::mlir::DenseI64ArrayAttr MaskedVectorizeOpGenericAdaptorBase::getStaticVectorSizesAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().static_vector_sizes);
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getDenseI64ArrayAttr({});
  return attr;
}

::llvm::ArrayRef<int64_t> MaskedVectorizeOpGenericAdaptorBase::getStaticVectorSizes() {
  auto attr = getStaticVectorSizesAttr();
    if (!attr)
      return ::mlir::Builder(odsAttrs.getContext()).getDenseI64ArrayAttr({});
  return attr;
}

} // namespace detail
MaskedVectorizeOpAdaptor::MaskedVectorizeOpAdaptor(MaskedVectorizeOp op) : MaskedVectorizeOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult MaskedVectorizeOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_scalable_sizes = getProperties().scalable_sizes; (void)tblgen_scalable_sizes;
  auto tblgen_static_vector_sizes = getProperties().static_vector_sizes; (void)tblgen_static_vector_sizes;
  auto tblgen_vectorize_nd_extract = getProperties().vectorize_nd_extract; (void)tblgen_vectorize_nd_extract;

  if (tblgen_vectorize_nd_extract && !((::llvm::isa<::mlir::UnitAttr>(tblgen_vectorize_nd_extract))))
    return emitError(loc, "'transform.structured.masked_vectorize' op ""attribute 'vectorize_nd_extract' failed to satisfy constraint: unit attribute");

  if (tblgen_scalable_sizes && !((::llvm::isa<::mlir::DenseBoolArrayAttr>(tblgen_scalable_sizes))))
    return emitError(loc, "'transform.structured.masked_vectorize' op ""attribute 'scalable_sizes' failed to satisfy constraint: i1 dense array attribute");

  if (tblgen_static_vector_sizes && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_static_vector_sizes))))
    return emitError(loc, "'transform.structured.masked_vectorize' op ""attribute 'static_vector_sizes' failed to satisfy constraint: i64 dense array attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MaskedVectorizeOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 1) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range MaskedVectorizeOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> MaskedVectorizeOp::getTarget() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
}

::mlir::Operation::operand_range MaskedVectorizeOp::getVectorSizes() {
  return getODSOperands(1);
}

::mlir::MutableOperandRange MaskedVectorizeOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::mlir::MutableOperandRange MaskedVectorizeOp::getVectorSizesMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> MaskedVectorizeOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MaskedVectorizeOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult MaskedVectorizeOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::mlir::InFlightDiagnostic *diag) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    if (diag)
      *diag << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.scalable_sizes;
       auto attr = dict.get("scalable_sizes");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for scalable_sizes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `scalable_sizes` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.static_vector_sizes;
       auto attr = dict.get("static_vector_sizes");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for static_vector_sizes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `static_vector_sizes` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.vectorize_nd_extract;
       auto attr = dict.get("vectorize_nd_extract");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for vectorize_nd_extract in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `vectorize_nd_extract` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute MaskedVectorizeOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.scalable_sizes;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("scalable_sizes",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.static_vector_sizes;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("static_vector_sizes",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.vectorize_nd_extract;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("vectorize_nd_extract",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code MaskedVectorizeOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.scalable_sizes.getAsOpaquePointer()), 
    llvm::hash_value(prop.static_vector_sizes.getAsOpaquePointer()), 
    llvm::hash_value(prop.vectorize_nd_extract.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> MaskedVectorizeOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "scalable_sizes")
      return prop.scalable_sizes;

    if (name == "static_vector_sizes")
      return prop.static_vector_sizes;

    if (name == "vectorize_nd_extract")
      return prop.vectorize_nd_extract;
  return std::nullopt;
}

void MaskedVectorizeOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "scalable_sizes") {
       prop.scalable_sizes = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.scalable_sizes)>>(value);
       return;
    }

    if (name == "static_vector_sizes") {
       prop.static_vector_sizes = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.static_vector_sizes)>>(value);
       return;
    }

    if (name == "vectorize_nd_extract") {
       prop.vectorize_nd_extract = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.vectorize_nd_extract)>>(value);
       return;
    }
}

void MaskedVectorizeOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.scalable_sizes) attrs.append("scalable_sizes", prop.scalable_sizes);

    if (prop.static_vector_sizes) attrs.append("static_vector_sizes", prop.static_vector_sizes);

    if (prop.vectorize_nd_extract) attrs.append("vectorize_nd_extract", prop.vectorize_nd_extract);
}

::mlir::LogicalResult MaskedVectorizeOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
    {
      ::mlir::Attribute attr = attrs.get(getScalableSizesAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps7(attr, "scalable_sizes", getDiag)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getStaticVectorSizesAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps4(attr, "static_vector_sizes", getDiag)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getVectorizeNdExtractAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps2(attr, "vectorize_nd_extract", getDiag)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult MaskedVectorizeOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.scalable_sizes)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.static_vector_sizes)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.vectorize_nd_extract)))
    return ::mlir::failure();
  return ::mlir::success();
}

void MaskedVectorizeOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.scalable_sizes);

  writer.writeOptionalAttribute(prop.static_vector_sizes);

  writer.writeOptionalAttribute(prop.vectorize_nd_extract);
}

::mlir::UnitAttr MaskedVectorizeOp::getVectorizeNdExtractAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().vectorize_nd_extract);
}

bool MaskedVectorizeOp::getVectorizeNdExtract() {
  auto attr = getVectorizeNdExtractAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::DenseBoolArrayAttr MaskedVectorizeOp::getScalableSizesAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::DenseBoolArrayAttr>(getProperties().scalable_sizes);
}

::llvm::ArrayRef<bool> MaskedVectorizeOp::getScalableSizes() {
  auto attr = getScalableSizesAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getDenseBoolArrayAttr({});
  return attr;
}

::mlir::DenseI64ArrayAttr MaskedVectorizeOp::getStaticVectorSizesAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().static_vector_sizes);
}

::llvm::ArrayRef<int64_t> MaskedVectorizeOp::getStaticVectorSizes() {
  auto attr = getStaticVectorSizesAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr({});
  return attr;
}

void MaskedVectorizeOp::setVectorizeNdExtractAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getVectorizeNdExtractAttrName(), attr);
}

void MaskedVectorizeOp::setVectorizeNdExtract(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getVectorizeNdExtractAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getVectorizeNdExtractAttrName());
}

void MaskedVectorizeOp::setScalableSizesAttr(::mlir::DenseBoolArrayAttr attr) {
  (*this)->setAttr(getScalableSizesAttrName(), attr);
}

void MaskedVectorizeOp::setScalableSizes(::std::optional<::llvm::ArrayRef<bool>> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getScalableSizesAttrName(), ::mlir::Builder((*this)->getContext()).getDenseBoolArrayAttr(*attrValue));
    (*this)->removeAttr(getScalableSizesAttrName());
}

void MaskedVectorizeOp::setStaticVectorSizesAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getStaticVectorSizesAttrName(), attr);
}

void MaskedVectorizeOp::setStaticVectorSizes(::std::optional<::llvm::ArrayRef<int64_t>> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getStaticVectorSizesAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(*attrValue));
    (*this)->removeAttr(getStaticVectorSizesAttrName());
}

::mlir::Attribute MaskedVectorizeOp::removeVectorizeNdExtractAttr() {
    auto &attr = getProperties().vectorize_nd_extract;
    attr = {};
    return attr;
}

::mlir::Attribute MaskedVectorizeOp::removeScalableSizesAttr() {
    auto &attr = getProperties().scalable_sizes;
    attr = {};
    return attr;
}

::mlir::Attribute MaskedVectorizeOp::removeStaticVectorSizesAttr() {
    auto &attr = getProperties().static_vector_sizes;
    attr = {};
    return attr;
}

void MaskedVectorizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value target, ::mlir::ValueRange vector_sizes, /*optional*/::mlir::UnitAttr vectorize_nd_extract, /*optional*/::mlir::DenseBoolArrayAttr scalable_sizes, /*optional*/::mlir::DenseI64ArrayAttr static_vector_sizes) {
  odsState.addOperands(target);
  odsState.addOperands(vector_sizes);
  if (vectorize_nd_extract) {
    odsState.getOrAddProperties<Properties>().vectorize_nd_extract = vectorize_nd_extract;
  }
  if (scalable_sizes) {
    odsState.getOrAddProperties<Properties>().scalable_sizes = scalable_sizes;
  }
  if (static_vector_sizes) {
    odsState.getOrAddProperties<Properties>().static_vector_sizes = static_vector_sizes;
  }
}

void MaskedVectorizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ValueRange vector_sizes, /*optional*/::mlir::UnitAttr vectorize_nd_extract, /*optional*/::mlir::DenseBoolArrayAttr scalable_sizes, /*optional*/::mlir::DenseI64ArrayAttr static_vector_sizes) {
  odsState.addOperands(target);
  odsState.addOperands(vector_sizes);
  if (vectorize_nd_extract) {
    odsState.getOrAddProperties<Properties>().vectorize_nd_extract = vectorize_nd_extract;
  }
  if (scalable_sizes) {
    odsState.getOrAddProperties<Properties>().scalable_sizes = scalable_sizes;
  }
  if (static_vector_sizes) {
    odsState.getOrAddProperties<Properties>().static_vector_sizes = static_vector_sizes;
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MaskedVectorizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value target, ::mlir::ValueRange vector_sizes, /*optional*/bool vectorize_nd_extract, /*optional*/::llvm::ArrayRef<bool> scalable_sizes, /*optional*/::llvm::ArrayRef<int64_t> static_vector_sizes) {
  odsState.addOperands(target);
  odsState.addOperands(vector_sizes);
  if (vectorize_nd_extract) {
    odsState.getOrAddProperties<Properties>().vectorize_nd_extract = ((vectorize_nd_extract) ? odsBuilder.getUnitAttr() : nullptr);
  }
  odsState.getOrAddProperties<Properties>().scalable_sizes = odsBuilder.getDenseBoolArrayAttr(scalable_sizes);
  odsState.getOrAddProperties<Properties>().static_vector_sizes = odsBuilder.getDenseI64ArrayAttr(static_vector_sizes);
}

void MaskedVectorizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ValueRange vector_sizes, /*optional*/bool vectorize_nd_extract, /*optional*/::llvm::ArrayRef<bool> scalable_sizes, /*optional*/::llvm::ArrayRef<int64_t> static_vector_sizes) {
  odsState.addOperands(target);
  odsState.addOperands(vector_sizes);
  if (vectorize_nd_extract) {
    odsState.getOrAddProperties<Properties>().vectorize_nd_extract = ((vectorize_nd_extract) ? odsBuilder.getUnitAttr() : nullptr);
  }
  odsState.getOrAddProperties<Properties>().scalable_sizes = odsBuilder.getDenseBoolArrayAttr(scalable_sizes);
  odsState.getOrAddProperties<Properties>().static_vector_sizes = odsBuilder.getDenseI64ArrayAttr(static_vector_sizes);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MaskedVectorizeOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult MaskedVectorizeOp::verifyInvariantsImpl() {
  auto tblgen_scalable_sizes = getProperties().scalable_sizes; (void)tblgen_scalable_sizes;
  auto tblgen_static_vector_sizes = getProperties().static_vector_sizes; (void)tblgen_static_vector_sizes;
  auto tblgen_vectorize_nd_extract = getProperties().vectorize_nd_extract; (void)tblgen_vectorize_nd_extract;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps2(*this, tblgen_vectorize_nd_extract, "vectorize_nd_extract")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps7(*this, tblgen_scalable_sizes, "scalable_sizes")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps4(*this, tblgen_static_vector_sizes, "static_vector_sizes")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult MaskedVectorizeOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult MaskedVectorizeOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(targetRawOperands);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> vector_sizesOperands;
  ::llvm::SMLoc vector_sizesOperandsLoc;
  (void)vector_sizesOperandsLoc;
  ::mlir::DenseI64ArrayAttr static_vector_sizesAttr;
  ::llvm::SmallVector<::mlir::Type, 1> vector_sizesTypes;
  ::mlir::DenseBoolArrayAttr scalable_sizesAttr;
  ::mlir::Type targetRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> targetTypes(targetRawTypes);

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseKeyword("vector_sizes"))
    return ::mlir::failure();
  {
    vector_sizesOperandsLoc = parser.getCurrentLocation();
    if (parseDynamicIndexList(parser, vector_sizesOperands, static_vector_sizesAttr, vector_sizesTypes, scalable_sizesAttr))
      return ::mlir::failure();
    if (static_vector_sizesAttr)
      result.getOrAddProperties<MaskedVectorizeOp::Properties>().static_vector_sizes = static_vector_sizesAttr;
    if (scalable_sizesAttr)
      result.getOrAddProperties<MaskedVectorizeOp::Properties>().scalable_sizes = scalable_sizesAttr;
  }
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::transform::TransformHandleTypeInterface type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    targetRawTypes[0] = type;
  }
  if (parser.resolveOperands(targetOperands, targetTypes, targetOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(vector_sizesOperands, vector_sizesTypes, vector_sizesOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MaskedVectorizeOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  _odsPrinter << ' ' << "vector_sizes";
  _odsPrinter << ' ';
  printDynamicIndexList(_odsPrinter, *this, getVectorSizes(), getStaticVectorSizesAttr(), getVectorSizes().getTypes(), getScalableSizesAttr());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("static_vector_sizes");
  elidedAttrs.push_back("scalable_sizes");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getVectorizeNdExtractAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("vectorize_nd_extract");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getScalableSizesAttr();
     if(attr && (attr == odsBuilder.getDenseBoolArrayAttr({})))
       elidedAttrs.push_back("scalable_sizes");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getStaticVectorSizesAttr();
     if(attr && (attr == odsBuilder.getDenseI64ArrayAttr({})))
       elidedAttrs.push_back("static_vector_sizes");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getTarget().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::transform::TransformHandleTypeInterface>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::MaskedVectorizeOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::MatchOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MatchOpGenericAdaptorBase::MatchOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.structured.match", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> MatchOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MatchOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::ArrayAttr MatchOpGenericAdaptorBase::getOpsAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().ops);
  return attr;
}

::std::optional< ::mlir::ArrayAttr > MatchOpGenericAdaptorBase::getOps() {
  auto attr = getOpsAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

mlir::transform::MatchInterfaceEnumAttr MatchOpGenericAdaptorBase::getInterfaceAttr() {
  auto attr = ::llvm::dyn_cast_or_null<mlir::transform::MatchInterfaceEnumAttr>(getProperties().interface);
  return attr;
}

::std::optional<mlir::transform::MatchInterfaceEnum> MatchOpGenericAdaptorBase::getInterface() {
  auto attr = getInterfaceAttr();
  return attr ? ::std::optional<mlir::transform::MatchInterfaceEnum>(attr.getValue()) : (::std::nullopt);
}

::mlir::DictionaryAttr MatchOpGenericAdaptorBase::getOpAttrsAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DictionaryAttr>(getProperties().op_attrs);
  return attr;
}

::std::optional< ::mlir::DictionaryAttr > MatchOpGenericAdaptorBase::getOpAttrs() {
  auto attr = getOpAttrsAttr();
  return attr ? ::std::optional< ::mlir::DictionaryAttr >(attr) : (::std::nullopt);
}

::mlir::TypeAttr MatchOpGenericAdaptorBase::getFilterResultTypeAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::TypeAttr>(getProperties().filter_result_type);
  return attr;
}

::std::optional<::mlir::Type> MatchOpGenericAdaptorBase::getFilterResultType() {
  auto attr = getFilterResultTypeAttr();
  return attr ? ::std::optional<::mlir::Type>(::llvm::cast<::mlir::Type>(attr.getValue())) : (::std::nullopt);
}

} // namespace detail
MatchOpAdaptor::MatchOpAdaptor(MatchOp op) : MatchOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult MatchOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_filter_result_type = getProperties().filter_result_type; (void)tblgen_filter_result_type;
  auto tblgen_interface = getProperties().interface; (void)tblgen_interface;
  auto tblgen_op_attrs = getProperties().op_attrs; (void)tblgen_op_attrs;
  auto tblgen_ops = getProperties().ops; (void)tblgen_ops;

  if (tblgen_ops && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_ops))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_ops), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::StringAttr>(attr))); }))))
    return emitError(loc, "'transform.structured.match' op ""attribute 'ops' failed to satisfy constraint: string array attribute");

  if (tblgen_interface && !((::llvm::isa<mlir::transform::MatchInterfaceEnumAttr>(tblgen_interface))))
    return emitError(loc, "'transform.structured.match' op ""attribute 'interface' failed to satisfy constraint: An interface to match");

  if (tblgen_op_attrs && !((::llvm::isa<::mlir::DictionaryAttr>(tblgen_op_attrs))))
    return emitError(loc, "'transform.structured.match' op ""attribute 'op_attrs' failed to satisfy constraint: dictionary of named attribute values");

  if (tblgen_filter_result_type && !(((::llvm::isa<::mlir::TypeAttr>(tblgen_filter_result_type))) && ((::llvm::isa<::mlir::Type>(::llvm::cast<::mlir::TypeAttr>(tblgen_filter_result_type).getValue()))) && ((true))))
    return emitError(loc, "'transform.structured.match' op ""attribute 'filter_result_type' failed to satisfy constraint: any type attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MatchOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MatchOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> MatchOp::getTarget() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
}

::mlir::MutableOperandRange MatchOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> MatchOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MatchOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> MatchOp::getResults() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(0).begin());
}

::mlir::LogicalResult MatchOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::mlir::InFlightDiagnostic *diag) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    if (diag)
      *diag << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.filter_result_type;
       auto attr = dict.get("filter_result_type");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for filter_result_type in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `filter_result_type` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.interface;
       auto attr = dict.get("interface");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for interface in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `interface` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.op_attrs;
       auto attr = dict.get("op_attrs");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for op_attrs in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `op_attrs` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.ops;
       auto attr = dict.get("ops");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for ops in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `ops` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute MatchOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.filter_result_type;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("filter_result_type",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.interface;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("interface",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.op_attrs;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("op_attrs",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.ops;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("ops",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code MatchOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.filter_result_type.getAsOpaquePointer()), 
    llvm::hash_value(prop.interface.getAsOpaquePointer()), 
    llvm::hash_value(prop.op_attrs.getAsOpaquePointer()), 
    llvm::hash_value(prop.ops.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> MatchOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "filter_result_type")
      return prop.filter_result_type;

    if (name == "interface")
      return prop.interface;

    if (name == "op_attrs")
      return prop.op_attrs;

    if (name == "ops")
      return prop.ops;
  return std::nullopt;
}

void MatchOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "filter_result_type") {
       prop.filter_result_type = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.filter_result_type)>>(value);
       return;
    }

    if (name == "interface") {
       prop.interface = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.interface)>>(value);
       return;
    }

    if (name == "op_attrs") {
       prop.op_attrs = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.op_attrs)>>(value);
       return;
    }

    if (name == "ops") {
       prop.ops = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.ops)>>(value);
       return;
    }
}

void MatchOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.filter_result_type) attrs.append("filter_result_type", prop.filter_result_type);

    if (prop.interface) attrs.append("interface", prop.interface);

    if (prop.op_attrs) attrs.append("op_attrs", prop.op_attrs);

    if (prop.ops) attrs.append("ops", prop.ops);
}

::mlir::LogicalResult MatchOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
    {
      ::mlir::Attribute attr = attrs.get(getFilterResultTypeAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps11(attr, "filter_result_type", getDiag)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getInterfaceAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps9(attr, "interface", getDiag)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getOpAttrsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps10(attr, "op_attrs", getDiag)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getOpsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps8(attr, "ops", getDiag)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult MatchOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.filter_result_type)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.interface)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.op_attrs)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.ops)))
    return ::mlir::failure();
  return ::mlir::success();
}

void MatchOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.filter_result_type);

  writer.writeOptionalAttribute(prop.interface);

  writer.writeOptionalAttribute(prop.op_attrs);

  writer.writeOptionalAttribute(prop.ops);
}

::mlir::ArrayAttr MatchOp::getOpsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().ops);
}

::std::optional< ::mlir::ArrayAttr > MatchOp::getOps() {
  auto attr = getOpsAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

mlir::transform::MatchInterfaceEnumAttr MatchOp::getInterfaceAttr() {
  return ::llvm::dyn_cast_or_null<mlir::transform::MatchInterfaceEnumAttr>(getProperties().interface);
}

::std::optional<mlir::transform::MatchInterfaceEnum> MatchOp::getInterface() {
  auto attr = getInterfaceAttr();
  return attr ? ::std::optional<mlir::transform::MatchInterfaceEnum>(attr.getValue()) : (::std::nullopt);
}

::mlir::DictionaryAttr MatchOp::getOpAttrsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::DictionaryAttr>(getProperties().op_attrs);
}

::std::optional< ::mlir::DictionaryAttr > MatchOp::getOpAttrs() {
  auto attr = getOpAttrsAttr();
  return attr ? ::std::optional< ::mlir::DictionaryAttr >(attr) : (::std::nullopt);
}

::mlir::TypeAttr MatchOp::getFilterResultTypeAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::TypeAttr>(getProperties().filter_result_type);
}

::std::optional<::mlir::Type> MatchOp::getFilterResultType() {
  auto attr = getFilterResultTypeAttr();
  return attr ? ::std::optional<::mlir::Type>(::llvm::cast<::mlir::Type>(attr.getValue())) : (::std::nullopt);
}

void MatchOp::setOpsAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getOpsAttrName(), attr);
}

void MatchOp::setInterfaceAttr(mlir::transform::MatchInterfaceEnumAttr attr) {
  (*this)->setAttr(getInterfaceAttrName(), attr);
}

void MatchOp::setInterface(::std::optional<mlir::transform::MatchInterfaceEnum> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getInterfaceAttrName(), mlir::transform::MatchInterfaceEnumAttr::get(::mlir::Builder((*this)->getContext()).getContext(), *attrValue));
    (*this)->removeAttr(getInterfaceAttrName());
}

void MatchOp::setOpAttrsAttr(::mlir::DictionaryAttr attr) {
  (*this)->setAttr(getOpAttrsAttrName(), attr);
}

void MatchOp::setFilterResultTypeAttr(::mlir::TypeAttr attr) {
  (*this)->setAttr(getFilterResultTypeAttrName(), attr);
}

void MatchOp::setFilterResultType(::std::optional<::mlir::Type> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getFilterResultTypeAttrName(), ::mlir::TypeAttr::get(*attrValue));
    (*this)->removeAttr(getFilterResultTypeAttrName());
}

::mlir::Attribute MatchOp::removeOpsAttr() {
    auto &attr = getProperties().ops;
    attr = {};
    return attr;
}

::mlir::Attribute MatchOp::removeInterfaceAttr() {
    auto &attr = getProperties().interface;
    attr = {};
    return attr;
}

::mlir::Attribute MatchOp::removeOpAttrsAttr() {
    auto &attr = getProperties().op_attrs;
    attr = {};
    return attr;
}

::mlir::Attribute MatchOp::removeFilterResultTypeAttr() {
    auto &attr = getProperties().filter_result_type;
    attr = {};
    return attr;
}

void MatchOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type results, ::mlir::Value target, /*optional*/::mlir::ArrayAttr ops, /*optional*/mlir::transform::MatchInterfaceEnumAttr interface, /*optional*/::mlir::DictionaryAttr op_attrs, /*optional*/::mlir::TypeAttr filter_result_type) {
  odsState.addOperands(target);
  if (ops) {
    odsState.getOrAddProperties<Properties>().ops = ops;
  }
  if (interface) {
    odsState.getOrAddProperties<Properties>().interface = interface;
  }
  if (op_attrs) {
    odsState.getOrAddProperties<Properties>().op_attrs = op_attrs;
  }
  if (filter_result_type) {
    odsState.getOrAddProperties<Properties>().filter_result_type = filter_result_type;
  }
  odsState.addTypes(results);
}

void MatchOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, /*optional*/::mlir::ArrayAttr ops, /*optional*/mlir::transform::MatchInterfaceEnumAttr interface, /*optional*/::mlir::DictionaryAttr op_attrs, /*optional*/::mlir::TypeAttr filter_result_type) {
  odsState.addOperands(target);
  if (ops) {
    odsState.getOrAddProperties<Properties>().ops = ops;
  }
  if (interface) {
    odsState.getOrAddProperties<Properties>().interface = interface;
  }
  if (op_attrs) {
    odsState.getOrAddProperties<Properties>().op_attrs = op_attrs;
  }
  if (filter_result_type) {
    odsState.getOrAddProperties<Properties>().filter_result_type = filter_result_type;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MatchOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult MatchOp::verifyInvariantsImpl() {
  auto tblgen_filter_result_type = getProperties().filter_result_type; (void)tblgen_filter_result_type;
  auto tblgen_interface = getProperties().interface; (void)tblgen_interface;
  auto tblgen_op_attrs = getProperties().op_attrs; (void)tblgen_op_attrs;
  auto tblgen_ops = getProperties().ops; (void)tblgen_ops;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps8(*this, tblgen_ops, "ops")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps9(*this, tblgen_interface, "interface")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps10(*this, tblgen_op_attrs, "op_attrs")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps11(*this, tblgen_filter_result_type, "filter_result_type")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult MatchOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult MatchOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::ArrayAttr opsAttr;
  mlir::transform::MatchInterfaceEnumAttr interfaceAttr;
  ::mlir::DictionaryAttr op_attrsAttr;
  ::mlir::TypeAttr filter_result_typeAttr;
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(targetRawOperands);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> targetTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;
  if (::mlir::succeeded(parser.parseOptionalKeyword("ops"))) {
  if (parser.parseLBrace())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(opsAttr, parser.getBuilder().getType<::mlir::NoneType>())) {
    return ::mlir::failure();
  }
  if (opsAttr) result.getOrAddProperties<MatchOp::Properties>().ops = opsAttr;
  if (parser.parseRBrace())
    return ::mlir::failure();
  }
  if (::mlir::succeeded(parser.parseOptionalKeyword("interface"))) {
  if (parser.parseLBrace())
    return ::mlir::failure();

  {
    ::llvm::StringRef attrStr;
    ::mlir::NamedAttrList attrStorage;
    auto loc = parser.getCurrentLocation();
    if (parser.parseOptionalKeyword(&attrStr, {"LinalgOp","TilingInterface"})) {
      ::mlir::StringAttr attrVal;
      ::mlir::OptionalParseResult parseResult =
        parser.parseOptionalAttribute(attrVal,
                                      parser.getBuilder().getNoneType(),
                                      "interface", attrStorage);
      if (parseResult.has_value()) {
        if (failed(*parseResult))
          return ::mlir::failure();
        attrStr = attrVal.getValue();
      } else {
        return parser.emitError(loc, "expected string or keyword containing one of the following enum values for attribute 'interface' [LinalgOp, TilingInterface]");
      }
    }
    if (!attrStr.empty()) {
      auto attrOptional = mlir::transform::symbolizeMatchInterfaceEnum(attrStr);
      if (!attrOptional)
        return parser.emitError(loc, "invalid ")
               << "interface attribute specification: \"" << attrStr << '"';;

      interfaceAttr = mlir::transform::MatchInterfaceEnumAttr::get(parser.getBuilder().getContext(), *attrOptional);
        result.getOrAddProperties<MatchOp::Properties>().interface = interfaceAttr;
    }
  }
  if (parser.parseRBrace())
    return ::mlir::failure();
  }
  if (::mlir::succeeded(parser.parseOptionalKeyword("attributes"))) {

  if (parser.parseCustomAttributeWithFallback(op_attrsAttr, parser.getBuilder().getType<::mlir::NoneType>())) {
    return ::mlir::failure();
  }
  if (op_attrsAttr) result.getOrAddProperties<MatchOp::Properties>().op_attrs = op_attrsAttr;
  }
  if (::mlir::succeeded(parser.parseOptionalKeyword("filter_result_type"))) {
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(filter_result_typeAttr, parser.getBuilder().getType<::mlir::NoneType>())) {
    return ::mlir::failure();
  }
  if (filter_result_typeAttr) result.getOrAddProperties<MatchOp::Properties>().filter_result_type = filter_result_typeAttr;
  }
  if (parser.parseKeyword("in"))
    return ::mlir::failure();

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType target__allResult_functionType;
  if (parser.parseType(target__allResult_functionType))
    return ::mlir::failure();
  targetTypes = target__allResult_functionType.getInputs();
  allResultTypes = target__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(targetOperands, targetTypes, targetOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MatchOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  if (getOpsAttr()) {
    _odsPrinter << ' ' << "ops";
    _odsPrinter << "{";
    _odsPrinter.printAttributeWithoutType(getOpsAttr());
    _odsPrinter << "}";
  }
  if (getInterfaceAttr()) {
    _odsPrinter << ' ' << "interface";
    _odsPrinter << "{";

    {
      auto caseValue = *getInterface();
      auto caseValueStr = stringifyMatchInterfaceEnum(caseValue);
      _odsPrinter << caseValueStr;
    }
    _odsPrinter << "}";
  }
  if (getOpAttrsAttr()) {
    _odsPrinter << ' ' << "attributes";
    _odsPrinter << ' ';
    _odsPrinter.printAttributeWithoutType(getOpAttrsAttr());
  }
  if (getFilterResultTypeAttr()) {
    _odsPrinter << ' ' << "filter_result_type";
    _odsPrinter << ' ' << "=";
    _odsPrinter << ' ';
    _odsPrinter.printAttributeWithoutType(getFilterResultTypeAttr());
  }
  _odsPrinter << ' ' << "in";
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("ops");
  elidedAttrs.push_back("interface");
  elidedAttrs.push_back("op_attrs");
  elidedAttrs.push_back("filter_result_type");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(::llvm::ArrayRef<::mlir::Type>(getTarget().getType()), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::MatchOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::MultiTileSizesOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MultiTileSizesOpGenericAdaptorBase::MultiTileSizesOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.structured.multitile_sizes", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> MultiTileSizesOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MultiTileSizesOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr MultiTileSizesOpGenericAdaptorBase::getDimensionAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().dimension);
  return attr;
}

uint64_t MultiTileSizesOpGenericAdaptorBase::getDimension() {
  auto attr = getDimensionAttr();
  return attr.getValue().getZExtValue();
}

::mlir::IntegerAttr MultiTileSizesOpGenericAdaptorBase::getTargetSizeAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().target_size);
  return attr;
}

uint64_t MultiTileSizesOpGenericAdaptorBase::getTargetSize() {
  auto attr = getTargetSizeAttr();
  return attr.getValue().getZExtValue();
}

::mlir::IntegerAttr MultiTileSizesOpGenericAdaptorBase::getDivisorAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().divisor);
  return attr;
}

uint64_t MultiTileSizesOpGenericAdaptorBase::getDivisor() {
  auto attr = getDivisorAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
MultiTileSizesOpAdaptor::MultiTileSizesOpAdaptor(MultiTileSizesOp op) : MultiTileSizesOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult MultiTileSizesOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_dimension = getProperties().dimension; (void)tblgen_dimension;
  if (!tblgen_dimension) return emitError(loc, "'transform.structured.multitile_sizes' op ""requires attribute 'dimension'");
  auto tblgen_divisor = getProperties().divisor; (void)tblgen_divisor;
  auto tblgen_target_size = getProperties().target_size; (void)tblgen_target_size;
  if (!tblgen_target_size) return emitError(loc, "'transform.structured.multitile_sizes' op ""requires attribute 'target_size'");

  if (tblgen_dimension && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_dimension))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_dimension).getType().isSignlessInteger(64)))))
    return emitError(loc, "'transform.structured.multitile_sizes' op ""attribute 'dimension' failed to satisfy constraint: 64-bit signless integer attribute");

  if (tblgen_target_size && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_target_size))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_target_size).getType().isSignlessInteger(64)))))
    return emitError(loc, "'transform.structured.multitile_sizes' op ""attribute 'target_size' failed to satisfy constraint: 64-bit signless integer attribute");

  if (tblgen_divisor && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_divisor))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_divisor).getType().isSignlessInteger(64)))))
    return emitError(loc, "'transform.structured.multitile_sizes' op ""attribute 'divisor' failed to satisfy constraint: 64-bit signless integer attribute");
  return ::mlir::success();
}

void MultiTileSizesOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "low_size");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "high_size");
  auto resultGroup2 = getODSResults(2);
  if (!resultGroup2.empty())
    setNameFn(*resultGroup2.begin(), "split_point");
}

std::pair<unsigned, unsigned> MultiTileSizesOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MultiTileSizesOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> MultiTileSizesOp::getTarget() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
}

::mlir::MutableOperandRange MultiTileSizesOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> MultiTileSizesOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MultiTileSizesOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MultiTileSizesOp::getLowSize() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::Value MultiTileSizesOp::getHighSize() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(1).begin());
}

::mlir::Value MultiTileSizesOp::getSplitPoint() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(2).begin());
}

::mlir::LogicalResult MultiTileSizesOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::mlir::InFlightDiagnostic *diag) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    if (diag)
      *diag << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.dimension;
       auto attr = dict.get("dimension");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for dimension in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `dimension` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.divisor;
       auto attr = dict.get("divisor");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for divisor in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `divisor` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.target_size;
       auto attr = dict.get("target_size");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for target_size in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `target_size` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute MultiTileSizesOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.dimension;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("dimension",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.divisor;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("divisor",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.target_size;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("target_size",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code MultiTileSizesOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.dimension.getAsOpaquePointer()), 
    llvm::hash_value(prop.divisor.getAsOpaquePointer()), 
    llvm::hash_value(prop.target_size.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> MultiTileSizesOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "dimension")
      return prop.dimension;

    if (name == "divisor")
      return prop.divisor;

    if (name == "target_size")
      return prop.target_size;
  return std::nullopt;
}

void MultiTileSizesOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "dimension") {
       prop.dimension = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.dimension)>>(value);
       return;
    }

    if (name == "divisor") {
       prop.divisor = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.divisor)>>(value);
       return;
    }

    if (name == "target_size") {
       prop.target_size = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.target_size)>>(value);
       return;
    }
}

void MultiTileSizesOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.dimension) attrs.append("dimension", prop.dimension);

    if (prop.divisor) attrs.append("divisor", prop.divisor);

    if (prop.target_size) attrs.append("target_size", prop.target_size);
}

::mlir::LogicalResult MultiTileSizesOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
    {
      ::mlir::Attribute attr = attrs.get(getDimensionAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps5(attr, "dimension", getDiag)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getDivisorAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps5(attr, "divisor", getDiag)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getTargetSizeAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps5(attr, "target_size", getDiag)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult MultiTileSizesOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.dimension)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.divisor)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.target_size)))
    return ::mlir::failure();
  return ::mlir::success();
}

void MultiTileSizesOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.dimension);

  writer.writeOptionalAttribute(prop.divisor);
  writer.writeAttribute(prop.target_size);
}

::mlir::IntegerAttr MultiTileSizesOp::getDimensionAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().dimension);
}

uint64_t MultiTileSizesOp::getDimension() {
  auto attr = getDimensionAttr();
  return attr.getValue().getZExtValue();
}

::mlir::IntegerAttr MultiTileSizesOp::getTargetSizeAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().target_size);
}

uint64_t MultiTileSizesOp::getTargetSize() {
  auto attr = getTargetSizeAttr();
  return attr.getValue().getZExtValue();
}

::mlir::IntegerAttr MultiTileSizesOp::getDivisorAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().divisor);
}

uint64_t MultiTileSizesOp::getDivisor() {
  auto attr = getDivisorAttr();
  return attr.getValue().getZExtValue();
}

void MultiTileSizesOp::setDimensionAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getDimensionAttrName(), attr);
}

void MultiTileSizesOp::setDimension(uint64_t attrValue) {
  (*this)->setAttr(getDimensionAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), attrValue));
}

void MultiTileSizesOp::setTargetSizeAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getTargetSizeAttrName(), attr);
}

void MultiTileSizesOp::setTargetSize(uint64_t attrValue) {
  (*this)->setAttr(getTargetSizeAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), attrValue));
}

void MultiTileSizesOp::setDivisorAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getDivisorAttrName(), attr);
}

void MultiTileSizesOp::setDivisor(uint64_t attrValue) {
  (*this)->setAttr(getDivisorAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), attrValue));
}

void MultiTileSizesOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type low_size, ::mlir::Type high_size, ::mlir::Type split_point, ::mlir::Value target, ::mlir::IntegerAttr dimension, ::mlir::IntegerAttr target_size, ::mlir::IntegerAttr divisor) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().dimension = dimension;
  odsState.getOrAddProperties<Properties>().target_size = target_size;
  if (divisor) {
    odsState.getOrAddProperties<Properties>().divisor = divisor;
  }
  odsState.addTypes(low_size);
  odsState.addTypes(high_size);
  odsState.addTypes(split_point);
}

void MultiTileSizesOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::IntegerAttr dimension, ::mlir::IntegerAttr target_size, ::mlir::IntegerAttr divisor) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().dimension = dimension;
  odsState.getOrAddProperties<Properties>().target_size = target_size;
  if (divisor) {
    odsState.getOrAddProperties<Properties>().divisor = divisor;
  }
  assert(resultTypes.size() == 3u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MultiTileSizesOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type low_size, ::mlir::Type high_size, ::mlir::Type split_point, ::mlir::Value target, uint64_t dimension, uint64_t target_size, uint64_t divisor) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().dimension = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), dimension);
  odsState.getOrAddProperties<Properties>().target_size = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), target_size);
  odsState.getOrAddProperties<Properties>().divisor = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), divisor);
  odsState.addTypes(low_size);
  odsState.addTypes(high_size);
  odsState.addTypes(split_point);
}

void MultiTileSizesOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, uint64_t dimension, uint64_t target_size, uint64_t divisor) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().dimension = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), dimension);
  odsState.getOrAddProperties<Properties>().target_size = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), target_size);
  odsState.getOrAddProperties<Properties>().divisor = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), divisor);
  assert(resultTypes.size() == 3u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MultiTileSizesOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 3u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void MultiTileSizesOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.divisor)
    properties.divisor = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), 1);
}

::mlir::LogicalResult MultiTileSizesOp::verifyInvariantsImpl() {
  auto tblgen_dimension = getProperties().dimension; (void)tblgen_dimension;
  if (!tblgen_dimension) return emitOpError("requires attribute 'dimension'");
  auto tblgen_divisor = getProperties().divisor; (void)tblgen_divisor;
  auto tblgen_target_size = getProperties().target_size; (void)tblgen_target_size;
  if (!tblgen_target_size) return emitOpError("requires attribute 'target_size'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps5(*this, tblgen_dimension, "dimension")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps5(*this, tblgen_target_size, "target_size")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps5(*this, tblgen_divisor, "divisor")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps11(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps11(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSResults(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps11(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult MultiTileSizesOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult MultiTileSizesOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(targetRawOperands);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::mlir::Type targetRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> targetTypes(targetRawTypes);
  ::mlir::Type low_sizeRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> low_sizeTypes(low_sizeRawTypes);
  ::mlir::Type high_sizeRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> high_sizeTypes(high_sizeRawTypes);
  ::mlir::Type split_pointRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> split_pointTypes(split_pointRawTypes);

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();
  {
    if (parseMultitileSizesTypes(parser, targetRawTypes[0], low_sizeRawTypes[0], high_sizeRawTypes[0], split_pointRawTypes[0]))
      return ::mlir::failure();
  }
  result.addTypes(low_sizeTypes);
  result.addTypes(high_sizeTypes);
  result.addTypes(split_pointTypes);
  if (parser.resolveOperands(targetOperands, targetTypes, targetOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MultiTileSizesOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getDivisorAttr();
     if(attr && (attr == odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), 1)))
       elidedAttrs.push_back("divisor");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  printMultitileSizesTypes(_odsPrinter, *this, getTarget().getType(), getLowSize().getType(), getHighSize().getType(), getSplitPoint().getType());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::MultiTileSizesOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::PackGreedilyOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
PackGreedilyOpGenericAdaptorBase::PackGreedilyOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.structured.pack_greedily", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> PackGreedilyOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperandsSize - 1) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::DictionaryAttr PackGreedilyOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::DenseI64ArrayAttr PackGreedilyOpGenericAdaptorBase::getStaticMatmulPackedSizesAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().static_matmul_packed_sizes);
  return attr;
}

::llvm::ArrayRef<int64_t> PackGreedilyOpGenericAdaptorBase::getStaticMatmulPackedSizes() {
  auto attr = getStaticMatmulPackedSizesAttr();
  return attr;
}

::mlir::DenseI64ArrayAttr PackGreedilyOpGenericAdaptorBase::getMatmulPaddedSizesNextMultipleOfAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().matmul_padded_sizes_next_multiple_of);
  return attr;
}

::llvm::ArrayRef<int64_t> PackGreedilyOpGenericAdaptorBase::getMatmulPaddedSizesNextMultipleOf() {
  auto attr = getMatmulPaddedSizesNextMultipleOfAttr();
  return attr;
}

::mlir::DenseI64ArrayAttr PackGreedilyOpGenericAdaptorBase::getMatmulInnerDimsOrderAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().matmul_inner_dims_order);
  return attr;
}

::llvm::ArrayRef<int64_t> PackGreedilyOpGenericAdaptorBase::getMatmulInnerDimsOrder() {
  auto attr = getMatmulInnerDimsOrderAttr();
  return attr;
}

} // namespace detail
PackGreedilyOpAdaptor::PackGreedilyOpAdaptor(PackGreedilyOp op) : PackGreedilyOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult PackGreedilyOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_matmul_inner_dims_order = getProperties().matmul_inner_dims_order; (void)tblgen_matmul_inner_dims_order;
  auto tblgen_matmul_padded_sizes_next_multiple_of = getProperties().matmul_padded_sizes_next_multiple_of; (void)tblgen_matmul_padded_sizes_next_multiple_of;
  auto tblgen_static_matmul_packed_sizes = getProperties().static_matmul_packed_sizes; (void)tblgen_static_matmul_packed_sizes;

  if (tblgen_static_matmul_packed_sizes && !(((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_static_matmul_packed_sizes))) && ((::llvm::cast<::mlir::DenseArrayAttr>(tblgen_static_matmul_packed_sizes).size() == 3))))
    return emitError(loc, "'transform.structured.pack_greedily' op ""attribute 'static_matmul_packed_sizes' failed to satisfy constraint: i64 dense array attribute with exactly 3 elements");

  if (tblgen_matmul_padded_sizes_next_multiple_of && !(((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_matmul_padded_sizes_next_multiple_of))) && (((::llvm::cast<::mlir::DenseArrayAttr>(tblgen_matmul_padded_sizes_next_multiple_of).size() == 0)) || ((::llvm::cast<::mlir::DenseArrayAttr>(tblgen_matmul_padded_sizes_next_multiple_of).size() == 3)))))
    return emitError(loc, "'transform.structured.pack_greedily' op ""attribute 'matmul_padded_sizes_next_multiple_of' failed to satisfy constraint: i64 dense array attribute with 0 or 3 elements");

  if (tblgen_matmul_inner_dims_order && !(((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_matmul_inner_dims_order))) && ((::llvm::cast<::mlir::DenseArrayAttr>(tblgen_matmul_inner_dims_order).size() == 3))))
    return emitError(loc, "'transform.structured.pack_greedily' op ""attribute 'matmul_inner_dims_order' failed to satisfy constraint: i64 dense array attribute with exactly 3 elements");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> PackGreedilyOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 1) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range PackGreedilyOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> PackGreedilyOp::getTarget() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
}

::mlir::Operation::operand_range PackGreedilyOp::getMatmulPackedSizes() {
  return getODSOperands(1);
}

::mlir::MutableOperandRange PackGreedilyOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::mlir::MutableOperandRange PackGreedilyOp::getMatmulPackedSizesMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> PackGreedilyOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range PackGreedilyOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> PackGreedilyOp::getPackedOp() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(0).begin());
}

::mlir::LogicalResult PackGreedilyOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::mlir::InFlightDiagnostic *diag) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    if (diag)
      *diag << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.matmul_inner_dims_order;
       auto attr = dict.get("matmul_inner_dims_order");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for matmul_inner_dims_order in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `matmul_inner_dims_order` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.matmul_padded_sizes_next_multiple_of;
       auto attr = dict.get("matmul_padded_sizes_next_multiple_of");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for matmul_padded_sizes_next_multiple_of in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `matmul_padded_sizes_next_multiple_of` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.static_matmul_packed_sizes;
       auto attr = dict.get("static_matmul_packed_sizes");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for static_matmul_packed_sizes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `static_matmul_packed_sizes` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute PackGreedilyOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.matmul_inner_dims_order;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("matmul_inner_dims_order",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.matmul_padded_sizes_next_multiple_of;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("matmul_padded_sizes_next_multiple_of",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.static_matmul_packed_sizes;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("static_matmul_packed_sizes",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code PackGreedilyOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.matmul_inner_dims_order.getAsOpaquePointer()), 
    llvm::hash_value(prop.matmul_padded_sizes_next_multiple_of.getAsOpaquePointer()), 
    llvm::hash_value(prop.static_matmul_packed_sizes.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> PackGreedilyOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "matmul_inner_dims_order")
      return prop.matmul_inner_dims_order;

    if (name == "matmul_padded_sizes_next_multiple_of")
      return prop.matmul_padded_sizes_next_multiple_of;

    if (name == "static_matmul_packed_sizes")
      return prop.static_matmul_packed_sizes;
  return std::nullopt;
}

void PackGreedilyOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "matmul_inner_dims_order") {
       prop.matmul_inner_dims_order = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.matmul_inner_dims_order)>>(value);
       return;
    }

    if (name == "matmul_padded_sizes_next_multiple_of") {
       prop.matmul_padded_sizes_next_multiple_of = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.matmul_padded_sizes_next_multiple_of)>>(value);
       return;
    }

    if (name == "static_matmul_packed_sizes") {
       prop.static_matmul_packed_sizes = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.static_matmul_packed_sizes)>>(value);
       return;
    }
}

void PackGreedilyOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.matmul_inner_dims_order) attrs.append("matmul_inner_dims_order", prop.matmul_inner_dims_order);

    if (prop.matmul_padded_sizes_next_multiple_of) attrs.append("matmul_padded_sizes_next_multiple_of", prop.matmul_padded_sizes_next_multiple_of);

    if (prop.static_matmul_packed_sizes) attrs.append("static_matmul_packed_sizes", prop.static_matmul_packed_sizes);
}

::mlir::LogicalResult PackGreedilyOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
    {
      ::mlir::Attribute attr = attrs.get(getMatmulInnerDimsOrderAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps12(attr, "matmul_inner_dims_order", getDiag)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getMatmulPaddedSizesNextMultipleOfAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps13(attr, "matmul_padded_sizes_next_multiple_of", getDiag)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getStaticMatmulPackedSizesAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps12(attr, "static_matmul_packed_sizes", getDiag)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult PackGreedilyOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.matmul_inner_dims_order)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.matmul_padded_sizes_next_multiple_of)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.static_matmul_packed_sizes)))
    return ::mlir::failure();
  return ::mlir::success();
}

void PackGreedilyOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.matmul_inner_dims_order);

  writer.writeOptionalAttribute(prop.matmul_padded_sizes_next_multiple_of);

  writer.writeOptionalAttribute(prop.static_matmul_packed_sizes);
}

::mlir::DenseI64ArrayAttr PackGreedilyOp::getStaticMatmulPackedSizesAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().static_matmul_packed_sizes);
}

::llvm::ArrayRef<int64_t> PackGreedilyOp::getStaticMatmulPackedSizes() {
  auto attr = getStaticMatmulPackedSizesAttr();
  return attr;
}

::mlir::DenseI64ArrayAttr PackGreedilyOp::getMatmulPaddedSizesNextMultipleOfAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().matmul_padded_sizes_next_multiple_of);
}

::llvm::ArrayRef<int64_t> PackGreedilyOp::getMatmulPaddedSizesNextMultipleOf() {
  auto attr = getMatmulPaddedSizesNextMultipleOfAttr();
  return attr;
}

::mlir::DenseI64ArrayAttr PackGreedilyOp::getMatmulInnerDimsOrderAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().matmul_inner_dims_order);
}

::llvm::ArrayRef<int64_t> PackGreedilyOp::getMatmulInnerDimsOrder() {
  auto attr = getMatmulInnerDimsOrderAttr();
  return attr;
}

void PackGreedilyOp::setStaticMatmulPackedSizesAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getStaticMatmulPackedSizesAttrName(), attr);
}

void PackGreedilyOp::setStaticMatmulPackedSizes(::llvm::ArrayRef<int64_t> attrValue) {
  (*this)->setAttr(getStaticMatmulPackedSizesAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(attrValue));
}

void PackGreedilyOp::setMatmulPaddedSizesNextMultipleOfAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getMatmulPaddedSizesNextMultipleOfAttrName(), attr);
}

void PackGreedilyOp::setMatmulPaddedSizesNextMultipleOf(::llvm::ArrayRef<int64_t> attrValue) {
  (*this)->setAttr(getMatmulPaddedSizesNextMultipleOfAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(attrValue));
}

void PackGreedilyOp::setMatmulInnerDimsOrderAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getMatmulInnerDimsOrderAttrName(), attr);
}

void PackGreedilyOp::setMatmulInnerDimsOrder(::llvm::ArrayRef<int64_t> attrValue) {
  (*this)->setAttr(getMatmulInnerDimsOrderAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(attrValue));
}

void PackGreedilyOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type packed_op, ::mlir::Value target, ::mlir::ValueRange matmul_packed_sizes, ::mlir::DenseI64ArrayAttr static_matmul_packed_sizes, ::mlir::DenseI64ArrayAttr matmul_padded_sizes_next_multiple_of, ::mlir::DenseI64ArrayAttr matmul_inner_dims_order) {
  odsState.addOperands(target);
  odsState.addOperands(matmul_packed_sizes);
  if (static_matmul_packed_sizes) {
    odsState.getOrAddProperties<Properties>().static_matmul_packed_sizes = static_matmul_packed_sizes;
  }
  if (matmul_padded_sizes_next_multiple_of) {
    odsState.getOrAddProperties<Properties>().matmul_padded_sizes_next_multiple_of = matmul_padded_sizes_next_multiple_of;
  }
  if (matmul_inner_dims_order) {
    odsState.getOrAddProperties<Properties>().matmul_inner_dims_order = matmul_inner_dims_order;
  }
  odsState.addTypes(packed_op);
}

void PackGreedilyOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ValueRange matmul_packed_sizes, ::mlir::DenseI64ArrayAttr static_matmul_packed_sizes, ::mlir::DenseI64ArrayAttr matmul_padded_sizes_next_multiple_of, ::mlir::DenseI64ArrayAttr matmul_inner_dims_order) {
  odsState.addOperands(target);
  odsState.addOperands(matmul_packed_sizes);
  if (static_matmul_packed_sizes) {
    odsState.getOrAddProperties<Properties>().static_matmul_packed_sizes = static_matmul_packed_sizes;
  }
  if (matmul_padded_sizes_next_multiple_of) {
    odsState.getOrAddProperties<Properties>().matmul_padded_sizes_next_multiple_of = matmul_padded_sizes_next_multiple_of;
  }
  if (matmul_inner_dims_order) {
    odsState.getOrAddProperties<Properties>().matmul_inner_dims_order = matmul_inner_dims_order;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void PackGreedilyOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type packed_op, ::mlir::Value target, ::mlir::ValueRange matmul_packed_sizes, ::llvm::ArrayRef<int64_t> static_matmul_packed_sizes, ::llvm::ArrayRef<int64_t> matmul_padded_sizes_next_multiple_of, ::llvm::ArrayRef<int64_t> matmul_inner_dims_order) {
  odsState.addOperands(target);
  odsState.addOperands(matmul_packed_sizes);
  odsState.getOrAddProperties<Properties>().static_matmul_packed_sizes = odsBuilder.getDenseI64ArrayAttr(static_matmul_packed_sizes);
  odsState.getOrAddProperties<Properties>().matmul_padded_sizes_next_multiple_of = odsBuilder.getDenseI64ArrayAttr(matmul_padded_sizes_next_multiple_of);
  odsState.getOrAddProperties<Properties>().matmul_inner_dims_order = odsBuilder.getDenseI64ArrayAttr(matmul_inner_dims_order);
  odsState.addTypes(packed_op);
}

void PackGreedilyOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ValueRange matmul_packed_sizes, ::llvm::ArrayRef<int64_t> static_matmul_packed_sizes, ::llvm::ArrayRef<int64_t> matmul_padded_sizes_next_multiple_of, ::llvm::ArrayRef<int64_t> matmul_inner_dims_order) {
  odsState.addOperands(target);
  odsState.addOperands(matmul_packed_sizes);
  odsState.getOrAddProperties<Properties>().static_matmul_packed_sizes = odsBuilder.getDenseI64ArrayAttr(static_matmul_packed_sizes);
  odsState.getOrAddProperties<Properties>().matmul_padded_sizes_next_multiple_of = odsBuilder.getDenseI64ArrayAttr(matmul_padded_sizes_next_multiple_of);
  odsState.getOrAddProperties<Properties>().matmul_inner_dims_order = odsBuilder.getDenseI64ArrayAttr(matmul_inner_dims_order);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void PackGreedilyOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void PackGreedilyOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.static_matmul_packed_sizes)
    properties.static_matmul_packed_sizes = odsBuilder.getDenseI64ArrayAttr({});
  if (!properties.matmul_padded_sizes_next_multiple_of)
    properties.matmul_padded_sizes_next_multiple_of = odsBuilder.getDenseI64ArrayAttr({});
  if (!properties.matmul_inner_dims_order)
    properties.matmul_inner_dims_order = odsBuilder.getDenseI64ArrayAttr({});
}

::mlir::LogicalResult PackGreedilyOp::verifyInvariantsImpl() {
  auto tblgen_matmul_inner_dims_order = getProperties().matmul_inner_dims_order; (void)tblgen_matmul_inner_dims_order;
  auto tblgen_matmul_padded_sizes_next_multiple_of = getProperties().matmul_padded_sizes_next_multiple_of; (void)tblgen_matmul_padded_sizes_next_multiple_of;
  auto tblgen_static_matmul_packed_sizes = getProperties().static_matmul_packed_sizes; (void)tblgen_static_matmul_packed_sizes;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps12(*this, tblgen_static_matmul_packed_sizes, "static_matmul_packed_sizes")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps13(*this, tblgen_matmul_padded_sizes_next_multiple_of, "matmul_padded_sizes_next_multiple_of")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps12(*this, tblgen_matmul_inner_dims_order, "matmul_inner_dims_order")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult PackGreedilyOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult PackGreedilyOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(targetRawOperands);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> matmul_packed_sizesOperands;
  ::llvm::SMLoc matmul_packed_sizesOperandsLoc;
  (void)matmul_packed_sizesOperandsLoc;
  ::mlir::DenseI64ArrayAttr static_matmul_packed_sizesAttr;
  ::llvm::SmallVector<::mlir::Type, 1> matmul_packed_sizesTypes;
  ::mlir::DenseI64ArrayAttr matmul_padded_sizes_next_multiple_ofAttr;
  ::mlir::DenseI64ArrayAttr matmul_inner_dims_orderAttr;
  ::llvm::ArrayRef<::mlir::Type> targetTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperands[0]))
    return ::mlir::failure();
  bool matmul_packed_sizesClause = false;
  while(true) {
if (succeeded(parser.parseOptionalKeyword("matmul_packed_sizes"))) {

  if (matmul_packed_sizesClause) {
    return parser.emitError(parser.getNameLoc())
          << "`matmul_packed_sizes` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  matmul_packed_sizesClause = true;
  if (parser.parseEqual())
    return ::mlir::failure();
  {
    matmul_packed_sizesOperandsLoc = parser.getCurrentLocation();
    if (parseDynamicIndexList(parser, matmul_packed_sizesOperands, static_matmul_packed_sizesAttr, matmul_packed_sizesTypes))
      return ::mlir::failure();
    if (static_matmul_packed_sizesAttr)
      result.getOrAddProperties<PackGreedilyOp::Properties>().static_matmul_packed_sizes = static_matmul_packed_sizesAttr;
  }
  if (::mlir::succeeded(parser.parseOptionalKeyword("matmul_padded_sizes_next_multiple_of"))) {
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(matmul_padded_sizes_next_multiple_ofAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (matmul_padded_sizes_next_multiple_ofAttr) result.getOrAddProperties<PackGreedilyOp::Properties>().matmul_padded_sizes_next_multiple_of = matmul_padded_sizes_next_multiple_ofAttr;
  }
  if (parser.parseKeyword("matmul_inner_dims_order"))
    return ::mlir::failure();
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(matmul_inner_dims_orderAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (matmul_inner_dims_orderAttr) result.getOrAddProperties<PackGreedilyOp::Properties>().matmul_inner_dims_order = matmul_inner_dims_orderAttr;
    } else  {
    break;
  }
}
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType target__allResult_functionType;
  if (parser.parseType(target__allResult_functionType))
    return ::mlir::failure();
  targetTypes = target__allResult_functionType.getInputs();
  allResultTypes = target__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(targetOperands, targetTypes, targetOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(matmul_packed_sizesOperands, matmul_packed_sizesTypes, matmul_packed_sizesOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void PackGreedilyOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  _odsPrinter << ' ' << " ";
  if (false || getMatmulPackedSizes().size() || getStaticMatmulPackedSizesAttr() || getMatmulPaddedSizesNextMultipleOfAttr() || getMatmulInnerDimsOrderAttr()) {
  _odsPrinter << ' ' << "matmul_packed_sizes";
  _odsPrinter << ' ' << "=";
  _odsPrinter << ' ';
  printDynamicIndexList(_odsPrinter, *this, getMatmulPackedSizes(), getStaticMatmulPackedSizesAttr(), getMatmulPackedSizes().getTypes());
  if (getMatmulPaddedSizesNextMultipleOfAttr() && getMatmulPaddedSizesNextMultipleOfAttr() != ::mlir::OpBuilder((*this)->getContext()).getDenseI64ArrayAttr({})) {
    _odsPrinter << ' ' << "matmul_padded_sizes_next_multiple_of";
    _odsPrinter << ' ' << "=";
    _odsPrinter << ' ';
  _odsPrinter.printStrippedAttrOrType(getMatmulPaddedSizesNextMultipleOfAttr());
  }
  _odsPrinter << ' ' << "matmul_inner_dims_order";
  _odsPrinter << ' ' << "=";
  _odsPrinter << ' ';
_odsPrinter.printStrippedAttrOrType(getMatmulInnerDimsOrderAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("static_matmul_packed_sizes");
  elidedAttrs.push_back("matmul_padded_sizes_next_multiple_of");
  elidedAttrs.push_back("matmul_inner_dims_order");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getStaticMatmulPackedSizesAttr();
     if(attr && (attr == odsBuilder.getDenseI64ArrayAttr({})))
       elidedAttrs.push_back("static_matmul_packed_sizes");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getMatmulPaddedSizesNextMultipleOfAttr();
     if(attr && (attr == odsBuilder.getDenseI64ArrayAttr({})))
       elidedAttrs.push_back("matmul_padded_sizes_next_multiple_of");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getMatmulInnerDimsOrderAttr();
     if(attr && (attr == odsBuilder.getDenseI64ArrayAttr({})))
       elidedAttrs.push_back("matmul_inner_dims_order");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(::llvm::ArrayRef<::mlir::Type>(getTarget().getType()), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::PackGreedilyOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::PackOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
PackOpGenericAdaptorBase::PackOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.structured.pack", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> PackOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperandsSize - 1) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::DictionaryAttr PackOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::DenseI64ArrayAttr PackOpGenericAdaptorBase::getStaticPackedSizesAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().static_packed_sizes);
  return attr;
}

::llvm::ArrayRef<int64_t> PackOpGenericAdaptorBase::getStaticPackedSizes() {
  auto attr = getStaticPackedSizesAttr();
  return attr;
}

} // namespace detail
PackOpAdaptor::PackOpAdaptor(PackOp op) : PackOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult PackOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_static_packed_sizes = getProperties().static_packed_sizes; (void)tblgen_static_packed_sizes;

  if (tblgen_static_packed_sizes && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_static_packed_sizes))))
    return emitError(loc, "'transform.structured.pack' op ""attribute 'static_packed_sizes' failed to satisfy constraint: i64 dense array attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> PackOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 1) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range PackOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> PackOp::getTarget() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
}

::mlir::Operation::operand_range PackOp::getPackedSizes() {
  return getODSOperands(1);
}

::mlir::MutableOperandRange PackOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::mlir::MutableOperandRange PackOp::getPackedSizesMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> PackOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range PackOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> PackOp::getPackedOp() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(0).begin());
}

::mlir::LogicalResult PackOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::mlir::InFlightDiagnostic *diag) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    if (diag)
      *diag << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.static_packed_sizes;
       auto attr = dict.get("static_packed_sizes");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for static_packed_sizes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `static_packed_sizes` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute PackOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.static_packed_sizes;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("static_packed_sizes",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code PackOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.static_packed_sizes.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> PackOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "static_packed_sizes")
      return prop.static_packed_sizes;
  return std::nullopt;
}

void PackOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "static_packed_sizes") {
       prop.static_packed_sizes = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.static_packed_sizes)>>(value);
       return;
    }
}

void PackOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.static_packed_sizes) attrs.append("static_packed_sizes", prop.static_packed_sizes);
}

::mlir::LogicalResult PackOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
    {
      ::mlir::Attribute attr = attrs.get(getStaticPackedSizesAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps4(attr, "static_packed_sizes", getDiag)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult PackOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.static_packed_sizes)))
    return ::mlir::failure();
  return ::mlir::success();
}

void PackOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.static_packed_sizes);
}

::mlir::DenseI64ArrayAttr PackOp::getStaticPackedSizesAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().static_packed_sizes);
}

::llvm::ArrayRef<int64_t> PackOp::getStaticPackedSizes() {
  auto attr = getStaticPackedSizesAttr();
  return attr;
}

void PackOp::setStaticPackedSizesAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getStaticPackedSizesAttrName(), attr);
}

void PackOp::setStaticPackedSizes(::llvm::ArrayRef<int64_t> attrValue) {
  (*this)->setAttr(getStaticPackedSizesAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(attrValue));
}

void PackOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type packed_op, ::mlir::Value target, ::mlir::ValueRange packed_sizes, ::mlir::DenseI64ArrayAttr static_packed_sizes) {
  odsState.addOperands(target);
  odsState.addOperands(packed_sizes);
  if (static_packed_sizes) {
    odsState.getOrAddProperties<Properties>().static_packed_sizes = static_packed_sizes;
  }
  odsState.addTypes(packed_op);
}

void PackOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ValueRange packed_sizes, ::mlir::DenseI64ArrayAttr static_packed_sizes) {
  odsState.addOperands(target);
  odsState.addOperands(packed_sizes);
  if (static_packed_sizes) {
    odsState.getOrAddProperties<Properties>().static_packed_sizes = static_packed_sizes;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void PackOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type packed_op, ::mlir::Value target, ::mlir::ValueRange packed_sizes, ::llvm::ArrayRef<int64_t> static_packed_sizes) {
  odsState.addOperands(target);
  odsState.addOperands(packed_sizes);
  odsState.getOrAddProperties<Properties>().static_packed_sizes = odsBuilder.getDenseI64ArrayAttr(static_packed_sizes);
  odsState.addTypes(packed_op);
}

void PackOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ValueRange packed_sizes, ::llvm::ArrayRef<int64_t> static_packed_sizes) {
  odsState.addOperands(target);
  odsState.addOperands(packed_sizes);
  odsState.getOrAddProperties<Properties>().static_packed_sizes = odsBuilder.getDenseI64ArrayAttr(static_packed_sizes);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void PackOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void PackOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.static_packed_sizes)
    properties.static_packed_sizes = odsBuilder.getDenseI64ArrayAttr({});
}

::mlir::LogicalResult PackOp::verifyInvariantsImpl() {
  auto tblgen_static_packed_sizes = getProperties().static_packed_sizes; (void)tblgen_static_packed_sizes;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps4(*this, tblgen_static_packed_sizes, "static_packed_sizes")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult PackOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult PackOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(targetRawOperands);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> packed_sizesOperands;
  ::llvm::SMLoc packed_sizesOperandsLoc;
  (void)packed_sizesOperandsLoc;
  ::mlir::DenseI64ArrayAttr static_packed_sizesAttr;
  ::llvm::SmallVector<::mlir::Type, 1> packed_sizesTypes;
  ::llvm::ArrayRef<::mlir::Type> targetTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseKeyword("packed_sizes"))
    return ::mlir::failure();
  if (parser.parseEqual())
    return ::mlir::failure();
  {
    packed_sizesOperandsLoc = parser.getCurrentLocation();
    if (parseDynamicIndexList(parser, packed_sizesOperands, static_packed_sizesAttr, packed_sizesTypes))
      return ::mlir::failure();
    if (static_packed_sizesAttr)
      result.getOrAddProperties<PackOp::Properties>().static_packed_sizes = static_packed_sizesAttr;
  }
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType target__allResult_functionType;
  if (parser.parseType(target__allResult_functionType))
    return ::mlir::failure();
  targetTypes = target__allResult_functionType.getInputs();
  allResultTypes = target__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(targetOperands, targetTypes, targetOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(packed_sizesOperands, packed_sizesTypes, packed_sizesOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void PackOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  _odsPrinter << ' ' << "packed_sizes";
  _odsPrinter << ' ' << "=";
  _odsPrinter << ' ';
  printDynamicIndexList(_odsPrinter, *this, getPackedSizes(), getStaticPackedSizesAttr(), getPackedSizes().getTypes());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("static_packed_sizes");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getStaticPackedSizesAttr();
     if(attr && (attr == odsBuilder.getDenseI64ArrayAttr({})))
       elidedAttrs.push_back("static_packed_sizes");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(::llvm::ArrayRef<::mlir::Type>(getTarget().getType()), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::PackOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::PackTransposeOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
PackTransposeOpGenericAdaptorBase::PackTransposeOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.structured.pack_transpose", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> PackTransposeOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr PackTransposeOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::DenseI64ArrayAttr PackTransposeOpGenericAdaptorBase::getOuterPermAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().outer_perm);
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getDenseI64ArrayAttr({});
  return attr;
}

::llvm::ArrayRef<int64_t> PackTransposeOpGenericAdaptorBase::getOuterPerm() {
  auto attr = getOuterPermAttr();
    if (!attr)
      return ::mlir::Builder(odsAttrs.getContext()).getDenseI64ArrayAttr({});
  return attr;
}

::mlir::DenseI64ArrayAttr PackTransposeOpGenericAdaptorBase::getInnerPermAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().inner_perm);
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getDenseI64ArrayAttr({});
  return attr;
}

::llvm::ArrayRef<int64_t> PackTransposeOpGenericAdaptorBase::getInnerPerm() {
  auto attr = getInnerPermAttr();
    if (!attr)
      return ::mlir::Builder(odsAttrs.getContext()).getDenseI64ArrayAttr({});
  return attr;
}

} // namespace detail
PackTransposeOpAdaptor::PackTransposeOpAdaptor(PackTransposeOp op) : PackTransposeOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult PackTransposeOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_inner_perm = getProperties().inner_perm; (void)tblgen_inner_perm;
  auto tblgen_outer_perm = getProperties().outer_perm; (void)tblgen_outer_perm;

  if (tblgen_outer_perm && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_outer_perm))))
    return emitError(loc, "'transform.structured.pack_transpose' op ""attribute 'outer_perm' failed to satisfy constraint: i64 dense array attribute");

  if (tblgen_inner_perm && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_inner_perm))))
    return emitError(loc, "'transform.structured.pack_transpose' op ""attribute 'inner_perm' failed to satisfy constraint: i64 dense array attribute");
  return ::mlir::success();
}

void PackTransposeOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "packed_op");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "pack_op");
  auto resultGroup2 = getODSResults(2);
  if (!resultGroup2.empty())
    setNameFn(*resultGroup2.begin(), "un_pack_op");
}

std::pair<unsigned, unsigned> PackTransposeOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range PackTransposeOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> PackTransposeOp::getTargetPackOrUnPackOp() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> PackTransposeOp::getTargetLinalgOp() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(1).begin());
}

::mlir::MutableOperandRange PackTransposeOp::getTargetPackOrUnPackOpMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::mlir::MutableOperandRange PackTransposeOp::getTargetLinalgOpMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> PackTransposeOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range PackTransposeOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> PackTransposeOp::getPackedOp() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(0).begin());
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> PackTransposeOp::getPackOp() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(1).begin());
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> PackTransposeOp::getUnPackOp() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(2).begin());
}

::mlir::LogicalResult PackTransposeOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::mlir::InFlightDiagnostic *diag) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    if (diag)
      *diag << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.inner_perm;
       auto attr = dict.get("inner_perm");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for inner_perm in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `inner_perm` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.outer_perm;
       auto attr = dict.get("outer_perm");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for outer_perm in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `outer_perm` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute PackTransposeOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.inner_perm;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("inner_perm",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.outer_perm;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("outer_perm",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code PackTransposeOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.inner_perm.getAsOpaquePointer()), 
    llvm::hash_value(prop.outer_perm.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> PackTransposeOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "inner_perm")
      return prop.inner_perm;

    if (name == "outer_perm")
      return prop.outer_perm;
  return std::nullopt;
}

void PackTransposeOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "inner_perm") {
       prop.inner_perm = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.inner_perm)>>(value);
       return;
    }

    if (name == "outer_perm") {
       prop.outer_perm = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.outer_perm)>>(value);
       return;
    }
}

void PackTransposeOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.inner_perm) attrs.append("inner_perm", prop.inner_perm);

    if (prop.outer_perm) attrs.append("outer_perm", prop.outer_perm);
}

::mlir::LogicalResult PackTransposeOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
    {
      ::mlir::Attribute attr = attrs.get(getInnerPermAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps4(attr, "inner_perm", getDiag)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getOuterPermAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps4(attr, "outer_perm", getDiag)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult PackTransposeOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.inner_perm)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.outer_perm)))
    return ::mlir::failure();
  return ::mlir::success();
}

void PackTransposeOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.inner_perm);

  writer.writeOptionalAttribute(prop.outer_perm);
}

::mlir::DenseI64ArrayAttr PackTransposeOp::getOuterPermAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().outer_perm);
}

::llvm::ArrayRef<int64_t> PackTransposeOp::getOuterPerm() {
  auto attr = getOuterPermAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr({});
  return attr;
}

::mlir::DenseI64ArrayAttr PackTransposeOp::getInnerPermAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().inner_perm);
}

::llvm::ArrayRef<int64_t> PackTransposeOp::getInnerPerm() {
  auto attr = getInnerPermAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr({});
  return attr;
}

void PackTransposeOp::setOuterPermAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getOuterPermAttrName(), attr);
}

void PackTransposeOp::setOuterPerm(::std::optional<::llvm::ArrayRef<int64_t>> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getOuterPermAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(*attrValue));
    (*this)->removeAttr(getOuterPermAttrName());
}

void PackTransposeOp::setInnerPermAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getInnerPermAttrName(), attr);
}

void PackTransposeOp::setInnerPerm(::std::optional<::llvm::ArrayRef<int64_t>> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getInnerPermAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(*attrValue));
    (*this)->removeAttr(getInnerPermAttrName());
}

::mlir::Attribute PackTransposeOp::removeOuterPermAttr() {
    auto &attr = getProperties().outer_perm;
    attr = {};
    return attr;
}

::mlir::Attribute PackTransposeOp::removeInnerPermAttr() {
    auto &attr = getProperties().inner_perm;
    attr = {};
    return attr;
}

void PackTransposeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type packed_op, ::mlir::Type pack_op, ::mlir::Type un_pack_op, ::mlir::Value target_pack_or_un_pack_op, ::mlir::Value target_linalg_op, /*optional*/::mlir::DenseI64ArrayAttr outer_perm, /*optional*/::mlir::DenseI64ArrayAttr inner_perm) {
  odsState.addOperands(target_pack_or_un_pack_op);
  odsState.addOperands(target_linalg_op);
  if (outer_perm) {
    odsState.getOrAddProperties<Properties>().outer_perm = outer_perm;
  }
  if (inner_perm) {
    odsState.getOrAddProperties<Properties>().inner_perm = inner_perm;
  }
  odsState.addTypes(packed_op);
  odsState.addTypes(pack_op);
  odsState.addTypes(un_pack_op);
}

void PackTransposeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target_pack_or_un_pack_op, ::mlir::Value target_linalg_op, /*optional*/::mlir::DenseI64ArrayAttr outer_perm, /*optional*/::mlir::DenseI64ArrayAttr inner_perm) {
  odsState.addOperands(target_pack_or_un_pack_op);
  odsState.addOperands(target_linalg_op);
  if (outer_perm) {
    odsState.getOrAddProperties<Properties>().outer_perm = outer_perm;
  }
  if (inner_perm) {
    odsState.getOrAddProperties<Properties>().inner_perm = inner_perm;
  }
  assert(resultTypes.size() == 3u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void PackTransposeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type packed_op, ::mlir::Type pack_op, ::mlir::Type un_pack_op, ::mlir::Value target_pack_or_un_pack_op, ::mlir::Value target_linalg_op, /*optional*/::llvm::ArrayRef<int64_t> outer_perm, /*optional*/::llvm::ArrayRef<int64_t> inner_perm) {
  odsState.addOperands(target_pack_or_un_pack_op);
  odsState.addOperands(target_linalg_op);
  odsState.getOrAddProperties<Properties>().outer_perm = odsBuilder.getDenseI64ArrayAttr(outer_perm);
  odsState.getOrAddProperties<Properties>().inner_perm = odsBuilder.getDenseI64ArrayAttr(inner_perm);
  odsState.addTypes(packed_op);
  odsState.addTypes(pack_op);
  odsState.addTypes(un_pack_op);
}

void PackTransposeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target_pack_or_un_pack_op, ::mlir::Value target_linalg_op, /*optional*/::llvm::ArrayRef<int64_t> outer_perm, /*optional*/::llvm::ArrayRef<int64_t> inner_perm) {
  odsState.addOperands(target_pack_or_un_pack_op);
  odsState.addOperands(target_linalg_op);
  odsState.getOrAddProperties<Properties>().outer_perm = odsBuilder.getDenseI64ArrayAttr(outer_perm);
  odsState.getOrAddProperties<Properties>().inner_perm = odsBuilder.getDenseI64ArrayAttr(inner_perm);
  assert(resultTypes.size() == 3u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void PackTransposeOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 3u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult PackTransposeOp::verifyInvariantsImpl() {
  auto tblgen_inner_perm = getProperties().inner_perm; (void)tblgen_inner_perm;
  auto tblgen_outer_perm = getProperties().outer_perm; (void)tblgen_outer_perm;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps4(*this, tblgen_outer_perm, "outer_perm")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps4(*this, tblgen_inner_perm, "inner_perm")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSResults(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult PackTransposeOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult PackTransposeOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand target_pack_or_un_pack_opRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> target_pack_or_un_pack_opOperands(target_pack_or_un_pack_opRawOperands);  ::llvm::SMLoc target_pack_or_un_pack_opOperandsLoc;
  (void)target_pack_or_un_pack_opOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand target_linalg_opRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> target_linalg_opOperands(target_linalg_opRawOperands);  ::llvm::SMLoc target_linalg_opOperandsLoc;
  (void)target_linalg_opOperandsLoc;
  ::mlir::DenseI64ArrayAttr outer_permAttr;
  ::mlir::DenseI64ArrayAttr inner_permAttr;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  target_pack_or_un_pack_opOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(target_pack_or_un_pack_opRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseKeyword("with_compute_op"))
    return ::mlir::failure();
  if (parser.parseLParen())
    return ::mlir::failure();

  target_linalg_opOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(target_linalg_opRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseRParen())
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("outer_perm"))) {
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(outer_permAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (outer_permAttr) result.getOrAddProperties<PackTransposeOp::Properties>().outer_perm = outer_permAttr;
  }
  if (::mlir::succeeded(parser.parseOptionalKeyword("inner_perm"))) {
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(inner_permAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (inner_permAttr) result.getOrAddProperties<PackTransposeOp::Properties>().inner_perm = inner_permAttr;
  }
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(::llvm::concat<const ::mlir::OpAsmParser::UnresolvedOperand>(target_pack_or_un_pack_opOperands, target_linalg_opOperands), allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void PackTransposeOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTargetPackOrUnPackOp();
  _odsPrinter << ' ' << "with_compute_op";
  _odsPrinter << "(";
  _odsPrinter << getTargetLinalgOp();
  _odsPrinter << ")";
  if (getOuterPermAttr()) {
    _odsPrinter << ' ' << "outer_perm";
    _odsPrinter << ' ' << "=";
    _odsPrinter << ' ';
  _odsPrinter.printStrippedAttrOrType(getOuterPermAttr());
  }
  if (getInnerPermAttr()) {
    _odsPrinter << ' ' << "inner_perm";
    _odsPrinter << ' ' << "=";
    _odsPrinter << ' ';
  _odsPrinter.printStrippedAttrOrType(getInnerPermAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("outer_perm");
  elidedAttrs.push_back("inner_perm");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getOuterPermAttr();
     if(attr && (attr == odsBuilder.getDenseI64ArrayAttr({})))
       elidedAttrs.push_back("outer_perm");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getInnerPermAttr();
     if(attr && (attr == odsBuilder.getDenseI64ArrayAttr({})))
       elidedAttrs.push_back("inner_perm");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::PackTransposeOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::PadOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
PadOpGenericAdaptorBase::PadOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.structured.pad", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> PadOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr PadOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::ArrayAttr PadOpGenericAdaptorBase::getPaddingValuesAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().padding_values);
  return attr;
}

::mlir::ArrayAttr PadOpGenericAdaptorBase::getPaddingValues() {
  auto attr = getPaddingValuesAttr();
  return attr;
}

::mlir::ArrayAttr PadOpGenericAdaptorBase::getPaddingDimensionsAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().padding_dimensions);
  return attr;
}

::mlir::ArrayAttr PadOpGenericAdaptorBase::getPaddingDimensions() {
  auto attr = getPaddingDimensionsAttr();
  return attr;
}

::mlir::ArrayAttr PadOpGenericAdaptorBase::getPadToMultipleOfAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().pad_to_multiple_of);
  return attr;
}

::std::optional< ::mlir::ArrayAttr > PadOpGenericAdaptorBase::getPadToMultipleOf() {
  auto attr = getPadToMultipleOfAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::ArrayAttr PadOpGenericAdaptorBase::getPackPaddingsAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().pack_paddings);
  return attr;
}

::mlir::ArrayAttr PadOpGenericAdaptorBase::getPackPaddings() {
  auto attr = getPackPaddingsAttr();
  return attr;
}

::mlir::ArrayAttr PadOpGenericAdaptorBase::getTransposePaddingsAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().transpose_paddings);
  return attr;
}

::mlir::ArrayAttr PadOpGenericAdaptorBase::getTransposePaddings() {
  auto attr = getTransposePaddingsAttr();
  return attr;
}

::mlir::BoolAttr PadOpGenericAdaptorBase::getCopyBackAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().copy_back);
  return attr;
}

bool PadOpGenericAdaptorBase::getCopyBack() {
  auto attr = getCopyBackAttr();
  return attr.getValue();
}

} // namespace detail
PadOpAdaptor::PadOpAdaptor(PadOp op) : PadOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult PadOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_copy_back = getProperties().copy_back; (void)tblgen_copy_back;
  auto tblgen_pack_paddings = getProperties().pack_paddings; (void)tblgen_pack_paddings;
  auto tblgen_pad_to_multiple_of = getProperties().pad_to_multiple_of; (void)tblgen_pad_to_multiple_of;
  auto tblgen_padding_dimensions = getProperties().padding_dimensions; (void)tblgen_padding_dimensions;
  auto tblgen_padding_values = getProperties().padding_values; (void)tblgen_padding_values;
  auto tblgen_transpose_paddings = getProperties().transpose_paddings; (void)tblgen_transpose_paddings;

  if (tblgen_padding_values && !((::llvm::isa<::mlir::ArrayAttr>(tblgen_padding_values))))
    return emitError(loc, "'transform.structured.pad' op ""attribute 'padding_values' failed to satisfy constraint: array attribute");

  if (tblgen_padding_dimensions && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_padding_dimensions))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_padding_dimensions), [&](::mlir::Attribute attr) { return attr && (((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(64)))); }))))
    return emitError(loc, "'transform.structured.pad' op ""attribute 'padding_dimensions' failed to satisfy constraint: 64-bit integer array attribute");

  if (tblgen_pad_to_multiple_of && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_pad_to_multiple_of))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_pad_to_multiple_of), [&](::mlir::Attribute attr) { return attr && (((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(64)))); }))))
    return emitError(loc, "'transform.structured.pad' op ""attribute 'pad_to_multiple_of' failed to satisfy constraint: 64-bit integer array attribute");

  if (tblgen_pack_paddings && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_pack_paddings))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_pack_paddings), [&](::mlir::Attribute attr) { return attr && (((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(64)))); }))))
    return emitError(loc, "'transform.structured.pad' op ""attribute 'pack_paddings' failed to satisfy constraint: 64-bit integer array attribute");

  if (tblgen_transpose_paddings && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_transpose_paddings))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_transpose_paddings), [&](::mlir::Attribute attr) { return attr && (((::llvm::isa<::mlir::ArrayAttr>(attr))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(attr), [&](::mlir::Attribute attr) { return attr && (((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(64)))); }))); }))))
    return emitError(loc, "'transform.structured.pad' op ""attribute 'transpose_paddings' failed to satisfy constraint: array of arrays of i64");

  if (tblgen_copy_back && !((::llvm::isa<::mlir::BoolAttr>(tblgen_copy_back))))
    return emitError(loc, "'transform.structured.pad' op ""attribute 'copy_back' failed to satisfy constraint: bool attribute");
  return ::mlir::success();
}

void PadOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "padded");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "pad");
}

std::pair<unsigned, unsigned> PadOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range PadOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> PadOp::getTarget() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
}

::mlir::MutableOperandRange PadOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> PadOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range PadOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> PadOp::getPadded() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(0).begin());
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> PadOp::getPad() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(1).begin());
}

::mlir::LogicalResult PadOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::mlir::InFlightDiagnostic *diag) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    if (diag)
      *diag << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.copy_back;
       auto attr = dict.get("copy_back");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for copy_back in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `copy_back` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.pack_paddings;
       auto attr = dict.get("pack_paddings");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for pack_paddings in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `pack_paddings` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.pad_to_multiple_of;
       auto attr = dict.get("pad_to_multiple_of");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for pad_to_multiple_of in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `pad_to_multiple_of` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.padding_dimensions;
       auto attr = dict.get("padding_dimensions");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for padding_dimensions in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `padding_dimensions` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.padding_values;
       auto attr = dict.get("padding_values");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for padding_values in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `padding_values` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.transpose_paddings;
       auto attr = dict.get("transpose_paddings");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for transpose_paddings in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `transpose_paddings` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute PadOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.copy_back;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("copy_back",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.pack_paddings;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("pack_paddings",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.pad_to_multiple_of;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("pad_to_multiple_of",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.padding_dimensions;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("padding_dimensions",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.padding_values;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("padding_values",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.transpose_paddings;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("transpose_paddings",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code PadOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.copy_back.getAsOpaquePointer()), 
    llvm::hash_value(prop.pack_paddings.getAsOpaquePointer()), 
    llvm::hash_value(prop.pad_to_multiple_of.getAsOpaquePointer()), 
    llvm::hash_value(prop.padding_dimensions.getAsOpaquePointer()), 
    llvm::hash_value(prop.padding_values.getAsOpaquePointer()), 
    llvm::hash_value(prop.transpose_paddings.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> PadOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "copy_back")
      return prop.copy_back;

    if (name == "pack_paddings")
      return prop.pack_paddings;

    if (name == "pad_to_multiple_of")
      return prop.pad_to_multiple_of;

    if (name == "padding_dimensions")
      return prop.padding_dimensions;

    if (name == "padding_values")
      return prop.padding_values;

    if (name == "transpose_paddings")
      return prop.transpose_paddings;
  return std::nullopt;
}

void PadOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "copy_back") {
       prop.copy_back = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.copy_back)>>(value);
       return;
    }

    if (name == "pack_paddings") {
       prop.pack_paddings = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.pack_paddings)>>(value);
       return;
    }

    if (name == "pad_to_multiple_of") {
       prop.pad_to_multiple_of = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.pad_to_multiple_of)>>(value);
       return;
    }

    if (name == "padding_dimensions") {
       prop.padding_dimensions = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.padding_dimensions)>>(value);
       return;
    }

    if (name == "padding_values") {
       prop.padding_values = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.padding_values)>>(value);
       return;
    }

    if (name == "transpose_paddings") {
       prop.transpose_paddings = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.transpose_paddings)>>(value);
       return;
    }
}

void PadOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.copy_back) attrs.append("copy_back", prop.copy_back);

    if (prop.pack_paddings) attrs.append("pack_paddings", prop.pack_paddings);

    if (prop.pad_to_multiple_of) attrs.append("pad_to_multiple_of", prop.pad_to_multiple_of);

    if (prop.padding_dimensions) attrs.append("padding_dimensions", prop.padding_dimensions);

    if (prop.padding_values) attrs.append("padding_values", prop.padding_values);

    if (prop.transpose_paddings) attrs.append("transpose_paddings", prop.transpose_paddings);
}

::mlir::LogicalResult PadOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
    {
      ::mlir::Attribute attr = attrs.get(getCopyBackAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps16(attr, "copy_back", getDiag)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getPackPaddingsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps3(attr, "pack_paddings", getDiag)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getPadToMultipleOfAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps3(attr, "pad_to_multiple_of", getDiag)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getPaddingDimensionsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps3(attr, "padding_dimensions", getDiag)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getPaddingValuesAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps14(attr, "padding_values", getDiag)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getTransposePaddingsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps15(attr, "transpose_paddings", getDiag)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult PadOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.copy_back)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.pack_paddings)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.pad_to_multiple_of)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.padding_dimensions)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.padding_values)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.transpose_paddings)))
    return ::mlir::failure();
  return ::mlir::success();
}

void PadOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.copy_back);

  writer.writeOptionalAttribute(prop.pack_paddings);

  writer.writeOptionalAttribute(prop.pad_to_multiple_of);

  writer.writeOptionalAttribute(prop.padding_dimensions);

  writer.writeOptionalAttribute(prop.padding_values);

  writer.writeOptionalAttribute(prop.transpose_paddings);
}

::mlir::ArrayAttr PadOp::getPaddingValuesAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().padding_values);
}

::mlir::ArrayAttr PadOp::getPaddingValues() {
  auto attr = getPaddingValuesAttr();
  return attr;
}

::mlir::ArrayAttr PadOp::getPaddingDimensionsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().padding_dimensions);
}

::mlir::ArrayAttr PadOp::getPaddingDimensions() {
  auto attr = getPaddingDimensionsAttr();
  return attr;
}

::mlir::ArrayAttr PadOp::getPadToMultipleOfAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().pad_to_multiple_of);
}

::std::optional< ::mlir::ArrayAttr > PadOp::getPadToMultipleOf() {
  auto attr = getPadToMultipleOfAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::ArrayAttr PadOp::getPackPaddingsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().pack_paddings);
}

::mlir::ArrayAttr PadOp::getPackPaddings() {
  auto attr = getPackPaddingsAttr();
  return attr;
}

::mlir::ArrayAttr PadOp::getTransposePaddingsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().transpose_paddings);
}

::mlir::ArrayAttr PadOp::getTransposePaddings() {
  auto attr = getTransposePaddingsAttr();
  return attr;
}

::mlir::BoolAttr PadOp::getCopyBackAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().copy_back);
}

bool PadOp::getCopyBack() {
  auto attr = getCopyBackAttr();
  return attr.getValue();
}

void PadOp::setPaddingValuesAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getPaddingValuesAttrName(), attr);
}

void PadOp::setPaddingDimensionsAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getPaddingDimensionsAttrName(), attr);
}

void PadOp::setPadToMultipleOfAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getPadToMultipleOfAttrName(), attr);
}

void PadOp::setPackPaddingsAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getPackPaddingsAttrName(), attr);
}

void PadOp::setTransposePaddingsAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getTransposePaddingsAttrName(), attr);
}

void PadOp::setCopyBackAttr(::mlir::BoolAttr attr) {
  (*this)->setAttr(getCopyBackAttrName(), attr);
}

void PadOp::setCopyBack(bool attrValue) {
  (*this)->setAttr(getCopyBackAttrName(), ::mlir::Builder((*this)->getContext()).getBoolAttr(attrValue));
}

::mlir::Attribute PadOp::removePadToMultipleOfAttr() {
    auto &attr = getProperties().pad_to_multiple_of;
    attr = {};
    return attr;
}

void PadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type padded, ::mlir::Type pad, ::mlir::Value target, ::mlir::ArrayAttr padding_values, ::mlir::ArrayAttr padding_dimensions, /*optional*/::mlir::ArrayAttr pad_to_multiple_of, ::mlir::ArrayAttr pack_paddings, ::mlir::ArrayAttr transpose_paddings, ::mlir::BoolAttr copy_back) {
  odsState.addOperands(target);
  if (padding_values) {
    odsState.getOrAddProperties<Properties>().padding_values = padding_values;
  }
  if (padding_dimensions) {
    odsState.getOrAddProperties<Properties>().padding_dimensions = padding_dimensions;
  }
  if (pad_to_multiple_of) {
    odsState.getOrAddProperties<Properties>().pad_to_multiple_of = pad_to_multiple_of;
  }
  if (pack_paddings) {
    odsState.getOrAddProperties<Properties>().pack_paddings = pack_paddings;
  }
  if (transpose_paddings) {
    odsState.getOrAddProperties<Properties>().transpose_paddings = transpose_paddings;
  }
  if (copy_back) {
    odsState.getOrAddProperties<Properties>().copy_back = copy_back;
  }
  odsState.addTypes(padded);
  odsState.addTypes(pad);
}

void PadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ArrayAttr padding_values, ::mlir::ArrayAttr padding_dimensions, /*optional*/::mlir::ArrayAttr pad_to_multiple_of, ::mlir::ArrayAttr pack_paddings, ::mlir::ArrayAttr transpose_paddings, ::mlir::BoolAttr copy_back) {
  odsState.addOperands(target);
  if (padding_values) {
    odsState.getOrAddProperties<Properties>().padding_values = padding_values;
  }
  if (padding_dimensions) {
    odsState.getOrAddProperties<Properties>().padding_dimensions = padding_dimensions;
  }
  if (pad_to_multiple_of) {
    odsState.getOrAddProperties<Properties>().pad_to_multiple_of = pad_to_multiple_of;
  }
  if (pack_paddings) {
    odsState.getOrAddProperties<Properties>().pack_paddings = pack_paddings;
  }
  if (transpose_paddings) {
    odsState.getOrAddProperties<Properties>().transpose_paddings = transpose_paddings;
  }
  if (copy_back) {
    odsState.getOrAddProperties<Properties>().copy_back = copy_back;
  }
  assert(resultTypes.size() == 2u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void PadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type padded, ::mlir::Type pad, ::mlir::Value target, ::mlir::ArrayAttr padding_values, ::mlir::ArrayAttr padding_dimensions, /*optional*/::mlir::ArrayAttr pad_to_multiple_of, ::mlir::ArrayAttr pack_paddings, ::mlir::ArrayAttr transpose_paddings, bool copy_back) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().padding_values = padding_values;
  odsState.getOrAddProperties<Properties>().padding_dimensions = padding_dimensions;
  if (pad_to_multiple_of) {
    odsState.getOrAddProperties<Properties>().pad_to_multiple_of = pad_to_multiple_of;
  }
  odsState.getOrAddProperties<Properties>().pack_paddings = pack_paddings;
  odsState.getOrAddProperties<Properties>().transpose_paddings = transpose_paddings;
  odsState.getOrAddProperties<Properties>().copy_back = odsBuilder.getBoolAttr(copy_back);
  odsState.addTypes(padded);
  odsState.addTypes(pad);
}

void PadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ArrayAttr padding_values, ::mlir::ArrayAttr padding_dimensions, /*optional*/::mlir::ArrayAttr pad_to_multiple_of, ::mlir::ArrayAttr pack_paddings, ::mlir::ArrayAttr transpose_paddings, bool copy_back) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().padding_values = padding_values;
  odsState.getOrAddProperties<Properties>().padding_dimensions = padding_dimensions;
  if (pad_to_multiple_of) {
    odsState.getOrAddProperties<Properties>().pad_to_multiple_of = pad_to_multiple_of;
  }
  odsState.getOrAddProperties<Properties>().pack_paddings = pack_paddings;
  odsState.getOrAddProperties<Properties>().transpose_paddings = transpose_paddings;
  odsState.getOrAddProperties<Properties>().copy_back = odsBuilder.getBoolAttr(copy_back);
  assert(resultTypes.size() == 2u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void PadOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 2u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void PadOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.padding_values)
    properties.padding_values = odsBuilder.getArrayAttr({});
  if (!properties.padding_dimensions)
    properties.padding_dimensions = odsBuilder.getI64ArrayAttr({});
  if (!properties.pack_paddings)
    properties.pack_paddings = odsBuilder.getI64ArrayAttr({});
  if (!properties.transpose_paddings)
    properties.transpose_paddings = odsBuilder.getArrayAttr({});
  if (!properties.copy_back)
    properties.copy_back = odsBuilder.getBoolAttr(true);
}

::mlir::LogicalResult PadOp::verifyInvariantsImpl() {
  auto tblgen_copy_back = getProperties().copy_back; (void)tblgen_copy_back;
  auto tblgen_pack_paddings = getProperties().pack_paddings; (void)tblgen_pack_paddings;
  auto tblgen_pad_to_multiple_of = getProperties().pad_to_multiple_of; (void)tblgen_pad_to_multiple_of;
  auto tblgen_padding_dimensions = getProperties().padding_dimensions; (void)tblgen_padding_dimensions;
  auto tblgen_padding_values = getProperties().padding_values; (void)tblgen_padding_values;
  auto tblgen_transpose_paddings = getProperties().transpose_paddings; (void)tblgen_transpose_paddings;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps14(*this, tblgen_padding_values, "padding_values")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps3(*this, tblgen_padding_dimensions, "padding_dimensions")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps3(*this, tblgen_pad_to_multiple_of, "pad_to_multiple_of")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps3(*this, tblgen_pack_paddings, "pack_paddings")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps15(*this, tblgen_transpose_paddings, "transpose_paddings")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps16(*this, tblgen_copy_back, "copy_back")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult PadOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult PadOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(targetRawOperands);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(targetOperands, allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void PadOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getPaddingValuesAttr();
     if(attr && (attr == odsBuilder.getArrayAttr({})))
       elidedAttrs.push_back("padding_values");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getPaddingDimensionsAttr();
     if(attr && (attr == odsBuilder.getI64ArrayAttr({})))
       elidedAttrs.push_back("padding_dimensions");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getPackPaddingsAttr();
     if(attr && (attr == odsBuilder.getI64ArrayAttr({})))
       elidedAttrs.push_back("pack_paddings");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getTransposePaddingsAttr();
     if(attr && (attr == odsBuilder.getArrayAttr({})))
       elidedAttrs.push_back("transpose_paddings");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getCopyBackAttr();
     if(attr && (attr == odsBuilder.getBoolAttr(true)))
       elidedAttrs.push_back("copy_back");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::PadOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::PromoteOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
PromoteOpGenericAdaptorBase::PromoteOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.structured.promote", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> PromoteOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr PromoteOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::ArrayAttr PromoteOpGenericAdaptorBase::getOperandsToPromoteAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().operands_to_promote);
  return attr;
}

::mlir::ArrayAttr PromoteOpGenericAdaptorBase::getOperandsToPromote() {
  auto attr = getOperandsToPromoteAttr();
  return attr;
}

::mlir::ArrayAttr PromoteOpGenericAdaptorBase::getUseFullTileBuffersAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().use_full_tile_buffers);
  return attr;
}

::mlir::ArrayAttr PromoteOpGenericAdaptorBase::getUseFullTileBuffers() {
  auto attr = getUseFullTileBuffersAttr();
  return attr;
}

::mlir::UnitAttr PromoteOpGenericAdaptorBase::getUseFullTilesByDefaultAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().use_full_tiles_by_default);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool PromoteOpGenericAdaptorBase::getUseFullTilesByDefault() {
  auto attr = getUseFullTilesByDefaultAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::UnitAttr PromoteOpGenericAdaptorBase::getUseAllocaAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().use_alloca);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool PromoteOpGenericAdaptorBase::getUseAlloca() {
  auto attr = getUseAllocaAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::ArrayAttr PromoteOpGenericAdaptorBase::getMappingAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().mapping);
  return attr;
}

::std::optional< ::mlir::ArrayAttr > PromoteOpGenericAdaptorBase::getMapping() {
  auto attr = getMappingAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::IntegerAttr PromoteOpGenericAdaptorBase::getAlignmentAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().alignment);
  return attr;
}

::std::optional<uint64_t> PromoteOpGenericAdaptorBase::getAlignment() {
  auto attr = getAlignmentAttr();
  return attr ? ::std::optional<uint64_t>(attr.getValue().getZExtValue()) : (::std::nullopt);
}

} // namespace detail
PromoteOpAdaptor::PromoteOpAdaptor(PromoteOp op) : PromoteOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult PromoteOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_alignment = getProperties().alignment; (void)tblgen_alignment;
  auto tblgen_mapping = getProperties().mapping; (void)tblgen_mapping;
  auto tblgen_operands_to_promote = getProperties().operands_to_promote; (void)tblgen_operands_to_promote;
  auto tblgen_use_alloca = getProperties().use_alloca; (void)tblgen_use_alloca;
  auto tblgen_use_full_tile_buffers = getProperties().use_full_tile_buffers; (void)tblgen_use_full_tile_buffers;
  auto tblgen_use_full_tiles_by_default = getProperties().use_full_tiles_by_default; (void)tblgen_use_full_tiles_by_default;

  if (tblgen_operands_to_promote && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_operands_to_promote))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_operands_to_promote), [&](::mlir::Attribute attr) { return attr && (((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(64)))); }))))
    return emitError(loc, "'transform.structured.promote' op ""attribute 'operands_to_promote' failed to satisfy constraint: 64-bit integer array attribute");

  if (tblgen_use_full_tile_buffers && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_use_full_tile_buffers))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_use_full_tile_buffers), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::BoolAttr>(attr))); }))))
    return emitError(loc, "'transform.structured.promote' op ""attribute 'use_full_tile_buffers' failed to satisfy constraint: 1-bit boolean array attribute");

  if (tblgen_use_full_tiles_by_default && !((::llvm::isa<::mlir::UnitAttr>(tblgen_use_full_tiles_by_default))))
    return emitError(loc, "'transform.structured.promote' op ""attribute 'use_full_tiles_by_default' failed to satisfy constraint: unit attribute");

  if (tblgen_use_alloca && !((::llvm::isa<::mlir::UnitAttr>(tblgen_use_alloca))))
    return emitError(loc, "'transform.structured.promote' op ""attribute 'use_alloca' failed to satisfy constraint: unit attribute");

  if (tblgen_mapping && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_mapping))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_mapping), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::DeviceMappingAttrInterface>(attr))); }))))
    return emitError(loc, "'transform.structured.promote' op ""attribute 'mapping' failed to satisfy constraint: Device Mapping array attribute");

  if (tblgen_alignment && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_alignment))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_alignment).getType().isSignlessInteger(64)))))
    return emitError(loc, "'transform.structured.promote' op ""attribute 'alignment' failed to satisfy constraint: 64-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> PromoteOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range PromoteOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> PromoteOp::getTarget() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
}

::mlir::MutableOperandRange PromoteOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> PromoteOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range PromoteOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> PromoteOp::getTransformed() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(0).begin());
}

::mlir::LogicalResult PromoteOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::mlir::InFlightDiagnostic *diag) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    if (diag)
      *diag << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.alignment;
       auto attr = dict.get("alignment");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for alignment in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `alignment` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.mapping;
       auto attr = dict.get("mapping");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for mapping in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `mapping` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.operands_to_promote;
       auto attr = dict.get("operands_to_promote");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for operands_to_promote in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `operands_to_promote` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.use_alloca;
       auto attr = dict.get("use_alloca");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for use_alloca in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `use_alloca` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.use_full_tile_buffers;
       auto attr = dict.get("use_full_tile_buffers");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for use_full_tile_buffers in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `use_full_tile_buffers` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.use_full_tiles_by_default;
       auto attr = dict.get("use_full_tiles_by_default");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for use_full_tiles_by_default in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `use_full_tiles_by_default` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute PromoteOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.alignment;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("alignment",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.mapping;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("mapping",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.operands_to_promote;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("operands_to_promote",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.use_alloca;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("use_alloca",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.use_full_tile_buffers;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("use_full_tile_buffers",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.use_full_tiles_by_default;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("use_full_tiles_by_default",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code PromoteOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.alignment.getAsOpaquePointer()), 
    llvm::hash_value(prop.mapping.getAsOpaquePointer()), 
    llvm::hash_value(prop.operands_to_promote.getAsOpaquePointer()), 
    llvm::hash_value(prop.use_alloca.getAsOpaquePointer()), 
    llvm::hash_value(prop.use_full_tile_buffers.getAsOpaquePointer()), 
    llvm::hash_value(prop.use_full_tiles_by_default.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> PromoteOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "alignment")
      return prop.alignment;

    if (name == "mapping")
      return prop.mapping;

    if (name == "operands_to_promote")
      return prop.operands_to_promote;

    if (name == "use_alloca")
      return prop.use_alloca;

    if (name == "use_full_tile_buffers")
      return prop.use_full_tile_buffers;

    if (name == "use_full_tiles_by_default")
      return prop.use_full_tiles_by_default;
  return std::nullopt;
}

void PromoteOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "alignment") {
       prop.alignment = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.alignment)>>(value);
       return;
    }

    if (name == "mapping") {
       prop.mapping = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.mapping)>>(value);
       return;
    }

    if (name == "operands_to_promote") {
       prop.operands_to_promote = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.operands_to_promote)>>(value);
       return;
    }

    if (name == "use_alloca") {
       prop.use_alloca = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.use_alloca)>>(value);
       return;
    }

    if (name == "use_full_tile_buffers") {
       prop.use_full_tile_buffers = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.use_full_tile_buffers)>>(value);
       return;
    }

    if (name == "use_full_tiles_by_default") {
       prop.use_full_tiles_by_default = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.use_full_tiles_by_default)>>(value);
       return;
    }
}

void PromoteOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.alignment) attrs.append("alignment", prop.alignment);

    if (prop.mapping) attrs.append("mapping", prop.mapping);

    if (prop.operands_to_promote) attrs.append("operands_to_promote", prop.operands_to_promote);

    if (prop.use_alloca) attrs.append("use_alloca", prop.use_alloca);

    if (prop.use_full_tile_buffers) attrs.append("use_full_tile_buffers", prop.use_full_tile_buffers);

    if (prop.use_full_tiles_by_default) attrs.append("use_full_tiles_by_default", prop.use_full_tiles_by_default);
}

::mlir::LogicalResult PromoteOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
    {
      ::mlir::Attribute attr = attrs.get(getAlignmentAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps5(attr, "alignment", getDiag)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getMappingAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps18(attr, "mapping", getDiag)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getOperandsToPromoteAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps3(attr, "operands_to_promote", getDiag)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getUseAllocaAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps2(attr, "use_alloca", getDiag)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getUseFullTileBuffersAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps17(attr, "use_full_tile_buffers", getDiag)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getUseFullTilesByDefaultAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps2(attr, "use_full_tiles_by_default", getDiag)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult PromoteOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.alignment)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.mapping)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.operands_to_promote)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.use_alloca)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.use_full_tile_buffers)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.use_full_tiles_by_default)))
    return ::mlir::failure();
  return ::mlir::success();
}

void PromoteOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.alignment);

  writer.writeOptionalAttribute(prop.mapping);

  writer.writeOptionalAttribute(prop.operands_to_promote);

  writer.writeOptionalAttribute(prop.use_alloca);

  writer.writeOptionalAttribute(prop.use_full_tile_buffers);

  writer.writeOptionalAttribute(prop.use_full_tiles_by_default);
}

::mlir::ArrayAttr PromoteOp::getOperandsToPromoteAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().operands_to_promote);
}

::mlir::ArrayAttr PromoteOp::getOperandsToPromote() {
  auto attr = getOperandsToPromoteAttr();
  return attr;
}

::mlir::ArrayAttr PromoteOp::getUseFullTileBuffersAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().use_full_tile_buffers);
}

::mlir::ArrayAttr PromoteOp::getUseFullTileBuffers() {
  auto attr = getUseFullTileBuffersAttr();
  return attr;
}

::mlir::UnitAttr PromoteOp::getUseFullTilesByDefaultAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().use_full_tiles_by_default);
}

bool PromoteOp::getUseFullTilesByDefault() {
  auto attr = getUseFullTilesByDefaultAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::UnitAttr PromoteOp::getUseAllocaAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().use_alloca);
}

bool PromoteOp::getUseAlloca() {
  auto attr = getUseAllocaAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::ArrayAttr PromoteOp::getMappingAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().mapping);
}

::std::optional< ::mlir::ArrayAttr > PromoteOp::getMapping() {
  auto attr = getMappingAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::IntegerAttr PromoteOp::getAlignmentAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().alignment);
}

::std::optional<uint64_t> PromoteOp::getAlignment() {
  auto attr = getAlignmentAttr();
  return attr ? ::std::optional<uint64_t>(attr.getValue().getZExtValue()) : (::std::nullopt);
}

void PromoteOp::setOperandsToPromoteAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getOperandsToPromoteAttrName(), attr);
}

void PromoteOp::setUseFullTileBuffersAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getUseFullTileBuffersAttrName(), attr);
}

void PromoteOp::setUseFullTilesByDefaultAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getUseFullTilesByDefaultAttrName(), attr);
}

void PromoteOp::setUseFullTilesByDefault(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getUseFullTilesByDefaultAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getUseFullTilesByDefaultAttrName());
}

void PromoteOp::setUseAllocaAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getUseAllocaAttrName(), attr);
}

void PromoteOp::setUseAlloca(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getUseAllocaAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getUseAllocaAttrName());
}

void PromoteOp::setMappingAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getMappingAttrName(), attr);
}

void PromoteOp::setAlignmentAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getAlignmentAttrName(), attr);
}

void PromoteOp::setAlignment(::std::optional<uint64_t> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getAlignmentAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), *attrValue));
    (*this)->removeAttr(getAlignmentAttrName());
}

::mlir::Attribute PromoteOp::removeUseFullTilesByDefaultAttr() {
    auto &attr = getProperties().use_full_tiles_by_default;
    attr = {};
    return attr;
}

::mlir::Attribute PromoteOp::removeUseAllocaAttr() {
    auto &attr = getProperties().use_alloca;
    attr = {};
    return attr;
}

::mlir::Attribute PromoteOp::removeMappingAttr() {
    auto &attr = getProperties().mapping;
    attr = {};
    return attr;
}

::mlir::Attribute PromoteOp::removeAlignmentAttr() {
    auto &attr = getProperties().alignment;
    attr = {};
    return attr;
}

void PromoteOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, ::mlir::ArrayAttr operands_to_promote, ::mlir::ArrayAttr use_full_tile_buffers, /*optional*/::mlir::UnitAttr use_full_tiles_by_default, /*optional*/::mlir::UnitAttr use_alloca, /*optional*/::mlir::ArrayAttr mapping, /*optional*/::mlir::IntegerAttr alignment) {
  odsState.addOperands(target);
  if (operands_to_promote) {
    odsState.getOrAddProperties<Properties>().operands_to_promote = operands_to_promote;
  }
  if (use_full_tile_buffers) {
    odsState.getOrAddProperties<Properties>().use_full_tile_buffers = use_full_tile_buffers;
  }
  if (use_full_tiles_by_default) {
    odsState.getOrAddProperties<Properties>().use_full_tiles_by_default = use_full_tiles_by_default;
  }
  if (use_alloca) {
    odsState.getOrAddProperties<Properties>().use_alloca = use_alloca;
  }
  if (mapping) {
    odsState.getOrAddProperties<Properties>().mapping = mapping;
  }
  if (alignment) {
    odsState.getOrAddProperties<Properties>().alignment = alignment;
  }
  odsState.addTypes(transformed);
}

void PromoteOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ArrayAttr operands_to_promote, ::mlir::ArrayAttr use_full_tile_buffers, /*optional*/::mlir::UnitAttr use_full_tiles_by_default, /*optional*/::mlir::UnitAttr use_alloca, /*optional*/::mlir::ArrayAttr mapping, /*optional*/::mlir::IntegerAttr alignment) {
  odsState.addOperands(target);
  if (operands_to_promote) {
    odsState.getOrAddProperties<Properties>().operands_to_promote = operands_to_promote;
  }
  if (use_full_tile_buffers) {
    odsState.getOrAddProperties<Properties>().use_full_tile_buffers = use_full_tile_buffers;
  }
  if (use_full_tiles_by_default) {
    odsState.getOrAddProperties<Properties>().use_full_tiles_by_default = use_full_tiles_by_default;
  }
  if (use_alloca) {
    odsState.getOrAddProperties<Properties>().use_alloca = use_alloca;
  }
  if (mapping) {
    odsState.getOrAddProperties<Properties>().mapping = mapping;
  }
  if (alignment) {
    odsState.getOrAddProperties<Properties>().alignment = alignment;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void PromoteOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, ::mlir::ArrayAttr operands_to_promote, ::mlir::ArrayAttr use_full_tile_buffers, /*optional*/bool use_full_tiles_by_default, /*optional*/bool use_alloca, /*optional*/::mlir::ArrayAttr mapping, /*optional*/::mlir::IntegerAttr alignment) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().operands_to_promote = operands_to_promote;
  odsState.getOrAddProperties<Properties>().use_full_tile_buffers = use_full_tile_buffers;
  if (use_full_tiles_by_default) {
    odsState.getOrAddProperties<Properties>().use_full_tiles_by_default = ((use_full_tiles_by_default) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (use_alloca) {
    odsState.getOrAddProperties<Properties>().use_alloca = ((use_alloca) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (mapping) {
    odsState.getOrAddProperties<Properties>().mapping = mapping;
  }
  if (alignment) {
    odsState.getOrAddProperties<Properties>().alignment = alignment;
  }
  odsState.addTypes(transformed);
}

void PromoteOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ArrayAttr operands_to_promote, ::mlir::ArrayAttr use_full_tile_buffers, /*optional*/bool use_full_tiles_by_default, /*optional*/bool use_alloca, /*optional*/::mlir::ArrayAttr mapping, /*optional*/::mlir::IntegerAttr alignment) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().operands_to_promote = operands_to_promote;
  odsState.getOrAddProperties<Properties>().use_full_tile_buffers = use_full_tile_buffers;
  if (use_full_tiles_by_default) {
    odsState.getOrAddProperties<Properties>().use_full_tiles_by_default = ((use_full_tiles_by_default) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (use_alloca) {
    odsState.getOrAddProperties<Properties>().use_alloca = ((use_alloca) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (mapping) {
    odsState.getOrAddProperties<Properties>().mapping = mapping;
  }
  if (alignment) {
    odsState.getOrAddProperties<Properties>().alignment = alignment;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void PromoteOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void PromoteOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.operands_to_promote)
    properties.operands_to_promote = odsBuilder.getI64ArrayAttr({});
  if (!properties.use_full_tile_buffers)
    properties.use_full_tile_buffers = odsBuilder.getBoolArrayAttr({});
}

::mlir::LogicalResult PromoteOp::verifyInvariantsImpl() {
  auto tblgen_alignment = getProperties().alignment; (void)tblgen_alignment;
  auto tblgen_mapping = getProperties().mapping; (void)tblgen_mapping;
  auto tblgen_operands_to_promote = getProperties().operands_to_promote; (void)tblgen_operands_to_promote;
  auto tblgen_use_alloca = getProperties().use_alloca; (void)tblgen_use_alloca;
  auto tblgen_use_full_tile_buffers = getProperties().use_full_tile_buffers; (void)tblgen_use_full_tile_buffers;
  auto tblgen_use_full_tiles_by_default = getProperties().use_full_tiles_by_default; (void)tblgen_use_full_tiles_by_default;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps3(*this, tblgen_operands_to_promote, "operands_to_promote")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps17(*this, tblgen_use_full_tile_buffers, "use_full_tile_buffers")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps2(*this, tblgen_use_full_tiles_by_default, "use_full_tiles_by_default")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps2(*this, tblgen_use_alloca, "use_alloca")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps18(*this, tblgen_mapping, "mapping")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps5(*this, tblgen_alignment, "alignment")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult PromoteOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult PromoteOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(targetRawOperands);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::mlir::Type targetRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> targetTypes(targetRawTypes);
  ::mlir::Type transformedRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> transformedTypes(transformedRawTypes);

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();
  {
    if (parseSemiFunctionType(parser, targetRawTypes[0], transformedRawTypes[0]))
      return ::mlir::failure();
  }
  result.addTypes(transformedTypes);
  if (parser.resolveOperands(targetOperands, targetTypes, targetOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void PromoteOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getOperandsToPromoteAttr();
     if(attr && (attr == odsBuilder.getI64ArrayAttr({})))
       elidedAttrs.push_back("operands_to_promote");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getUseFullTileBuffersAttr();
     if(attr && (attr == odsBuilder.getBoolArrayAttr({})))
       elidedAttrs.push_back("use_full_tile_buffers");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getUseFullTilesByDefaultAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("use_full_tiles_by_default");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getUseAllocaAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("use_alloca");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  printSemiFunctionType(_odsPrinter, *this, getTarget().getType(), getTransformed().getType());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::PromoteOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ReplaceOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ReplaceOpGenericAdaptorBase::ReplaceOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.structured.replace", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> ReplaceOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ReplaceOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Region &ReplaceOpGenericAdaptorBase::getBodyRegion() {
  return *odsRegions[0];
}

::mlir::RegionRange ReplaceOpGenericAdaptorBase::getRegions() {
  return odsRegions;
}

} // namespace detail
ReplaceOpAdaptor::ReplaceOpAdaptor(ReplaceOp op) : ReplaceOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult ReplaceOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ReplaceOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ReplaceOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> ReplaceOp::getTarget() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
}

::mlir::MutableOperandRange ReplaceOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> ReplaceOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ReplaceOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> ReplaceOp::getReplacement() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(0).begin());
}

::mlir::Region &ReplaceOp::getBodyRegion() {
  return (*this)->getRegion(0);
}

void ReplaceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type replacement, ::mlir::Value target) {
  odsState.addOperands(target);
  (void)odsState.addRegion();
  odsState.addTypes(replacement);
}

void ReplaceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target) {
  odsState.addOperands(target);
  (void)odsState.addRegion();
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ReplaceOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ReplaceOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(0)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_LinalgTransformOps0(*this, region, "bodyRegion", index++)))
        return ::mlir::failure();
  }
  return ::mlir::success();
}

::mlir::LogicalResult ReplaceOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult ReplaceOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(targetRawOperands);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::llvm::SmallVector<std::unique_ptr<::mlir::Region>, 2> fullRegions;
  ::mlir::Type targetRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> targetTypes(targetRawTypes);
  ::mlir::Type replacementRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> replacementTypes(replacementRawTypes);

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDictWithKeyword(result.attributes))
      return ::mlir::failure();
  }

  {
    std::unique_ptr<::mlir::Region> region;
    auto firstRegionResult = parser.parseOptionalRegion(region);
    if (firstRegionResult.has_value()) {
      if (failed(*firstRegionResult))
        return ::mlir::failure();
      fullRegions.emplace_back(std::move(region));

      // Parse any trailing regions.
      while (succeeded(parser.parseOptionalComma())) {
        region = std::make_unique<::mlir::Region>();
        if (parser.parseRegion(*region))
          return ::mlir::failure();
        fullRegions.emplace_back(std::move(region));
      }
    }
  }

  for (auto &region : fullRegions)
    if (region->empty()) region->emplaceBlock();
  if (parser.parseColon())
    return ::mlir::failure();
  {
    if (parseSemiFunctionType(parser, targetRawTypes[0], replacementRawTypes[0]))
      return ::mlir::failure();
  }
  result.addRegions(fullRegions);
  result.addTypes(replacementTypes);
  if (parser.resolveOperands(targetOperands, targetTypes, targetOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ReplaceOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDictWithKeyword((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ';
    llvm::interleaveComma(getOperation()->getRegions(), _odsPrinter, [&](::mlir::Region &region) {
        _odsPrinter.printRegion(region);
    });
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  printSemiFunctionType(_odsPrinter, *this, getTarget().getType(), getReplacement().getType());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ReplaceOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::RewriteInDestinationPassingStyleOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
RewriteInDestinationPassingStyleOpGenericAdaptorBase::RewriteInDestinationPassingStyleOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.structured.rewrite_in_destination_passing_style", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> RewriteInDestinationPassingStyleOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr RewriteInDestinationPassingStyleOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
RewriteInDestinationPassingStyleOpAdaptor::RewriteInDestinationPassingStyleOpAdaptor(RewriteInDestinationPassingStyleOp op) : RewriteInDestinationPassingStyleOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult RewriteInDestinationPassingStyleOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> RewriteInDestinationPassingStyleOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range RewriteInDestinationPassingStyleOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> RewriteInDestinationPassingStyleOp::getTarget() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
}

::mlir::MutableOperandRange RewriteInDestinationPassingStyleOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> RewriteInDestinationPassingStyleOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range RewriteInDestinationPassingStyleOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> RewriteInDestinationPassingStyleOp::getTransformed() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(0).begin());
}

void RewriteInDestinationPassingStyleOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target) {
  odsState.addOperands(target);
  odsState.addTypes(transformed);
}

void RewriteInDestinationPassingStyleOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target) {
  odsState.addOperands(target);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RewriteInDestinationPassingStyleOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult RewriteInDestinationPassingStyleOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult RewriteInDestinationPassingStyleOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult RewriteInDestinationPassingStyleOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(targetRawOperands);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> targetTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType target__allResult_functionType;
  if (parser.parseType(target__allResult_functionType))
    return ::mlir::failure();
  targetTypes = target__allResult_functionType.getInputs();
  allResultTypes = target__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(targetOperands, targetTypes, targetOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void RewriteInDestinationPassingStyleOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(::llvm::ArrayRef<::mlir::Type>(getTarget().getType()), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::RewriteInDestinationPassingStyleOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ScalarizeOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ScalarizeOpGenericAdaptorBase::ScalarizeOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.structured.scalarize", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> ScalarizeOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ScalarizeOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ScalarizeOpAdaptor::ScalarizeOpAdaptor(ScalarizeOp op) : ScalarizeOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult ScalarizeOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ScalarizeOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ScalarizeOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> ScalarizeOp::getTarget() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
}

::mlir::MutableOperandRange ScalarizeOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> ScalarizeOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ScalarizeOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> ScalarizeOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(0).begin());
}

void ScalarizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value target) {
  odsState.addOperands(target);
  odsState.addTypes(result);
}

void ScalarizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target) {
  odsState.addOperands(target);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ScalarizeOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ScalarizeOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ScalarizeOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ScalarizeOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(targetRawOperands);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::mlir::Type targetRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> targetTypes(targetRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();
  {
    if (parseSemiFunctionType(parser, targetRawTypes[0], resultRawTypes[0]))
      return ::mlir::failure();
  }
  result.addTypes(resultTypes);
  if (parser.resolveOperands(targetOperands, targetTypes, targetOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ScalarizeOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  printSemiFunctionType(_odsPrinter, *this, getTarget().getType(), getResult().getType());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ScalarizeOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::SplitOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
SplitOpGenericAdaptorBase::SplitOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.structured.split", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> SplitOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperandsSize - 1) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::DictionaryAttr SplitOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr SplitOpGenericAdaptorBase::getDimensionAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().dimension);
  return attr;
}

uint64_t SplitOpGenericAdaptorBase::getDimension() {
  auto attr = getDimensionAttr();
  return attr.getValue().getZExtValue();
}

::mlir::IntegerAttr SplitOpGenericAdaptorBase::getStaticSplitPointAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().static_split_point);
  return attr;
}

uint64_t SplitOpGenericAdaptorBase::getStaticSplitPoint() {
  auto attr = getStaticSplitPointAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
SplitOpAdaptor::SplitOpAdaptor(SplitOp op) : SplitOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult SplitOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_dimension = getProperties().dimension; (void)tblgen_dimension;
  if (!tblgen_dimension) return emitError(loc, "'transform.structured.split' op ""requires attribute 'dimension'");
  auto tblgen_static_split_point = getProperties().static_split_point; (void)tblgen_static_split_point;
  if (!tblgen_static_split_point) return emitError(loc, "'transform.structured.split' op ""requires attribute 'static_split_point'");

  if (tblgen_dimension && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_dimension))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_dimension).getType().isSignlessInteger(64)))))
    return emitError(loc, "'transform.structured.split' op ""attribute 'dimension' failed to satisfy constraint: 64-bit signless integer attribute");

  if (tblgen_static_split_point && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_static_split_point))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_static_split_point).getType().isSignlessInteger(64)))))
    return emitError(loc, "'transform.structured.split' op ""attribute 'static_split_point' failed to satisfy constraint: 64-bit signless integer attribute");
  return ::mlir::success();
}

void SplitOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "first");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "second");
}

std::pair<unsigned, unsigned> SplitOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 1) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range SplitOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> SplitOp::getTarget() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
}

::mlir::Value SplitOp::getDynamicSplitPoint() {
  auto operands = getODSOperands(1);
  return operands.empty() ? ::mlir::Value{} : ::llvm::cast<::mlir::Value>(*operands.begin());
}

::mlir::MutableOperandRange SplitOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::mlir::MutableOperandRange SplitOp::getDynamicSplitPointMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> SplitOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range SplitOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> SplitOp::getFirst() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(0).begin());
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> SplitOp::getSecond() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(1).begin());
}

::mlir::LogicalResult SplitOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::mlir::InFlightDiagnostic *diag) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    if (diag)
      *diag << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.dimension;
       auto attr = dict.get("dimension");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for dimension in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `dimension` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.static_split_point;
       auto attr = dict.get("static_split_point");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for static_split_point in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `static_split_point` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute SplitOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.dimension;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("dimension",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.static_split_point;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("static_split_point",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code SplitOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.dimension.getAsOpaquePointer()), 
    llvm::hash_value(prop.static_split_point.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> SplitOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "dimension")
      return prop.dimension;

    if (name == "static_split_point")
      return prop.static_split_point;
  return std::nullopt;
}

void SplitOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "dimension") {
       prop.dimension = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.dimension)>>(value);
       return;
    }

    if (name == "static_split_point") {
       prop.static_split_point = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.static_split_point)>>(value);
       return;
    }
}

void SplitOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.dimension) attrs.append("dimension", prop.dimension);

    if (prop.static_split_point) attrs.append("static_split_point", prop.static_split_point);
}

::mlir::LogicalResult SplitOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
    {
      ::mlir::Attribute attr = attrs.get(getDimensionAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps5(attr, "dimension", getDiag)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getStaticSplitPointAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps5(attr, "static_split_point", getDiag)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult SplitOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.dimension)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.static_split_point)))
    return ::mlir::failure();
  return ::mlir::success();
}

void SplitOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.dimension);
  writer.writeAttribute(prop.static_split_point);
}

::mlir::IntegerAttr SplitOp::getDimensionAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().dimension);
}

uint64_t SplitOp::getDimension() {
  auto attr = getDimensionAttr();
  return attr.getValue().getZExtValue();
}

::mlir::IntegerAttr SplitOp::getStaticSplitPointAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().static_split_point);
}

uint64_t SplitOp::getStaticSplitPoint() {
  auto attr = getStaticSplitPointAttr();
  return attr.getValue().getZExtValue();
}

void SplitOp::setDimensionAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getDimensionAttrName(), attr);
}

void SplitOp::setDimension(uint64_t attrValue) {
  (*this)->setAttr(getDimensionAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), attrValue));
}

void SplitOp::setStaticSplitPointAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getStaticSplitPointAttrName(), attr);
}

void SplitOp::setStaticSplitPoint(uint64_t attrValue) {
  (*this)->setAttr(getStaticSplitPointAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), attrValue));
}

void SplitOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type first, ::mlir::Type second, ::mlir::Value target, ::mlir::IntegerAttr dimension, /*optional*/::mlir::Value dynamic_split_point, ::mlir::IntegerAttr static_split_point) {
  odsState.addOperands(target);
  if (dynamic_split_point)
    odsState.addOperands(dynamic_split_point);
  odsState.getOrAddProperties<Properties>().dimension = dimension;
  odsState.getOrAddProperties<Properties>().static_split_point = static_split_point;
  odsState.addTypes(first);
  odsState.addTypes(second);
}

void SplitOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::IntegerAttr dimension, /*optional*/::mlir::Value dynamic_split_point, ::mlir::IntegerAttr static_split_point) {
  odsState.addOperands(target);
  if (dynamic_split_point)
    odsState.addOperands(dynamic_split_point);
  odsState.getOrAddProperties<Properties>().dimension = dimension;
  odsState.getOrAddProperties<Properties>().static_split_point = static_split_point;
  assert(resultTypes.size() == 2u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SplitOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type first, ::mlir::Type second, ::mlir::Value target, uint64_t dimension, /*optional*/::mlir::Value dynamic_split_point, uint64_t static_split_point) {
  odsState.addOperands(target);
  if (dynamic_split_point)
    odsState.addOperands(dynamic_split_point);
  odsState.getOrAddProperties<Properties>().dimension = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), dimension);
  odsState.getOrAddProperties<Properties>().static_split_point = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), static_split_point);
  odsState.addTypes(first);
  odsState.addTypes(second);
}

void SplitOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, uint64_t dimension, /*optional*/::mlir::Value dynamic_split_point, uint64_t static_split_point) {
  odsState.addOperands(target);
  if (dynamic_split_point)
    odsState.addOperands(dynamic_split_point);
  odsState.getOrAddProperties<Properties>().dimension = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), dimension);
  odsState.getOrAddProperties<Properties>().static_split_point = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), static_split_point);
  assert(resultTypes.size() == 2u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SplitOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 2u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult SplitOp::verifyInvariantsImpl() {
  auto tblgen_dimension = getProperties().dimension; (void)tblgen_dimension;
  if (!tblgen_dimension) return emitOpError("requires attribute 'dimension'");
  auto tblgen_static_split_point = getProperties().static_split_point; (void)tblgen_static_split_point;
  if (!tblgen_static_split_point) return emitOpError("requires attribute 'static_split_point'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps5(*this, tblgen_dimension, "dimension")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps5(*this, tblgen_static_split_point, "static_split_point")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    if (valueGroup1.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup1.size();
    }

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps11(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult SplitOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::SplitOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::SplitReductionOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
SplitReductionOpGenericAdaptorBase::SplitReductionOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.structured.split_reduction", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> SplitReductionOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr SplitReductionOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr SplitReductionOpGenericAdaptorBase::getSplitFactorAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().split_factor);
  return attr;
}

uint64_t SplitReductionOpGenericAdaptorBase::getSplitFactor() {
  auto attr = getSplitFactorAttr();
  return attr.getValue().getZExtValue();
}

::mlir::IntegerAttr SplitReductionOpGenericAdaptorBase::getInsertSplitDimensionAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().insert_split_dimension);
  return attr;
}

uint64_t SplitReductionOpGenericAdaptorBase::getInsertSplitDimension() {
  auto attr = getInsertSplitDimensionAttr();
  return attr.getValue().getZExtValue();
}

::mlir::UnitAttr SplitReductionOpGenericAdaptorBase::getInnerParallelAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().inner_parallel);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool SplitReductionOpGenericAdaptorBase::getInnerParallel() {
  auto attr = getInnerParallelAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::UnitAttr SplitReductionOpGenericAdaptorBase::getUseScalingAlgorithmAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().use_scaling_algorithm);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool SplitReductionOpGenericAdaptorBase::getUseScalingAlgorithm() {
  auto attr = getUseScalingAlgorithmAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::UnitAttr SplitReductionOpGenericAdaptorBase::getUseAllocAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().use_alloc);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool SplitReductionOpGenericAdaptorBase::getUseAlloc() {
  auto attr = getUseAllocAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

} // namespace detail
SplitReductionOpAdaptor::SplitReductionOpAdaptor(SplitReductionOp op) : SplitReductionOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult SplitReductionOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_inner_parallel = getProperties().inner_parallel; (void)tblgen_inner_parallel;
  auto tblgen_insert_split_dimension = getProperties().insert_split_dimension; (void)tblgen_insert_split_dimension;
  auto tblgen_split_factor = getProperties().split_factor; (void)tblgen_split_factor;
  auto tblgen_use_alloc = getProperties().use_alloc; (void)tblgen_use_alloc;
  auto tblgen_use_scaling_algorithm = getProperties().use_scaling_algorithm; (void)tblgen_use_scaling_algorithm;

  if (tblgen_split_factor && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_split_factor))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_split_factor).getType().isSignlessInteger(64)))))
    return emitError(loc, "'transform.structured.split_reduction' op ""attribute 'split_factor' failed to satisfy constraint: 64-bit signless integer attribute");

  if (tblgen_insert_split_dimension && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_insert_split_dimension))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_insert_split_dimension).getType().isSignlessInteger(64)))))
    return emitError(loc, "'transform.structured.split_reduction' op ""attribute 'insert_split_dimension' failed to satisfy constraint: 64-bit signless integer attribute");

  if (tblgen_inner_parallel && !((::llvm::isa<::mlir::UnitAttr>(tblgen_inner_parallel))))
    return emitError(loc, "'transform.structured.split_reduction' op ""attribute 'inner_parallel' failed to satisfy constraint: unit attribute");

  if (tblgen_use_scaling_algorithm && !((::llvm::isa<::mlir::UnitAttr>(tblgen_use_scaling_algorithm))))
    return emitError(loc, "'transform.structured.split_reduction' op ""attribute 'use_scaling_algorithm' failed to satisfy constraint: unit attribute");

  if (tblgen_use_alloc && !((::llvm::isa<::mlir::UnitAttr>(tblgen_use_alloc))))
    return emitError(loc, "'transform.structured.split_reduction' op ""attribute 'use_alloc' failed to satisfy constraint: unit attribute");
  return ::mlir::success();
}

void SplitReductionOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "init_or_alloc_op");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "fill_op");
  auto resultGroup2 = getODSResults(2);
  if (!resultGroup2.empty())
    setNameFn(*resultGroup2.begin(), "split_linalg_op");
  auto resultGroup3 = getODSResults(3);
  if (!resultGroup3.empty())
    setNameFn(*resultGroup3.begin(), "combining_linalg_op");
}

std::pair<unsigned, unsigned> SplitReductionOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range SplitReductionOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> SplitReductionOp::getTarget() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
}

::mlir::MutableOperandRange SplitReductionOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> SplitReductionOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range SplitReductionOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> SplitReductionOp::getInitOrAllocOp() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(0).begin());
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> SplitReductionOp::getFillOp() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(1).begin());
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> SplitReductionOp::getSplitLinalgOp() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(2).begin());
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> SplitReductionOp::getCombiningLinalgOp() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(3).begin());
}

::mlir::LogicalResult SplitReductionOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::mlir::InFlightDiagnostic *diag) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    if (diag)
      *diag << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.inner_parallel;
       auto attr = dict.get("inner_parallel");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for inner_parallel in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `inner_parallel` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.insert_split_dimension;
       auto attr = dict.get("insert_split_dimension");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for insert_split_dimension in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `insert_split_dimension` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.split_factor;
       auto attr = dict.get("split_factor");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for split_factor in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `split_factor` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.use_alloc;
       auto attr = dict.get("use_alloc");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for use_alloc in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `use_alloc` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.use_scaling_algorithm;
       auto attr = dict.get("use_scaling_algorithm");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for use_scaling_algorithm in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `use_scaling_algorithm` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute SplitReductionOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.inner_parallel;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("inner_parallel",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.insert_split_dimension;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("insert_split_dimension",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.split_factor;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("split_factor",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.use_alloc;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("use_alloc",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.use_scaling_algorithm;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("use_scaling_algorithm",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code SplitReductionOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.inner_parallel.getAsOpaquePointer()), 
    llvm::hash_value(prop.insert_split_dimension.getAsOpaquePointer()), 
    llvm::hash_value(prop.split_factor.getAsOpaquePointer()), 
    llvm::hash_value(prop.use_alloc.getAsOpaquePointer()), 
    llvm::hash_value(prop.use_scaling_algorithm.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> SplitReductionOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "inner_parallel")
      return prop.inner_parallel;

    if (name == "insert_split_dimension")
      return prop.insert_split_dimension;

    if (name == "split_factor")
      return prop.split_factor;

    if (name == "use_alloc")
      return prop.use_alloc;

    if (name == "use_scaling_algorithm")
      return prop.use_scaling_algorithm;
  return std::nullopt;
}

void SplitReductionOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "inner_parallel") {
       prop.inner_parallel = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.inner_parallel)>>(value);
       return;
    }

    if (name == "insert_split_dimension") {
       prop.insert_split_dimension = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.insert_split_dimension)>>(value);
       return;
    }

    if (name == "split_factor") {
       prop.split_factor = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.split_factor)>>(value);
       return;
    }

    if (name == "use_alloc") {
       prop.use_alloc = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.use_alloc)>>(value);
       return;
    }

    if (name == "use_scaling_algorithm") {
       prop.use_scaling_algorithm = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.use_scaling_algorithm)>>(value);
       return;
    }
}

void SplitReductionOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.inner_parallel) attrs.append("inner_parallel", prop.inner_parallel);

    if (prop.insert_split_dimension) attrs.append("insert_split_dimension", prop.insert_split_dimension);

    if (prop.split_factor) attrs.append("split_factor", prop.split_factor);

    if (prop.use_alloc) attrs.append("use_alloc", prop.use_alloc);

    if (prop.use_scaling_algorithm) attrs.append("use_scaling_algorithm", prop.use_scaling_algorithm);
}

::mlir::LogicalResult SplitReductionOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
    {
      ::mlir::Attribute attr = attrs.get(getInnerParallelAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps2(attr, "inner_parallel", getDiag)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getInsertSplitDimensionAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps5(attr, "insert_split_dimension", getDiag)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getSplitFactorAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps5(attr, "split_factor", getDiag)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getUseAllocAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps2(attr, "use_alloc", getDiag)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getUseScalingAlgorithmAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps2(attr, "use_scaling_algorithm", getDiag)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult SplitReductionOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.inner_parallel)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.insert_split_dimension)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.split_factor)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.use_alloc)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.use_scaling_algorithm)))
    return ::mlir::failure();
  return ::mlir::success();
}

void SplitReductionOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.inner_parallel);

  writer.writeOptionalAttribute(prop.insert_split_dimension);

  writer.writeOptionalAttribute(prop.split_factor);

  writer.writeOptionalAttribute(prop.use_alloc);

  writer.writeOptionalAttribute(prop.use_scaling_algorithm);
}

::mlir::IntegerAttr SplitReductionOp::getSplitFactorAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().split_factor);
}

uint64_t SplitReductionOp::getSplitFactor() {
  auto attr = getSplitFactorAttr();
  return attr.getValue().getZExtValue();
}

::mlir::IntegerAttr SplitReductionOp::getInsertSplitDimensionAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().insert_split_dimension);
}

uint64_t SplitReductionOp::getInsertSplitDimension() {
  auto attr = getInsertSplitDimensionAttr();
  return attr.getValue().getZExtValue();
}

::mlir::UnitAttr SplitReductionOp::getInnerParallelAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().inner_parallel);
}

bool SplitReductionOp::getInnerParallel() {
  auto attr = getInnerParallelAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::UnitAttr SplitReductionOp::getUseScalingAlgorithmAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().use_scaling_algorithm);
}

bool SplitReductionOp::getUseScalingAlgorithm() {
  auto attr = getUseScalingAlgorithmAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::UnitAttr SplitReductionOp::getUseAllocAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().use_alloc);
}

bool SplitReductionOp::getUseAlloc() {
  auto attr = getUseAllocAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

void SplitReductionOp::setSplitFactorAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getSplitFactorAttrName(), attr);
}

void SplitReductionOp::setSplitFactor(uint64_t attrValue) {
  (*this)->setAttr(getSplitFactorAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), attrValue));
}

void SplitReductionOp::setInsertSplitDimensionAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getInsertSplitDimensionAttrName(), attr);
}

void SplitReductionOp::setInsertSplitDimension(uint64_t attrValue) {
  (*this)->setAttr(getInsertSplitDimensionAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), attrValue));
}

void SplitReductionOp::setInnerParallelAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getInnerParallelAttrName(), attr);
}

void SplitReductionOp::setInnerParallel(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getInnerParallelAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getInnerParallelAttrName());
}

void SplitReductionOp::setUseScalingAlgorithmAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getUseScalingAlgorithmAttrName(), attr);
}

void SplitReductionOp::setUseScalingAlgorithm(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getUseScalingAlgorithmAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getUseScalingAlgorithmAttrName());
}

void SplitReductionOp::setUseAllocAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getUseAllocAttrName(), attr);
}

void SplitReductionOp::setUseAlloc(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getUseAllocAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getUseAllocAttrName());
}

::mlir::Attribute SplitReductionOp::removeInnerParallelAttr() {
    auto &attr = getProperties().inner_parallel;
    attr = {};
    return attr;
}

::mlir::Attribute SplitReductionOp::removeUseScalingAlgorithmAttr() {
    auto &attr = getProperties().use_scaling_algorithm;
    attr = {};
    return attr;
}

::mlir::Attribute SplitReductionOp::removeUseAllocAttr() {
    auto &attr = getProperties().use_alloc;
    attr = {};
    return attr;
}

void SplitReductionOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type init_or_alloc_op, ::mlir::Type fill_op, ::mlir::Type split_linalg_op, ::mlir::Type combining_linalg_op, ::mlir::Value target, ::mlir::IntegerAttr split_factor, ::mlir::IntegerAttr insert_split_dimension, /*optional*/::mlir::UnitAttr inner_parallel, /*optional*/::mlir::UnitAttr use_scaling_algorithm, /*optional*/::mlir::UnitAttr use_alloc) {
  odsState.addOperands(target);
  if (split_factor) {
    odsState.getOrAddProperties<Properties>().split_factor = split_factor;
  }
  if (insert_split_dimension) {
    odsState.getOrAddProperties<Properties>().insert_split_dimension = insert_split_dimension;
  }
  if (inner_parallel) {
    odsState.getOrAddProperties<Properties>().inner_parallel = inner_parallel;
  }
  if (use_scaling_algorithm) {
    odsState.getOrAddProperties<Properties>().use_scaling_algorithm = use_scaling_algorithm;
  }
  if (use_alloc) {
    odsState.getOrAddProperties<Properties>().use_alloc = use_alloc;
  }
  odsState.addTypes(init_or_alloc_op);
  odsState.addTypes(fill_op);
  odsState.addTypes(split_linalg_op);
  odsState.addTypes(combining_linalg_op);
}

void SplitReductionOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::IntegerAttr split_factor, ::mlir::IntegerAttr insert_split_dimension, /*optional*/::mlir::UnitAttr inner_parallel, /*optional*/::mlir::UnitAttr use_scaling_algorithm, /*optional*/::mlir::UnitAttr use_alloc) {
  odsState.addOperands(target);
  if (split_factor) {
    odsState.getOrAddProperties<Properties>().split_factor = split_factor;
  }
  if (insert_split_dimension) {
    odsState.getOrAddProperties<Properties>().insert_split_dimension = insert_split_dimension;
  }
  if (inner_parallel) {
    odsState.getOrAddProperties<Properties>().inner_parallel = inner_parallel;
  }
  if (use_scaling_algorithm) {
    odsState.getOrAddProperties<Properties>().use_scaling_algorithm = use_scaling_algorithm;
  }
  if (use_alloc) {
    odsState.getOrAddProperties<Properties>().use_alloc = use_alloc;
  }
  assert(resultTypes.size() == 4u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SplitReductionOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type init_or_alloc_op, ::mlir::Type fill_op, ::mlir::Type split_linalg_op, ::mlir::Type combining_linalg_op, ::mlir::Value target, uint64_t split_factor, uint64_t insert_split_dimension, /*optional*/bool inner_parallel, /*optional*/bool use_scaling_algorithm, /*optional*/bool use_alloc) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().split_factor = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), split_factor);
  odsState.getOrAddProperties<Properties>().insert_split_dimension = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), insert_split_dimension);
  if (inner_parallel) {
    odsState.getOrAddProperties<Properties>().inner_parallel = ((inner_parallel) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (use_scaling_algorithm) {
    odsState.getOrAddProperties<Properties>().use_scaling_algorithm = ((use_scaling_algorithm) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (use_alloc) {
    odsState.getOrAddProperties<Properties>().use_alloc = ((use_alloc) ? odsBuilder.getUnitAttr() : nullptr);
  }
  odsState.addTypes(init_or_alloc_op);
  odsState.addTypes(fill_op);
  odsState.addTypes(split_linalg_op);
  odsState.addTypes(combining_linalg_op);
}

void SplitReductionOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, uint64_t split_factor, uint64_t insert_split_dimension, /*optional*/bool inner_parallel, /*optional*/bool use_scaling_algorithm, /*optional*/bool use_alloc) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().split_factor = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), split_factor);
  odsState.getOrAddProperties<Properties>().insert_split_dimension = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), insert_split_dimension);
  if (inner_parallel) {
    odsState.getOrAddProperties<Properties>().inner_parallel = ((inner_parallel) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (use_scaling_algorithm) {
    odsState.getOrAddProperties<Properties>().use_scaling_algorithm = ((use_scaling_algorithm) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (use_alloc) {
    odsState.getOrAddProperties<Properties>().use_alloc = ((use_alloc) ? odsBuilder.getUnitAttr() : nullptr);
  }
  assert(resultTypes.size() == 4u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SplitReductionOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 4u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void SplitReductionOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.split_factor)
    properties.split_factor = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), {});
  if (!properties.insert_split_dimension)
    properties.insert_split_dimension = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), {});
}

::mlir::LogicalResult SplitReductionOp::verifyInvariantsImpl() {
  auto tblgen_inner_parallel = getProperties().inner_parallel; (void)tblgen_inner_parallel;
  auto tblgen_insert_split_dimension = getProperties().insert_split_dimension; (void)tblgen_insert_split_dimension;
  auto tblgen_split_factor = getProperties().split_factor; (void)tblgen_split_factor;
  auto tblgen_use_alloc = getProperties().use_alloc; (void)tblgen_use_alloc;
  auto tblgen_use_scaling_algorithm = getProperties().use_scaling_algorithm; (void)tblgen_use_scaling_algorithm;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps5(*this, tblgen_split_factor, "split_factor")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps5(*this, tblgen_insert_split_dimension, "insert_split_dimension")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps2(*this, tblgen_inner_parallel, "inner_parallel")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps2(*this, tblgen_use_scaling_algorithm, "use_scaling_algorithm")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps2(*this, tblgen_use_alloc, "use_alloc")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSResults(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSResults(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult SplitReductionOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult SplitReductionOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(targetRawOperands);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(targetOperands, allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void SplitReductionOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getSplitFactorAttr();
     if(attr && (attr == odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), {})))
       elidedAttrs.push_back("split_factor");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getInsertSplitDimensionAttr();
     if(attr && (attr == odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), {})))
       elidedAttrs.push_back("insert_split_dimension");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getInnerParallelAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("inner_parallel");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getUseScalingAlgorithmAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("use_scaling_algorithm");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getUseAllocAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("use_alloc");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::SplitReductionOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::TileOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
TileOpGenericAdaptorBase::TileOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.structured.tile", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> TileOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperandsSize - 1) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::DictionaryAttr TileOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::DenseI64ArrayAttr TileOpGenericAdaptorBase::getStaticSizesAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().static_sizes);
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getDenseI64ArrayAttr({});
  return attr;
}

::llvm::ArrayRef<int64_t> TileOpGenericAdaptorBase::getStaticSizes() {
  auto attr = getStaticSizesAttr();
    if (!attr)
      return ::mlir::Builder(odsAttrs.getContext()).getDenseI64ArrayAttr({});
  return attr;
}

::mlir::DenseI64ArrayAttr TileOpGenericAdaptorBase::getInterchangeAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().interchange);
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getDenseI64ArrayAttr({});
  return attr;
}

::llvm::ArrayRef<int64_t> TileOpGenericAdaptorBase::getInterchange() {
  auto attr = getInterchangeAttr();
    if (!attr)
      return ::mlir::Builder(odsAttrs.getContext()).getDenseI64ArrayAttr({});
  return attr;
}

::mlir::DenseBoolArrayAttr TileOpGenericAdaptorBase::getScalableSizesAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseBoolArrayAttr>(getProperties().scalable_sizes);
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getDenseBoolArrayAttr({});
  return attr;
}

::llvm::ArrayRef<bool> TileOpGenericAdaptorBase::getScalableSizes() {
  auto attr = getScalableSizesAttr();
    if (!attr)
      return ::mlir::Builder(odsAttrs.getContext()).getDenseBoolArrayAttr({});
  return attr;
}

} // namespace detail
TileOpAdaptor::TileOpAdaptor(TileOp op) : TileOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult TileOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_interchange = getProperties().interchange; (void)tblgen_interchange;
  auto tblgen_scalable_sizes = getProperties().scalable_sizes; (void)tblgen_scalable_sizes;
  auto tblgen_static_sizes = getProperties().static_sizes; (void)tblgen_static_sizes;

  if (tblgen_static_sizes && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_static_sizes))))
    return emitError(loc, "'transform.structured.tile' op ""attribute 'static_sizes' failed to satisfy constraint: i64 dense array attribute");

  if (tblgen_interchange && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_interchange))))
    return emitError(loc, "'transform.structured.tile' op ""attribute 'interchange' failed to satisfy constraint: i64 dense array attribute");

  if (tblgen_scalable_sizes && !((::llvm::isa<::mlir::DenseBoolArrayAttr>(tblgen_scalable_sizes))))
    return emitError(loc, "'transform.structured.tile' op ""attribute 'scalable_sizes' failed to satisfy constraint: i1 dense array attribute");
  return ::mlir::success();
}

void TileOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "tiled_linalg_op");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "loops");
}

std::pair<unsigned, unsigned> TileOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 1) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range TileOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> TileOp::getTarget() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
}

::mlir::Operation::operand_range TileOp::getDynamicSizes() {
  return getODSOperands(1);
}

::mlir::MutableOperandRange TileOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::mlir::MutableOperandRange TileOp::getDynamicSizesMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> TileOp::getODSResultIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumResults() - 1) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::result_range TileOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> TileOp::getTiledLinalgOp() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(0).begin());
}

::mlir::Operation::result_range TileOp::getLoops() {
  return getODSResults(1);
}

::mlir::LogicalResult TileOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::mlir::InFlightDiagnostic *diag) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    if (diag)
      *diag << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.interchange;
       auto attr = dict.get("interchange");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for interchange in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `interchange` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.scalable_sizes;
       auto attr = dict.get("scalable_sizes");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for scalable_sizes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `scalable_sizes` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.static_sizes;
       auto attr = dict.get("static_sizes");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for static_sizes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `static_sizes` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute TileOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.interchange;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("interchange",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.scalable_sizes;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("scalable_sizes",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.static_sizes;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("static_sizes",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code TileOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.interchange.getAsOpaquePointer()), 
    llvm::hash_value(prop.scalable_sizes.getAsOpaquePointer()), 
    llvm::hash_value(prop.static_sizes.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> TileOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "interchange")
      return prop.interchange;

    if (name == "scalable_sizes")
      return prop.scalable_sizes;

    if (name == "static_sizes")
      return prop.static_sizes;
  return std::nullopt;
}

void TileOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "interchange") {
       prop.interchange = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.interchange)>>(value);
       return;
    }

    if (name == "scalable_sizes") {
       prop.scalable_sizes = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.scalable_sizes)>>(value);
       return;
    }

    if (name == "static_sizes") {
       prop.static_sizes = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.static_sizes)>>(value);
       return;
    }
}

void TileOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.interchange) attrs.append("interchange", prop.interchange);

    if (prop.scalable_sizes) attrs.append("scalable_sizes", prop.scalable_sizes);

    if (prop.static_sizes) attrs.append("static_sizes", prop.static_sizes);
}

::mlir::LogicalResult TileOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
    {
      ::mlir::Attribute attr = attrs.get(getInterchangeAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps4(attr, "interchange", getDiag)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getScalableSizesAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps7(attr, "scalable_sizes", getDiag)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getStaticSizesAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps4(attr, "static_sizes", getDiag)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult TileOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.interchange)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.scalable_sizes)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.static_sizes)))
    return ::mlir::failure();
  return ::mlir::success();
}

void TileOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.interchange);

  writer.writeOptionalAttribute(prop.scalable_sizes);

  writer.writeOptionalAttribute(prop.static_sizes);
}

::mlir::DenseI64ArrayAttr TileOp::getStaticSizesAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().static_sizes);
}

::llvm::ArrayRef<int64_t> TileOp::getStaticSizes() {
  auto attr = getStaticSizesAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr({});
  return attr;
}

::mlir::DenseI64ArrayAttr TileOp::getInterchangeAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().interchange);
}

::llvm::ArrayRef<int64_t> TileOp::getInterchange() {
  auto attr = getInterchangeAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr({});
  return attr;
}

::mlir::DenseBoolArrayAttr TileOp::getScalableSizesAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::DenseBoolArrayAttr>(getProperties().scalable_sizes);
}

::llvm::ArrayRef<bool> TileOp::getScalableSizes() {
  auto attr = getScalableSizesAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getDenseBoolArrayAttr({});
  return attr;
}

void TileOp::setStaticSizesAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getStaticSizesAttrName(), attr);
}

void TileOp::setStaticSizes(::std::optional<::llvm::ArrayRef<int64_t>> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getStaticSizesAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(*attrValue));
    (*this)->removeAttr(getStaticSizesAttrName());
}

void TileOp::setInterchangeAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getInterchangeAttrName(), attr);
}

void TileOp::setInterchange(::std::optional<::llvm::ArrayRef<int64_t>> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getInterchangeAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(*attrValue));
    (*this)->removeAttr(getInterchangeAttrName());
}

void TileOp::setScalableSizesAttr(::mlir::DenseBoolArrayAttr attr) {
  (*this)->setAttr(getScalableSizesAttrName(), attr);
}

void TileOp::setScalableSizes(::std::optional<::llvm::ArrayRef<bool>> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getScalableSizesAttrName(), ::mlir::Builder((*this)->getContext()).getDenseBoolArrayAttr(*attrValue));
    (*this)->removeAttr(getScalableSizesAttrName());
}

::mlir::Attribute TileOp::removeStaticSizesAttr() {
    auto &attr = getProperties().static_sizes;
    attr = {};
    return attr;
}

::mlir::Attribute TileOp::removeInterchangeAttr() {
    auto &attr = getProperties().interchange;
    attr = {};
    return attr;
}

::mlir::Attribute TileOp::removeScalableSizesAttr() {
    auto &attr = getProperties().scalable_sizes;
    attr = {};
    return attr;
}

void TileOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type tiled_linalg_op, ::mlir::TypeRange loops, ::mlir::Value target, ::mlir::ValueRange dynamic_sizes, /*optional*/::mlir::DenseI64ArrayAttr static_sizes, /*optional*/::mlir::DenseI64ArrayAttr interchange, /*optional*/::mlir::DenseBoolArrayAttr scalable_sizes) {
  odsState.addOperands(target);
  odsState.addOperands(dynamic_sizes);
  if (static_sizes) {
    odsState.getOrAddProperties<Properties>().static_sizes = static_sizes;
  }
  if (interchange) {
    odsState.getOrAddProperties<Properties>().interchange = interchange;
  }
  if (scalable_sizes) {
    odsState.getOrAddProperties<Properties>().scalable_sizes = scalable_sizes;
  }
  odsState.addTypes(tiled_linalg_op);
  odsState.addTypes(loops);
}

void TileOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ValueRange dynamic_sizes, /*optional*/::mlir::DenseI64ArrayAttr static_sizes, /*optional*/::mlir::DenseI64ArrayAttr interchange, /*optional*/::mlir::DenseBoolArrayAttr scalable_sizes) {
  odsState.addOperands(target);
  odsState.addOperands(dynamic_sizes);
  if (static_sizes) {
    odsState.getOrAddProperties<Properties>().static_sizes = static_sizes;
  }
  if (interchange) {
    odsState.getOrAddProperties<Properties>().interchange = interchange;
  }
  if (scalable_sizes) {
    odsState.getOrAddProperties<Properties>().scalable_sizes = scalable_sizes;
  }
  assert(resultTypes.size() >= 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TileOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type tiled_linalg_op, ::mlir::TypeRange loops, ::mlir::Value target, ::mlir::ValueRange dynamic_sizes, /*optional*/::llvm::ArrayRef<int64_t> static_sizes, /*optional*/::llvm::ArrayRef<int64_t> interchange, /*optional*/::llvm::ArrayRef<bool> scalable_sizes) {
  odsState.addOperands(target);
  odsState.addOperands(dynamic_sizes);
  odsState.getOrAddProperties<Properties>().static_sizes = odsBuilder.getDenseI64ArrayAttr(static_sizes);
  odsState.getOrAddProperties<Properties>().interchange = odsBuilder.getDenseI64ArrayAttr(interchange);
  odsState.getOrAddProperties<Properties>().scalable_sizes = odsBuilder.getDenseBoolArrayAttr(scalable_sizes);
  odsState.addTypes(tiled_linalg_op);
  odsState.addTypes(loops);
}

void TileOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ValueRange dynamic_sizes, /*optional*/::llvm::ArrayRef<int64_t> static_sizes, /*optional*/::llvm::ArrayRef<int64_t> interchange, /*optional*/::llvm::ArrayRef<bool> scalable_sizes) {
  odsState.addOperands(target);
  odsState.addOperands(dynamic_sizes);
  odsState.getOrAddProperties<Properties>().static_sizes = odsBuilder.getDenseI64ArrayAttr(static_sizes);
  odsState.getOrAddProperties<Properties>().interchange = odsBuilder.getDenseI64ArrayAttr(interchange);
  odsState.getOrAddProperties<Properties>().scalable_sizes = odsBuilder.getDenseBoolArrayAttr(scalable_sizes);
  assert(resultTypes.size() >= 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TileOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() >= 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult TileOp::verifyInvariantsImpl() {
  auto tblgen_interchange = getProperties().interchange; (void)tblgen_interchange;
  auto tblgen_scalable_sizes = getProperties().scalable_sizes; (void)tblgen_scalable_sizes;
  auto tblgen_static_sizes = getProperties().static_sizes; (void)tblgen_static_sizes;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps4(*this, tblgen_static_sizes, "static_sizes")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps4(*this, tblgen_interchange, "interchange")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps7(*this, tblgen_scalable_sizes, "scalable_sizes")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps11(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult TileOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::TileOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::TileReductionUsingForallOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
TileReductionUsingForallOpGenericAdaptorBase::TileReductionUsingForallOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.structured.tile_reduction_using_forall", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> TileReductionUsingForallOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr TileReductionUsingForallOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::DenseI64ArrayAttr TileReductionUsingForallOpGenericAdaptorBase::getNumThreadsAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().num_threads);
  return attr;
}

::llvm::ArrayRef<int64_t> TileReductionUsingForallOpGenericAdaptorBase::getNumThreads() {
  auto attr = getNumThreadsAttr();
  return attr;
}

::mlir::DenseI64ArrayAttr TileReductionUsingForallOpGenericAdaptorBase::getTileSizesAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().tile_sizes);
  return attr;
}

::llvm::ArrayRef<int64_t> TileReductionUsingForallOpGenericAdaptorBase::getTileSizes() {
  auto attr = getTileSizesAttr();
  return attr;
}

::mlir::ArrayAttr TileReductionUsingForallOpGenericAdaptorBase::getMappingAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().mapping);
  return attr;
}

::std::optional< ::mlir::ArrayAttr > TileReductionUsingForallOpGenericAdaptorBase::getMapping() {
  auto attr = getMappingAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

} // namespace detail
TileReductionUsingForallOpAdaptor::TileReductionUsingForallOpAdaptor(TileReductionUsingForallOp op) : TileReductionUsingForallOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult TileReductionUsingForallOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_mapping = getProperties().mapping; (void)tblgen_mapping;
  auto tblgen_num_threads = getProperties().num_threads; (void)tblgen_num_threads;
  auto tblgen_tile_sizes = getProperties().tile_sizes; (void)tblgen_tile_sizes;

  if (tblgen_num_threads && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_num_threads))))
    return emitError(loc, "'transform.structured.tile_reduction_using_forall' op ""attribute 'num_threads' failed to satisfy constraint: i64 dense array attribute");

  if (tblgen_tile_sizes && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_tile_sizes))))
    return emitError(loc, "'transform.structured.tile_reduction_using_forall' op ""attribute 'tile_sizes' failed to satisfy constraint: i64 dense array attribute");

  if (tblgen_mapping && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_mapping))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_mapping), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::DeviceMappingAttrInterface>(attr))); }))))
    return emitError(loc, "'transform.structured.tile_reduction_using_forall' op ""attribute 'mapping' failed to satisfy constraint: Device Mapping array attribute");
  return ::mlir::success();
}

void TileReductionUsingForallOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "forall_op");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "fill_op");
  auto resultGroup2 = getODSResults(2);
  if (!resultGroup2.empty())
    setNameFn(*resultGroup2.begin(), "split_linalg_op");
  auto resultGroup3 = getODSResults(3);
  if (!resultGroup3.empty())
    setNameFn(*resultGroup3.begin(), "combining_linalg_op");
}

std::pair<unsigned, unsigned> TileReductionUsingForallOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range TileReductionUsingForallOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> TileReductionUsingForallOp::getTarget() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
}

::mlir::MutableOperandRange TileReductionUsingForallOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> TileReductionUsingForallOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range TileReductionUsingForallOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> TileReductionUsingForallOp::getForallOp() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(0).begin());
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> TileReductionUsingForallOp::getFillOp() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(1).begin());
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> TileReductionUsingForallOp::getSplitLinalgOp() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(2).begin());
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> TileReductionUsingForallOp::getCombiningLinalgOp() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(3).begin());
}

::mlir::LogicalResult TileReductionUsingForallOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::mlir::InFlightDiagnostic *diag) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    if (diag)
      *diag << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.mapping;
       auto attr = dict.get("mapping");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for mapping in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `mapping` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.num_threads;
       auto attr = dict.get("num_threads");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for num_threads in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `num_threads` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.tile_sizes;
       auto attr = dict.get("tile_sizes");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for tile_sizes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `tile_sizes` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute TileReductionUsingForallOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.mapping;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("mapping",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.num_threads;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("num_threads",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.tile_sizes;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("tile_sizes",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code TileReductionUsingForallOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.mapping.getAsOpaquePointer()), 
    llvm::hash_value(prop.num_threads.getAsOpaquePointer()), 
    llvm::hash_value(prop.tile_sizes.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> TileReductionUsingForallOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "mapping")
      return prop.mapping;

    if (name == "num_threads")
      return prop.num_threads;

    if (name == "tile_sizes")
      return prop.tile_sizes;
  return std::nullopt;
}

void TileReductionUsingForallOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "mapping") {
       prop.mapping = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.mapping)>>(value);
       return;
    }

    if (name == "num_threads") {
       prop.num_threads = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.num_threads)>>(value);
       return;
    }

    if (name == "tile_sizes") {
       prop.tile_sizes = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.tile_sizes)>>(value);
       return;
    }
}

void TileReductionUsingForallOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.mapping) attrs.append("mapping", prop.mapping);

    if (prop.num_threads) attrs.append("num_threads", prop.num_threads);

    if (prop.tile_sizes) attrs.append("tile_sizes", prop.tile_sizes);
}

::mlir::LogicalResult TileReductionUsingForallOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
    {
      ::mlir::Attribute attr = attrs.get(getMappingAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps18(attr, "mapping", getDiag)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getNumThreadsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps4(attr, "num_threads", getDiag)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getTileSizesAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps4(attr, "tile_sizes", getDiag)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult TileReductionUsingForallOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.mapping)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.num_threads)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.tile_sizes)))
    return ::mlir::failure();
  return ::mlir::success();
}

void TileReductionUsingForallOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.mapping);

  writer.writeOptionalAttribute(prop.num_threads);

  writer.writeOptionalAttribute(prop.tile_sizes);
}

::mlir::DenseI64ArrayAttr TileReductionUsingForallOp::getNumThreadsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().num_threads);
}

::llvm::ArrayRef<int64_t> TileReductionUsingForallOp::getNumThreads() {
  auto attr = getNumThreadsAttr();
  return attr;
}

::mlir::DenseI64ArrayAttr TileReductionUsingForallOp::getTileSizesAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().tile_sizes);
}

::llvm::ArrayRef<int64_t> TileReductionUsingForallOp::getTileSizes() {
  auto attr = getTileSizesAttr();
  return attr;
}

::mlir::ArrayAttr TileReductionUsingForallOp::getMappingAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().mapping);
}

::std::optional< ::mlir::ArrayAttr > TileReductionUsingForallOp::getMapping() {
  auto attr = getMappingAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

void TileReductionUsingForallOp::setNumThreadsAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getNumThreadsAttrName(), attr);
}

void TileReductionUsingForallOp::setNumThreads(::llvm::ArrayRef<int64_t> attrValue) {
  (*this)->setAttr(getNumThreadsAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(attrValue));
}

void TileReductionUsingForallOp::setTileSizesAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getTileSizesAttrName(), attr);
}

void TileReductionUsingForallOp::setTileSizes(::llvm::ArrayRef<int64_t> attrValue) {
  (*this)->setAttr(getTileSizesAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(attrValue));
}

void TileReductionUsingForallOp::setMappingAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getMappingAttrName(), attr);
}

::mlir::Attribute TileReductionUsingForallOp::removeMappingAttr() {
    auto &attr = getProperties().mapping;
    attr = {};
    return attr;
}

void TileReductionUsingForallOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type forall_op, ::mlir::Type fill_op, ::mlir::Type split_linalg_op, ::mlir::Type combining_linalg_op, ::mlir::Value target, ::mlir::DenseI64ArrayAttr num_threads, ::mlir::DenseI64ArrayAttr tile_sizes, /*optional*/::mlir::ArrayAttr mapping) {
  odsState.addOperands(target);
  if (num_threads) {
    odsState.getOrAddProperties<Properties>().num_threads = num_threads;
  }
  if (tile_sizes) {
    odsState.getOrAddProperties<Properties>().tile_sizes = tile_sizes;
  }
  if (mapping) {
    odsState.getOrAddProperties<Properties>().mapping = mapping;
  }
  odsState.addTypes(forall_op);
  odsState.addTypes(fill_op);
  odsState.addTypes(split_linalg_op);
  odsState.addTypes(combining_linalg_op);
}

void TileReductionUsingForallOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::DenseI64ArrayAttr num_threads, ::mlir::DenseI64ArrayAttr tile_sizes, /*optional*/::mlir::ArrayAttr mapping) {
  odsState.addOperands(target);
  if (num_threads) {
    odsState.getOrAddProperties<Properties>().num_threads = num_threads;
  }
  if (tile_sizes) {
    odsState.getOrAddProperties<Properties>().tile_sizes = tile_sizes;
  }
  if (mapping) {
    odsState.getOrAddProperties<Properties>().mapping = mapping;
  }
  assert(resultTypes.size() == 4u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TileReductionUsingForallOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type forall_op, ::mlir::Type fill_op, ::mlir::Type split_linalg_op, ::mlir::Type combining_linalg_op, ::mlir::Value target, ::llvm::ArrayRef<int64_t> num_threads, ::llvm::ArrayRef<int64_t> tile_sizes, /*optional*/::mlir::ArrayAttr mapping) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().num_threads = odsBuilder.getDenseI64ArrayAttr(num_threads);
  odsState.getOrAddProperties<Properties>().tile_sizes = odsBuilder.getDenseI64ArrayAttr(tile_sizes);
  if (mapping) {
    odsState.getOrAddProperties<Properties>().mapping = mapping;
  }
  odsState.addTypes(forall_op);
  odsState.addTypes(fill_op);
  odsState.addTypes(split_linalg_op);
  odsState.addTypes(combining_linalg_op);
}

void TileReductionUsingForallOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::llvm::ArrayRef<int64_t> num_threads, ::llvm::ArrayRef<int64_t> tile_sizes, /*optional*/::mlir::ArrayAttr mapping) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().num_threads = odsBuilder.getDenseI64ArrayAttr(num_threads);
  odsState.getOrAddProperties<Properties>().tile_sizes = odsBuilder.getDenseI64ArrayAttr(tile_sizes);
  if (mapping) {
    odsState.getOrAddProperties<Properties>().mapping = mapping;
  }
  assert(resultTypes.size() == 4u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TileReductionUsingForallOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 4u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void TileReductionUsingForallOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.num_threads)
    properties.num_threads = odsBuilder.getDenseI64ArrayAttr({});
  if (!properties.tile_sizes)
    properties.tile_sizes = odsBuilder.getDenseI64ArrayAttr({});
}

::mlir::LogicalResult TileReductionUsingForallOp::verifyInvariantsImpl() {
  auto tblgen_mapping = getProperties().mapping; (void)tblgen_mapping;
  auto tblgen_num_threads = getProperties().num_threads; (void)tblgen_num_threads;
  auto tblgen_tile_sizes = getProperties().tile_sizes; (void)tblgen_tile_sizes;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps4(*this, tblgen_num_threads, "num_threads")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps4(*this, tblgen_tile_sizes, "tile_sizes")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps18(*this, tblgen_mapping, "mapping")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSResults(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSResults(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult TileReductionUsingForallOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult TileReductionUsingForallOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(targetRawOperands);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::mlir::DenseI64ArrayAttr num_threadsAttr;
  ::mlir::DenseI64ArrayAttr tile_sizesAttr;
  ::mlir::ArrayAttr mappingAttr;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseKeyword("by"))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("num_threads"))) {
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(num_threadsAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (num_threadsAttr) result.getOrAddProperties<TileReductionUsingForallOp::Properties>().num_threads = num_threadsAttr;
  }
  if (::mlir::succeeded(parser.parseOptionalComma())) {
  if (parser.parseKeyword("tile_sizes"))
    return ::mlir::failure();
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(tile_sizesAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (tile_sizesAttr) result.getOrAddProperties<TileReductionUsingForallOp::Properties>().tile_sizes = tile_sizesAttr;
  }
  if (::mlir::succeeded(parser.parseOptionalComma())) {
  if (parser.parseKeyword("mapping"))
    return ::mlir::failure();
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(mappingAttr, parser.getBuilder().getType<::mlir::NoneType>())) {
    return ::mlir::failure();
  }
  if (mappingAttr) result.getOrAddProperties<TileReductionUsingForallOp::Properties>().mapping = mappingAttr;
  }
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(targetOperands, allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void TileReductionUsingForallOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  _odsPrinter << ' ' << "by";
  if (getNumThreadsAttr() && getNumThreadsAttr() != ::mlir::OpBuilder((*this)->getContext()).getDenseI64ArrayAttr({})) {
    _odsPrinter << ' ' << "num_threads";
    _odsPrinter << ' ' << "=";
    _odsPrinter << ' ';
  _odsPrinter.printStrippedAttrOrType(getNumThreadsAttr());
  }
  if (getTileSizesAttr() && getTileSizesAttr() != ::mlir::OpBuilder((*this)->getContext()).getDenseI64ArrayAttr({})) {
    _odsPrinter << ",";
    _odsPrinter << ' ' << "tile_sizes";
    _odsPrinter << ' ' << "=";
    _odsPrinter << ' ';
  _odsPrinter.printStrippedAttrOrType(getTileSizesAttr());
  }
  if (getMappingAttr()) {
    _odsPrinter << ",";
    _odsPrinter << ' ' << "mapping";
    _odsPrinter << ' ' << "=";
    _odsPrinter << ' ';
    _odsPrinter.printAttributeWithoutType(getMappingAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("num_threads");
  elidedAttrs.push_back("tile_sizes");
  elidedAttrs.push_back("mapping");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getNumThreadsAttr();
     if(attr && (attr == odsBuilder.getDenseI64ArrayAttr({})))
       elidedAttrs.push_back("num_threads");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getTileSizesAttr();
     if(attr && (attr == odsBuilder.getDenseI64ArrayAttr({})))
       elidedAttrs.push_back("tile_sizes");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::TileReductionUsingForallOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::TileReductionUsingScfOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
TileReductionUsingScfOpGenericAdaptorBase::TileReductionUsingScfOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.structured.tile_reduction_using_scf", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> TileReductionUsingScfOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr TileReductionUsingScfOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::DenseI64ArrayAttr TileReductionUsingScfOpGenericAdaptorBase::getTileSizesAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().tile_sizes);
  return attr;
}

::llvm::ArrayRef<int64_t> TileReductionUsingScfOpGenericAdaptorBase::getTileSizes() {
  auto attr = getTileSizesAttr();
  return attr;
}

} // namespace detail
TileReductionUsingScfOpAdaptor::TileReductionUsingScfOpAdaptor(TileReductionUsingScfOp op) : TileReductionUsingScfOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult TileReductionUsingScfOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_tile_sizes = getProperties().tile_sizes; (void)tblgen_tile_sizes;

  if (tblgen_tile_sizes && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_tile_sizes))))
    return emitError(loc, "'transform.structured.tile_reduction_using_scf' op ""attribute 'tile_sizes' failed to satisfy constraint: i64 dense array attribute");
  return ::mlir::success();
}

void TileReductionUsingScfOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "for_op");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "fill_op");
  auto resultGroup2 = getODSResults(2);
  if (!resultGroup2.empty())
    setNameFn(*resultGroup2.begin(), "split_linalg_op");
  auto resultGroup3 = getODSResults(3);
  if (!resultGroup3.empty())
    setNameFn(*resultGroup3.begin(), "combining_linalg_op");
}

std::pair<unsigned, unsigned> TileReductionUsingScfOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range TileReductionUsingScfOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> TileReductionUsingScfOp::getTarget() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
}

::mlir::MutableOperandRange TileReductionUsingScfOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> TileReductionUsingScfOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range TileReductionUsingScfOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> TileReductionUsingScfOp::getForOp() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(0).begin());
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> TileReductionUsingScfOp::getFillOp() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(1).begin());
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> TileReductionUsingScfOp::getSplitLinalgOp() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(2).begin());
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> TileReductionUsingScfOp::getCombiningLinalgOp() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(3).begin());
}

::mlir::LogicalResult TileReductionUsingScfOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::mlir::InFlightDiagnostic *diag) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    if (diag)
      *diag << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.tile_sizes;
       auto attr = dict.get("tile_sizes");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for tile_sizes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `tile_sizes` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute TileReductionUsingScfOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.tile_sizes;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("tile_sizes",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code TileReductionUsingScfOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.tile_sizes.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> TileReductionUsingScfOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "tile_sizes")
      return prop.tile_sizes;
  return std::nullopt;
}

void TileReductionUsingScfOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "tile_sizes") {
       prop.tile_sizes = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.tile_sizes)>>(value);
       return;
    }
}

void TileReductionUsingScfOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.tile_sizes) attrs.append("tile_sizes", prop.tile_sizes);
}

::mlir::LogicalResult TileReductionUsingScfOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
    {
      ::mlir::Attribute attr = attrs.get(getTileSizesAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps4(attr, "tile_sizes", getDiag)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult TileReductionUsingScfOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.tile_sizes)))
    return ::mlir::failure();
  return ::mlir::success();
}

void TileReductionUsingScfOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.tile_sizes);
}

::mlir::DenseI64ArrayAttr TileReductionUsingScfOp::getTileSizesAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().tile_sizes);
}

::llvm::ArrayRef<int64_t> TileReductionUsingScfOp::getTileSizes() {
  auto attr = getTileSizesAttr();
  return attr;
}

void TileReductionUsingScfOp::setTileSizesAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getTileSizesAttrName(), attr);
}

void TileReductionUsingScfOp::setTileSizes(::llvm::ArrayRef<int64_t> attrValue) {
  (*this)->setAttr(getTileSizesAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(attrValue));
}

void TileReductionUsingScfOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type for_op, ::mlir::Type fill_op, ::mlir::Type split_linalg_op, ::mlir::Type combining_linalg_op, ::mlir::Value target, ::mlir::DenseI64ArrayAttr tile_sizes) {
  odsState.addOperands(target);
  if (tile_sizes) {
    odsState.getOrAddProperties<Properties>().tile_sizes = tile_sizes;
  }
  odsState.addTypes(for_op);
  odsState.addTypes(fill_op);
  odsState.addTypes(split_linalg_op);
  odsState.addTypes(combining_linalg_op);
}

void TileReductionUsingScfOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::DenseI64ArrayAttr tile_sizes) {
  odsState.addOperands(target);
  if (tile_sizes) {
    odsState.getOrAddProperties<Properties>().tile_sizes = tile_sizes;
  }
  assert(resultTypes.size() == 4u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TileReductionUsingScfOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type for_op, ::mlir::Type fill_op, ::mlir::Type split_linalg_op, ::mlir::Type combining_linalg_op, ::mlir::Value target, ::llvm::ArrayRef<int64_t> tile_sizes) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().tile_sizes = odsBuilder.getDenseI64ArrayAttr(tile_sizes);
  odsState.addTypes(for_op);
  odsState.addTypes(fill_op);
  odsState.addTypes(split_linalg_op);
  odsState.addTypes(combining_linalg_op);
}

void TileReductionUsingScfOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::llvm::ArrayRef<int64_t> tile_sizes) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().tile_sizes = odsBuilder.getDenseI64ArrayAttr(tile_sizes);
  assert(resultTypes.size() == 4u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TileReductionUsingScfOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 4u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void TileReductionUsingScfOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.tile_sizes)
    properties.tile_sizes = odsBuilder.getDenseI64ArrayAttr({});
}

::mlir::LogicalResult TileReductionUsingScfOp::verifyInvariantsImpl() {
  auto tblgen_tile_sizes = getProperties().tile_sizes; (void)tblgen_tile_sizes;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps4(*this, tblgen_tile_sizes, "tile_sizes")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSResults(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSResults(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult TileReductionUsingScfOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult TileReductionUsingScfOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(targetRawOperands);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::mlir::DenseI64ArrayAttr tile_sizesAttr;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseKeyword("by"))
    return ::mlir::failure();
  if (parser.parseKeyword("tile_sizes"))
    return ::mlir::failure();
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(tile_sizesAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (tile_sizesAttr) result.getOrAddProperties<TileReductionUsingScfOp::Properties>().tile_sizes = tile_sizesAttr;
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(targetOperands, allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void TileReductionUsingScfOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  _odsPrinter << ' ' << "by";
  _odsPrinter << ' ' << "tile_sizes";
  _odsPrinter << ' ' << "=";
  _odsPrinter << ' ';
_odsPrinter.printStrippedAttrOrType(getTileSizesAttr());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("tile_sizes");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getTileSizesAttr();
     if(attr && (attr == odsBuilder.getDenseI64ArrayAttr({})))
       elidedAttrs.push_back("tile_sizes");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::TileReductionUsingScfOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::TileToForallOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
TileToForallOpGenericAdaptorBase::TileToForallOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.structured.tile_to_forall_op", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> TileToForallOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::DictionaryAttr TileToForallOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::DenseI64ArrayAttr TileToForallOpGenericAdaptorBase::getStaticNumThreadsAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().static_num_threads);
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getDenseI64ArrayAttr({});
  return attr;
}

::llvm::ArrayRef<int64_t> TileToForallOpGenericAdaptorBase::getStaticNumThreads() {
  auto attr = getStaticNumThreadsAttr();
    if (!attr)
      return ::mlir::Builder(odsAttrs.getContext()).getDenseI64ArrayAttr({});
  return attr;
}

::mlir::DenseI64ArrayAttr TileToForallOpGenericAdaptorBase::getStaticTileSizesAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().static_tile_sizes);
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getDenseI64ArrayAttr({});
  return attr;
}

::llvm::ArrayRef<int64_t> TileToForallOpGenericAdaptorBase::getStaticTileSizes() {
  auto attr = getStaticTileSizesAttr();
    if (!attr)
      return ::mlir::Builder(odsAttrs.getContext()).getDenseI64ArrayAttr({});
  return attr;
}

::mlir::ArrayAttr TileToForallOpGenericAdaptorBase::getMappingAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().mapping);
  return attr;
}

::std::optional< ::mlir::ArrayAttr > TileToForallOpGenericAdaptorBase::getMapping() {
  auto attr = getMappingAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

} // namespace detail
TileToForallOpAdaptor::TileToForallOpAdaptor(TileToForallOp op) : TileToForallOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult TileToForallOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_mapping = getProperties().mapping; (void)tblgen_mapping;
  auto tblgen_static_num_threads = getProperties().static_num_threads; (void)tblgen_static_num_threads;
  auto tblgen_static_tile_sizes = getProperties().static_tile_sizes; (void)tblgen_static_tile_sizes;

  if (tblgen_static_num_threads && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_static_num_threads))))
    return emitError(loc, "'transform.structured.tile_to_forall_op' op ""attribute 'static_num_threads' failed to satisfy constraint: i64 dense array attribute");

  if (tblgen_static_tile_sizes && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_static_tile_sizes))))
    return emitError(loc, "'transform.structured.tile_to_forall_op' op ""attribute 'static_tile_sizes' failed to satisfy constraint: i64 dense array attribute");

  if (tblgen_mapping && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_mapping))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_mapping), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::DeviceMappingAttrInterface>(attr))); }))))
    return emitError(loc, "'transform.structured.tile_to_forall_op' op ""attribute 'mapping' failed to satisfy constraint: Device Mapping array attribute");
  return ::mlir::success();
}

void TileToForallOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "forall_op");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "tiled_op");
}

std::pair<unsigned, unsigned> TileToForallOp::getODSOperandIndexAndLength(unsigned index) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::Operation::operand_range TileToForallOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> TileToForallOp::getTarget() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
}

::mlir::Operation::operand_range TileToForallOp::getNumThreads() {
  return getODSOperands(1);
}

::mlir::Operation::operand_range TileToForallOp::getTileSizes() {
  return getODSOperands(2);
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> TileToForallOp::getPackedNumThreads() {
  auto operands = getODSOperands(3);
  return operands.empty() ? ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>{} : ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*operands.begin());
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> TileToForallOp::getPackedTileSizes() {
  auto operands = getODSOperands(4);
  return operands.empty() ? ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>{} : ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*operands.begin());
}

::mlir::MutableOperandRange TileToForallOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(0u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange TileToForallOp::getNumThreadsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(1u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange TileToForallOp::getTileSizesMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(2u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange TileToForallOp::getPackedNumThreadsMutable() {
  auto range = getODSOperandIndexAndLength(3);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(3u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange TileToForallOp::getPackedTileSizesMutable() {
  auto range = getODSOperandIndexAndLength(4);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(4u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

std::pair<unsigned, unsigned> TileToForallOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range TileToForallOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> TileToForallOp::getForallOp() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(0).begin());
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> TileToForallOp::getTiledOp() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(1).begin());
}

::mlir::LogicalResult TileToForallOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::mlir::InFlightDiagnostic *diag) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    if (diag)
      *diag << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.mapping;
       auto attr = dict.get("mapping");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for mapping in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `mapping` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.static_num_threads;
       auto attr = dict.get("static_num_threads");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for static_num_threads in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `static_num_threads` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.static_tile_sizes;
       auto attr = dict.get("static_tile_sizes");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for static_tile_sizes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `static_tile_sizes` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
;
    {
      auto setFromAttr = [] (auto &propStorage, ::mlir::Attribute propAttr,
                             ::mlir::InFlightDiagnostic *propDiag) {
        return convertFromAttribute(propStorage, propAttr, propDiag);;
      };
         auto attr = dict.get("operandSegmentSizes");   if (!attr) attr = dict.get("operand_segment_sizes");;
      if (!attr) {
        if (diag)
          *diag << "expected key entry for operandSegmentSizes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      if (::mlir::failed(setFromAttr(prop.operandSegmentSizes, attr, diag)))
        return ::mlir::failure();
    }
  return ::mlir::success();
}

::mlir::Attribute TileToForallOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.mapping;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("mapping",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.static_num_threads;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("static_num_threads",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.static_tile_sizes;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("static_tile_sizes",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.operandSegmentSizes;
      attrs.push_back(odsBuilder.getNamedAttr("operandSegmentSizes",
                                              ::mlir::DenseI32ArrayAttr::get(ctx, propStorage)));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code TileToForallOp::computePropertiesHash(const Properties &prop) {
  auto hash_operandSegmentSizes = [] (const auto &propStorage) -> llvm::hash_code {
    return ::llvm::hash_combine_range(std::begin(propStorage), std::end(propStorage));;
  };
  return llvm::hash_combine(
    llvm::hash_value(prop.mapping.getAsOpaquePointer()), 
    llvm::hash_value(prop.static_num_threads.getAsOpaquePointer()), 
    llvm::hash_value(prop.static_tile_sizes.getAsOpaquePointer()), 
    hash_operandSegmentSizes(prop.operandSegmentSizes));
}

std::optional<mlir::Attribute> TileToForallOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "mapping")
      return prop.mapping;

    if (name == "static_num_threads")
      return prop.static_num_threads;

    if (name == "static_tile_sizes")
      return prop.static_tile_sizes;
    if (name == "operand_segment_sizes" || name == "operandSegmentSizes") return ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes);
  return std::nullopt;
}

void TileToForallOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "mapping") {
       prop.mapping = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.mapping)>>(value);
       return;
    }

    if (name == "static_num_threads") {
       prop.static_num_threads = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.static_num_threads)>>(value);
       return;
    }

    if (name == "static_tile_sizes") {
       prop.static_tile_sizes = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.static_tile_sizes)>>(value);
       return;
    }
        if (name == "operand_segment_sizes" || name == "operandSegmentSizes") {
       auto arrAttr = ::llvm::dyn_cast_or_null<::mlir::DenseI32ArrayAttr>(value);
       if (!arrAttr) return;
       if (arrAttr.size() != sizeof(prop.operandSegmentSizes) / sizeof(int32_t))
         return;
       llvm::copy(arrAttr.asArrayRef(), prop.operandSegmentSizes.begin());
       return;
    }
}

void TileToForallOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.mapping) attrs.append("mapping", prop.mapping);

    if (prop.static_num_threads) attrs.append("static_num_threads", prop.static_num_threads);

    if (prop.static_tile_sizes) attrs.append("static_tile_sizes", prop.static_tile_sizes);
  attrs.append("operandSegmentSizes", ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes));
}

::mlir::LogicalResult TileToForallOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
    {
      ::mlir::Attribute attr = attrs.get(getMappingAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps18(attr, "mapping", getDiag)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getStaticNumThreadsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps4(attr, "static_num_threads", getDiag)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getStaticTileSizesAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps4(attr, "static_tile_sizes", getDiag)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult TileToForallOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.mapping)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.static_num_threads)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.static_tile_sizes)))
    return ::mlir::failure();

  {
    auto &propStorage = prop.operandSegmentSizes;
    auto readProp = [&]() {

if (reader.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
  ::mlir::DenseI32ArrayAttr attr;
  if (::mlir::failed(reader.readAttribute(attr))) return ::mlir::failure();
  if (attr.size() > static_cast<int64_t>(sizeof(propStorage) / sizeof(int32_t))) {
    reader.emitError("size mismatch for operand/result_segment_size");
    return ::mlir::failure();
  }
  llvm::copy(::llvm::ArrayRef<int32_t>(attr), propStorage.begin());
} else {
  return reader.readSparseArray(::llvm::MutableArrayRef(propStorage));
}
;
      return ::mlir::success();
    };
    if (::mlir::failed(readProp()))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void TileToForallOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.mapping);

  writer.writeOptionalAttribute(prop.static_num_threads);

  writer.writeOptionalAttribute(prop.static_tile_sizes);

  {
    auto &propStorage = prop.operandSegmentSizes;

if (writer.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6)
  writer.writeAttribute(::mlir::DenseI32ArrayAttr::get(getContext(), propStorage));
else
  writer.writeSparseArray(::llvm::ArrayRef(propStorage));
;
  }
}

::mlir::DenseI64ArrayAttr TileToForallOp::getStaticNumThreadsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().static_num_threads);
}

::llvm::ArrayRef<int64_t> TileToForallOp::getStaticNumThreads() {
  auto attr = getStaticNumThreadsAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr({});
  return attr;
}

::mlir::DenseI64ArrayAttr TileToForallOp::getStaticTileSizesAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().static_tile_sizes);
}

::llvm::ArrayRef<int64_t> TileToForallOp::getStaticTileSizes() {
  auto attr = getStaticTileSizesAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr({});
  return attr;
}

::mlir::ArrayAttr TileToForallOp::getMappingAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().mapping);
}

::std::optional< ::mlir::ArrayAttr > TileToForallOp::getMapping() {
  auto attr = getMappingAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

void TileToForallOp::setStaticNumThreadsAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getStaticNumThreadsAttrName(), attr);
}

void TileToForallOp::setStaticNumThreads(::std::optional<::llvm::ArrayRef<int64_t>> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getStaticNumThreadsAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(*attrValue));
    (*this)->removeAttr(getStaticNumThreadsAttrName());
}

void TileToForallOp::setStaticTileSizesAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getStaticTileSizesAttrName(), attr);
}

void TileToForallOp::setStaticTileSizes(::std::optional<::llvm::ArrayRef<int64_t>> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getStaticTileSizesAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(*attrValue));
    (*this)->removeAttr(getStaticTileSizesAttrName());
}

void TileToForallOp::setMappingAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getMappingAttrName(), attr);
}

::mlir::Attribute TileToForallOp::removeStaticNumThreadsAttr() {
    auto &attr = getProperties().static_num_threads;
    attr = {};
    return attr;
}

::mlir::Attribute TileToForallOp::removeStaticTileSizesAttr() {
    auto &attr = getProperties().static_tile_sizes;
    attr = {};
    return attr;
}

::mlir::Attribute TileToForallOp::removeMappingAttr() {
    auto &attr = getProperties().mapping;
    attr = {};
    return attr;
}

void TileToForallOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type forall_op, ::mlir::Type tiled_op, ::mlir::Value target, ::mlir::ValueRange num_threads, ::mlir::ValueRange tile_sizes, /*optional*/::mlir::Value packed_num_threads, /*optional*/::mlir::Value packed_tile_sizes, /*optional*/::mlir::DenseI64ArrayAttr static_num_threads, /*optional*/::mlir::DenseI64ArrayAttr static_tile_sizes, /*optional*/::mlir::ArrayAttr mapping) {
  odsState.addOperands(target);
  odsState.addOperands(num_threads);
  odsState.addOperands(tile_sizes);
  if (packed_num_threads)
    odsState.addOperands(packed_num_threads);
  if (packed_tile_sizes)
    odsState.addOperands(packed_tile_sizes);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, static_cast<int32_t>(num_threads.size()), static_cast<int32_t>(tile_sizes.size()), (packed_num_threads ? 1 : 0), (packed_tile_sizes ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (static_num_threads) {
    odsState.getOrAddProperties<Properties>().static_num_threads = static_num_threads;
  }
  if (static_tile_sizes) {
    odsState.getOrAddProperties<Properties>().static_tile_sizes = static_tile_sizes;
  }
  if (mapping) {
    odsState.getOrAddProperties<Properties>().mapping = mapping;
  }
  odsState.addTypes(forall_op);
  odsState.addTypes(tiled_op);
}

void TileToForallOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ValueRange num_threads, ::mlir::ValueRange tile_sizes, /*optional*/::mlir::Value packed_num_threads, /*optional*/::mlir::Value packed_tile_sizes, /*optional*/::mlir::DenseI64ArrayAttr static_num_threads, /*optional*/::mlir::DenseI64ArrayAttr static_tile_sizes, /*optional*/::mlir::ArrayAttr mapping) {
  odsState.addOperands(target);
  odsState.addOperands(num_threads);
  odsState.addOperands(tile_sizes);
  if (packed_num_threads)
    odsState.addOperands(packed_num_threads);
  if (packed_tile_sizes)
    odsState.addOperands(packed_tile_sizes);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, static_cast<int32_t>(num_threads.size()), static_cast<int32_t>(tile_sizes.size()), (packed_num_threads ? 1 : 0), (packed_tile_sizes ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (static_num_threads) {
    odsState.getOrAddProperties<Properties>().static_num_threads = static_num_threads;
  }
  if (static_tile_sizes) {
    odsState.getOrAddProperties<Properties>().static_tile_sizes = static_tile_sizes;
  }
  if (mapping) {
    odsState.getOrAddProperties<Properties>().mapping = mapping;
  }
  assert(resultTypes.size() == 2u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TileToForallOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type forall_op, ::mlir::Type tiled_op, ::mlir::Value target, ::mlir::ValueRange num_threads, ::mlir::ValueRange tile_sizes, /*optional*/::mlir::Value packed_num_threads, /*optional*/::mlir::Value packed_tile_sizes, /*optional*/::llvm::ArrayRef<int64_t> static_num_threads, /*optional*/::llvm::ArrayRef<int64_t> static_tile_sizes, /*optional*/::mlir::ArrayAttr mapping) {
  odsState.addOperands(target);
  odsState.addOperands(num_threads);
  odsState.addOperands(tile_sizes);
  if (packed_num_threads)
    odsState.addOperands(packed_num_threads);
  if (packed_tile_sizes)
    odsState.addOperands(packed_tile_sizes);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, static_cast<int32_t>(num_threads.size()), static_cast<int32_t>(tile_sizes.size()), (packed_num_threads ? 1 : 0), (packed_tile_sizes ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.getOrAddProperties<Properties>().static_num_threads = odsBuilder.getDenseI64ArrayAttr(static_num_threads);
  odsState.getOrAddProperties<Properties>().static_tile_sizes = odsBuilder.getDenseI64ArrayAttr(static_tile_sizes);
  if (mapping) {
    odsState.getOrAddProperties<Properties>().mapping = mapping;
  }
  odsState.addTypes(forall_op);
  odsState.addTypes(tiled_op);
}

void TileToForallOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ValueRange num_threads, ::mlir::ValueRange tile_sizes, /*optional*/::mlir::Value packed_num_threads, /*optional*/::mlir::Value packed_tile_sizes, /*optional*/::llvm::ArrayRef<int64_t> static_num_threads, /*optional*/::llvm::ArrayRef<int64_t> static_tile_sizes, /*optional*/::mlir::ArrayAttr mapping) {
  odsState.addOperands(target);
  odsState.addOperands(num_threads);
  odsState.addOperands(tile_sizes);
  if (packed_num_threads)
    odsState.addOperands(packed_num_threads);
  if (packed_tile_sizes)
    odsState.addOperands(packed_tile_sizes);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, static_cast<int32_t>(num_threads.size()), static_cast<int32_t>(tile_sizes.size()), (packed_num_threads ? 1 : 0), (packed_tile_sizes ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.getOrAddProperties<Properties>().static_num_threads = odsBuilder.getDenseI64ArrayAttr(static_num_threads);
  odsState.getOrAddProperties<Properties>().static_tile_sizes = odsBuilder.getDenseI64ArrayAttr(static_tile_sizes);
  if (mapping) {
    odsState.getOrAddProperties<Properties>().mapping = mapping;
  }
  assert(resultTypes.size() == 2u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TileToForallOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 2u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult TileToForallOp::verifyInvariantsImpl() {
  auto tblgen_mapping = getProperties().mapping; (void)tblgen_mapping;
  auto tblgen_static_num_threads = getProperties().static_num_threads; (void)tblgen_static_num_threads;
  auto tblgen_static_tile_sizes = getProperties().static_tile_sizes; (void)tblgen_static_tile_sizes;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps4(*this, tblgen_static_num_threads, "static_num_threads")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps4(*this, tblgen_static_tile_sizes, "static_tile_sizes")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps18(*this, tblgen_mapping, "mapping")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    if (valueGroup3.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup3.size();
    }

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    if (valueGroup4.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup4.size();
    }

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult TileToForallOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult TileToForallOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(targetRawOperands);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> packed_num_threadsOperands;
  ::llvm::SMLoc packed_num_threadsOperandsLoc;
  (void)packed_num_threadsOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> packed_num_threadsTypes;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> num_threadsOperands;
  ::llvm::SMLoc num_threadsOperandsLoc;
  (void)num_threadsOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> num_threadsTypes;
  ::mlir::DenseI64ArrayAttr static_num_threadsAttr;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> packed_tile_sizesOperands;
  ::llvm::SMLoc packed_tile_sizesOperandsLoc;
  (void)packed_tile_sizesOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> packed_tile_sizesTypes;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> tile_sizesOperands;
  ::llvm::SMLoc tile_sizesOperandsLoc;
  (void)tile_sizesOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> tile_sizesTypes;
  ::mlir::DenseI64ArrayAttr static_tile_sizesAttr;
  ::mlir::ArrayAttr mappingAttr;
  ::llvm::ArrayRef<::mlir::Type> targetTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperands[0]))
    return ::mlir::failure();
  bool num_threadsClause = false;
  bool tile_sizesClause = false;
  while(true) {
if (succeeded(parser.parseOptionalKeyword("num_threads"))) {

  if (num_threadsClause) {
    return parser.emitError(parser.getNameLoc())
          << "`num_threads` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  num_threadsClause = true;
  {
    packed_num_threadsOperandsLoc = parser.getCurrentLocation();
    ::std::optional<::mlir::OpAsmParser::UnresolvedOperand> packed_num_threadsOperand;
    ::mlir::Type packed_num_threadsType;
    num_threadsOperandsLoc = parser.getCurrentLocation();
    if (parsePackedOrDynamicIndexList(parser, packed_num_threadsOperand, packed_num_threadsType, num_threadsOperands, num_threadsTypes, static_num_threadsAttr))
      return ::mlir::failure();
    if (packed_num_threadsOperand.has_value())
      packed_num_threadsOperands.push_back(*packed_num_threadsOperand);
    if (packed_num_threadsType)
      packed_num_threadsTypes.push_back(packed_num_threadsType);
    if (static_num_threadsAttr)
      result.getOrAddProperties<TileToForallOp::Properties>().static_num_threads = static_num_threadsAttr;
  }
    } else if (succeeded(parser.parseOptionalKeyword("tile_sizes"))) {

  if (tile_sizesClause) {
    return parser.emitError(parser.getNameLoc())
          << "`tile_sizes` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  tile_sizesClause = true;
  {
    packed_tile_sizesOperandsLoc = parser.getCurrentLocation();
    ::std::optional<::mlir::OpAsmParser::UnresolvedOperand> packed_tile_sizesOperand;
    ::mlir::Type packed_tile_sizesType;
    tile_sizesOperandsLoc = parser.getCurrentLocation();
    if (parsePackedOrDynamicIndexList(parser, packed_tile_sizesOperand, packed_tile_sizesType, tile_sizesOperands, tile_sizesTypes, static_tile_sizesAttr))
      return ::mlir::failure();
    if (packed_tile_sizesOperand.has_value())
      packed_tile_sizesOperands.push_back(*packed_tile_sizesOperand);
    if (packed_tile_sizesType)
      packed_tile_sizesTypes.push_back(packed_tile_sizesType);
    if (static_tile_sizesAttr)
      result.getOrAddProperties<TileToForallOp::Properties>().static_tile_sizes = static_tile_sizesAttr;
  }
    } else  {
    break;
  }
}
  if (::mlir::succeeded(parser.parseOptionalLParen())) {
  if (parser.parseKeyword("mapping"))
    return ::mlir::failure();
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(mappingAttr, parser.getBuilder().getType<::mlir::NoneType>())) {
    return ::mlir::failure();
  }
  if (mappingAttr) result.getOrAddProperties<TileToForallOp::Properties>().mapping = mappingAttr;
  if (parser.parseRParen())
    return ::mlir::failure();
  }
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType target__allResult_functionType;
  if (parser.parseType(target__allResult_functionType))
    return ::mlir::failure();
  targetTypes = target__allResult_functionType.getInputs();
  allResultTypes = target__allResult_functionType.getResults();
::llvm::copy(::llvm::ArrayRef<int32_t>({1, static_cast<int32_t>(num_threadsOperands.size()), static_cast<int32_t>(tile_sizesOperands.size()), static_cast<int32_t>(packed_num_threadsOperands.size()), static_cast<int32_t>(packed_tile_sizesOperands.size())}), result.getOrAddProperties<TileToForallOp::Properties>().operandSegmentSizes.begin());
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(targetOperands, targetTypes, targetOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(num_threadsOperands, num_threadsTypes, num_threadsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(tile_sizesOperands, tile_sizesTypes, tile_sizesOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(packed_num_threadsOperands, packed_num_threadsTypes, packed_num_threadsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(packed_tile_sizesOperands, packed_tile_sizesTypes, packed_tile_sizesOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void TileToForallOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  _odsPrinter << ' ' << " ";
  if (false || getPackedNumThreads() || getNumThreads().size() || getStaticNumThreadsAttr()) {
  _odsPrinter << ' ' << "num_threads";
  _odsPrinter << ' ';
  printPackedOrDynamicIndexList(_odsPrinter, *this, getPackedNumThreads(), (getPackedNumThreads() ? getPackedNumThreads().getType() : ::mlir::Type()), getNumThreads(), getNumThreads().getTypes(), getStaticNumThreadsAttr());
  }
  if (false || getPackedTileSizes() || getTileSizes().size() || getStaticTileSizesAttr()) {
  _odsPrinter << ' ' << "tile_sizes";
  _odsPrinter << ' ';
  printPackedOrDynamicIndexList(_odsPrinter, *this, getPackedTileSizes(), (getPackedTileSizes() ? getPackedTileSizes().getType() : ::mlir::Type()), getTileSizes(), getTileSizes().getTypes(), getStaticTileSizesAttr());
  }
  if (getMappingAttr()) {
    _odsPrinter << "(";
    _odsPrinter << "mapping";
    _odsPrinter << ' ' << "=";
    _odsPrinter << ' ';
    _odsPrinter.printAttributeWithoutType(getMappingAttr());
    _odsPrinter << ")";
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("operandSegmentSizes");
  elidedAttrs.push_back("static_num_threads");
  elidedAttrs.push_back("static_tile_sizes");
  elidedAttrs.push_back("mapping");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getStaticNumThreadsAttr();
     if(attr && (attr == odsBuilder.getDenseI64ArrayAttr({})))
       elidedAttrs.push_back("static_num_threads");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getStaticTileSizesAttr();
     if(attr && (attr == odsBuilder.getDenseI64ArrayAttr({})))
       elidedAttrs.push_back("static_tile_sizes");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(::llvm::ArrayRef<::mlir::Type>(getTarget().getType()), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::TileToForallOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::TileToScfForOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
TileToScfForOpGenericAdaptorBase::TileToScfForOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.structured.tile_to_scf_for", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> TileToScfForOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperandsSize - 1) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::DictionaryAttr TileToScfForOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::DenseI64ArrayAttr TileToScfForOpGenericAdaptorBase::getStaticSizesAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().static_sizes);
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getDenseI64ArrayAttr({});
  return attr;
}

::llvm::ArrayRef<int64_t> TileToScfForOpGenericAdaptorBase::getStaticSizes() {
  auto attr = getStaticSizesAttr();
    if (!attr)
      return ::mlir::Builder(odsAttrs.getContext()).getDenseI64ArrayAttr({});
  return attr;
}

::mlir::DenseI64ArrayAttr TileToScfForOpGenericAdaptorBase::getInterchangeAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().interchange);
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getDenseI64ArrayAttr({});
  return attr;
}

::llvm::ArrayRef<int64_t> TileToScfForOpGenericAdaptorBase::getInterchange() {
  auto attr = getInterchangeAttr();
    if (!attr)
      return ::mlir::Builder(odsAttrs.getContext()).getDenseI64ArrayAttr({});
  return attr;
}

} // namespace detail
TileToScfForOpAdaptor::TileToScfForOpAdaptor(TileToScfForOp op) : TileToScfForOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult TileToScfForOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_interchange = getProperties().interchange; (void)tblgen_interchange;
  auto tblgen_static_sizes = getProperties().static_sizes; (void)tblgen_static_sizes;

  if (tblgen_static_sizes && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_static_sizes))))
    return emitError(loc, "'transform.structured.tile_to_scf_for' op ""attribute 'static_sizes' failed to satisfy constraint: i64 dense array attribute");

  if (tblgen_interchange && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_interchange))))
    return emitError(loc, "'transform.structured.tile_to_scf_for' op ""attribute 'interchange' failed to satisfy constraint: i64 dense array attribute");
  return ::mlir::success();
}

void TileToScfForOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "tiled_linalg_op");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "loops");
}

std::pair<unsigned, unsigned> TileToScfForOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 1) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range TileToScfForOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> TileToScfForOp::getTarget() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
}

::mlir::Operation::operand_range TileToScfForOp::getDynamicSizes() {
  return getODSOperands(1);
}

::mlir::MutableOperandRange TileToScfForOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::mlir::MutableOperandRange TileToScfForOp::getDynamicSizesMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> TileToScfForOp::getODSResultIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumResults() - 1) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::result_range TileToScfForOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> TileToScfForOp::getTiledLinalgOp() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(0).begin());
}

::mlir::Operation::result_range TileToScfForOp::getLoops() {
  return getODSResults(1);
}

::mlir::LogicalResult TileToScfForOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::mlir::InFlightDiagnostic *diag) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    if (diag)
      *diag << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.interchange;
       auto attr = dict.get("interchange");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for interchange in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `interchange` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.static_sizes;
       auto attr = dict.get("static_sizes");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for static_sizes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `static_sizes` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute TileToScfForOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.interchange;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("interchange",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.static_sizes;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("static_sizes",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code TileToScfForOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.interchange.getAsOpaquePointer()), 
    llvm::hash_value(prop.static_sizes.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> TileToScfForOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "interchange")
      return prop.interchange;

    if (name == "static_sizes")
      return prop.static_sizes;
  return std::nullopt;
}

void TileToScfForOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "interchange") {
       prop.interchange = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.interchange)>>(value);
       return;
    }

    if (name == "static_sizes") {
       prop.static_sizes = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.static_sizes)>>(value);
       return;
    }
}

void TileToScfForOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.interchange) attrs.append("interchange", prop.interchange);

    if (prop.static_sizes) attrs.append("static_sizes", prop.static_sizes);
}

::mlir::LogicalResult TileToScfForOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
    {
      ::mlir::Attribute attr = attrs.get(getInterchangeAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps4(attr, "interchange", getDiag)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getStaticSizesAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps4(attr, "static_sizes", getDiag)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult TileToScfForOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.interchange)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.static_sizes)))
    return ::mlir::failure();
  return ::mlir::success();
}

void TileToScfForOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.interchange);

  writer.writeOptionalAttribute(prop.static_sizes);
}

::mlir::DenseI64ArrayAttr TileToScfForOp::getStaticSizesAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().static_sizes);
}

::llvm::ArrayRef<int64_t> TileToScfForOp::getStaticSizes() {
  auto attr = getStaticSizesAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr({});
  return attr;
}

::mlir::DenseI64ArrayAttr TileToScfForOp::getInterchangeAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().interchange);
}

::llvm::ArrayRef<int64_t> TileToScfForOp::getInterchange() {
  auto attr = getInterchangeAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr({});
  return attr;
}

void TileToScfForOp::setStaticSizesAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getStaticSizesAttrName(), attr);
}

void TileToScfForOp::setStaticSizes(::std::optional<::llvm::ArrayRef<int64_t>> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getStaticSizesAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(*attrValue));
    (*this)->removeAttr(getStaticSizesAttrName());
}

void TileToScfForOp::setInterchangeAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getInterchangeAttrName(), attr);
}

void TileToScfForOp::setInterchange(::std::optional<::llvm::ArrayRef<int64_t>> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getInterchangeAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(*attrValue));
    (*this)->removeAttr(getInterchangeAttrName());
}

::mlir::Attribute TileToScfForOp::removeStaticSizesAttr() {
    auto &attr = getProperties().static_sizes;
    attr = {};
    return attr;
}

::mlir::Attribute TileToScfForOp::removeInterchangeAttr() {
    auto &attr = getProperties().interchange;
    attr = {};
    return attr;
}

void TileToScfForOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type tiled_linalg_op, ::mlir::TypeRange loops, ::mlir::Value target, ::mlir::ValueRange dynamic_sizes, /*optional*/::mlir::DenseI64ArrayAttr static_sizes, /*optional*/::mlir::DenseI64ArrayAttr interchange) {
  odsState.addOperands(target);
  odsState.addOperands(dynamic_sizes);
  if (static_sizes) {
    odsState.getOrAddProperties<Properties>().static_sizes = static_sizes;
  }
  if (interchange) {
    odsState.getOrAddProperties<Properties>().interchange = interchange;
  }
  odsState.addTypes(tiled_linalg_op);
  odsState.addTypes(loops);
}

void TileToScfForOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ValueRange dynamic_sizes, /*optional*/::mlir::DenseI64ArrayAttr static_sizes, /*optional*/::mlir::DenseI64ArrayAttr interchange) {
  odsState.addOperands(target);
  odsState.addOperands(dynamic_sizes);
  if (static_sizes) {
    odsState.getOrAddProperties<Properties>().static_sizes = static_sizes;
  }
  if (interchange) {
    odsState.getOrAddProperties<Properties>().interchange = interchange;
  }
  assert(resultTypes.size() >= 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TileToScfForOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type tiled_linalg_op, ::mlir::TypeRange loops, ::mlir::Value target, ::mlir::ValueRange dynamic_sizes, /*optional*/::llvm::ArrayRef<int64_t> static_sizes, /*optional*/::llvm::ArrayRef<int64_t> interchange) {
  odsState.addOperands(target);
  odsState.addOperands(dynamic_sizes);
  odsState.getOrAddProperties<Properties>().static_sizes = odsBuilder.getDenseI64ArrayAttr(static_sizes);
  odsState.getOrAddProperties<Properties>().interchange = odsBuilder.getDenseI64ArrayAttr(interchange);
  odsState.addTypes(tiled_linalg_op);
  odsState.addTypes(loops);
}

void TileToScfForOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ValueRange dynamic_sizes, /*optional*/::llvm::ArrayRef<int64_t> static_sizes, /*optional*/::llvm::ArrayRef<int64_t> interchange) {
  odsState.addOperands(target);
  odsState.addOperands(dynamic_sizes);
  odsState.getOrAddProperties<Properties>().static_sizes = odsBuilder.getDenseI64ArrayAttr(static_sizes);
  odsState.getOrAddProperties<Properties>().interchange = odsBuilder.getDenseI64ArrayAttr(interchange);
  assert(resultTypes.size() >= 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TileToScfForOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() >= 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult TileToScfForOp::verifyInvariantsImpl() {
  auto tblgen_interchange = getProperties().interchange; (void)tblgen_interchange;
  auto tblgen_static_sizes = getProperties().static_sizes; (void)tblgen_static_sizes;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps4(*this, tblgen_static_sizes, "static_sizes")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps4(*this, tblgen_interchange, "interchange")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult TileToScfForOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::TileToScfForOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::VectorizeOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
VectorizeOpGenericAdaptorBase::VectorizeOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.structured.vectorize", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> VectorizeOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr VectorizeOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::UnitAttr VectorizeOpGenericAdaptorBase::getVectorizePaddingAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().vectorize_padding);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool VectorizeOpGenericAdaptorBase::getVectorizePadding() {
  auto attr = getVectorizePaddingAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::UnitAttr VectorizeOpGenericAdaptorBase::getVectorizeNdExtractAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().vectorize_nd_extract);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool VectorizeOpGenericAdaptorBase::getVectorizeNdExtract() {
  auto attr = getVectorizeNdExtractAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::UnitAttr VectorizeOpGenericAdaptorBase::getDisableMultiReductionToContractPatternsAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().disable_multi_reduction_to_contract_patterns);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool VectorizeOpGenericAdaptorBase::getDisableMultiReductionToContractPatterns() {
  auto attr = getDisableMultiReductionToContractPatternsAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::UnitAttr VectorizeOpGenericAdaptorBase::getDisableTransferPermutationMapLoweringPatternsAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().disable_transfer_permutation_map_lowering_patterns);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool VectorizeOpGenericAdaptorBase::getDisableTransferPermutationMapLoweringPatterns() {
  auto attr = getDisableTransferPermutationMapLoweringPatternsAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

} // namespace detail
VectorizeOpAdaptor::VectorizeOpAdaptor(VectorizeOp op) : VectorizeOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult VectorizeOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_disable_multi_reduction_to_contract_patterns = getProperties().disable_multi_reduction_to_contract_patterns; (void)tblgen_disable_multi_reduction_to_contract_patterns;
  auto tblgen_disable_transfer_permutation_map_lowering_patterns = getProperties().disable_transfer_permutation_map_lowering_patterns; (void)tblgen_disable_transfer_permutation_map_lowering_patterns;
  auto tblgen_vectorize_nd_extract = getProperties().vectorize_nd_extract; (void)tblgen_vectorize_nd_extract;
  auto tblgen_vectorize_padding = getProperties().vectorize_padding; (void)tblgen_vectorize_padding;

  if (tblgen_vectorize_padding && !((::llvm::isa<::mlir::UnitAttr>(tblgen_vectorize_padding))))
    return emitError(loc, "'transform.structured.vectorize' op ""attribute 'vectorize_padding' failed to satisfy constraint: unit attribute");

  if (tblgen_vectorize_nd_extract && !((::llvm::isa<::mlir::UnitAttr>(tblgen_vectorize_nd_extract))))
    return emitError(loc, "'transform.structured.vectorize' op ""attribute 'vectorize_nd_extract' failed to satisfy constraint: unit attribute");

  if (tblgen_disable_multi_reduction_to_contract_patterns && !((::llvm::isa<::mlir::UnitAttr>(tblgen_disable_multi_reduction_to_contract_patterns))))
    return emitError(loc, "'transform.structured.vectorize' op ""attribute 'disable_multi_reduction_to_contract_patterns' failed to satisfy constraint: unit attribute");

  if (tblgen_disable_transfer_permutation_map_lowering_patterns && !((::llvm::isa<::mlir::UnitAttr>(tblgen_disable_transfer_permutation_map_lowering_patterns))))
    return emitError(loc, "'transform.structured.vectorize' op ""attribute 'disable_transfer_permutation_map_lowering_patterns' failed to satisfy constraint: unit attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> VectorizeOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range VectorizeOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> VectorizeOp::getTarget() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
}

::mlir::MutableOperandRange VectorizeOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> VectorizeOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range VectorizeOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> VectorizeOp::getTransformed() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(0).begin());
}

::mlir::LogicalResult VectorizeOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::mlir::InFlightDiagnostic *diag) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    if (diag)
      *diag << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.disable_multi_reduction_to_contract_patterns;
       auto attr = dict.get("disable_multi_reduction_to_contract_patterns");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for disable_multi_reduction_to_contract_patterns in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `disable_multi_reduction_to_contract_patterns` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.disable_transfer_permutation_map_lowering_patterns;
       auto attr = dict.get("disable_transfer_permutation_map_lowering_patterns");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for disable_transfer_permutation_map_lowering_patterns in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `disable_transfer_permutation_map_lowering_patterns` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.vectorize_nd_extract;
       auto attr = dict.get("vectorize_nd_extract");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for vectorize_nd_extract in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `vectorize_nd_extract` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.vectorize_padding;
       auto attr = dict.get("vectorize_padding");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        if (diag)
          *diag << "expected key entry for vectorize_padding in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        if (diag)
          *diag << "Invalid attribute `vectorize_padding` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute VectorizeOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.disable_multi_reduction_to_contract_patterns;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("disable_multi_reduction_to_contract_patterns",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.disable_transfer_permutation_map_lowering_patterns;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("disable_transfer_permutation_map_lowering_patterns",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.vectorize_nd_extract;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("vectorize_nd_extract",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.vectorize_padding;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("vectorize_padding",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code VectorizeOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.disable_multi_reduction_to_contract_patterns.getAsOpaquePointer()), 
    llvm::hash_value(prop.disable_transfer_permutation_map_lowering_patterns.getAsOpaquePointer()), 
    llvm::hash_value(prop.vectorize_nd_extract.getAsOpaquePointer()), 
    llvm::hash_value(prop.vectorize_padding.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> VectorizeOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "disable_multi_reduction_to_contract_patterns")
      return prop.disable_multi_reduction_to_contract_patterns;

    if (name == "disable_transfer_permutation_map_lowering_patterns")
      return prop.disable_transfer_permutation_map_lowering_patterns;

    if (name == "vectorize_nd_extract")
      return prop.vectorize_nd_extract;

    if (name == "vectorize_padding")
      return prop.vectorize_padding;
  return std::nullopt;
}

void VectorizeOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "disable_multi_reduction_to_contract_patterns") {
       prop.disable_multi_reduction_to_contract_patterns = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.disable_multi_reduction_to_contract_patterns)>>(value);
       return;
    }

    if (name == "disable_transfer_permutation_map_lowering_patterns") {
       prop.disable_transfer_permutation_map_lowering_patterns = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.disable_transfer_permutation_map_lowering_patterns)>>(value);
       return;
    }

    if (name == "vectorize_nd_extract") {
       prop.vectorize_nd_extract = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.vectorize_nd_extract)>>(value);
       return;
    }

    if (name == "vectorize_padding") {
       prop.vectorize_padding = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.vectorize_padding)>>(value);
       return;
    }
}

void VectorizeOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.disable_multi_reduction_to_contract_patterns) attrs.append("disable_multi_reduction_to_contract_patterns", prop.disable_multi_reduction_to_contract_patterns);

    if (prop.disable_transfer_permutation_map_lowering_patterns) attrs.append("disable_transfer_permutation_map_lowering_patterns", prop.disable_transfer_permutation_map_lowering_patterns);

    if (prop.vectorize_nd_extract) attrs.append("vectorize_nd_extract", prop.vectorize_nd_extract);

    if (prop.vectorize_padding) attrs.append("vectorize_padding", prop.vectorize_padding);
}

::mlir::LogicalResult VectorizeOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
    {
      ::mlir::Attribute attr = attrs.get(getDisableMultiReductionToContractPatternsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps2(attr, "disable_multi_reduction_to_contract_patterns", getDiag)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getDisableTransferPermutationMapLoweringPatternsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps2(attr, "disable_transfer_permutation_map_lowering_patterns", getDiag)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getVectorizeNdExtractAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps2(attr, "vectorize_nd_extract", getDiag)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getVectorizePaddingAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps2(attr, "vectorize_padding", getDiag)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult VectorizeOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.disable_multi_reduction_to_contract_patterns)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.disable_transfer_permutation_map_lowering_patterns)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.vectorize_nd_extract)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.vectorize_padding)))
    return ::mlir::failure();
  return ::mlir::success();
}

void VectorizeOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.disable_multi_reduction_to_contract_patterns);

  writer.writeOptionalAttribute(prop.disable_transfer_permutation_map_lowering_patterns);

  writer.writeOptionalAttribute(prop.vectorize_nd_extract);

  writer.writeOptionalAttribute(prop.vectorize_padding);
}

::mlir::UnitAttr VectorizeOp::getVectorizePaddingAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().vectorize_padding);
}

bool VectorizeOp::getVectorizePadding() {
  auto attr = getVectorizePaddingAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::UnitAttr VectorizeOp::getVectorizeNdExtractAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().vectorize_nd_extract);
}

bool VectorizeOp::getVectorizeNdExtract() {
  auto attr = getVectorizeNdExtractAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::UnitAttr VectorizeOp::getDisableMultiReductionToContractPatternsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().disable_multi_reduction_to_contract_patterns);
}

bool VectorizeOp::getDisableMultiReductionToContractPatterns() {
  auto attr = getDisableMultiReductionToContractPatternsAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::UnitAttr VectorizeOp::getDisableTransferPermutationMapLoweringPatternsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().disable_transfer_permutation_map_lowering_patterns);
}

bool VectorizeOp::getDisableTransferPermutationMapLoweringPatterns() {
  auto attr = getDisableTransferPermutationMapLoweringPatternsAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

void VectorizeOp::setVectorizePaddingAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getVectorizePaddingAttrName(), attr);
}

void VectorizeOp::setVectorizePadding(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getVectorizePaddingAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getVectorizePaddingAttrName());
}

void VectorizeOp::setVectorizeNdExtractAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getVectorizeNdExtractAttrName(), attr);
}

void VectorizeOp::setVectorizeNdExtract(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getVectorizeNdExtractAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getVectorizeNdExtractAttrName());
}

void VectorizeOp::setDisableMultiReductionToContractPatternsAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getDisableMultiReductionToContractPatternsAttrName(), attr);
}

void VectorizeOp::setDisableMultiReductionToContractPatterns(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getDisableMultiReductionToContractPatternsAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getDisableMultiReductionToContractPatternsAttrName());
}

void VectorizeOp::setDisableTransferPermutationMapLoweringPatternsAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getDisableTransferPermutationMapLoweringPatternsAttrName(), attr);
}

void VectorizeOp::setDisableTransferPermutationMapLoweringPatterns(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getDisableTransferPermutationMapLoweringPatternsAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getDisableTransferPermutationMapLoweringPatternsAttrName());
}

::mlir::Attribute VectorizeOp::removeVectorizePaddingAttr() {
    auto &attr = getProperties().vectorize_padding;
    attr = {};
    return attr;
}

::mlir::Attribute VectorizeOp::removeVectorizeNdExtractAttr() {
    auto &attr = getProperties().vectorize_nd_extract;
    attr = {};
    return attr;
}

::mlir::Attribute VectorizeOp::removeDisableMultiReductionToContractPatternsAttr() {
    auto &attr = getProperties().disable_multi_reduction_to_contract_patterns;
    attr = {};
    return attr;
}

::mlir::Attribute VectorizeOp::removeDisableTransferPermutationMapLoweringPatternsAttr() {
    auto &attr = getProperties().disable_transfer_permutation_map_lowering_patterns;
    attr = {};
    return attr;
}

void VectorizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, /*optional*/::mlir::UnitAttr vectorize_padding, /*optional*/::mlir::UnitAttr vectorize_nd_extract, /*optional*/::mlir::UnitAttr disable_multi_reduction_to_contract_patterns, /*optional*/::mlir::UnitAttr disable_transfer_permutation_map_lowering_patterns) {
  odsState.addOperands(target);
  if (vectorize_padding) {
    odsState.getOrAddProperties<Properties>().vectorize_padding = vectorize_padding;
  }
  if (vectorize_nd_extract) {
    odsState.getOrAddProperties<Properties>().vectorize_nd_extract = vectorize_nd_extract;
  }
  if (disable_multi_reduction_to_contract_patterns) {
    odsState.getOrAddProperties<Properties>().disable_multi_reduction_to_contract_patterns = disable_multi_reduction_to_contract_patterns;
  }
  if (disable_transfer_permutation_map_lowering_patterns) {
    odsState.getOrAddProperties<Properties>().disable_transfer_permutation_map_lowering_patterns = disable_transfer_permutation_map_lowering_patterns;
  }
  odsState.addTypes(transformed);
}

void VectorizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, /*optional*/::mlir::UnitAttr vectorize_padding, /*optional*/::mlir::UnitAttr vectorize_nd_extract, /*optional*/::mlir::UnitAttr disable_multi_reduction_to_contract_patterns, /*optional*/::mlir::UnitAttr disable_transfer_permutation_map_lowering_patterns) {
  odsState.addOperands(target);
  if (vectorize_padding) {
    odsState.getOrAddProperties<Properties>().vectorize_padding = vectorize_padding;
  }
  if (vectorize_nd_extract) {
    odsState.getOrAddProperties<Properties>().vectorize_nd_extract = vectorize_nd_extract;
  }
  if (disable_multi_reduction_to_contract_patterns) {
    odsState.getOrAddProperties<Properties>().disable_multi_reduction_to_contract_patterns = disable_multi_reduction_to_contract_patterns;
  }
  if (disable_transfer_permutation_map_lowering_patterns) {
    odsState.getOrAddProperties<Properties>().disable_transfer_permutation_map_lowering_patterns = disable_transfer_permutation_map_lowering_patterns;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void VectorizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, /*optional*/bool vectorize_padding, /*optional*/bool vectorize_nd_extract, /*optional*/bool disable_multi_reduction_to_contract_patterns, /*optional*/bool disable_transfer_permutation_map_lowering_patterns) {
  odsState.addOperands(target);
  if (vectorize_padding) {
    odsState.getOrAddProperties<Properties>().vectorize_padding = ((vectorize_padding) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (vectorize_nd_extract) {
    odsState.getOrAddProperties<Properties>().vectorize_nd_extract = ((vectorize_nd_extract) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (disable_multi_reduction_to_contract_patterns) {
    odsState.getOrAddProperties<Properties>().disable_multi_reduction_to_contract_patterns = ((disable_multi_reduction_to_contract_patterns) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (disable_transfer_permutation_map_lowering_patterns) {
    odsState.getOrAddProperties<Properties>().disable_transfer_permutation_map_lowering_patterns = ((disable_transfer_permutation_map_lowering_patterns) ? odsBuilder.getUnitAttr() : nullptr);
  }
  odsState.addTypes(transformed);
}

void VectorizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, /*optional*/bool vectorize_padding, /*optional*/bool vectorize_nd_extract, /*optional*/bool disable_multi_reduction_to_contract_patterns, /*optional*/bool disable_transfer_permutation_map_lowering_patterns) {
  odsState.addOperands(target);
  if (vectorize_padding) {
    odsState.getOrAddProperties<Properties>().vectorize_padding = ((vectorize_padding) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (vectorize_nd_extract) {
    odsState.getOrAddProperties<Properties>().vectorize_nd_extract = ((vectorize_nd_extract) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (disable_multi_reduction_to_contract_patterns) {
    odsState.getOrAddProperties<Properties>().disable_multi_reduction_to_contract_patterns = ((disable_multi_reduction_to_contract_patterns) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (disable_transfer_permutation_map_lowering_patterns) {
    odsState.getOrAddProperties<Properties>().disable_transfer_permutation_map_lowering_patterns = ((disable_transfer_permutation_map_lowering_patterns) ? odsBuilder.getUnitAttr() : nullptr);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void VectorizeOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult VectorizeOp::verifyInvariantsImpl() {
  auto tblgen_disable_multi_reduction_to_contract_patterns = getProperties().disable_multi_reduction_to_contract_patterns; (void)tblgen_disable_multi_reduction_to_contract_patterns;
  auto tblgen_disable_transfer_permutation_map_lowering_patterns = getProperties().disable_transfer_permutation_map_lowering_patterns; (void)tblgen_disable_transfer_permutation_map_lowering_patterns;
  auto tblgen_vectorize_nd_extract = getProperties().vectorize_nd_extract; (void)tblgen_vectorize_nd_extract;
  auto tblgen_vectorize_padding = getProperties().vectorize_padding; (void)tblgen_vectorize_padding;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps2(*this, tblgen_vectorize_padding, "vectorize_padding")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps2(*this, tblgen_vectorize_nd_extract, "vectorize_nd_extract")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps2(*this, tblgen_disable_multi_reduction_to_contract_patterns, "disable_multi_reduction_to_contract_patterns")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps2(*this, tblgen_disable_transfer_permutation_map_lowering_patterns, "disable_transfer_permutation_map_lowering_patterns")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult VectorizeOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult VectorizeOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(targetRawOperands);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(targetOperands, allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void VectorizeOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getVectorizePaddingAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("vectorize_padding");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getVectorizeNdExtractAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("vectorize_nd_extract");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getDisableMultiReductionToContractPatternsAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("disable_multi_reduction_to_contract_patterns");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getDisableTransferPermutationMapLoweringPatternsAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("disable_transfer_permutation_map_lowering_patterns");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::VectorizeOp)


#endif  // GET_OP_CLASSES

