/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

hlfir::AssignOp,
hlfir::AllOp,
hlfir::AnyOp,
hlfir::ApplyOp,
hlfir::AsExprOp,
hlfir::AssociateOp,
hlfir::CharExtremumOp,
hlfir::ConcatOp,
hlfir::CopyInOp,
hlfir::CopyOutOp,
hlfir::CountOp,
hlfir::DeclareOp,
hlfir::DesignateOp,
hlfir::DestroyOp,
hlfir::DotProductOp,
hlfir::ElementalAddrOp,
hlfir::ElementalOp,
hlfir::ElseWhereOp,
hlfir::EndAssociateOp,
hlfir::ForallIndexOp,
hlfir::ForallMaskOp,
hlfir::ForallOp,
hlfir::GetExtentOp,
hlfir::GetLengthOp,
hlfir::MatmulOp,
hlfir::MatmulTransposeOp,
hlfir::NoReassocOp,
hlfir::NullOp,
hlfir::ParentComponentOp,
hlfir::ProductOp,
hlfir::RegionAssignOp,
hlfir::SetLengthOp,
hlfir::ShapeOfOp,
hlfir::SumOp,
hlfir::TransposeOp,
hlfir::WhereOp,
hlfir::YieldElementOp,
hlfir::YieldOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace hlfir {

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_HLFIROps0(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::hlfir::isFortranVariableType(type))) || (((((type.isSignlessInteger(1))) || ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(1)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) || (((::llvm::isa<::mlir::TensorType>(type))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(1)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) || ((::llvm::isa<::fir::LogicalType>(type)))) || ((((type.isSignlessIntOrIndex())) || ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return (elementType.isSignlessIntOrIndex()); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) || (((::llvm::isa<::mlir::TensorType>(type))) && ([](::mlir::Type elementType) { return (elementType.isSignlessIntOrIndex()); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) || ((type.isSignedInteger())) || ((::llvm::isa<::fir::IntegerType>(type)))) || ((((::llvm::isa<::mlir::FloatType>(type))) || ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return (::llvm::isa<::mlir::FloatType>(elementType)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) || (((::llvm::isa<::mlir::TensorType>(type))) && ([](::mlir::Type elementType) { return (::llvm::isa<::mlir::FloatType>(elementType)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) || ((::llvm::isa<::fir::RealType>(type)))) || ((::llvm::isa<::fir::ComplexType>(type))) || ((::llvm::isa<::mlir::ComplexType>(type))) || ((::llvm::isa<hlfir::ExprType>(type)))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be any Fortran value or variable type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_HLFIROps1(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::hlfir::isFortranVariableType(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be any HLFIR variable type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_HLFIROps2(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::hlfir::isFortranLogicalArrayObject(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be any array-like object containing logicals, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_HLFIROps3(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((((type.isSignlessIntOrIndex())) || ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return (elementType.isSignlessIntOrIndex()); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) || (((::llvm::isa<::mlir::TensorType>(type))) && ([](::mlir::Type elementType) { return (elementType.isSignlessIntOrIndex()); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) || ((type.isSignedInteger())) || ((::llvm::isa<::fir::IntegerType>(type))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be any integer, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_HLFIROps4(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((((type.isSignlessInteger(1))) || ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(1)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) || (((::llvm::isa<::mlir::TensorType>(type))) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(1)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) || ((::llvm::isa<::fir::LogicalType>(type)))) || ((((type.isSignlessIntOrIndex())) || ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return (elementType.isSignlessIntOrIndex()); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) || (((::llvm::isa<::mlir::TensorType>(type))) && ([](::mlir::Type elementType) { return (elementType.isSignlessIntOrIndex()); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) || ((type.isSignedInteger())) || ((::llvm::isa<::fir::IntegerType>(type)))) || ((((::llvm::isa<::mlir::FloatType>(type))) || ((((::llvm::isa<::mlir::VectorType>(type))) && ((::llvm::cast<::mlir::VectorType>(type).getRank() > 0))) && ([](::mlir::Type elementType) { return (::llvm::isa<::mlir::FloatType>(elementType)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType()))) || (((::llvm::isa<::mlir::TensorType>(type))) && ([](::mlir::Type elementType) { return (::llvm::isa<::mlir::FloatType>(elementType)); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) || ((::llvm::isa<::fir::RealType>(type)))) || ((::llvm::isa<::fir::ComplexType>(type))) || ((::llvm::isa<::mlir::ComplexType>(type))) || ((::llvm::isa<hlfir::ExprType>(type))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be any Fortran value type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_HLFIROps5(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<hlfir::ExprType>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be The type of an array, character, or derived type Fortran expression, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_HLFIROps6(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::IndexType>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be index, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_HLFIROps7(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((type.isSignlessInteger(1)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be 1-bit signless integer, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_HLFIROps8(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::fir::ShapeType>(type))) || ((::llvm::isa<::fir::ShapeShiftType>(type))) || ((::llvm::isa<::fir::ShiftType>(type))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be any legal shape or shift type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_HLFIROps9(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((((::llvm::isa<::fir::ReferenceType>(type))) || ((::llvm::isa<::fir::HeapType>(type))) || ((::llvm::isa<::fir::PointerType>(type))) || ((::llvm::isa<::fir::LLVMPointerType>(type)))) || (((::llvm::isa<::fir::BoxType>(type))) || ((::llvm::isa<::fir::BoxCharType>(type))) || ((::llvm::isa<::fir::BoxProcType>(type))) || ((::llvm::isa<::fir::ClassType>(type)))) || ((::llvm::isa<::mlir::FunctionType>(type))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be any reference or box like, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_HLFIROps10(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::hlfir::isFortranScalarCharacterType(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be any character scalar type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_HLFIROps11(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::hlfir::isFortranScalarCharacterExprType(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be any character scalar expression type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_HLFIROps12(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((type.isa<::fir::BaseBoxType>()))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be fir.box or fir.class type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_HLFIROps13(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::fir::ReferenceType>(type))) || ((::llvm::isa<::fir::HeapType>(type))) || ((::llvm::isa<::fir::PointerType>(type))) || ((type.isa<::fir::BaseBoxType>())))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be any reference or box, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_HLFIROps14(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::hlfir::isFortranNumericalOrLogicalArrayObject(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be any array-like object containing a numerical or logical type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_HLFIROps15(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::fir::ShapeType>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be shape of a multidimensional array object, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_HLFIROps16(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::fir::ShapeType>(type))) || ((::llvm::isa<::fir::ShapeShiftType>(type))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be any legal shape type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_HLFIROps17(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::hlfir::isFortranScalarCharacterExprType(type))) || ((::hlfir::isFortranArrayCharacterExprType(type))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be any character scalar or array expression type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_HLFIROps18(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::hlfir::isFortranNumericalArrayObject(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be any array-like object containing a numerical type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_HLFIROps19(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::hlfir::isMaskArgument(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be A scalar i1 or logical or an array-like object containing logicals, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_HLFIROps20(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::hlfir::isFortranArrayObject(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be any array-like object, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_HLFIROps21(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((true))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be any type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_HLFIROps0(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
  if (attr && !((::llvm::isa<::mlir::UnitAttr>(attr))))
    return getDiag() << "attribute '" << attrName
        << "' failed to satisfy constraint: unit attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_HLFIROps0(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_HLFIROps0(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_HLFIROps1(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
  if (attr && !((::llvm::isa<::mlir::StringAttr>(attr))))
    return getDiag() << "attribute '" << attrName
        << "' failed to satisfy constraint: An Attribute containing a string";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_HLFIROps1(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_HLFIROps1(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_HLFIROps2(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
  if (attr && !((::llvm::isa<::fir::FortranVariableFlagsAttr>(attr))))
    return getDiag() << "attribute '" << attrName
        << "' failed to satisfy constraint: ";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_HLFIROps2(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_HLFIROps2(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_HLFIROps3(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
  if (attr && !((::llvm::isa<hlfir::CharExtremumPredicateAttr>(attr))))
    return getDiag() << "attribute '" << attrName
        << "' failed to satisfy constraint: allowed 32-bit signless integer cases: 0, 1";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_HLFIROps3(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_HLFIROps3(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_HLFIROps4(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
  if (attr && !((::llvm::isa<::mlir::DenseBoolArrayAttr>(attr))))
    return getDiag() << "attribute '" << attrName
        << "' failed to satisfy constraint: i1 dense array attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_HLFIROps4(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_HLFIROps4(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_HLFIROps5(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
  if (attr && !((::llvm::isa<::mlir::BoolAttr>(attr))))
    return getDiag() << "attribute '" << attrName
        << "' failed to satisfy constraint: bool attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_HLFIROps5(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_HLFIROps5(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_HLFIROps6(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
  if (attr && !((::llvm::isa<::mlir::arith::FastMathFlagsAttr>(attr))))
    return getDiag() << "attribute '" << attrName
        << "' failed to satisfy constraint: Floating point fast math flags";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_HLFIROps6(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_HLFIROps6(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_HLFIROps7(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag) {
  if (attr && !(((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::isa<::mlir::IndexType>(::llvm::cast<::mlir::IntegerAttr>(attr).getType())))))
    return getDiag() << "attribute '" << attrName
        << "' failed to satisfy constraint: index attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_HLFIROps7(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_HLFIROps7(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_region_constraint_HLFIROps0(
    ::mlir::Operation *op, ::mlir::Region &region, ::llvm::StringRef regionName,
    unsigned regionIndex) {
  if (!((::llvm::hasNItems(region, 1)))) {
    return op->emitOpError("region #") << regionIndex
        << (regionName.empty() ? " " : " ('" + regionName + "') ")
        << "failed to verify constraint: region with 1 blocks";
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_region_constraint_HLFIROps1(
    ::mlir::Operation *op, ::mlir::Region &region, ::llvm::StringRef regionName,
    unsigned regionIndex) {
  if (!((::llvm::hasNItemsOrLess(region, 1)))) {
    return op->emitOpError("region #") << regionIndex
        << (regionName.empty() ? " " : " ('" + regionName + "') ")
        << "failed to verify constraint: region with at most 1 blocks";
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_region_constraint_HLFIROps2(
    ::mlir::Operation *op, ::mlir::Region &region, ::llvm::StringRef regionName,
    unsigned regionIndex) {
  if (!(((::llvm::hasNItems(region, 1))) && ((yieldsIntegerOrEmpty(region))))) {
    return op->emitOpError("region #") << regionIndex
        << (regionName.empty() ? " " : " ('" + regionName + "') ")
        << "failed to verify constraint: single block region that yields an integer scalar value";
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_region_constraint_HLFIROps3(
    ::mlir::Operation *op, ::mlir::Region &region, ::llvm::StringRef regionName,
    unsigned regionIndex) {
  if (!(((::llvm::hasNItemsOrLess(region, 1))) && ((yieldsIntegerOrEmpty(region))))) {
    return op->emitOpError("region #") << regionIndex
        << (regionName.empty() ? " " : " ('" + regionName + "') ")
        << "failed to verify constraint: optional single block region that yields an integer scalar value";
  }
  return ::mlir::success();
}
} // namespace hlfir
namespace hlfir {

//===----------------------------------------------------------------------===//
// hlfir::AssignOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
AssignOpGenericAdaptorBase::AssignOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("hlfir.assign", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> AssignOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr AssignOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::UnitAttr AssignOpGenericAdaptorBase::getReallocAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, AssignOp::getReallocAttrName(*odsOpName)));
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool AssignOpGenericAdaptorBase::getRealloc() {
  auto attr = getReallocAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::UnitAttr AssignOpGenericAdaptorBase::getKeepLhsLengthIfReallocAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, AssignOp::getKeepLhsLengthIfReallocAttrName(*odsOpName)));
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool AssignOpGenericAdaptorBase::getKeepLhsLengthIfRealloc() {
  auto attr = getKeepLhsLengthIfReallocAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::UnitAttr AssignOpGenericAdaptorBase::getTemporaryLhsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, AssignOp::getTemporaryLhsAttrName(*odsOpName)));
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool AssignOpGenericAdaptorBase::getTemporaryLhs() {
  auto attr = getTemporaryLhsAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

} // namespace detail
AssignOpAdaptor::AssignOpAdaptor(AssignOp op) : AssignOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult AssignOpAdaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_keep_lhs_length_if_realloc;
  ::mlir::Attribute tblgen_realloc;
  ::mlir::Attribute tblgen_temporary_lhs;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == AssignOp::getKeepLhsLengthIfReallocAttrName(*odsOpName)) {
      tblgen_keep_lhs_length_if_realloc = namedAttrIt->getValue();
    }
    else if (namedAttrIt->getName() == AssignOp::getReallocAttrName(*odsOpName)) {
      tblgen_realloc = namedAttrIt->getValue();
    }
    else if (namedAttrIt->getName() == AssignOp::getTemporaryLhsAttrName(*odsOpName)) {
      tblgen_temporary_lhs = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (tblgen_realloc && !((::llvm::isa<::mlir::UnitAttr>(tblgen_realloc))))
    return emitError(loc, "'hlfir.assign' op ""attribute 'realloc' failed to satisfy constraint: unit attribute");

  if (tblgen_keep_lhs_length_if_realloc && !((::llvm::isa<::mlir::UnitAttr>(tblgen_keep_lhs_length_if_realloc))))
    return emitError(loc, "'hlfir.assign' op ""attribute 'keep_lhs_length_if_realloc' failed to satisfy constraint: unit attribute");

  if (tblgen_temporary_lhs && !((::llvm::isa<::mlir::UnitAttr>(tblgen_temporary_lhs))))
    return emitError(loc, "'hlfir.assign' op ""attribute 'temporary_lhs' failed to satisfy constraint: unit attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> AssignOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range AssignOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value AssignOp::getRhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value AssignOp::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::MutableOperandRange AssignOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::mlir::MutableOperandRange AssignOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> AssignOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range AssignOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::UnitAttr AssignOp::getReallocAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getReallocAttrName()));
}

bool AssignOp::getRealloc() {
  auto attr = getReallocAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::UnitAttr AssignOp::getKeepLhsLengthIfReallocAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getKeepLhsLengthIfReallocAttrName()));
}

bool AssignOp::getKeepLhsLengthIfRealloc() {
  auto attr = getKeepLhsLengthIfReallocAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::UnitAttr AssignOp::getTemporaryLhsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getTemporaryLhsAttrName()));
}

bool AssignOp::getTemporaryLhs() {
  auto attr = getTemporaryLhsAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

void AssignOp::setReallocAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getReallocAttrName(), attr);
}

void AssignOp::setRealloc(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getReallocAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getReallocAttrName());
}

void AssignOp::setKeepLhsLengthIfReallocAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getKeepLhsLengthIfReallocAttrName(), attr);
}

void AssignOp::setKeepLhsLengthIfRealloc(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getKeepLhsLengthIfReallocAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getKeepLhsLengthIfReallocAttrName());
}

void AssignOp::setTemporaryLhsAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getTemporaryLhsAttrName(), attr);
}

void AssignOp::setTemporaryLhs(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getTemporaryLhsAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getTemporaryLhsAttrName());
}

::mlir::Attribute AssignOp::removeReallocAttr() {
return (*this)->removeAttr(getReallocAttrName());
}

::mlir::Attribute AssignOp::removeKeepLhsLengthIfReallocAttr() {
return (*this)->removeAttr(getKeepLhsLengthIfReallocAttrName());
}

::mlir::Attribute AssignOp::removeTemporaryLhsAttr() {
return (*this)->removeAttr(getTemporaryLhsAttrName());
}

void AssignOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value rhs, ::mlir::Value lhs, /*optional*/::mlir::UnitAttr realloc, /*optional*/::mlir::UnitAttr keep_lhs_length_if_realloc, /*optional*/::mlir::UnitAttr temporary_lhs) {
  odsState.addOperands(rhs);
  odsState.addOperands(lhs);
  if (realloc) {
    odsState.addAttribute(getReallocAttrName(odsState.name), realloc);
  }
  if (keep_lhs_length_if_realloc) {
    odsState.addAttribute(getKeepLhsLengthIfReallocAttrName(odsState.name), keep_lhs_length_if_realloc);
  }
  if (temporary_lhs) {
    odsState.addAttribute(getTemporaryLhsAttrName(odsState.name), temporary_lhs);
  }
}

void AssignOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value rhs, ::mlir::Value lhs, /*optional*/::mlir::UnitAttr realloc, /*optional*/::mlir::UnitAttr keep_lhs_length_if_realloc, /*optional*/::mlir::UnitAttr temporary_lhs) {
  odsState.addOperands(rhs);
  odsState.addOperands(lhs);
  if (realloc) {
    odsState.addAttribute(getReallocAttrName(odsState.name), realloc);
  }
  if (keep_lhs_length_if_realloc) {
    odsState.addAttribute(getKeepLhsLengthIfReallocAttrName(odsState.name), keep_lhs_length_if_realloc);
  }
  if (temporary_lhs) {
    odsState.addAttribute(getTemporaryLhsAttrName(odsState.name), temporary_lhs);
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AssignOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value rhs, ::mlir::Value lhs, /*optional*/bool realloc, /*optional*/bool keep_lhs_length_if_realloc, /*optional*/bool temporary_lhs) {
  odsState.addOperands(rhs);
  odsState.addOperands(lhs);
  if (realloc) {
    odsState.addAttribute(getReallocAttrName(odsState.name), ((realloc) ? odsBuilder.getUnitAttr() : nullptr));
  }
  if (keep_lhs_length_if_realloc) {
    odsState.addAttribute(getKeepLhsLengthIfReallocAttrName(odsState.name), ((keep_lhs_length_if_realloc) ? odsBuilder.getUnitAttr() : nullptr));
  }
  if (temporary_lhs) {
    odsState.addAttribute(getTemporaryLhsAttrName(odsState.name), ((temporary_lhs) ? odsBuilder.getUnitAttr() : nullptr));
  }
}

void AssignOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value rhs, ::mlir::Value lhs, /*optional*/bool realloc, /*optional*/bool keep_lhs_length_if_realloc, /*optional*/bool temporary_lhs) {
  odsState.addOperands(rhs);
  odsState.addOperands(lhs);
  if (realloc) {
    odsState.addAttribute(getReallocAttrName(odsState.name), ((realloc) ? odsBuilder.getUnitAttr() : nullptr));
  }
  if (keep_lhs_length_if_realloc) {
    odsState.addAttribute(getKeepLhsLengthIfReallocAttrName(odsState.name), ((keep_lhs_length_if_realloc) ? odsBuilder.getUnitAttr() : nullptr));
  }
  if (temporary_lhs) {
    odsState.addAttribute(getTemporaryLhsAttrName(odsState.name), ((temporary_lhs) ? odsBuilder.getUnitAttr() : nullptr));
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AssignOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult AssignOp::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_keep_lhs_length_if_realloc;
  ::mlir::Attribute tblgen_realloc;
  ::mlir::Attribute tblgen_temporary_lhs;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == getKeepLhsLengthIfReallocAttrName()) {
      tblgen_keep_lhs_length_if_realloc = namedAttrIt->getValue();
    }
    else if (namedAttrIt->getName() == getReallocAttrName()) {
      tblgen_realloc = namedAttrIt->getValue();
    }
    else if (namedAttrIt->getName() == getTemporaryLhsAttrName()) {
      tblgen_temporary_lhs = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_HLFIROps0(*this, tblgen_realloc, "realloc")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_HLFIROps0(*this, tblgen_keep_lhs_length_if_realloc, "keep_lhs_length_if_realloc")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_HLFIROps0(*this, tblgen_temporary_lhs, "temporary_lhs")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult AssignOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult AssignOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc;
  (void)rhsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc;
  (void)lhsOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> allOperandTypes;

  rhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(rhsRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseKeyword("to"))
    return ::mlir::failure();

  lhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(lhsRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("realloc"))) {
    result.addAttribute("realloc", parser.getBuilder().getUnitAttr());
  }
  if (::mlir::succeeded(parser.parseOptionalKeyword("keep_lhs_len"))) {
    result.addAttribute("keep_lhs_length_if_realloc", parser.getBuilder().getUnitAttr());
  }
  if (::mlir::succeeded(parser.parseOptionalKeyword("temporary_lhs"))) {
    result.addAttribute("temporary_lhs", parser.getBuilder().getUnitAttr());
  }
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  if (parser.parseTypeList(allOperandTypes))
    return ::mlir::failure();
  if (parser.resolveOperands(::llvm::concat<const ::mlir::OpAsmParser::UnresolvedOperand>(rhsOperands, lhsOperands), allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void AssignOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getRhs();
  _odsPrinter << ' ' << "to";
  _odsPrinter << ' ';
  _odsPrinter << getLhs();
  if (getReallocAttr()) {
    _odsPrinter << ' ' << "realloc";
  }
  if (getKeepLhsLengthIfReallocAttr()) {
    _odsPrinter << ' ' << "keep_lhs_len";
  }
  if (getTemporaryLhsAttr()) {
    _odsPrinter << ' ' << "temporary_lhs";
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("realloc");
  elidedAttrs.push_back("keep_lhs_length_if_realloc");
  elidedAttrs.push_back("temporary_lhs");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getReallocAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("realloc");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getKeepLhsLengthIfReallocAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("keep_lhs_length_if_realloc");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getTemporaryLhsAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("temporary_lhs");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperandTypes();
}

void AssignOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(::mlir::MemoryEffects::Write::get(), ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(::mlir::MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace hlfir
MLIR_DEFINE_EXPLICIT_TYPE_ID(hlfir::AssignOp)

namespace hlfir {

//===----------------------------------------------------------------------===//
// hlfir::AllOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
AllOpGenericAdaptorBase::AllOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("hlfir.all", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> AllOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr AllOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
AllOpAdaptor::AllOpAdaptor(AllOp op) : AllOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult AllOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> AllOp::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range AllOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value AllOp::getMask() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value AllOp::getDim() {
  auto operands = getODSOperands(1);
  return operands.empty() ? ::mlir::Value{} : ::llvm::cast<::mlir::Value>(*operands.begin());
}

::mlir::MutableOperandRange AllOp::getMaskMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::mlir::MutableOperandRange AllOp::getDimMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> AllOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range AllOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void AllOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value mask, /*optional*/::mlir::Value dim) {
  odsState.addOperands(mask);
  if (dim)
    odsState.addOperands(dim);
  odsState.addTypes(resultType0);
}

void AllOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value mask, /*optional*/::mlir::Value dim) {
  odsState.addOperands(mask);
  if (dim)
    odsState.addOperands(dim);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AllOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult AllOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    if (valueGroup1.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup1.size();
    }

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps4(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult AllOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult AllOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand maskRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> maskOperands(maskRawOperands);  ::llvm::SMLoc maskOperandsLoc;
  (void)maskOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> dimOperands;
  ::llvm::SMLoc dimOperandsLoc;
  (void)dimOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  maskOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(maskRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("dim"))) {

  {
    dimOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      dimOperands.push_back(operand);
    }
  }
  }
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
  if (parser.resolveOperands(::llvm::concat<const ::mlir::OpAsmParser::UnresolvedOperand>(maskOperands, dimOperands), allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void AllOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getMask();
  if (getDim()) {
    _odsPrinter << ' ' << "dim";
    _odsPrinter << ' ';
    if (::mlir::Value value = getDim())
      _odsPrinter << value;
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace hlfir
MLIR_DEFINE_EXPLICIT_TYPE_ID(hlfir::AllOp)

namespace hlfir {

//===----------------------------------------------------------------------===//
// hlfir::AnyOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
AnyOpGenericAdaptorBase::AnyOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("hlfir.any", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> AnyOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr AnyOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
AnyOpAdaptor::AnyOpAdaptor(AnyOp op) : AnyOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult AnyOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> AnyOp::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range AnyOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value AnyOp::getMask() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value AnyOp::getDim() {
  auto operands = getODSOperands(1);
  return operands.empty() ? ::mlir::Value{} : ::llvm::cast<::mlir::Value>(*operands.begin());
}

::mlir::MutableOperandRange AnyOp::getMaskMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::mlir::MutableOperandRange AnyOp::getDimMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> AnyOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range AnyOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void AnyOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value mask, /*optional*/::mlir::Value dim) {
  odsState.addOperands(mask);
  if (dim)
    odsState.addOperands(dim);
  odsState.addTypes(resultType0);
}

void AnyOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value mask, /*optional*/::mlir::Value dim) {
  odsState.addOperands(mask);
  if (dim)
    odsState.addOperands(dim);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AnyOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult AnyOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    if (valueGroup1.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup1.size();
    }

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps4(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult AnyOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult AnyOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand maskRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> maskOperands(maskRawOperands);  ::llvm::SMLoc maskOperandsLoc;
  (void)maskOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> dimOperands;
  ::llvm::SMLoc dimOperandsLoc;
  (void)dimOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  maskOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(maskRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("dim"))) {

  {
    dimOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      dimOperands.push_back(operand);
    }
  }
  }
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
  if (parser.resolveOperands(::llvm::concat<const ::mlir::OpAsmParser::UnresolvedOperand>(maskOperands, dimOperands), allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void AnyOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getMask();
  if (getDim()) {
    _odsPrinter << ' ' << "dim";
    _odsPrinter << ' ';
    if (::mlir::Value value = getDim())
      _odsPrinter << value;
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace hlfir
MLIR_DEFINE_EXPLICIT_TYPE_ID(hlfir::AnyOp)

namespace hlfir {

//===----------------------------------------------------------------------===//
// hlfir::ApplyOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ApplyOpGenericAdaptorBase::ApplyOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("hlfir.apply", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> ApplyOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  assert(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, ApplyOp::getOperandSegmentSizesAttrName(*odsOpName)) && "missing segment size attribute for op");
  auto sizeAttr = ::llvm::cast<::mlir::DenseI32ArrayAttr>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, ApplyOp::getOperandSegmentSizesAttrName(*odsOpName)));

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::DictionaryAttr ApplyOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ApplyOpAdaptor::ApplyOpAdaptor(ApplyOp op) : ApplyOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult ApplyOpAdaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_operandSegmentSizes;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'hlfir.apply' op ""requires attribute 'operandSegmentSizes'");
    if (namedAttrIt->getName() == ApplyOp::getOperandSegmentSizesAttrName(*odsOpName)) {
      tblgen_operandSegmentSizes = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  {
    auto sizeAttr = ::llvm::cast<::mlir::DenseI32ArrayAttr>(tblgen_operandSegmentSizes);
    auto numElements = sizeAttr.asArrayRef().size();
    if (numElements != 3)
      return emitError(loc, "'hlfir.apply' op ""'operandSegmentSizes' attribute for specifying operand segments must have 3 "
                "elements, but got ") << numElements;
  }
    return ::mlir::success();
}

std::pair<unsigned, unsigned> ApplyOp::getODSOperandIndexAndLength(unsigned index) {
  auto sizeAttr = ::llvm::cast<::mlir::DenseI32ArrayAttr>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getOperandSegmentSizesAttrName()));

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::Operation::operand_range ApplyOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ApplyOp::getExpr() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Operation::operand_range ApplyOp::getIndices() {
  return getODSOperands(1);
}

::mlir::Operation::operand_range ApplyOp::getTypeparams() {
  return getODSOperands(2);
}

::mlir::MutableOperandRange ApplyOp::getExprMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(0u, *::mlir::impl::getNamedAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getOperandSegmentSizesAttrName())));
  return mutableRange;
}

::mlir::MutableOperandRange ApplyOp::getIndicesMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(1u, *::mlir::impl::getNamedAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getOperandSegmentSizesAttrName())));
  return mutableRange;
}

::mlir::MutableOperandRange ApplyOp::getTypeparamsMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(2u, *::mlir::impl::getNamedAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getOperandSegmentSizesAttrName())));
  return mutableRange;
}

std::pair<unsigned, unsigned> ApplyOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ApplyOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ApplyOp::getElementValue() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

void ApplyOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type element_value, ::mlir::Value expr, ::mlir::ValueRange indices, ::mlir::ValueRange typeparams) {
  odsState.addOperands(expr);
  odsState.addOperands(indices);
  odsState.addOperands(typeparams);
  odsState.addAttribute(getOperandSegmentSizesAttrName(odsState.name), odsBuilder.getDenseI32ArrayAttr({1, static_cast<int32_t>(indices.size()), static_cast<int32_t>(typeparams.size())}));
  odsState.addTypes(element_value);
}

void ApplyOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value expr, ::mlir::ValueRange indices, ::mlir::ValueRange typeparams) {
  odsState.addOperands(expr);
  odsState.addOperands(indices);
  odsState.addOperands(typeparams);
  odsState.addAttribute(getOperandSegmentSizesAttrName(odsState.name), odsBuilder.getDenseI32ArrayAttr({1, static_cast<int32_t>(indices.size()), static_cast<int32_t>(typeparams.size())}));
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ApplyOp::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_operandSegmentSizes;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'operandSegmentSizes'");
    if (namedAttrIt->getName() == getOperandSegmentSizesAttrName()) {
      tblgen_operandSegmentSizes = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  {
    auto sizeAttr = ::llvm::cast<::mlir::DenseI32ArrayAttr>(tblgen_operandSegmentSizes);
    auto numElements = sizeAttr.asArrayRef().size();
    if (numElements != 3)
      return emitOpError("'operandSegmentSizes' attribute for specifying operand segments must have 3 "
                "elements, but got ") << numElements;
  }
    {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps4(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ApplyOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand exprRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> exprOperands(exprRawOperands);  ::llvm::SMLoc exprOperandsLoc;
  (void)exprOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> indicesOperands;
  ::llvm::SMLoc indicesOperandsLoc;
  (void)indicesOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> typeparamsOperands;
  ::llvm::SMLoc typeparamsOperandsLoc;
  (void)typeparamsOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  exprOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(exprRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  indicesOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(indicesOperands))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("typeparams"))) {

  typeparamsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(typeparamsOperands))
    return ::mlir::failure();
  }
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
  result.addAttribute("operandSegmentSizes", parser.getBuilder().getDenseI32ArrayAttr({1, static_cast<int32_t>(indicesOperands.size()), static_cast<int32_t>(typeparamsOperands.size())}));
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(::llvm::concat<const ::mlir::OpAsmParser::UnresolvedOperand>(exprOperands, indicesOperands, typeparamsOperands), allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ApplyOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getExpr();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getIndices();
  if (!getTypeparams().empty()) {
    _odsPrinter << ' ' << "typeparams";
    _odsPrinter << ' ';
    _odsPrinter << getTypeparams();
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("operandSegmentSizes");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

void ApplyOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace hlfir
MLIR_DEFINE_EXPLICIT_TYPE_ID(hlfir::ApplyOp)

namespace hlfir {

//===----------------------------------------------------------------------===//
// hlfir::AsExprOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
AsExprOpGenericAdaptorBase::AsExprOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("hlfir.as_expr", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> AsExprOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr AsExprOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
AsExprOpAdaptor::AsExprOpAdaptor(AsExprOp op) : AsExprOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult AsExprOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> AsExprOp::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range AsExprOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value AsExprOp::getVar() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::IntegerType> AsExprOp::getMustFree() {
  auto operands = getODSOperands(1);
  return operands.empty() ? ::mlir::TypedValue<::mlir::IntegerType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*operands.begin());
}

::mlir::MutableOperandRange AsExprOp::getVarMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::mlir::MutableOperandRange AsExprOp::getMustFreeMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> AsExprOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range AsExprOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void AsExprOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value var, /*optional*/::mlir::Value must_free) {
  odsState.addOperands(var);
  if (must_free)
    odsState.addOperands(must_free);
  odsState.addTypes(resultType0);
}

void AsExprOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value var, /*optional*/::mlir::Value must_free) {
  odsState.addOperands(var);
  if (must_free)
    odsState.addOperands(must_free);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AsExprOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult AsExprOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    if (valueGroup1.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup1.size();
    }

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps5(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult AsExprOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult AsExprOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand varRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> varOperands(varRawOperands);  ::llvm::SMLoc varOperandsLoc;
  (void)varOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> must_freeOperands;
  ::llvm::SMLoc must_freeOperandsLoc;
  (void)must_freeOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  varOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(varRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("move"))) {

  {
    must_freeOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      must_freeOperands.push_back(operand);
    }
  }
  }
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
  if (parser.resolveOperands(::llvm::concat<const ::mlir::OpAsmParser::UnresolvedOperand>(varOperands, must_freeOperands), allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void AsExprOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getVar();
  if (getMustFree()) {
    _odsPrinter << ' ' << "move";
    _odsPrinter << ' ';
    if (::mlir::Value value = getMustFree())
      _odsPrinter << value;
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace hlfir
MLIR_DEFINE_EXPLICIT_TYPE_ID(hlfir::AsExprOp)

namespace hlfir {

//===----------------------------------------------------------------------===//
// hlfir::AssociateOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
AssociateOpGenericAdaptorBase::AssociateOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("hlfir.associate", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> AssociateOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  assert(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 1, AssociateOp::getOperandSegmentSizesAttrName(*odsOpName)) && "missing segment size attribute for op");
  auto sizeAttr = ::llvm::cast<::mlir::DenseI32ArrayAttr>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 1, AssociateOp::getOperandSegmentSizesAttrName(*odsOpName)));

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::DictionaryAttr AssociateOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::StringAttr AssociateOpGenericAdaptorBase::getUniqNameAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::StringAttr>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 1, odsAttrs.end() - 0, AssociateOp::getUniqNameAttrName(*odsOpName)));
  return attr;
}

::mlir::StringAttr AssociateOpGenericAdaptorBase::getUniqName() {
  auto attr = getUniqNameAttr();
  return ::llvm::cast<::mlir::StringAttr>(attr);
}

::fir::FortranVariableFlagsAttr AssociateOpGenericAdaptorBase::getFortranAttrsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::dyn_cast_or_null<::fir::FortranVariableFlagsAttr>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 2, AssociateOp::getFortranAttrsAttrName(*odsOpName)));
  return attr;
}

::std::optional<::fir::FortranVariableFlagsEnum> AssociateOpGenericAdaptorBase::getFortranAttrs() {
  auto attr = getFortranAttrsAttr();
  return attr ? ::std::optional<::fir::FortranVariableFlagsEnum>(attr.getFlags()) : (::std::nullopt);
}

} // namespace detail
AssociateOpAdaptor::AssociateOpAdaptor(AssociateOp op) : AssociateOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult AssociateOpAdaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_operandSegmentSizes;
  ::mlir::Attribute tblgen_fortran_attrs;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'hlfir.associate' op ""requires attribute 'operandSegmentSizes'");
    if (namedAttrIt->getName() == AssociateOp::getOperandSegmentSizesAttrName(*odsOpName)) {
      tblgen_operandSegmentSizes = namedAttrIt->getValue();
      break;
    }
    else if (namedAttrIt->getName() == AssociateOp::getFortranAttrsAttrName(*odsOpName)) {
      tblgen_fortran_attrs = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_uniq_name;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'hlfir.associate' op ""requires attribute 'uniq_name'");
    if (namedAttrIt->getName() == AssociateOp::getUniqNameAttrName(*odsOpName)) {
      tblgen_uniq_name = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  {
    auto sizeAttr = ::llvm::cast<::mlir::DenseI32ArrayAttr>(tblgen_operandSegmentSizes);
    auto numElements = sizeAttr.asArrayRef().size();
    if (numElements != 3)
      return emitError(loc, "'hlfir.associate' op ""'operandSegmentSizes' attribute for specifying operand segments must have 3 "
                "elements, but got ") << numElements;
  }

  if (tblgen_uniq_name && !((::llvm::isa<::mlir::StringAttr>(tblgen_uniq_name))))
    return emitError(loc, "'hlfir.associate' op ""attribute 'uniq_name' failed to satisfy constraint: An Attribute containing a string");

  if (tblgen_fortran_attrs && !((::llvm::isa<::fir::FortranVariableFlagsAttr>(tblgen_fortran_attrs))))
    return emitError(loc, "'hlfir.associate' op ""attribute 'fortran_attrs' failed to satisfy constraint: ");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> AssociateOp::getODSOperandIndexAndLength(unsigned index) {
  auto sizeAttr = ::llvm::cast<::mlir::DenseI32ArrayAttr>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 1, getOperandSegmentSizesAttrName()));

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::Operation::operand_range AssociateOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value AssociateOp::getSource() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value AssociateOp::getShape() {
  auto operands = getODSOperands(1);
  return operands.empty() ? ::mlir::Value{} : ::llvm::cast<::mlir::Value>(*operands.begin());
}

::mlir::Operation::operand_range AssociateOp::getTypeparams() {
  return getODSOperands(2);
}

::mlir::MutableOperandRange AssociateOp::getSourceMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(0u, *::mlir::impl::getNamedAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 1, getOperandSegmentSizesAttrName())));
  return mutableRange;
}

::mlir::MutableOperandRange AssociateOp::getShapeMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(1u, *::mlir::impl::getNamedAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 1, getOperandSegmentSizesAttrName())));
  return mutableRange;
}

::mlir::MutableOperandRange AssociateOp::getTypeparamsMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(2u, *::mlir::impl::getNamedAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 1, getOperandSegmentSizesAttrName())));
  return mutableRange;
}

std::pair<unsigned, unsigned> AssociateOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range AssociateOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::StringAttr AssociateOp::getUniqNameAttr() {
  return ::llvm::cast<::mlir::StringAttr>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 1, (*this)->getAttrs().end() - 0, getUniqNameAttrName()));
}

::mlir::StringAttr AssociateOp::getUniqName() {
  auto attr = getUniqNameAttr();
  return ::llvm::cast<::mlir::StringAttr>(attr);
}

::fir::FortranVariableFlagsAttr AssociateOp::getFortranAttrsAttr() {
  return ::llvm::dyn_cast_or_null<::fir::FortranVariableFlagsAttr>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 2, getFortranAttrsAttrName()));
}

::std::optional<::fir::FortranVariableFlagsEnum> AssociateOp::getFortranAttrs() {
  auto attr = getFortranAttrsAttr();
  return attr ? ::std::optional<::fir::FortranVariableFlagsEnum>(attr.getFlags()) : (::std::nullopt);
}

void AssociateOp::setUniqNameAttr(::mlir::StringAttr attr) {
  (*this)->setAttr(getUniqNameAttrName(), attr);
}

void AssociateOp::setFortranAttrsAttr(::fir::FortranVariableFlagsAttr attr) {
  (*this)->setAttr(getFortranAttrsAttrName(), attr);
}

void AssociateOp::setFortranAttrs(::std::optional<::fir::FortranVariableFlagsEnum> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getFortranAttrsAttrName(), ::fir::FortranVariableFlagsAttr::get(::mlir::Builder((*this)->getContext()).getContext(), *attrValue));
    (*this)->removeAttr(getFortranAttrsAttrName());
}

::mlir::Attribute AssociateOp::removeFortranAttrsAttr() {
return (*this)->removeAttr(getFortranAttrsAttrName());
}

void AssociateOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Type resultType1, ::mlir::Type resultType2, ::mlir::Value source, /*optional*/::mlir::Value shape, ::mlir::ValueRange typeparams, ::mlir::StringAttr uniq_name, /*optional*/::fir::FortranVariableFlagsAttr fortran_attrs) {
  odsState.addOperands(source);
  if (shape)
    odsState.addOperands(shape);
  odsState.addOperands(typeparams);
  odsState.addAttribute(getOperandSegmentSizesAttrName(odsState.name), odsBuilder.getDenseI32ArrayAttr({1, (shape ? 1 : 0), static_cast<int32_t>(typeparams.size())}));
  odsState.addAttribute(getUniqNameAttrName(odsState.name), uniq_name);
  if (fortran_attrs) {
    odsState.addAttribute(getFortranAttrsAttrName(odsState.name), fortran_attrs);
  }
  odsState.addTypes(resultType0);
  odsState.addTypes(resultType1);
  odsState.addTypes(resultType2);
}

void AssociateOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value source, /*optional*/::mlir::Value shape, ::mlir::ValueRange typeparams, ::mlir::StringAttr uniq_name, /*optional*/::fir::FortranVariableFlagsAttr fortran_attrs) {
  odsState.addOperands(source);
  if (shape)
    odsState.addOperands(shape);
  odsState.addOperands(typeparams);
  odsState.addAttribute(getOperandSegmentSizesAttrName(odsState.name), odsBuilder.getDenseI32ArrayAttr({1, (shape ? 1 : 0), static_cast<int32_t>(typeparams.size())}));
  odsState.addAttribute(getUniqNameAttrName(odsState.name), uniq_name);
  if (fortran_attrs) {
    odsState.addAttribute(getFortranAttrsAttrName(odsState.name), fortran_attrs);
  }
  assert(resultTypes.size() == 3u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AssociateOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 3u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult AssociateOp::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_operandSegmentSizes;
  ::mlir::Attribute tblgen_fortran_attrs;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'operandSegmentSizes'");
    if (namedAttrIt->getName() == getOperandSegmentSizesAttrName()) {
      tblgen_operandSegmentSizes = namedAttrIt->getValue();
      break;
    }
    else if (namedAttrIt->getName() == getFortranAttrsAttrName()) {
      tblgen_fortran_attrs = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_uniq_name;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'uniq_name'");
    if (namedAttrIt->getName() == getUniqNameAttrName()) {
      tblgen_uniq_name = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  {
    auto sizeAttr = ::llvm::cast<::mlir::DenseI32ArrayAttr>(tblgen_operandSegmentSizes);
    auto numElements = sizeAttr.asArrayRef().size();
    if (numElements != 3)
      return emitOpError("'operandSegmentSizes' attribute for specifying operand segments must have 3 "
                "elements, but got ") << numElements;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_HLFIROps1(*this, tblgen_uniq_name, "uniq_name")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_HLFIROps2(*this, tblgen_fortran_attrs, "fortran_attrs")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    if (valueGroup1.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup1.size();
    }

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps8(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps9(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSResults(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps7(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult AssociateOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult AssociateOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand sourceRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> sourceOperands(sourceRawOperands);  ::llvm::SMLoc sourceOperandsLoc;
  (void)sourceOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> shapeOperands;
  ::llvm::SMLoc shapeOperandsLoc;
  (void)shapeOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> typeparamsOperands;
  ::llvm::SMLoc typeparamsOperandsLoc;
  (void)typeparamsOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  sourceOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(sourceRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalLParen())) {

  {
    shapeOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      shapeOperands.push_back(operand);
    }
  }
  if (parser.parseRParen())
    return ::mlir::failure();
  }
  if (::mlir::succeeded(parser.parseOptionalKeyword("typeparams"))) {

  typeparamsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(typeparamsOperands))
    return ::mlir::failure();
  }
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
  result.addAttribute("operandSegmentSizes", parser.getBuilder().getDenseI32ArrayAttr({1, static_cast<int32_t>(shapeOperands.size()), static_cast<int32_t>(typeparamsOperands.size())}));
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(::llvm::concat<const ::mlir::OpAsmParser::UnresolvedOperand>(sourceOperands, shapeOperands, typeparamsOperands), allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void AssociateOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getSource();
  if (getShape()) {
    _odsPrinter << "(";
    if (::mlir::Value value = getShape())
      _odsPrinter << value;
    _odsPrinter << ")";
  }
  if (!getTypeparams().empty()) {
    _odsPrinter << ' ' << "typeparams";
    _odsPrinter << ' ';
    _odsPrinter << getTypeparams();
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("operandSegmentSizes");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace hlfir
MLIR_DEFINE_EXPLICIT_TYPE_ID(hlfir::AssociateOp)

namespace hlfir {

//===----------------------------------------------------------------------===//
// hlfir::CharExtremumOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
CharExtremumOpGenericAdaptorBase::CharExtremumOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("hlfir.char_extremum", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> CharExtremumOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperandsSize - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::DictionaryAttr CharExtremumOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

hlfir::CharExtremumPredicateAttr CharExtremumOpGenericAdaptorBase::getPredicateAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<hlfir::CharExtremumPredicateAttr>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, CharExtremumOp::getPredicateAttrName(*odsOpName)));
  return attr;
}

hlfir::CharExtremumPredicate CharExtremumOpGenericAdaptorBase::getPredicate() {
  auto attr = getPredicateAttr();
  return attr.getValue();
}

} // namespace detail
CharExtremumOpAdaptor::CharExtremumOpAdaptor(CharExtremumOp op) : CharExtremumOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult CharExtremumOpAdaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_predicate;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'hlfir.char_extremum' op ""requires attribute 'predicate'");
    if (namedAttrIt->getName() == CharExtremumOp::getPredicateAttrName(*odsOpName)) {
      tblgen_predicate = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (tblgen_predicate && !((::llvm::isa<hlfir::CharExtremumPredicateAttr>(tblgen_predicate))))
    return emitError(loc, "'hlfir.char_extremum' op ""attribute 'predicate' failed to satisfy constraint: allowed 32-bit signless integer cases: 0, 1");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> CharExtremumOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range CharExtremumOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range CharExtremumOp::getStrings() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange CharExtremumOp::getStringsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> CharExtremumOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range CharExtremumOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

hlfir::CharExtremumPredicateAttr CharExtremumOp::getPredicateAttr() {
  return ::llvm::cast<hlfir::CharExtremumPredicateAttr>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getPredicateAttrName()));
}

hlfir::CharExtremumPredicate CharExtremumOp::getPredicate() {
  auto attr = getPredicateAttr();
  return attr.getValue();
}

void CharExtremumOp::setPredicateAttr(hlfir::CharExtremumPredicateAttr attr) {
  (*this)->setAttr(getPredicateAttrName(), attr);
}

void CharExtremumOp::setPredicate(hlfir::CharExtremumPredicate attrValue) {
  (*this)->setAttr(getPredicateAttrName(), hlfir::CharExtremumPredicateAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void CharExtremumOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, hlfir::CharExtremumPredicateAttr predicate, ::mlir::ValueRange strings) {
  odsState.addOperands(strings);
  odsState.addAttribute(getPredicateAttrName(odsState.name), predicate);
  odsState.addTypes(resultType0);
}

void CharExtremumOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, hlfir::CharExtremumPredicateAttr predicate, ::mlir::ValueRange strings) {
  odsState.addOperands(strings);
  odsState.addAttribute(getPredicateAttrName(odsState.name), predicate);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CharExtremumOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, hlfir::CharExtremumPredicate predicate, ::mlir::ValueRange strings) {
  odsState.addOperands(strings);
  odsState.addAttribute(getPredicateAttrName(odsState.name), hlfir::CharExtremumPredicateAttr::get(odsBuilder.getContext(), predicate));
  odsState.addTypes(resultType0);
}

void CharExtremumOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, hlfir::CharExtremumPredicate predicate, ::mlir::ValueRange strings) {
  odsState.addOperands(strings);
  odsState.addAttribute(getPredicateAttrName(odsState.name), hlfir::CharExtremumPredicateAttr::get(odsBuilder.getContext(), predicate));
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CharExtremumOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult CharExtremumOp::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_predicate;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'predicate'");
    if (namedAttrIt->getName() == getPredicateAttrName()) {
      tblgen_predicate = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_HLFIROps3(*this, tblgen_predicate, "predicate")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps10(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps11(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult CharExtremumOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult CharExtremumOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  hlfir::CharExtremumPredicateAttr predicateAttr;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> stringsOperands;
  ::llvm::SMLoc stringsOperandsLoc;
  (void)stringsOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  {
    ::llvm::StringRef attrStr;
    ::mlir::NamedAttrList attrStorage;
    auto loc = parser.getCurrentLocation();
    if (parser.parseOptionalKeyword(&attrStr, {"min","max"})) {
      ::mlir::StringAttr attrVal;
      ::mlir::OptionalParseResult parseResult =
        parser.parseOptionalAttribute(attrVal,
                                      parser.getBuilder().getNoneType(),
                                      "predicate", attrStorage);
      if (parseResult.has_value()) {
        if (failed(*parseResult))
          return ::mlir::failure();
        attrStr = attrVal.getValue();
      } else {
        return parser.emitError(loc, "expected string or keyword containing one of the following enum values for attribute 'predicate' [min, max]");
      }
    }
    if (!attrStr.empty()) {
      auto attrOptional = hlfir::symbolizeCharExtremumPredicate(attrStr);
      if (!attrOptional)
        return parser.emitError(loc, "invalid ")
               << "predicate attribute specification: \"" << attrStr << '"';;

      predicateAttr = hlfir::CharExtremumPredicateAttr::get(parser.getBuilder().getContext(), *attrOptional);
      result.addAttribute("predicate", predicateAttr);
    }
  }
  if (parser.parseComma())
    return ::mlir::failure();

  stringsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(stringsOperands))
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
  if (parser.resolveOperands(stringsOperands, allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void CharExtremumOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';

  {
    auto caseValue = getPredicate();
    auto caseValueStr = stringifyCharExtremumPredicate(caseValue);
    _odsPrinter << caseValueStr;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getStrings();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("predicate");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace hlfir
MLIR_DEFINE_EXPLICIT_TYPE_ID(hlfir::CharExtremumOp)

namespace hlfir {

//===----------------------------------------------------------------------===//
// hlfir::ConcatOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ConcatOpGenericAdaptorBase::ConcatOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("hlfir.concat", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> ConcatOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {true, false};
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

::mlir::DictionaryAttr ConcatOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ConcatOpAdaptor::ConcatOpAdaptor(ConcatOp op) : ConcatOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult ConcatOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ConcatOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true, false};
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

::mlir::Operation::operand_range ConcatOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range ConcatOp::getStrings() {
  return getODSOperands(0);
}

::mlir::Value ConcatOp::getLength() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::MutableOperandRange ConcatOp::getStringsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::mlir::MutableOperandRange ConcatOp::getLengthMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> ConcatOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ConcatOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void ConcatOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::ValueRange strings, ::mlir::Value length) {
  odsState.addOperands(strings);
  odsState.addOperands(length);
  odsState.addTypes(resultType0);
}

void ConcatOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange strings, ::mlir::Value length) {
  odsState.addOperands(strings);
  odsState.addOperands(length);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ConcatOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ConcatOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps10(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps11(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ConcatOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult ConcatOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> stringsOperands;
  ::llvm::SMLoc stringsOperandsLoc;
  (void)stringsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand lengthRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> lengthOperands(lengthRawOperands);  ::llvm::SMLoc lengthOperandsLoc;
  (void)lengthOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  stringsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(stringsOperands))
    return ::mlir::failure();
  if (parser.parseKeyword("len"))
    return ::mlir::failure();

  lengthOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(lengthRawOperands[0]))
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
  if (parser.resolveOperands(::llvm::concat<const ::mlir::OpAsmParser::UnresolvedOperand>(stringsOperands, lengthOperands), allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ConcatOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getStrings();
  _odsPrinter << ' ' << "len";
  _odsPrinter << ' ';
  _odsPrinter << getLength();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace hlfir
MLIR_DEFINE_EXPLICIT_TYPE_ID(hlfir::ConcatOp)

namespace hlfir {

//===----------------------------------------------------------------------===//
// hlfir::CopyInOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
CopyInOpGenericAdaptorBase::CopyInOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("hlfir.copy_in", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> CopyInOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr CopyInOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
CopyInOpAdaptor::CopyInOpAdaptor(CopyInOp op) : CopyInOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult CopyInOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> CopyInOp::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range CopyInOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CopyInOp::getVar() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::IntegerType> CopyInOp::getVarIsPresent() {
  auto operands = getODSOperands(1);
  return operands.empty() ? ::mlir::TypedValue<::mlir::IntegerType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*operands.begin());
}

::mlir::MutableOperandRange CopyInOp::getVarMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::mlir::MutableOperandRange CopyInOp::getVarIsPresentMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> CopyInOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range CopyInOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void CopyInOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Type resultType1, ::mlir::Value var, /*optional*/::mlir::Value var_is_present) {
  odsState.addOperands(var);
  if (var_is_present)
    odsState.addOperands(var_is_present);
  odsState.addTypes(resultType0);
  odsState.addTypes(resultType1);
}

void CopyInOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value var, /*optional*/::mlir::Value var_is_present) {
  odsState.addOperands(var);
  if (var_is_present)
    odsState.addOperands(var_is_present);
  assert(resultTypes.size() == 2u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CopyInOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 2u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult CopyInOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps12(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    if (valueGroup1.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup1.size();
    }

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps12(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps7(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult CopyInOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult CopyInOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand varRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> varOperands(varRawOperands);  ::llvm::SMLoc varOperandsLoc;
  (void)varOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> var_is_presentOperands;
  ::llvm::SMLoc var_is_presentOperandsLoc;
  (void)var_is_presentOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  varOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(varRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("handle_optional"))) {

  {
    var_is_presentOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      var_is_presentOperands.push_back(operand);
    }
  }
  }
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
  if (parser.resolveOperands(::llvm::concat<const ::mlir::OpAsmParser::UnresolvedOperand>(varOperands, var_is_presentOperands), allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void CopyInOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getVar();
  if (getVarIsPresent()) {
    _odsPrinter << ' ' << "handle_optional";
    _odsPrinter << ' ';
    if (::mlir::Value value = getVarIsPresent())
      _odsPrinter << value;
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace hlfir
MLIR_DEFINE_EXPLICIT_TYPE_ID(hlfir::CopyInOp)

namespace hlfir {

//===----------------------------------------------------------------------===//
// hlfir::CopyOutOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
CopyOutOpGenericAdaptorBase::CopyOutOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("hlfir.copy_out", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> CopyOutOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {false, false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperandsSize - 2) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::DictionaryAttr CopyOutOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
CopyOutOpAdaptor::CopyOutOpAdaptor(CopyOutOp op) : CopyOutOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult CopyOutOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> CopyOutOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 2) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range CopyOutOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CopyOutOp::getTemp() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::IntegerType> CopyOutOp::getWasCopied() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(1).begin());
}

::mlir::Value CopyOutOp::getVar() {
  auto operands = getODSOperands(2);
  return operands.empty() ? ::mlir::Value{} : ::llvm::cast<::mlir::Value>(*operands.begin());
}

::mlir::MutableOperandRange CopyOutOp::getTempMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::mlir::MutableOperandRange CopyOutOp::getWasCopiedMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::mlir::MutableOperandRange CopyOutOp::getVarMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> CopyOutOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range CopyOutOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void CopyOutOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value temp, ::mlir::Value was_copied, /*optional*/::mlir::Value var) {
  odsState.addOperands(temp);
  odsState.addOperands(was_copied);
  if (var)
    odsState.addOperands(var);
}

void CopyOutOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value temp, ::mlir::Value was_copied, /*optional*/::mlir::Value var) {
  odsState.addOperands(temp);
  odsState.addOperands(was_copied);
  if (var)
    odsState.addOperands(var);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CopyOutOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult CopyOutOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps12(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    if (valueGroup2.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup2.size();
    }

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps12(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult CopyOutOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult CopyOutOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand tempRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> tempOperands(tempRawOperands);  ::llvm::SMLoc tempOperandsLoc;
  (void)tempOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand was_copiedRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> was_copiedOperands(was_copiedRawOperands);  ::llvm::SMLoc was_copiedOperandsLoc;
  (void)was_copiedOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> varOperands;
  ::llvm::SMLoc varOperandsLoc;
  (void)varOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  tempOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(tempRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  was_copiedOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(was_copiedRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("to"))) {

  {
    varOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      varOperands.push_back(operand);
    }
  }
  }
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
  if (parser.resolveOperands(::llvm::concat<const ::mlir::OpAsmParser::UnresolvedOperand>(tempOperands, was_copiedOperands, varOperands), allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void CopyOutOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTemp();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getWasCopied();
  if (getVar()) {
    _odsPrinter << ' ' << "to";
    _odsPrinter << ' ';
    if (::mlir::Value value = getVar())
      _odsPrinter << value;
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace hlfir
MLIR_DEFINE_EXPLICIT_TYPE_ID(hlfir::CopyOutOp)

namespace hlfir {

//===----------------------------------------------------------------------===//
// hlfir::CountOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
CountOpGenericAdaptorBase::CountOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("hlfir.count", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> CountOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  assert(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, CountOp::getOperandSegmentSizesAttrName(*odsOpName)) && "missing segment size attribute for op");
  auto sizeAttr = ::llvm::cast<::mlir::DenseI32ArrayAttr>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, CountOp::getOperandSegmentSizesAttrName(*odsOpName)));

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::DictionaryAttr CountOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
CountOpAdaptor::CountOpAdaptor(CountOp op) : CountOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult CountOpAdaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_operandSegmentSizes;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'hlfir.count' op ""requires attribute 'operandSegmentSizes'");
    if (namedAttrIt->getName() == CountOp::getOperandSegmentSizesAttrName(*odsOpName)) {
      tblgen_operandSegmentSizes = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  {
    auto sizeAttr = ::llvm::cast<::mlir::DenseI32ArrayAttr>(tblgen_operandSegmentSizes);
    auto numElements = sizeAttr.asArrayRef().size();
    if (numElements != 3)
      return emitError(loc, "'hlfir.count' op ""'operandSegmentSizes' attribute for specifying operand segments must have 3 "
                "elements, but got ") << numElements;
  }
    return ::mlir::success();
}

std::pair<unsigned, unsigned> CountOp::getODSOperandIndexAndLength(unsigned index) {
  auto sizeAttr = ::llvm::cast<::mlir::DenseI32ArrayAttr>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getOperandSegmentSizesAttrName()));

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::Operation::operand_range CountOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value CountOp::getMask() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value CountOp::getDim() {
  auto operands = getODSOperands(1);
  return operands.empty() ? ::mlir::Value{} : ::llvm::cast<::mlir::Value>(*operands.begin());
}

::mlir::Value CountOp::getKind() {
  auto operands = getODSOperands(2);
  return operands.empty() ? ::mlir::Value{} : ::llvm::cast<::mlir::Value>(*operands.begin());
}

::mlir::MutableOperandRange CountOp::getMaskMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(0u, *::mlir::impl::getNamedAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getOperandSegmentSizesAttrName())));
  return mutableRange;
}

::mlir::MutableOperandRange CountOp::getDimMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(1u, *::mlir::impl::getNamedAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getOperandSegmentSizesAttrName())));
  return mutableRange;
}

::mlir::MutableOperandRange CountOp::getKindMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(2u, *::mlir::impl::getNamedAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getOperandSegmentSizesAttrName())));
  return mutableRange;
}

std::pair<unsigned, unsigned> CountOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range CountOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void CountOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value mask, /*optional*/::mlir::Value dim, /*optional*/::mlir::Value kind) {
  odsState.addOperands(mask);
  if (dim)
    odsState.addOperands(dim);
  if (kind)
    odsState.addOperands(kind);
  odsState.addAttribute(getOperandSegmentSizesAttrName(odsState.name), odsBuilder.getDenseI32ArrayAttr({1, (dim ? 1 : 0), (kind ? 1 : 0)}));
  odsState.addTypes(resultType0);
}

void CountOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value mask, /*optional*/::mlir::Value dim, /*optional*/::mlir::Value kind) {
  odsState.addOperands(mask);
  if (dim)
    odsState.addOperands(dim);
  if (kind)
    odsState.addOperands(kind);
  odsState.addAttribute(getOperandSegmentSizesAttrName(odsState.name), odsBuilder.getDenseI32ArrayAttr({1, (dim ? 1 : 0), (kind ? 1 : 0)}));
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CountOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult CountOp::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_operandSegmentSizes;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'operandSegmentSizes'");
    if (namedAttrIt->getName() == getOperandSegmentSizesAttrName()) {
      tblgen_operandSegmentSizes = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  {
    auto sizeAttr = ::llvm::cast<::mlir::DenseI32ArrayAttr>(tblgen_operandSegmentSizes);
    auto numElements = sizeAttr.asArrayRef().size();
    if (numElements != 3)
      return emitOpError("'operandSegmentSizes' attribute for specifying operand segments must have 3 "
                "elements, but got ") << numElements;
  }
    {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    if (valueGroup1.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup1.size();
    }

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    if (valueGroup2.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup2.size();
    }

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps4(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult CountOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult CountOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand maskRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> maskOperands(maskRawOperands);  ::llvm::SMLoc maskOperandsLoc;
  (void)maskOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> dimOperands;
  ::llvm::SMLoc dimOperandsLoc;
  (void)dimOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> kindOperands;
  ::llvm::SMLoc kindOperandsLoc;
  (void)kindOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  maskOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(maskRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("dim"))) {

  {
    dimOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      dimOperands.push_back(operand);
    }
  }
  }
  if (::mlir::succeeded(parser.parseOptionalKeyword("kind"))) {

  {
    kindOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      kindOperands.push_back(operand);
    }
  }
  }
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
  result.addAttribute("operandSegmentSizes", parser.getBuilder().getDenseI32ArrayAttr({1, static_cast<int32_t>(dimOperands.size()), static_cast<int32_t>(kindOperands.size())}));
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(::llvm::concat<const ::mlir::OpAsmParser::UnresolvedOperand>(maskOperands, dimOperands, kindOperands), allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void CountOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getMask();
  if (getDim()) {
    _odsPrinter << ' ' << "dim";
    _odsPrinter << ' ';
    if (::mlir::Value value = getDim())
      _odsPrinter << value;
  }
  if (getKind()) {
    _odsPrinter << ' ' << "kind";
    _odsPrinter << ' ';
    if (::mlir::Value value = getKind())
      _odsPrinter << value;
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("operandSegmentSizes");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace hlfir
MLIR_DEFINE_EXPLICIT_TYPE_ID(hlfir::CountOp)

namespace hlfir {

//===----------------------------------------------------------------------===//
// hlfir::DeclareOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
DeclareOpGenericAdaptorBase::DeclareOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("hlfir.declare", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> DeclareOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  assert(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 1, DeclareOp::getOperandSegmentSizesAttrName(*odsOpName)) && "missing segment size attribute for op");
  auto sizeAttr = ::llvm::cast<::mlir::DenseI32ArrayAttr>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 1, DeclareOp::getOperandSegmentSizesAttrName(*odsOpName)));

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::DictionaryAttr DeclareOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::StringAttr DeclareOpGenericAdaptorBase::getUniqNameAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::StringAttr>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 1, odsAttrs.end() - 0, DeclareOp::getUniqNameAttrName(*odsOpName)));
  return attr;
}

::mlir::StringAttr DeclareOpGenericAdaptorBase::getUniqName() {
  auto attr = getUniqNameAttr();
  return ::llvm::cast<::mlir::StringAttr>(attr);
}

::fir::FortranVariableFlagsAttr DeclareOpGenericAdaptorBase::getFortranAttrsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::dyn_cast_or_null<::fir::FortranVariableFlagsAttr>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 2, DeclareOp::getFortranAttrsAttrName(*odsOpName)));
  return attr;
}

::std::optional<::fir::FortranVariableFlagsEnum> DeclareOpGenericAdaptorBase::getFortranAttrs() {
  auto attr = getFortranAttrsAttr();
  return attr ? ::std::optional<::fir::FortranVariableFlagsEnum>(attr.getFlags()) : (::std::nullopt);
}

} // namespace detail
DeclareOpAdaptor::DeclareOpAdaptor(DeclareOp op) : DeclareOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult DeclareOpAdaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_operandSegmentSizes;
  ::mlir::Attribute tblgen_fortran_attrs;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'hlfir.declare' op ""requires attribute 'operandSegmentSizes'");
    if (namedAttrIt->getName() == DeclareOp::getOperandSegmentSizesAttrName(*odsOpName)) {
      tblgen_operandSegmentSizes = namedAttrIt->getValue();
      break;
    }
    else if (namedAttrIt->getName() == DeclareOp::getFortranAttrsAttrName(*odsOpName)) {
      tblgen_fortran_attrs = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_uniq_name;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'hlfir.declare' op ""requires attribute 'uniq_name'");
    if (namedAttrIt->getName() == DeclareOp::getUniqNameAttrName(*odsOpName)) {
      tblgen_uniq_name = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  {
    auto sizeAttr = ::llvm::cast<::mlir::DenseI32ArrayAttr>(tblgen_operandSegmentSizes);
    auto numElements = sizeAttr.asArrayRef().size();
    if (numElements != 3)
      return emitError(loc, "'hlfir.declare' op ""'operandSegmentSizes' attribute for specifying operand segments must have 3 "
                "elements, but got ") << numElements;
  }

  if (tblgen_uniq_name && !((::llvm::isa<::mlir::StringAttr>(tblgen_uniq_name))))
    return emitError(loc, "'hlfir.declare' op ""attribute 'uniq_name' failed to satisfy constraint: An Attribute containing a string");

  if (tblgen_fortran_attrs && !((::llvm::isa<::fir::FortranVariableFlagsAttr>(tblgen_fortran_attrs))))
    return emitError(loc, "'hlfir.declare' op ""attribute 'fortran_attrs' failed to satisfy constraint: ");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> DeclareOp::getODSOperandIndexAndLength(unsigned index) {
  auto sizeAttr = ::llvm::cast<::mlir::DenseI32ArrayAttr>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 1, getOperandSegmentSizesAttrName()));

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::Operation::operand_range DeclareOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value DeclareOp::getMemref() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value DeclareOp::getShape() {
  auto operands = getODSOperands(1);
  return operands.empty() ? ::mlir::Value{} : ::llvm::cast<::mlir::Value>(*operands.begin());
}

::mlir::Operation::operand_range DeclareOp::getTypeparams() {
  return getODSOperands(2);
}

::mlir::MutableOperandRange DeclareOp::getMemrefMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(0u, *::mlir::impl::getNamedAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 1, getOperandSegmentSizesAttrName())));
  return mutableRange;
}

::mlir::MutableOperandRange DeclareOp::getShapeMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(1u, *::mlir::impl::getNamedAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 1, getOperandSegmentSizesAttrName())));
  return mutableRange;
}

::mlir::MutableOperandRange DeclareOp::getTypeparamsMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(2u, *::mlir::impl::getNamedAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 1, getOperandSegmentSizesAttrName())));
  return mutableRange;
}

std::pair<unsigned, unsigned> DeclareOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range DeclareOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::StringAttr DeclareOp::getUniqNameAttr() {
  return ::llvm::cast<::mlir::StringAttr>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 1, (*this)->getAttrs().end() - 0, getUniqNameAttrName()));
}

::mlir::StringAttr DeclareOp::getUniqName() {
  auto attr = getUniqNameAttr();
  return ::llvm::cast<::mlir::StringAttr>(attr);
}

::fir::FortranVariableFlagsAttr DeclareOp::getFortranAttrsAttr() {
  return ::llvm::dyn_cast_or_null<::fir::FortranVariableFlagsAttr>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 2, getFortranAttrsAttrName()));
}

::std::optional<::fir::FortranVariableFlagsEnum> DeclareOp::getFortranAttrs() {
  auto attr = getFortranAttrsAttr();
  return attr ? ::std::optional<::fir::FortranVariableFlagsEnum>(attr.getFlags()) : (::std::nullopt);
}

void DeclareOp::setUniqNameAttr(::mlir::StringAttr attr) {
  (*this)->setAttr(getUniqNameAttrName(), attr);
}

void DeclareOp::setFortranAttrsAttr(::fir::FortranVariableFlagsAttr attr) {
  (*this)->setAttr(getFortranAttrsAttrName(), attr);
}

void DeclareOp::setFortranAttrs(::std::optional<::fir::FortranVariableFlagsEnum> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getFortranAttrsAttrName(), ::fir::FortranVariableFlagsAttr::get(::mlir::Builder((*this)->getContext()).getContext(), *attrValue));
    (*this)->removeAttr(getFortranAttrsAttrName());
}

::mlir::Attribute DeclareOp::removeFortranAttrsAttr() {
return (*this)->removeAttr(getFortranAttrsAttrName());
}

void DeclareOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Type resultType1, ::mlir::Value memref, /*optional*/::mlir::Value shape, ::mlir::ValueRange typeparams, ::mlir::StringAttr uniq_name, /*optional*/::fir::FortranVariableFlagsAttr fortran_attrs) {
  odsState.addOperands(memref);
  if (shape)
    odsState.addOperands(shape);
  odsState.addOperands(typeparams);
  odsState.addAttribute(getOperandSegmentSizesAttrName(odsState.name), odsBuilder.getDenseI32ArrayAttr({1, (shape ? 1 : 0), static_cast<int32_t>(typeparams.size())}));
  odsState.addAttribute(getUniqNameAttrName(odsState.name), uniq_name);
  if (fortran_attrs) {
    odsState.addAttribute(getFortranAttrsAttrName(odsState.name), fortran_attrs);
  }
  odsState.addTypes(resultType0);
  odsState.addTypes(resultType1);
}

void DeclareOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value memref, /*optional*/::mlir::Value shape, ::mlir::ValueRange typeparams, ::mlir::StringAttr uniq_name, /*optional*/::fir::FortranVariableFlagsAttr fortran_attrs) {
  odsState.addOperands(memref);
  if (shape)
    odsState.addOperands(shape);
  odsState.addOperands(typeparams);
  odsState.addAttribute(getOperandSegmentSizesAttrName(odsState.name), odsBuilder.getDenseI32ArrayAttr({1, (shape ? 1 : 0), static_cast<int32_t>(typeparams.size())}));
  odsState.addAttribute(getUniqNameAttrName(odsState.name), uniq_name);
  if (fortran_attrs) {
    odsState.addAttribute(getFortranAttrsAttrName(odsState.name), fortran_attrs);
  }
  assert(resultTypes.size() == 2u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void DeclareOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 2u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult DeclareOp::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_operandSegmentSizes;
  ::mlir::Attribute tblgen_fortran_attrs;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'operandSegmentSizes'");
    if (namedAttrIt->getName() == getOperandSegmentSizesAttrName()) {
      tblgen_operandSegmentSizes = namedAttrIt->getValue();
      break;
    }
    else if (namedAttrIt->getName() == getFortranAttrsAttrName()) {
      tblgen_fortran_attrs = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_uniq_name;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'uniq_name'");
    if (namedAttrIt->getName() == getUniqNameAttrName()) {
      tblgen_uniq_name = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  {
    auto sizeAttr = ::llvm::cast<::mlir::DenseI32ArrayAttr>(tblgen_operandSegmentSizes);
    auto numElements = sizeAttr.asArrayRef().size();
    if (numElements != 3)
      return emitOpError("'operandSegmentSizes' attribute for specifying operand segments must have 3 "
                "elements, but got ") << numElements;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_HLFIROps1(*this, tblgen_uniq_name, "uniq_name")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_HLFIROps2(*this, tblgen_fortran_attrs, "fortran_attrs")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps13(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    if (valueGroup1.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup1.size();
    }

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps8(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps9(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult DeclareOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult DeclareOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand memrefRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> memrefOperands(memrefRawOperands);  ::llvm::SMLoc memrefOperandsLoc;
  (void)memrefOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> shapeOperands;
  ::llvm::SMLoc shapeOperandsLoc;
  (void)shapeOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> typeparamsOperands;
  ::llvm::SMLoc typeparamsOperandsLoc;
  (void)typeparamsOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  memrefOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(memrefRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalLParen())) {

  {
    shapeOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      shapeOperands.push_back(operand);
    }
  }
  if (parser.parseRParen())
    return ::mlir::failure();
  }
  if (::mlir::succeeded(parser.parseOptionalKeyword("typeparams"))) {

  typeparamsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(typeparamsOperands))
    return ::mlir::failure();
  }
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
  result.addAttribute("operandSegmentSizes", parser.getBuilder().getDenseI32ArrayAttr({1, static_cast<int32_t>(shapeOperands.size()), static_cast<int32_t>(typeparamsOperands.size())}));
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(::llvm::concat<const ::mlir::OpAsmParser::UnresolvedOperand>(memrefOperands, shapeOperands, typeparamsOperands), allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void DeclareOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getMemref();
  if (getShape()) {
    _odsPrinter << "(";
    if (::mlir::Value value = getShape())
      _odsPrinter << value;
    _odsPrinter << ")";
  }
  if (!getTypeparams().empty()) {
    _odsPrinter << ' ' << "typeparams";
    _odsPrinter << ' ';
    _odsPrinter << getTypeparams();
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("operandSegmentSizes");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace hlfir
MLIR_DEFINE_EXPLICIT_TYPE_ID(hlfir::DeclareOp)

namespace hlfir {

//===----------------------------------------------------------------------===//
// hlfir::DesignateOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
DesignateOpGenericAdaptorBase::DesignateOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("hlfir.designate", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> DesignateOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  assert(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 1, odsAttrs.end() - 0, DesignateOp::getOperandSegmentSizesAttrName(*odsOpName)) && "missing segment size attribute for op");
  auto sizeAttr = ::llvm::cast<::mlir::DenseI32ArrayAttr>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 1, odsAttrs.end() - 0, DesignateOp::getOperandSegmentSizesAttrName(*odsOpName)));

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::DictionaryAttr DesignateOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::StringAttr DesignateOpGenericAdaptorBase::getComponentAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::dyn_cast_or_null<::mlir::StringAttr>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 2, DesignateOp::getComponentAttrName(*odsOpName)));
  return attr;
}

::std::optional<::mlir::StringAttr> DesignateOpGenericAdaptorBase::getComponent() {
  auto attr = getComponentAttr();
  return attr ? ::std::optional<::mlir::StringAttr>(::llvm::cast<::mlir::StringAttr>(attr)) : (::std::nullopt);
}

::mlir::DenseBoolArrayAttr DesignateOpGenericAdaptorBase::getIsTripletAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::DenseBoolArrayAttr>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 1, DesignateOp::getIsTripletAttrName(*odsOpName)));
  return attr;
}

::llvm::ArrayRef<bool> DesignateOpGenericAdaptorBase::getIsTriplet() {
  auto attr = getIsTripletAttr();
  return attr;
}

::mlir::BoolAttr DesignateOpGenericAdaptorBase::getComplexPartAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 2, DesignateOp::getComplexPartAttrName(*odsOpName)));
  return attr;
}

::std::optional< bool > DesignateOpGenericAdaptorBase::getComplexPart() {
  auto attr = getComplexPartAttr();
  return attr ? ::std::optional< bool >(attr.getValue()) : (::std::nullopt);
}

::fir::FortranVariableFlagsAttr DesignateOpGenericAdaptorBase::getFortranAttrsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::dyn_cast_or_null<::fir::FortranVariableFlagsAttr>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 2, DesignateOp::getFortranAttrsAttrName(*odsOpName)));
  return attr;
}

::std::optional<::fir::FortranVariableFlagsEnum> DesignateOpGenericAdaptorBase::getFortranAttrs() {
  auto attr = getFortranAttrsAttr();
  return attr ? ::std::optional<::fir::FortranVariableFlagsEnum>(attr.getFlags()) : (::std::nullopt);
}

} // namespace detail
DesignateOpAdaptor::DesignateOpAdaptor(DesignateOp op) : DesignateOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult DesignateOpAdaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_is_triplet;
  ::mlir::Attribute tblgen_complex_part;
  ::mlir::Attribute tblgen_component;
  ::mlir::Attribute tblgen_fortran_attrs;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'hlfir.designate' op ""requires attribute 'is_triplet'");
    if (namedAttrIt->getName() == DesignateOp::getIsTripletAttrName(*odsOpName)) {
      tblgen_is_triplet = namedAttrIt->getValue();
      break;
    }
    else if (namedAttrIt->getName() == DesignateOp::getComplexPartAttrName(*odsOpName)) {
      tblgen_complex_part = namedAttrIt->getValue();
    }
    else if (namedAttrIt->getName() == DesignateOp::getComponentAttrName(*odsOpName)) {
      tblgen_component = namedAttrIt->getValue();
    }
    else if (namedAttrIt->getName() == DesignateOp::getFortranAttrsAttrName(*odsOpName)) {
      tblgen_fortran_attrs = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_operandSegmentSizes;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'hlfir.designate' op ""requires attribute 'operandSegmentSizes'");
    if (namedAttrIt->getName() == DesignateOp::getOperandSegmentSizesAttrName(*odsOpName)) {
      tblgen_operandSegmentSizes = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  {
    auto sizeAttr = ::llvm::cast<::mlir::DenseI32ArrayAttr>(tblgen_operandSegmentSizes);
    auto numElements = sizeAttr.asArrayRef().size();
    if (numElements != 6)
      return emitError(loc, "'hlfir.designate' op ""'operandSegmentSizes' attribute for specifying operand segments must have 6 "
                "elements, but got ") << numElements;
  }

  if (tblgen_component && !((::llvm::isa<::mlir::StringAttr>(tblgen_component))))
    return emitError(loc, "'hlfir.designate' op ""attribute 'component' failed to satisfy constraint: An Attribute containing a string");

  if (tblgen_is_triplet && !((::llvm::isa<::mlir::DenseBoolArrayAttr>(tblgen_is_triplet))))
    return emitError(loc, "'hlfir.designate' op ""attribute 'is_triplet' failed to satisfy constraint: i1 dense array attribute");

  if (tblgen_complex_part && !((::llvm::isa<::mlir::BoolAttr>(tblgen_complex_part))))
    return emitError(loc, "'hlfir.designate' op ""attribute 'complex_part' failed to satisfy constraint: bool attribute");

  if (tblgen_fortran_attrs && !((::llvm::isa<::fir::FortranVariableFlagsAttr>(tblgen_fortran_attrs))))
    return emitError(loc, "'hlfir.designate' op ""attribute 'fortran_attrs' failed to satisfy constraint: ");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> DesignateOp::getODSOperandIndexAndLength(unsigned index) {
  auto sizeAttr = ::llvm::cast<::mlir::DenseI32ArrayAttr>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 1, (*this)->getAttrs().end() - 0, getOperandSegmentSizesAttrName()));

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::Operation::operand_range DesignateOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value DesignateOp::getMemref() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value DesignateOp::getComponentShape() {
  auto operands = getODSOperands(1);
  return operands.empty() ? ::mlir::Value{} : ::llvm::cast<::mlir::Value>(*operands.begin());
}

::mlir::Operation::operand_range DesignateOp::getIndices() {
  return getODSOperands(2);
}

::mlir::Operation::operand_range DesignateOp::getSubstring() {
  return getODSOperands(3);
}

::mlir::Value DesignateOp::getShape() {
  auto operands = getODSOperands(4);
  return operands.empty() ? ::mlir::Value{} : ::llvm::cast<::mlir::Value>(*operands.begin());
}

::mlir::Operation::operand_range DesignateOp::getTypeparams() {
  return getODSOperands(5);
}

::mlir::MutableOperandRange DesignateOp::getMemrefMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(0u, *::mlir::impl::getNamedAttrFromSortedRange((*this)->getAttrs().begin() + 1, (*this)->getAttrs().end() - 0, getOperandSegmentSizesAttrName())));
  return mutableRange;
}

::mlir::MutableOperandRange DesignateOp::getComponentShapeMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(1u, *::mlir::impl::getNamedAttrFromSortedRange((*this)->getAttrs().begin() + 1, (*this)->getAttrs().end() - 0, getOperandSegmentSizesAttrName())));
  return mutableRange;
}

::mlir::MutableOperandRange DesignateOp::getIndicesMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(2u, *::mlir::impl::getNamedAttrFromSortedRange((*this)->getAttrs().begin() + 1, (*this)->getAttrs().end() - 0, getOperandSegmentSizesAttrName())));
  return mutableRange;
}

::mlir::MutableOperandRange DesignateOp::getSubstringMutable() {
  auto range = getODSOperandIndexAndLength(3);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(3u, *::mlir::impl::getNamedAttrFromSortedRange((*this)->getAttrs().begin() + 1, (*this)->getAttrs().end() - 0, getOperandSegmentSizesAttrName())));
  return mutableRange;
}

::mlir::MutableOperandRange DesignateOp::getShapeMutable() {
  auto range = getODSOperandIndexAndLength(4);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(4u, *::mlir::impl::getNamedAttrFromSortedRange((*this)->getAttrs().begin() + 1, (*this)->getAttrs().end() - 0, getOperandSegmentSizesAttrName())));
  return mutableRange;
}

::mlir::MutableOperandRange DesignateOp::getTypeparamsMutable() {
  auto range = getODSOperandIndexAndLength(5);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(5u, *::mlir::impl::getNamedAttrFromSortedRange((*this)->getAttrs().begin() + 1, (*this)->getAttrs().end() - 0, getOperandSegmentSizesAttrName())));
  return mutableRange;
}

std::pair<unsigned, unsigned> DesignateOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range DesignateOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::StringAttr DesignateOp::getComponentAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::StringAttr>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 2, getComponentAttrName()));
}

::std::optional<::mlir::StringAttr> DesignateOp::getComponent() {
  auto attr = getComponentAttr();
  return attr ? ::std::optional<::mlir::StringAttr>(::llvm::cast<::mlir::StringAttr>(attr)) : (::std::nullopt);
}

::mlir::DenseBoolArrayAttr DesignateOp::getIsTripletAttr() {
  return ::llvm::cast<::mlir::DenseBoolArrayAttr>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 1, getIsTripletAttrName()));
}

::llvm::ArrayRef<bool> DesignateOp::getIsTriplet() {
  auto attr = getIsTripletAttr();
  return attr;
}

::mlir::BoolAttr DesignateOp::getComplexPartAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 2, getComplexPartAttrName()));
}

::std::optional< bool > DesignateOp::getComplexPart() {
  auto attr = getComplexPartAttr();
  return attr ? ::std::optional< bool >(attr.getValue()) : (::std::nullopt);
}

::fir::FortranVariableFlagsAttr DesignateOp::getFortranAttrsAttr() {
  return ::llvm::dyn_cast_or_null<::fir::FortranVariableFlagsAttr>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 2, getFortranAttrsAttrName()));
}

::std::optional<::fir::FortranVariableFlagsEnum> DesignateOp::getFortranAttrs() {
  auto attr = getFortranAttrsAttr();
  return attr ? ::std::optional<::fir::FortranVariableFlagsEnum>(attr.getFlags()) : (::std::nullopt);
}

void DesignateOp::setComponentAttr(::mlir::StringAttr attr) {
  (*this)->setAttr(getComponentAttrName(), attr);
}

void DesignateOp::setIsTripletAttr(::mlir::DenseBoolArrayAttr attr) {
  (*this)->setAttr(getIsTripletAttrName(), attr);
}

void DesignateOp::setIsTriplet(::llvm::ArrayRef<bool> attrValue) {
  (*this)->setAttr(getIsTripletAttrName(), ::mlir::Builder((*this)->getContext()).getDenseBoolArrayAttr(attrValue));
}

void DesignateOp::setComplexPartAttr(::mlir::BoolAttr attr) {
  (*this)->setAttr(getComplexPartAttrName(), attr);
}

void DesignateOp::setComplexPart(::std::optional<bool> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getComplexPartAttrName(), ::mlir::Builder((*this)->getContext()).getBoolAttr(*attrValue));
    (*this)->removeAttr(getComplexPartAttrName());
}

void DesignateOp::setFortranAttrsAttr(::fir::FortranVariableFlagsAttr attr) {
  (*this)->setAttr(getFortranAttrsAttrName(), attr);
}

void DesignateOp::setFortranAttrs(::std::optional<::fir::FortranVariableFlagsEnum> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getFortranAttrsAttrName(), ::fir::FortranVariableFlagsAttr::get(::mlir::Builder((*this)->getContext()).getContext(), *attrValue));
    (*this)->removeAttr(getFortranAttrsAttrName());
}

::mlir::Attribute DesignateOp::removeComponentAttr() {
return (*this)->removeAttr(getComponentAttrName());
}

::mlir::Attribute DesignateOp::removeComplexPartAttr() {
return (*this)->removeAttr(getComplexPartAttrName());
}

::mlir::Attribute DesignateOp::removeFortranAttrsAttr() {
return (*this)->removeAttr(getFortranAttrsAttrName());
}

void DesignateOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value memref, /*optional*/::mlir::StringAttr component, /*optional*/::mlir::Value component_shape, ::mlir::ValueRange indices, ::mlir::DenseBoolArrayAttr is_triplet, ::mlir::ValueRange substring, /*optional*/::mlir::BoolAttr complex_part, /*optional*/::mlir::Value shape, ::mlir::ValueRange typeparams, /*optional*/::fir::FortranVariableFlagsAttr fortran_attrs) {
  odsState.addOperands(memref);
  if (component_shape)
    odsState.addOperands(component_shape);
  odsState.addOperands(indices);
  odsState.addOperands(substring);
  if (shape)
    odsState.addOperands(shape);
  odsState.addOperands(typeparams);
  odsState.addAttribute(getOperandSegmentSizesAttrName(odsState.name), odsBuilder.getDenseI32ArrayAttr({1, (component_shape ? 1 : 0), static_cast<int32_t>(indices.size()), static_cast<int32_t>(substring.size()), (shape ? 1 : 0), static_cast<int32_t>(typeparams.size())}));
  if (component) {
    odsState.addAttribute(getComponentAttrName(odsState.name), component);
  }
  odsState.addAttribute(getIsTripletAttrName(odsState.name), is_triplet);
  if (complex_part) {
    odsState.addAttribute(getComplexPartAttrName(odsState.name), complex_part);
  }
  if (fortran_attrs) {
    odsState.addAttribute(getFortranAttrsAttrName(odsState.name), fortran_attrs);
  }
  odsState.addTypes(resultType0);
}

void DesignateOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value memref, /*optional*/::mlir::StringAttr component, /*optional*/::mlir::Value component_shape, ::mlir::ValueRange indices, ::mlir::DenseBoolArrayAttr is_triplet, ::mlir::ValueRange substring, /*optional*/::mlir::BoolAttr complex_part, /*optional*/::mlir::Value shape, ::mlir::ValueRange typeparams, /*optional*/::fir::FortranVariableFlagsAttr fortran_attrs) {
  odsState.addOperands(memref);
  if (component_shape)
    odsState.addOperands(component_shape);
  odsState.addOperands(indices);
  odsState.addOperands(substring);
  if (shape)
    odsState.addOperands(shape);
  odsState.addOperands(typeparams);
  odsState.addAttribute(getOperandSegmentSizesAttrName(odsState.name), odsBuilder.getDenseI32ArrayAttr({1, (component_shape ? 1 : 0), static_cast<int32_t>(indices.size()), static_cast<int32_t>(substring.size()), (shape ? 1 : 0), static_cast<int32_t>(typeparams.size())}));
  if (component) {
    odsState.addAttribute(getComponentAttrName(odsState.name), component);
  }
  odsState.addAttribute(getIsTripletAttrName(odsState.name), is_triplet);
  if (complex_part) {
    odsState.addAttribute(getComplexPartAttrName(odsState.name), complex_part);
  }
  if (fortran_attrs) {
    odsState.addAttribute(getFortranAttrsAttrName(odsState.name), fortran_attrs);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void DesignateOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value memref, /*optional*/::mlir::StringAttr component, /*optional*/::mlir::Value component_shape, ::mlir::ValueRange indices, ::llvm::ArrayRef<bool> is_triplet, ::mlir::ValueRange substring, /*optional*/::mlir::BoolAttr complex_part, /*optional*/::mlir::Value shape, ::mlir::ValueRange typeparams, /*optional*/::fir::FortranVariableFlagsAttr fortran_attrs) {
  odsState.addOperands(memref);
  if (component_shape)
    odsState.addOperands(component_shape);
  odsState.addOperands(indices);
  odsState.addOperands(substring);
  if (shape)
    odsState.addOperands(shape);
  odsState.addOperands(typeparams);
  odsState.addAttribute(getOperandSegmentSizesAttrName(odsState.name), odsBuilder.getDenseI32ArrayAttr({1, (component_shape ? 1 : 0), static_cast<int32_t>(indices.size()), static_cast<int32_t>(substring.size()), (shape ? 1 : 0), static_cast<int32_t>(typeparams.size())}));
  if (component) {
    odsState.addAttribute(getComponentAttrName(odsState.name), component);
  }
  odsState.addAttribute(getIsTripletAttrName(odsState.name), odsBuilder.getDenseBoolArrayAttr(is_triplet));
  if (complex_part) {
    odsState.addAttribute(getComplexPartAttrName(odsState.name), complex_part);
  }
  if (fortran_attrs) {
    odsState.addAttribute(getFortranAttrsAttrName(odsState.name), fortran_attrs);
  }
  odsState.addTypes(resultType0);
}

void DesignateOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value memref, /*optional*/::mlir::StringAttr component, /*optional*/::mlir::Value component_shape, ::mlir::ValueRange indices, ::llvm::ArrayRef<bool> is_triplet, ::mlir::ValueRange substring, /*optional*/::mlir::BoolAttr complex_part, /*optional*/::mlir::Value shape, ::mlir::ValueRange typeparams, /*optional*/::fir::FortranVariableFlagsAttr fortran_attrs) {
  odsState.addOperands(memref);
  if (component_shape)
    odsState.addOperands(component_shape);
  odsState.addOperands(indices);
  odsState.addOperands(substring);
  if (shape)
    odsState.addOperands(shape);
  odsState.addOperands(typeparams);
  odsState.addAttribute(getOperandSegmentSizesAttrName(odsState.name), odsBuilder.getDenseI32ArrayAttr({1, (component_shape ? 1 : 0), static_cast<int32_t>(indices.size()), static_cast<int32_t>(substring.size()), (shape ? 1 : 0), static_cast<int32_t>(typeparams.size())}));
  if (component) {
    odsState.addAttribute(getComponentAttrName(odsState.name), component);
  }
  odsState.addAttribute(getIsTripletAttrName(odsState.name), odsBuilder.getDenseBoolArrayAttr(is_triplet));
  if (complex_part) {
    odsState.addAttribute(getComplexPartAttrName(odsState.name), complex_part);
  }
  if (fortran_attrs) {
    odsState.addAttribute(getFortranAttrsAttrName(odsState.name), fortran_attrs);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void DesignateOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult DesignateOp::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_is_triplet;
  ::mlir::Attribute tblgen_complex_part;
  ::mlir::Attribute tblgen_component;
  ::mlir::Attribute tblgen_fortran_attrs;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'is_triplet'");
    if (namedAttrIt->getName() == getIsTripletAttrName()) {
      tblgen_is_triplet = namedAttrIt->getValue();
      break;
    }
    else if (namedAttrIt->getName() == getComplexPartAttrName()) {
      tblgen_complex_part = namedAttrIt->getValue();
    }
    else if (namedAttrIt->getName() == getComponentAttrName()) {
      tblgen_component = namedAttrIt->getValue();
    }
    else if (namedAttrIt->getName() == getFortranAttrsAttrName()) {
      tblgen_fortran_attrs = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_operandSegmentSizes;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'operandSegmentSizes'");
    if (namedAttrIt->getName() == getOperandSegmentSizesAttrName()) {
      tblgen_operandSegmentSizes = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  {
    auto sizeAttr = ::llvm::cast<::mlir::DenseI32ArrayAttr>(tblgen_operandSegmentSizes);
    auto numElements = sizeAttr.asArrayRef().size();
    if (numElements != 6)
      return emitOpError("'operandSegmentSizes' attribute for specifying operand segments must have 6 "
                "elements, but got ") << numElements;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_HLFIROps1(*this, tblgen_component, "component")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_HLFIROps4(*this, tblgen_is_triplet, "is_triplet")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_HLFIROps5(*this, tblgen_complex_part, "complex_part")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_HLFIROps2(*this, tblgen_fortran_attrs, "fortran_attrs")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    if (valueGroup1.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup1.size();
    }

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps8(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    if (valueGroup4.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup4.size();
    }

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps8(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup5 = getODSOperands(5);

    for (auto v : valueGroup5) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult DesignateOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult DesignateOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand memrefRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> memrefOperands(memrefRawOperands);  ::llvm::SMLoc memrefOperandsLoc;
  (void)memrefOperandsLoc;
  ::mlir::StringAttr componentAttr;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> component_shapeOperands;
  ::llvm::SMLoc component_shapeOperandsLoc;
  (void)component_shapeOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> indicesOperands;
  ::llvm::SMLoc indicesOperandsLoc;
  (void)indicesOperandsLoc;
  ::mlir::DenseBoolArrayAttr is_tripletAttr;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> substringOperands;
  ::llvm::SMLoc substringOperandsLoc;
  (void)substringOperandsLoc;
  ::mlir::BoolAttr complex_partAttr;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> shapeOperands;
  ::llvm::SMLoc shapeOperandsLoc;
  (void)shapeOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> typeparamsOperands;
  ::llvm::SMLoc typeparamsOperandsLoc;
  (void)typeparamsOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  memrefOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(memrefRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalLBrace())) {

  if (parser.parseCustomAttributeWithFallback(componentAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (componentAttr) result.attributes.append("component", componentAttr);
  if (parser.parseRBrace())
    return ::mlir::failure();
  }
  if (::mlir::succeeded(parser.parseOptionalLess())) {

  {
    component_shapeOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      component_shapeOperands.push_back(operand);
    }
  }
  if (parser.parseGreater())
    return ::mlir::failure();
  }
  {
    indicesOperandsLoc = parser.getCurrentLocation();
    if (parseDesignatorIndices(parser, indicesOperands, is_tripletAttr))
      return ::mlir::failure();
    result.addAttribute("is_triplet", is_tripletAttr);
  }
  if (::mlir::succeeded(parser.parseOptionalKeyword("substr"))) {

  substringOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(substringOperands))
    return ::mlir::failure();
  }
  {
    if (parseDesignatorComplexPart(parser, complex_partAttr))
      return ::mlir::failure();
    if (complex_partAttr)
      result.addAttribute("complex_part", complex_partAttr);
  }
  if (::mlir::succeeded(parser.parseOptionalKeyword("shape"))) {

  {
    shapeOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      shapeOperands.push_back(operand);
    }
  }
  }
  if (::mlir::succeeded(parser.parseOptionalKeyword("typeparams"))) {

  typeparamsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(typeparamsOperands))
    return ::mlir::failure();
  }
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
  result.addAttribute("operandSegmentSizes", parser.getBuilder().getDenseI32ArrayAttr({1, static_cast<int32_t>(component_shapeOperands.size()), static_cast<int32_t>(indicesOperands.size()), static_cast<int32_t>(substringOperands.size()), static_cast<int32_t>(shapeOperands.size()), static_cast<int32_t>(typeparamsOperands.size())}));
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(::llvm::concat<const ::mlir::OpAsmParser::UnresolvedOperand>(memrefOperands, component_shapeOperands, indicesOperands, substringOperands, shapeOperands, typeparamsOperands), allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void DesignateOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getMemref();
  if (getComponentAttr()) {
    _odsPrinter << "{";
  _odsPrinter.printStrippedAttrOrType(getComponentAttr());
    _odsPrinter << "}";
  }
  if (getComponentShape()) {
    _odsPrinter << ' ' << "<";
    if (::mlir::Value value = getComponentShape())
      _odsPrinter << value;
    _odsPrinter << ">";
  }
  _odsPrinter << ' ';
  printDesignatorIndices(_odsPrinter, *this, getIndices(), getIsTripletAttr());
  if (!getSubstring().empty()) {
    _odsPrinter << ' ' << "substr";
    _odsPrinter << ' ';
    _odsPrinter << getSubstring();
  }
  _odsPrinter << ' ';
  printDesignatorComplexPart(_odsPrinter, *this, getComplexPartAttr());
  if (getShape()) {
    _odsPrinter << ' ' << "shape";
    _odsPrinter << ' ';
    if (::mlir::Value value = getShape())
      _odsPrinter << value;
  }
  if (!getTypeparams().empty()) {
    _odsPrinter << ' ' << "typeparams";
    _odsPrinter << ' ';
    _odsPrinter << getTypeparams();
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("operandSegmentSizes");
  elidedAttrs.push_back("component");
  elidedAttrs.push_back("is_triplet");
  elidedAttrs.push_back("complex_part");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

void DesignateOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace hlfir
MLIR_DEFINE_EXPLICIT_TYPE_ID(hlfir::DesignateOp)

namespace hlfir {

//===----------------------------------------------------------------------===//
// hlfir::DestroyOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
DestroyOpGenericAdaptorBase::DestroyOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("hlfir.destroy", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> DestroyOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr DestroyOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
DestroyOpAdaptor::DestroyOpAdaptor(DestroyOp op) : DestroyOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult DestroyOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> DestroyOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range DestroyOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value DestroyOp::getExpr() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::MutableOperandRange DestroyOp::getExprMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> DestroyOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range DestroyOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void DestroyOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value expr) {
  odsState.addOperands(expr);
}

void DestroyOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value expr) {
  odsState.addOperands(expr);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void DestroyOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult DestroyOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult DestroyOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult DestroyOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand exprRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> exprOperands(exprRawOperands);  ::llvm::SMLoc exprOperandsLoc;
  (void)exprOperandsLoc;
  ::mlir::Type exprRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> exprTypes(exprRawTypes);

  exprOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(exprRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  if (parser.parseType(exprRawTypes[0]))
    return ::mlir::failure();
  if (parser.resolveOperands(exprOperands, exprTypes, exprOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void DestroyOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getExpr();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
   _odsPrinter << getExpr().getType();
}

void DestroyOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(::mlir::MemoryEffects::Free::get(), ::mlir::SideEffects::DefaultResource::get());
}

} // namespace hlfir
MLIR_DEFINE_EXPLICIT_TYPE_ID(hlfir::DestroyOp)

namespace hlfir {

//===----------------------------------------------------------------------===//
// hlfir::DotProductOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
DotProductOpGenericAdaptorBase::DotProductOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("hlfir.dot_product", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> DotProductOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr DotProductOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arith::FastMathFlagsAttr DotProductOpGenericAdaptorBase::getFastmathAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, DotProductOp::getFastmathAttrName(*odsOpName)));
  return attr;
}

::mlir::arith::FastMathFlags DotProductOpGenericAdaptorBase::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

} // namespace detail
DotProductOpAdaptor::DotProductOpAdaptor(DotProductOp op) : DotProductOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult DotProductOpAdaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_fastmath;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == DotProductOp::getFastmathAttrName(*odsOpName)) {
      tblgen_fastmath = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (tblgen_fastmath && !((::llvm::isa<::mlir::arith::FastMathFlagsAttr>(tblgen_fastmath))))
    return emitError(loc, "'hlfir.dot_product' op ""attribute 'fastmath' failed to satisfy constraint: Floating point fast math flags");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> DotProductOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range DotProductOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value DotProductOp::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value DotProductOp::getRhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::MutableOperandRange DotProductOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::mlir::MutableOperandRange DotProductOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> DotProductOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range DotProductOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::arith::FastMathFlagsAttr DotProductOp::getFastmathAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getFastmathAttrName()));
}

::mlir::arith::FastMathFlags DotProductOp::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

void DotProductOp::setFastmathAttr(::mlir::arith::FastMathFlagsAttr attr) {
  (*this)->setAttr(getFastmathAttrName(), attr);
}

void DotProductOp::setFastmath(::mlir::arith::FastMathFlags attrValue) {
  (*this)->setAttr(getFastmathAttrName(), ::mlir::arith::FastMathFlagsAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void DotProductOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (fastmath) {
    odsState.addAttribute(getFastmathAttrName(odsState.name), fastmath);
  }
  odsState.addTypes(resultType0);
}

void DotProductOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (fastmath) {
    odsState.addAttribute(getFastmathAttrName(odsState.name), fastmath);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void DotProductOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addAttribute(getFastmathAttrName(odsState.name), ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath));
  odsState.addTypes(resultType0);
}

void DotProductOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addAttribute(getFastmathAttrName(odsState.name), ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath));
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void DotProductOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void DotProductOp::populateDefaultAttrs(const ::mlir::OperationName &opName, ::mlir::NamedAttrList &attributes) {
  auto attrNames = opName.getAttributeNames();
  ::mlir::Builder odsBuilder(attrNames.front().getContext());
  if (!attributes.get(attrNames[0])) {
    attributes.append(attrNames[0], ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::FastMathFlags::none));
  }
}

::mlir::LogicalResult DotProductOp::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_fastmath;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == getFastmathAttrName()) {
      tblgen_fastmath = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_HLFIROps6(*this, tblgen_fastmath, "fastmath")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps14(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps14(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps4(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult DotProductOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult DotProductOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc;
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc;
  (void)rhsOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  lhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(lhsRawOperands[0]))
    return ::mlir::failure();

  rhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(rhsRawOperands[0]))
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
  if (parser.resolveOperands(::llvm::concat<const ::mlir::OpAsmParser::UnresolvedOperand>(lhsOperands, rhsOperands), allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void DotProductOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getLhs();
  _odsPrinter << ' ';
  _odsPrinter << getRhs();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getFastmathAttr();
     if(attr && (attr == ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::FastMathFlags::none)))
       elidedAttrs.push_back("fastmath");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace hlfir
MLIR_DEFINE_EXPLICIT_TYPE_ID(hlfir::DotProductOp)

namespace hlfir {

//===----------------------------------------------------------------------===//
// hlfir::ElementalAddrOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ElementalAddrOpGenericAdaptorBase::ElementalAddrOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("hlfir.elemental_addr", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> ElementalAddrOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr ElementalAddrOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::UnitAttr ElementalAddrOpGenericAdaptorBase::getUnorderedAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, ElementalAddrOp::getUnorderedAttrName(*odsOpName)));
  return attr;
}

::std::optional<bool> ElementalAddrOpGenericAdaptorBase::getUnordered() {
  auto attr = getUnorderedAttr();
  return attr ? ::std::optional<bool>(attr != nullptr) : (::std::nullopt);
}

::mlir::Region &ElementalAddrOpGenericAdaptorBase::getBody() {
  return *odsRegions[0];
}

::mlir::Region &ElementalAddrOpGenericAdaptorBase::getCleanup() {
  return *odsRegions[1];
}

::mlir::RegionRange ElementalAddrOpGenericAdaptorBase::getRegions() {
  return odsRegions;
}

} // namespace detail
ElementalAddrOpAdaptor::ElementalAddrOpAdaptor(ElementalAddrOp op) : ElementalAddrOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult ElementalAddrOpAdaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_unordered;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == ElementalAddrOp::getUnorderedAttrName(*odsOpName)) {
      tblgen_unordered = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (tblgen_unordered && !((::llvm::isa<::mlir::UnitAttr>(tblgen_unordered))))
    return emitError(loc, "'hlfir.elemental_addr' op ""attribute 'unordered' failed to satisfy constraint: unit attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ElementalAddrOp::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range ElementalAddrOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::fir::ShapeType> ElementalAddrOp::getShape() {
  return ::llvm::cast<::mlir::TypedValue<::fir::ShapeType>>(*getODSOperands(0).begin());
}

::mlir::Operation::operand_range ElementalAddrOp::getTypeparams() {
  return getODSOperands(1);
}

::mlir::MutableOperandRange ElementalAddrOp::getShapeMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::mlir::MutableOperandRange ElementalAddrOp::getTypeparamsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> ElementalAddrOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ElementalAddrOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Region &ElementalAddrOp::getBody() {
  return (*this)->getRegion(0);
}

::mlir::Region &ElementalAddrOp::getCleanup() {
  return (*this)->getRegion(1);
}

::mlir::UnitAttr ElementalAddrOp::getUnorderedAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getUnorderedAttrName()));
}

::std::optional<bool> ElementalAddrOp::getUnordered() {
  auto attr = getUnorderedAttr();
  return attr ? ::std::optional<bool>(attr != nullptr) : (::std::nullopt);
}

void ElementalAddrOp::setUnorderedAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getUnorderedAttrName(), attr);
}

void ElementalAddrOp::setUnordered(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getUnorderedAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getUnorderedAttrName());
}

::mlir::Attribute ElementalAddrOp::removeUnorderedAttr() {
return (*this)->removeAttr(getUnorderedAttrName());
}

void ElementalAddrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value shape, ::mlir::ValueRange typeparams, /*optional*/::mlir::UnitAttr unordered) {
  odsState.addOperands(shape);
  odsState.addOperands(typeparams);
  if (unordered) {
    odsState.addAttribute(getUnorderedAttrName(odsState.name), unordered);
  }
  (void)odsState.addRegion();
  (void)odsState.addRegion();
}

void ElementalAddrOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value shape, ::mlir::ValueRange typeparams, /*optional*/::mlir::UnitAttr unordered) {
  odsState.addOperands(shape);
  odsState.addOperands(typeparams);
  if (unordered) {
    odsState.addAttribute(getUnorderedAttrName(odsState.name), unordered);
  }
  (void)odsState.addRegion();
  (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ElementalAddrOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 2; ++i)
    (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ElementalAddrOp::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_unordered;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == getUnorderedAttrName()) {
      tblgen_unordered = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_HLFIROps0(*this, tblgen_unordered, "unordered")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps15(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(0)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_HLFIROps0(*this, region, "body", index++)))
        return ::mlir::failure();

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(1)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_HLFIROps1(*this, region, "cleanup", index++)))
        return ::mlir::failure();
  }
  return ::mlir::success();
}

::mlir::LogicalResult ElementalAddrOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult ElementalAddrOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand shapeRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> shapeOperands(shapeRawOperands);  ::llvm::SMLoc shapeOperandsLoc;
  (void)shapeOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> typeparamsOperands;
  ::llvm::SMLoc typeparamsOperandsLoc;
  (void)typeparamsOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> allOperandTypes;
  std::unique_ptr<::mlir::Region> bodyRegion = std::make_unique<::mlir::Region>();
  std::unique_ptr<::mlir::Region> cleanupRegion = std::make_unique<::mlir::Region>();

  shapeOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(shapeRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("typeparams"))) {

  typeparamsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(typeparamsOperands))
    return ::mlir::failure();
  }
  if (::mlir::succeeded(parser.parseOptionalKeyword("unordered"))) {
    result.addAttribute("unordered", parser.getBuilder().getUnitAttr());
  }
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  if (parser.parseTypeList(allOperandTypes))
    return ::mlir::failure();

  if (parser.parseRegion(*bodyRegion))
    return ::mlir::failure();
  {
    if (parseYieldOpCleanup(parser, *cleanupRegion))
      return ::mlir::failure();
  }
  result.addRegion(std::move(bodyRegion));
  result.addRegion(std::move(cleanupRegion));
  if (parser.resolveOperands(::llvm::concat<const ::mlir::OpAsmParser::UnresolvedOperand>(shapeOperands, typeparamsOperands), allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ElementalAddrOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getShape();
  if (!getTypeparams().empty()) {
    _odsPrinter << ' ' << "typeparams";
    _odsPrinter << ' ';
    _odsPrinter << getTypeparams();
  }
  if (getUnorderedAttr()) {
    _odsPrinter << ' ' << "unordered";
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("unordered");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperandTypes();
  _odsPrinter << ' ';
  _odsPrinter.printRegion(getBody());
  _odsPrinter << ' ';
  printYieldOpCleanup(_odsPrinter, *this, getCleanup());
}

} // namespace hlfir
MLIR_DEFINE_EXPLICIT_TYPE_ID(hlfir::ElementalAddrOp)

namespace hlfir {

//===----------------------------------------------------------------------===//
// hlfir::ElementalOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ElementalOpGenericAdaptorBase::ElementalOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("hlfir.elemental", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> ElementalOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr ElementalOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::UnitAttr ElementalOpGenericAdaptorBase::getUnorderedAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, ElementalOp::getUnorderedAttrName(*odsOpName)));
  return attr;
}

::std::optional<bool> ElementalOpGenericAdaptorBase::getUnordered() {
  auto attr = getUnorderedAttr();
  return attr ? ::std::optional<bool>(attr != nullptr) : (::std::nullopt);
}

::mlir::Region &ElementalOpGenericAdaptorBase::getRegion() {
  return *odsRegions[0];
}

::mlir::RegionRange ElementalOpGenericAdaptorBase::getRegions() {
  return odsRegions;
}

} // namespace detail
ElementalOpAdaptor::ElementalOpAdaptor(ElementalOp op) : ElementalOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult ElementalOpAdaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_unordered;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == ElementalOp::getUnorderedAttrName(*odsOpName)) {
      tblgen_unordered = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (tblgen_unordered && !((::llvm::isa<::mlir::UnitAttr>(tblgen_unordered))))
    return emitError(loc, "'hlfir.elemental' op ""attribute 'unordered' failed to satisfy constraint: unit attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ElementalOp::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range ElementalOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ElementalOp::getShape() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Operation::operand_range ElementalOp::getTypeparams() {
  return getODSOperands(1);
}

::mlir::MutableOperandRange ElementalOp::getShapeMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::mlir::MutableOperandRange ElementalOp::getTypeparamsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> ElementalOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ElementalOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Region &ElementalOp::getRegion() {
  return (*this)->getRegion(0);
}

::mlir::UnitAttr ElementalOp::getUnorderedAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getUnorderedAttrName()));
}

::std::optional<bool> ElementalOp::getUnordered() {
  auto attr = getUnorderedAttr();
  return attr ? ::std::optional<bool>(attr != nullptr) : (::std::nullopt);
}

void ElementalOp::setUnorderedAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getUnorderedAttrName(), attr);
}

void ElementalOp::setUnordered(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getUnorderedAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getUnorderedAttrName());
}

::mlir::Attribute ElementalOp::removeUnorderedAttr() {
return (*this)->removeAttr(getUnorderedAttrName());
}

::mlir::LogicalResult ElementalOp::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_unordered;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == getUnorderedAttrName()) {
      tblgen_unordered = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_HLFIROps0(*this, tblgen_unordered, "unordered")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps16(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps5(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(0)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_HLFIROps0(*this, region, "region", index++)))
        return ::mlir::failure();
  }
  return ::mlir::success();
}

::mlir::LogicalResult ElementalOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ElementalOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand shapeRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> shapeOperands(shapeRawOperands);  ::llvm::SMLoc shapeOperandsLoc;
  (void)shapeOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> typeparamsOperands;
  ::llvm::SMLoc typeparamsOperandsLoc;
  (void)typeparamsOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;
  std::unique_ptr<::mlir::Region> regionRegion = std::make_unique<::mlir::Region>();

  shapeOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(shapeRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("typeparams"))) {

  typeparamsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(typeparamsOperands))
    return ::mlir::failure();
  }
  if (::mlir::succeeded(parser.parseOptionalKeyword("unordered"))) {
    result.addAttribute("unordered", parser.getBuilder().getUnitAttr());
  }
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

  if (parser.parseRegion(*regionRegion))
    return ::mlir::failure();
  result.addRegion(std::move(regionRegion));
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(::llvm::concat<const ::mlir::OpAsmParser::UnresolvedOperand>(shapeOperands, typeparamsOperands), allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ElementalOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getShape();
  if (!getTypeparams().empty()) {
    _odsPrinter << ' ' << "typeparams";
    _odsPrinter << ' ';
    _odsPrinter << getTypeparams();
  }
  if (getUnorderedAttr()) {
    _odsPrinter << ' ' << "unordered";
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("unordered");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
  _odsPrinter << ' ';
  _odsPrinter.printRegion(getRegion());
}

} // namespace hlfir
MLIR_DEFINE_EXPLICIT_TYPE_ID(hlfir::ElementalOp)

namespace hlfir {

//===----------------------------------------------------------------------===//
// hlfir::ElseWhereOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ElseWhereOpGenericAdaptorBase::ElseWhereOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("hlfir.elsewhere", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> ElseWhereOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ElseWhereOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Region &ElseWhereOpGenericAdaptorBase::getMaskRegion() {
  return *odsRegions[0];
}

::mlir::Region &ElseWhereOpGenericAdaptorBase::getBody() {
  return *odsRegions[1];
}

::mlir::RegionRange ElseWhereOpGenericAdaptorBase::getRegions() {
  return odsRegions;
}

} // namespace detail
ElseWhereOpAdaptor::ElseWhereOpAdaptor(ElseWhereOp op) : ElseWhereOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult ElseWhereOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ElseWhereOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ElseWhereOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ElseWhereOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ElseWhereOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Region &ElseWhereOp::getMaskRegion() {
  return (*this)->getRegion(0);
}

::mlir::Region &ElseWhereOp::getBody() {
  return (*this)->getRegion(1);
}

void ElseWhereOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
  (void)odsState.addRegion();
  (void)odsState.addRegion();
}

void ElseWhereOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  (void)odsState.addRegion();
  (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ElseWhereOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 2; ++i)
    (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ElseWhereOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(0)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_HLFIROps1(*this, region, "mask_region", index++)))
        return ::mlir::failure();

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(1)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_HLFIROps0(*this, region, "body", index++)))
        return ::mlir::failure();
  }
  return ::mlir::success();
}

::mlir::LogicalResult ElseWhereOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult ElseWhereOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  std::unique_ptr<::mlir::Region> mask_regionRegion = std::make_unique<::mlir::Region>();
  std::unique_ptr<::mlir::Region> bodyRegion = std::make_unique<::mlir::Region>();
  if (::mlir::succeeded(parser.parseOptionalKeyword("mask"))) {

  if (parser.parseRegion(*mask_regionRegion))
    return ::mlir::failure();
  }
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseKeyword("do"))
    return ::mlir::failure();
  {
    if (parseAssignmentMaskOpBody(parser, *bodyRegion))
      return ::mlir::failure();
  }
  result.addRegion(std::move(mask_regionRegion));
  result.addRegion(std::move(bodyRegion));
  return ::mlir::success();
}

void ElseWhereOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  if (!getMaskRegion().empty()) {
    _odsPrinter << ' ' << "mask";
    _odsPrinter << ' ';
    _odsPrinter.printRegion(getMaskRegion());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << "do";
  _odsPrinter << ' ';
  printAssignmentMaskOpBody(_odsPrinter, *this, getBody());
}

} // namespace hlfir
MLIR_DEFINE_EXPLICIT_TYPE_ID(hlfir::ElseWhereOp)

namespace hlfir {

//===----------------------------------------------------------------------===//
// hlfir::EndAssociateOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
EndAssociateOpGenericAdaptorBase::EndAssociateOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("hlfir.end_associate", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> EndAssociateOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr EndAssociateOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
EndAssociateOpAdaptor::EndAssociateOpAdaptor(EndAssociateOp op) : EndAssociateOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult EndAssociateOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> EndAssociateOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range EndAssociateOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value EndAssociateOp::getVar() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::IntegerType> EndAssociateOp::getMustFree() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(1).begin());
}

::mlir::MutableOperandRange EndAssociateOp::getVarMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::mlir::MutableOperandRange EndAssociateOp::getMustFreeMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> EndAssociateOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range EndAssociateOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void EndAssociateOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value var, ::mlir::Value must_free) {
  odsState.addOperands(var);
  odsState.addOperands(must_free);
}

void EndAssociateOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value var, ::mlir::Value must_free) {
  odsState.addOperands(var);
  odsState.addOperands(must_free);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void EndAssociateOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult EndAssociateOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps9(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult EndAssociateOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult EndAssociateOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand varRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> varOperands(varRawOperands);  ::llvm::SMLoc varOperandsLoc;
  (void)varOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand must_freeRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> must_freeOperands(must_freeRawOperands);  ::llvm::SMLoc must_freeOperandsLoc;
  (void)must_freeOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> allOperandTypes;

  varOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(varRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  must_freeOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(must_freeRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  if (parser.parseTypeList(allOperandTypes))
    return ::mlir::failure();
  if (parser.resolveOperands(::llvm::concat<const ::mlir::OpAsmParser::UnresolvedOperand>(varOperands, must_freeOperands), allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void EndAssociateOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getVar();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getMustFree();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperandTypes();
}

} // namespace hlfir
MLIR_DEFINE_EXPLICIT_TYPE_ID(hlfir::EndAssociateOp)

namespace hlfir {

//===----------------------------------------------------------------------===//
// hlfir::ForallIndexOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ForallIndexOpGenericAdaptorBase::ForallIndexOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("hlfir.forall_index", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> ForallIndexOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ForallIndexOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::StringAttr ForallIndexOpGenericAdaptorBase::getNameAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::StringAttr>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, ForallIndexOp::getNameAttrName(*odsOpName)));
  return attr;
}

::mlir::StringAttr ForallIndexOpGenericAdaptorBase::getName() {
  auto attr = getNameAttr();
  return ::llvm::cast<::mlir::StringAttr>(attr);
}

} // namespace detail
ForallIndexOpAdaptor::ForallIndexOpAdaptor(ForallIndexOp op) : ForallIndexOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult ForallIndexOpAdaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_name;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'hlfir.forall_index' op ""requires attribute 'name'");
    if (namedAttrIt->getName() == ForallIndexOp::getNameAttrName(*odsOpName)) {
      tblgen_name = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (tblgen_name && !((::llvm::isa<::mlir::StringAttr>(tblgen_name))))
    return emitError(loc, "'hlfir.forall_index' op ""attribute 'name' failed to satisfy constraint: An Attribute containing a string");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ForallIndexOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ForallIndexOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ForallIndexOp::getIndex() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::MutableOperandRange ForallIndexOp::getIndexMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> ForallIndexOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ForallIndexOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::StringAttr ForallIndexOp::getNameAttr() {
  return ::llvm::cast<::mlir::StringAttr>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getNameAttrName()));
}

::mlir::StringAttr ForallIndexOp::getName() {
  auto attr = getNameAttr();
  return ::llvm::cast<::mlir::StringAttr>(attr);
}

void ForallIndexOp::setNameAttr(::mlir::StringAttr attr) {
  (*this)->setAttr(getNameAttrName(), attr);
}

void ForallIndexOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value index, ::mlir::StringAttr name) {
  odsState.addOperands(index);
  odsState.addAttribute(getNameAttrName(odsState.name), name);
  odsState.addTypes(resultType0);
}

void ForallIndexOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value index, ::mlir::StringAttr name) {
  odsState.addOperands(index);
  odsState.addAttribute(getNameAttrName(odsState.name), name);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ForallIndexOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ForallIndexOp::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_name;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'name'");
    if (namedAttrIt->getName() == getNameAttrName()) {
      tblgen_name = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_HLFIROps1(*this, tblgen_name, "name")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ForallIndexOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

void ForallIndexOp::getCanonicalizationPatterns(::mlir::RewritePatternSet &results, ::mlir::MLIRContext *context) {
  results.add(canonicalize);
}

::mlir::ParseResult ForallIndexOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::StringAttr nameAttr;
  ::mlir::OpAsmParser::UnresolvedOperand indexRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> indexOperands(indexRawOperands);  ::llvm::SMLoc indexOperandsLoc;
  (void)indexOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  if (parser.parseCustomAttributeWithFallback(nameAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (nameAttr) result.attributes.append("name", nameAttr);

  indexOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(indexRawOperands[0]))
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
  if (parser.resolveOperands(indexOperands, allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ForallIndexOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
_odsPrinter.printStrippedAttrOrType(getNameAttr());
  _odsPrinter << ' ';
  _odsPrinter << getIndex();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("name");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

void ForallIndexOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace hlfir
MLIR_DEFINE_EXPLICIT_TYPE_ID(hlfir::ForallIndexOp)

namespace hlfir {

//===----------------------------------------------------------------------===//
// hlfir::ForallMaskOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ForallMaskOpGenericAdaptorBase::ForallMaskOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("hlfir.forall_mask", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> ForallMaskOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ForallMaskOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Region &ForallMaskOpGenericAdaptorBase::getMaskRegion() {
  return *odsRegions[0];
}

::mlir::Region &ForallMaskOpGenericAdaptorBase::getBody() {
  return *odsRegions[1];
}

::mlir::RegionRange ForallMaskOpGenericAdaptorBase::getRegions() {
  return odsRegions;
}

} // namespace detail
ForallMaskOpAdaptor::ForallMaskOpAdaptor(ForallMaskOp op) : ForallMaskOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult ForallMaskOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ForallMaskOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ForallMaskOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ForallMaskOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ForallMaskOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Region &ForallMaskOp::getMaskRegion() {
  return (*this)->getRegion(0);
}

::mlir::Region &ForallMaskOp::getBody() {
  return (*this)->getRegion(1);
}

void ForallMaskOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
  (void)odsState.addRegion();
  (void)odsState.addRegion();
}

void ForallMaskOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  (void)odsState.addRegion();
  (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ForallMaskOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 2; ++i)
    (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ForallMaskOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(0)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_HLFIROps0(*this, region, "mask_region", index++)))
        return ::mlir::failure();

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(1)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_HLFIROps0(*this, region, "body", index++)))
        return ::mlir::failure();
  }
  return ::mlir::success();
}

::mlir::LogicalResult ForallMaskOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult ForallMaskOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  std::unique_ptr<::mlir::Region> mask_regionRegion = std::make_unique<::mlir::Region>();
  std::unique_ptr<::mlir::Region> bodyRegion = std::make_unique<::mlir::Region>();

  if (parser.parseRegion(*mask_regionRegion))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseKeyword("do"))
    return ::mlir::failure();
  {
    if (parseAssignmentMaskOpBody(parser, *bodyRegion))
      return ::mlir::failure();
  }
  result.addRegion(std::move(mask_regionRegion));
  result.addRegion(std::move(bodyRegion));
  return ::mlir::success();
}

void ForallMaskOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter.printRegion(getMaskRegion());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << "do";
  _odsPrinter << ' ';
  printAssignmentMaskOpBody(_odsPrinter, *this, getBody());
}

} // namespace hlfir
MLIR_DEFINE_EXPLICIT_TYPE_ID(hlfir::ForallMaskOp)

namespace hlfir {

//===----------------------------------------------------------------------===//
// hlfir::ForallOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ForallOpGenericAdaptorBase::ForallOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("hlfir.forall", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> ForallOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ForallOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Region &ForallOpGenericAdaptorBase::getLbRegion() {
  return *odsRegions[0];
}

::mlir::Region &ForallOpGenericAdaptorBase::getUbRegion() {
  return *odsRegions[1];
}

::mlir::Region &ForallOpGenericAdaptorBase::getStepRegion() {
  return *odsRegions[2];
}

::mlir::Region &ForallOpGenericAdaptorBase::getBody() {
  return *odsRegions[3];
}

::mlir::RegionRange ForallOpGenericAdaptorBase::getRegions() {
  return odsRegions;
}

} // namespace detail
ForallOpAdaptor::ForallOpAdaptor(ForallOp op) : ForallOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult ForallOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ForallOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ForallOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ForallOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ForallOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Region &ForallOp::getLbRegion() {
  return (*this)->getRegion(0);
}

::mlir::Region &ForallOp::getUbRegion() {
  return (*this)->getRegion(1);
}

::mlir::Region &ForallOp::getStepRegion() {
  return (*this)->getRegion(2);
}

::mlir::Region &ForallOp::getBody() {
  return (*this)->getRegion(3);
}

void ForallOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
  (void)odsState.addRegion();
  (void)odsState.addRegion();
  (void)odsState.addRegion();
  (void)odsState.addRegion();
}

void ForallOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  (void)odsState.addRegion();
  (void)odsState.addRegion();
  (void)odsState.addRegion();
  (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ForallOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 4; ++i)
    (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ForallOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(0)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_HLFIROps2(*this, region, "lb_region", index++)))
        return ::mlir::failure();

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(1)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_HLFIROps2(*this, region, "ub_region", index++)))
        return ::mlir::failure();

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(2)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_HLFIROps3(*this, region, "step_region", index++)))
        return ::mlir::failure();

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(3)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_HLFIROps0(*this, region, "body", index++)))
        return ::mlir::failure();
  }
  return ::mlir::success();
}

::mlir::LogicalResult ForallOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ForallOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  std::unique_ptr<::mlir::Region> lb_regionRegion = std::make_unique<::mlir::Region>();
  std::unique_ptr<::mlir::Region> ub_regionRegion = std::make_unique<::mlir::Region>();
  std::unique_ptr<::mlir::Region> step_regionRegion = std::make_unique<::mlir::Region>();
  std::unique_ptr<::mlir::Region> bodyRegion = std::make_unique<::mlir::Region>();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseKeyword("lb"))
    return ::mlir::failure();

  if (parser.parseRegion(*lb_regionRegion))
    return ::mlir::failure();
  if (parser.parseKeyword("ub"))
    return ::mlir::failure();

  if (parser.parseRegion(*ub_regionRegion))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("step"))) {

  if (parser.parseRegion(*step_regionRegion))
    return ::mlir::failure();
  }
  {
    if (parseForallOpBody(parser, *bodyRegion))
      return ::mlir::failure();
  }
  result.addRegion(std::move(lb_regionRegion));
  result.addRegion(std::move(ub_regionRegion));
  result.addRegion(std::move(step_regionRegion));
  result.addRegion(std::move(bodyRegion));
  return ::mlir::success();
}

void ForallOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << "lb";
  _odsPrinter << ' ';
  _odsPrinter.printRegion(getLbRegion());
  _odsPrinter << ' ' << "ub";
  _odsPrinter << ' ';
  _odsPrinter.printRegion(getUbRegion());
  if (!getStepRegion().empty()) {
    _odsPrinter << ' ' << "step";
    _odsPrinter << ' ';
    _odsPrinter.printRegion(getStepRegion());
  }
  _odsPrinter << ' ';
  printForallOpBody(_odsPrinter, *this, getBody());
}

} // namespace hlfir
MLIR_DEFINE_EXPLICIT_TYPE_ID(hlfir::ForallOp)

namespace hlfir {

//===----------------------------------------------------------------------===//
// hlfir::GetExtentOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
GetExtentOpGenericAdaptorBase::GetExtentOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("hlfir.get_extent", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> GetExtentOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr GetExtentOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr GetExtentOpGenericAdaptorBase::getDimAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, GetExtentOp::getDimAttrName(*odsOpName)));
  return attr;
}

::llvm::APInt GetExtentOpGenericAdaptorBase::getDim() {
  auto attr = getDimAttr();
  return attr.getValue();
}

} // namespace detail
GetExtentOpAdaptor::GetExtentOpAdaptor(GetExtentOp op) : GetExtentOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult GetExtentOpAdaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_dim;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'hlfir.get_extent' op ""requires attribute 'dim'");
    if (namedAttrIt->getName() == GetExtentOp::getDimAttrName(*odsOpName)) {
      tblgen_dim = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (tblgen_dim && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_dim))) && ((::llvm::isa<::mlir::IndexType>(::llvm::cast<::mlir::IntegerAttr>(tblgen_dim).getType())))))
    return emitError(loc, "'hlfir.get_extent' op ""attribute 'dim' failed to satisfy constraint: index attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> GetExtentOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range GetExtentOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::fir::ShapeType> GetExtentOp::getShape() {
  return ::llvm::cast<::mlir::TypedValue<::fir::ShapeType>>(*getODSOperands(0).begin());
}

::mlir::MutableOperandRange GetExtentOp::getShapeMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> GetExtentOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range GetExtentOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::IntegerAttr GetExtentOp::getDimAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getDimAttrName()));
}

::llvm::APInt GetExtentOp::getDim() {
  auto attr = getDimAttr();
  return attr.getValue();
}

void GetExtentOp::setDimAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getDimAttrName(), attr);
}

void GetExtentOp::setDim(::llvm::APInt attrValue) {
  (*this)->setAttr(getDimAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIndexType(), attrValue));
}

void GetExtentOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value shape, ::mlir::IntegerAttr dim) {
  odsState.addOperands(shape);
  odsState.addAttribute(getDimAttrName(odsState.name), dim);
  odsState.addTypes(resultType0);
}

void GetExtentOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value shape, ::mlir::IntegerAttr dim) {
  odsState.addOperands(shape);
  odsState.addAttribute(getDimAttrName(odsState.name), dim);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(GetExtentOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void GetExtentOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value shape, ::mlir::IntegerAttr dim) {
  odsState.addOperands(shape);
  odsState.addAttribute(getDimAttrName(odsState.name), dim);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void GetExtentOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value shape, ::llvm::APInt dim) {
  odsState.addOperands(shape);
  odsState.addAttribute(getDimAttrName(odsState.name), odsBuilder.getIntegerAttr(odsBuilder.getIndexType(), dim));
  odsState.addTypes(resultType0);
}

void GetExtentOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value shape, ::llvm::APInt dim) {
  odsState.addOperands(shape);
  odsState.addAttribute(getDimAttrName(odsState.name), odsBuilder.getIntegerAttr(odsBuilder.getIndexType(), dim));

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(GetExtentOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void GetExtentOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value shape, ::llvm::APInt dim) {
  odsState.addOperands(shape);
  odsState.addAttribute(getDimAttrName(odsState.name), odsBuilder.getIntegerAttr(odsBuilder.getIndexType(), dim));
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void GetExtentOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void GetExtentOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(GetExtentOp::inferReturnTypes(odsBuilder.getContext(),
          odsState.location, operands,
          odsState.attributes.getDictionary(odsState.getContext()),
          odsState.getRawProperties(),
          odsState.regions, inferredReturnTypes))) {
    assert(inferredReturnTypes.size() == 1u && "mismatched number of return types");
    odsState.addTypes(inferredReturnTypes);
  } else {
    ::llvm::report_fatal_error("Failed to infer result type(s).");
  }
}

::mlir::LogicalResult GetExtentOp::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_dim;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'dim'");
    if (namedAttrIt->getName() == getDimAttrName()) {
      tblgen_dim = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_HLFIROps7(*this, tblgen_dim, "dim")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps15(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps6(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult GetExtentOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::LogicalResult GetExtentOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = odsBuilder.getIndexType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult GetExtentOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand shapeRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> shapeOperands(shapeRawOperands);  ::llvm::SMLoc shapeOperandsLoc;
  (void)shapeOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  shapeOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(shapeRawOperands[0]))
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
  if (parser.resolveOperands(shapeOperands, allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void GetExtentOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getShape();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

void GetExtentOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace hlfir
MLIR_DEFINE_EXPLICIT_TYPE_ID(hlfir::GetExtentOp)

namespace hlfir {

//===----------------------------------------------------------------------===//
// hlfir::GetLengthOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
GetLengthOpGenericAdaptorBase::GetLengthOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("hlfir.get_length", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> GetLengthOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr GetLengthOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
GetLengthOpAdaptor::GetLengthOpAdaptor(GetLengthOp op) : GetLengthOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult GetLengthOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> GetLengthOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range GetLengthOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value GetLengthOp::getExpr() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::MutableOperandRange GetLengthOp::getExprMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> GetLengthOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range GetLengthOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void GetLengthOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value expr) {
  odsState.addOperands(expr);
  odsState.addTypes(resultType0);
}

void GetLengthOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value expr) {
  odsState.addOperands(expr);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(GetLengthOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void GetLengthOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value expr) {
  odsState.addOperands(expr);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void GetLengthOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void GetLengthOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(GetLengthOp::inferReturnTypes(odsBuilder.getContext(),
          odsState.location, operands,
          odsState.attributes.getDictionary(odsState.getContext()),
          odsState.getRawProperties(),
          odsState.regions, inferredReturnTypes))) {
    assert(inferredReturnTypes.size() == 1u && "mismatched number of return types");
    odsState.addTypes(inferredReturnTypes);
  } else {
    ::llvm::report_fatal_error("Failed to infer result type(s).");
  }
}

::mlir::LogicalResult GetLengthOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps17(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps6(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult GetLengthOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

void GetLengthOp::getCanonicalizationPatterns(::mlir::RewritePatternSet &results, ::mlir::MLIRContext *context) {
  results.add(canonicalize);
}

::mlir::LogicalResult GetLengthOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = odsBuilder.getIndexType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult GetLengthOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand exprRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> exprOperands(exprRawOperands);  ::llvm::SMLoc exprOperandsLoc;
  (void)exprOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  exprOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(exprRawOperands[0]))
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
  if (parser.resolveOperands(exprOperands, allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void GetLengthOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getExpr();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

void GetLengthOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace hlfir
MLIR_DEFINE_EXPLICIT_TYPE_ID(hlfir::GetLengthOp)

namespace hlfir {

//===----------------------------------------------------------------------===//
// hlfir::MatmulOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MatmulOpGenericAdaptorBase::MatmulOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("hlfir.matmul", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> MatmulOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MatmulOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arith::FastMathFlagsAttr MatmulOpGenericAdaptorBase::getFastmathAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, MatmulOp::getFastmathAttrName(*odsOpName)));
  return attr;
}

::mlir::arith::FastMathFlags MatmulOpGenericAdaptorBase::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

} // namespace detail
MatmulOpAdaptor::MatmulOpAdaptor(MatmulOp op) : MatmulOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult MatmulOpAdaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_fastmath;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == MatmulOp::getFastmathAttrName(*odsOpName)) {
      tblgen_fastmath = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (tblgen_fastmath && !((::llvm::isa<::mlir::arith::FastMathFlagsAttr>(tblgen_fastmath))))
    return emitError(loc, "'hlfir.matmul' op ""attribute 'fastmath' failed to satisfy constraint: Floating point fast math flags");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MatmulOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MatmulOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MatmulOp::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value MatmulOp::getRhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::MutableOperandRange MatmulOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::mlir::MutableOperandRange MatmulOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> MatmulOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MatmulOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::arith::FastMathFlagsAttr MatmulOp::getFastmathAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getFastmathAttrName()));
}

::mlir::arith::FastMathFlags MatmulOp::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

void MatmulOp::setFastmathAttr(::mlir::arith::FastMathFlagsAttr attr) {
  (*this)->setAttr(getFastmathAttrName(), attr);
}

void MatmulOp::setFastmath(::mlir::arith::FastMathFlags attrValue) {
  (*this)->setAttr(getFastmathAttrName(), ::mlir::arith::FastMathFlagsAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void MatmulOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (fastmath) {
    odsState.addAttribute(getFastmathAttrName(odsState.name), fastmath);
  }
  odsState.addTypes(resultType0);
}

void MatmulOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (fastmath) {
    odsState.addAttribute(getFastmathAttrName(odsState.name), fastmath);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MatmulOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addAttribute(getFastmathAttrName(odsState.name), ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath));
  odsState.addTypes(resultType0);
}

void MatmulOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addAttribute(getFastmathAttrName(odsState.name), ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath));
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MatmulOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void MatmulOp::populateDefaultAttrs(const ::mlir::OperationName &opName, ::mlir::NamedAttrList &attributes) {
  auto attrNames = opName.getAttributeNames();
  ::mlir::Builder odsBuilder(attrNames.front().getContext());
  if (!attributes.get(attrNames[0])) {
    attributes.append(attrNames[0], ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::FastMathFlags::none));
  }
}

::mlir::LogicalResult MatmulOp::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_fastmath;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == getFastmathAttrName()) {
      tblgen_fastmath = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_HLFIROps6(*this, tblgen_fastmath, "fastmath")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps14(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps14(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps5(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult MatmulOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

void MatmulOp::getCanonicalizationPatterns(::mlir::RewritePatternSet &results, ::mlir::MLIRContext *context) {
  results.add(canonicalize);
}

::mlir::ParseResult MatmulOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc;
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc;
  (void)rhsOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  lhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(lhsRawOperands[0]))
    return ::mlir::failure();

  rhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(rhsRawOperands[0]))
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
  if (parser.resolveOperands(::llvm::concat<const ::mlir::OpAsmParser::UnresolvedOperand>(lhsOperands, rhsOperands), allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MatmulOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getLhs();
  _odsPrinter << ' ';
  _odsPrinter << getRhs();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getFastmathAttr();
     if(attr && (attr == ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::FastMathFlags::none)))
       elidedAttrs.push_back("fastmath");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace hlfir
MLIR_DEFINE_EXPLICIT_TYPE_ID(hlfir::MatmulOp)

namespace hlfir {

//===----------------------------------------------------------------------===//
// hlfir::MatmulTransposeOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MatmulTransposeOpGenericAdaptorBase::MatmulTransposeOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("hlfir.matmul_transpose", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> MatmulTransposeOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MatmulTransposeOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arith::FastMathFlagsAttr MatmulTransposeOpGenericAdaptorBase::getFastmathAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, MatmulTransposeOp::getFastmathAttrName(*odsOpName)));
  return attr;
}

::mlir::arith::FastMathFlags MatmulTransposeOpGenericAdaptorBase::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

} // namespace detail
MatmulTransposeOpAdaptor::MatmulTransposeOpAdaptor(MatmulTransposeOp op) : MatmulTransposeOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult MatmulTransposeOpAdaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_fastmath;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == MatmulTransposeOp::getFastmathAttrName(*odsOpName)) {
      tblgen_fastmath = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (tblgen_fastmath && !((::llvm::isa<::mlir::arith::FastMathFlagsAttr>(tblgen_fastmath))))
    return emitError(loc, "'hlfir.matmul_transpose' op ""attribute 'fastmath' failed to satisfy constraint: Floating point fast math flags");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MatmulTransposeOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MatmulTransposeOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MatmulTransposeOp::getLhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value MatmulTransposeOp::getRhs() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::MutableOperandRange MatmulTransposeOp::getLhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::mlir::MutableOperandRange MatmulTransposeOp::getRhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> MatmulTransposeOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MatmulTransposeOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::arith::FastMathFlagsAttr MatmulTransposeOp::getFastmathAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getFastmathAttrName()));
}

::mlir::arith::FastMathFlags MatmulTransposeOp::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

void MatmulTransposeOp::setFastmathAttr(::mlir::arith::FastMathFlagsAttr attr) {
  (*this)->setAttr(getFastmathAttrName(), attr);
}

void MatmulTransposeOp::setFastmath(::mlir::arith::FastMathFlags attrValue) {
  (*this)->setAttr(getFastmathAttrName(), ::mlir::arith::FastMathFlagsAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void MatmulTransposeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (fastmath) {
    odsState.addAttribute(getFastmathAttrName(odsState.name), fastmath);
  }
  odsState.addTypes(resultType0);
}

void MatmulTransposeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (fastmath) {
    odsState.addAttribute(getFastmathAttrName(odsState.name), fastmath);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MatmulTransposeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addAttribute(getFastmathAttrName(odsState.name), ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath));
  odsState.addTypes(resultType0);
}

void MatmulTransposeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addAttribute(getFastmathAttrName(odsState.name), ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath));
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MatmulTransposeOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void MatmulTransposeOp::populateDefaultAttrs(const ::mlir::OperationName &opName, ::mlir::NamedAttrList &attributes) {
  auto attrNames = opName.getAttributeNames();
  ::mlir::Builder odsBuilder(attrNames.front().getContext());
  if (!attributes.get(attrNames[0])) {
    attributes.append(attrNames[0], ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::FastMathFlags::none));
  }
}

::mlir::LogicalResult MatmulTransposeOp::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_fastmath;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == getFastmathAttrName()) {
      tblgen_fastmath = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_HLFIROps6(*this, tblgen_fastmath, "fastmath")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps14(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps14(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps5(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult MatmulTransposeOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult MatmulTransposeOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand lhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> lhsOperands(lhsRawOperands);  ::llvm::SMLoc lhsOperandsLoc;
  (void)lhsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand rhsRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> rhsOperands(rhsRawOperands);  ::llvm::SMLoc rhsOperandsLoc;
  (void)rhsOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  lhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(lhsRawOperands[0]))
    return ::mlir::failure();

  rhsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(rhsRawOperands[0]))
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
  if (parser.resolveOperands(::llvm::concat<const ::mlir::OpAsmParser::UnresolvedOperand>(lhsOperands, rhsOperands), allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MatmulTransposeOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getLhs();
  _odsPrinter << ' ';
  _odsPrinter << getRhs();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getFastmathAttr();
     if(attr && (attr == ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::FastMathFlags::none)))
       elidedAttrs.push_back("fastmath");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace hlfir
MLIR_DEFINE_EXPLICIT_TYPE_ID(hlfir::MatmulTransposeOp)

namespace hlfir {

//===----------------------------------------------------------------------===//
// hlfir::NoReassocOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
NoReassocOpGenericAdaptorBase::NoReassocOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("hlfir.no_reassoc", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> NoReassocOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr NoReassocOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
NoReassocOpAdaptor::NoReassocOpAdaptor(NoReassocOp op) : NoReassocOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult NoReassocOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> NoReassocOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range NoReassocOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value NoReassocOp::getVal() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::MutableOperandRange NoReassocOp::getValMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> NoReassocOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range NoReassocOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void NoReassocOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value val) {
  odsState.addOperands(val);
  odsState.addTypes(resultType0);
}

void NoReassocOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value val) {
  odsState.addOperands(val);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(NoReassocOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void NoReassocOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value val) {
  odsState.addOperands(val);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void NoReassocOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void NoReassocOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(NoReassocOp::inferReturnTypes(odsBuilder.getContext(),
          odsState.location, operands,
          odsState.attributes.getDictionary(odsState.getContext()),
          odsState.getRawProperties(),
          odsState.regions, inferredReturnTypes))) {
    assert(inferredReturnTypes.size() == 1u && "mismatched number of return types");
    odsState.addTypes(inferredReturnTypes);
  } else {
    ::llvm::report_fatal_error("Failed to infer result type(s).");
  }
}

::mlir::LogicalResult NoReassocOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult NoReassocOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult NoReassocOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult NoReassocOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand valRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> valOperands(valRawOperands);  ::llvm::SMLoc valOperandsLoc;
  (void)valOperandsLoc;
  ::mlir::Type valRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> valTypes(valRawTypes);

  valOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(valRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    valRawTypes[0] = type;
  }
  result.addTypes(valTypes[0]);
  if (parser.resolveOperands(valOperands, valTypes, valOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void NoReassocOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getVal();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getVal().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void NoReassocOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace hlfir
MLIR_DEFINE_EXPLICIT_TYPE_ID(hlfir::NoReassocOp)

namespace hlfir {

//===----------------------------------------------------------------------===//
// hlfir::NullOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
NullOpGenericAdaptorBase::NullOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("hlfir.null", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> NullOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr NullOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
NullOpAdaptor::NullOpAdaptor(NullOp op) : NullOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult NullOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> NullOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range NullOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> NullOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range NullOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void NullOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0) {
  odsState.addTypes(resultType0);
}

void NullOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void NullOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult NullOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult NullOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult NullOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::Type, 1> allResultTypes;

  if (parser.parseTypeList(allResultTypes))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  result.addTypes(allResultTypes);
  return ::mlir::success();
}

void NullOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getResultTypes();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

void NullOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace hlfir
MLIR_DEFINE_EXPLICIT_TYPE_ID(hlfir::NullOp)

namespace hlfir {

//===----------------------------------------------------------------------===//
// hlfir::ParentComponentOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ParentComponentOpGenericAdaptorBase::ParentComponentOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("hlfir.parent_comp", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> ParentComponentOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  assert(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, ParentComponentOp::getOperandSegmentSizesAttrName(*odsOpName)) && "missing segment size attribute for op");
  auto sizeAttr = ::llvm::cast<::mlir::DenseI32ArrayAttr>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, ParentComponentOp::getOperandSegmentSizesAttrName(*odsOpName)));

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::DictionaryAttr ParentComponentOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ParentComponentOpAdaptor::ParentComponentOpAdaptor(ParentComponentOp op) : ParentComponentOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult ParentComponentOpAdaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_operandSegmentSizes;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'hlfir.parent_comp' op ""requires attribute 'operandSegmentSizes'");
    if (namedAttrIt->getName() == ParentComponentOp::getOperandSegmentSizesAttrName(*odsOpName)) {
      tblgen_operandSegmentSizes = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  {
    auto sizeAttr = ::llvm::cast<::mlir::DenseI32ArrayAttr>(tblgen_operandSegmentSizes);
    auto numElements = sizeAttr.asArrayRef().size();
    if (numElements != 3)
      return emitError(loc, "'hlfir.parent_comp' op ""'operandSegmentSizes' attribute for specifying operand segments must have 3 "
                "elements, but got ") << numElements;
  }
    return ::mlir::success();
}

std::pair<unsigned, unsigned> ParentComponentOp::getODSOperandIndexAndLength(unsigned index) {
  auto sizeAttr = ::llvm::cast<::mlir::DenseI32ArrayAttr>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getOperandSegmentSizesAttrName()));

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::Operation::operand_range ParentComponentOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ParentComponentOp::getMemref() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value ParentComponentOp::getShape() {
  auto operands = getODSOperands(1);
  return operands.empty() ? ::mlir::Value{} : ::llvm::cast<::mlir::Value>(*operands.begin());
}

::mlir::Operation::operand_range ParentComponentOp::getTypeparams() {
  return getODSOperands(2);
}

::mlir::MutableOperandRange ParentComponentOp::getMemrefMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(0u, *::mlir::impl::getNamedAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getOperandSegmentSizesAttrName())));
  return mutableRange;
}

::mlir::MutableOperandRange ParentComponentOp::getShapeMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(1u, *::mlir::impl::getNamedAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getOperandSegmentSizesAttrName())));
  return mutableRange;
}

::mlir::MutableOperandRange ParentComponentOp::getTypeparamsMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(2u, *::mlir::impl::getNamedAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getOperandSegmentSizesAttrName())));
  return mutableRange;
}

std::pair<unsigned, unsigned> ParentComponentOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ParentComponentOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void ParentComponentOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value memref, /*optional*/::mlir::Value shape, ::mlir::ValueRange typeparams) {
  odsState.addOperands(memref);
  if (shape)
    odsState.addOperands(shape);
  odsState.addOperands(typeparams);
  odsState.addAttribute(getOperandSegmentSizesAttrName(odsState.name), odsBuilder.getDenseI32ArrayAttr({1, (shape ? 1 : 0), static_cast<int32_t>(typeparams.size())}));
  odsState.addTypes(resultType0);
}

void ParentComponentOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value memref, /*optional*/::mlir::Value shape, ::mlir::ValueRange typeparams) {
  odsState.addOperands(memref);
  if (shape)
    odsState.addOperands(shape);
  odsState.addOperands(typeparams);
  odsState.addAttribute(getOperandSegmentSizesAttrName(odsState.name), odsBuilder.getDenseI32ArrayAttr({1, (shape ? 1 : 0), static_cast<int32_t>(typeparams.size())}));
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ParentComponentOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ParentComponentOp::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_operandSegmentSizes;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'operandSegmentSizes'");
    if (namedAttrIt->getName() == getOperandSegmentSizesAttrName()) {
      tblgen_operandSegmentSizes = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  {
    auto sizeAttr = ::llvm::cast<::mlir::DenseI32ArrayAttr>(tblgen_operandSegmentSizes);
    auto numElements = sizeAttr.asArrayRef().size();
    if (numElements != 3)
      return emitOpError("'operandSegmentSizes' attribute for specifying operand segments must have 3 "
                "elements, but got ") << numElements;
  }
    {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    if (valueGroup1.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup1.size();
    }

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps16(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ParentComponentOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult ParentComponentOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand memrefRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> memrefOperands(memrefRawOperands);  ::llvm::SMLoc memrefOperandsLoc;
  (void)memrefOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> shapeOperands;
  ::llvm::SMLoc shapeOperandsLoc;
  (void)shapeOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> typeparamsOperands;
  ::llvm::SMLoc typeparamsOperandsLoc;
  (void)typeparamsOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  memrefOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(memrefRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("shape"))) {

  {
    shapeOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      shapeOperands.push_back(operand);
    }
  }
  }
  if (::mlir::succeeded(parser.parseOptionalKeyword("typeparams"))) {

  typeparamsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(typeparamsOperands))
    return ::mlir::failure();
  }
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
  result.addAttribute("operandSegmentSizes", parser.getBuilder().getDenseI32ArrayAttr({1, static_cast<int32_t>(shapeOperands.size()), static_cast<int32_t>(typeparamsOperands.size())}));
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(::llvm::concat<const ::mlir::OpAsmParser::UnresolvedOperand>(memrefOperands, shapeOperands, typeparamsOperands), allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ParentComponentOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getMemref();
  if (getShape()) {
    _odsPrinter << ' ' << "shape";
    _odsPrinter << ' ';
    if (::mlir::Value value = getShape())
      _odsPrinter << value;
  }
  if (!getTypeparams().empty()) {
    _odsPrinter << ' ' << "typeparams";
    _odsPrinter << ' ';
    _odsPrinter << getTypeparams();
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("operandSegmentSizes");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace hlfir
MLIR_DEFINE_EXPLICIT_TYPE_ID(hlfir::ParentComponentOp)

namespace hlfir {

//===----------------------------------------------------------------------===//
// hlfir::ProductOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ProductOpGenericAdaptorBase::ProductOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("hlfir.product", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> ProductOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  assert(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, ProductOp::getOperandSegmentSizesAttrName(*odsOpName)) && "missing segment size attribute for op");
  auto sizeAttr = ::llvm::cast<::mlir::DenseI32ArrayAttr>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, ProductOp::getOperandSegmentSizesAttrName(*odsOpName)));

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::DictionaryAttr ProductOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arith::FastMathFlagsAttr ProductOpGenericAdaptorBase::getFastmathAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 1, ProductOp::getFastmathAttrName(*odsOpName)));
  return attr;
}

::mlir::arith::FastMathFlags ProductOpGenericAdaptorBase::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

} // namespace detail
ProductOpAdaptor::ProductOpAdaptor(ProductOp op) : ProductOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult ProductOpAdaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_operandSegmentSizes;
  ::mlir::Attribute tblgen_fastmath;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'hlfir.product' op ""requires attribute 'operandSegmentSizes'");
    if (namedAttrIt->getName() == ProductOp::getOperandSegmentSizesAttrName(*odsOpName)) {
      tblgen_operandSegmentSizes = namedAttrIt->getValue();
      break;
    }
    else if (namedAttrIt->getName() == ProductOp::getFastmathAttrName(*odsOpName)) {
      tblgen_fastmath = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  {
    auto sizeAttr = ::llvm::cast<::mlir::DenseI32ArrayAttr>(tblgen_operandSegmentSizes);
    auto numElements = sizeAttr.asArrayRef().size();
    if (numElements != 3)
      return emitError(loc, "'hlfir.product' op ""'operandSegmentSizes' attribute for specifying operand segments must have 3 "
                "elements, but got ") << numElements;
  }

  if (tblgen_fastmath && !((::llvm::isa<::mlir::arith::FastMathFlagsAttr>(tblgen_fastmath))))
    return emitError(loc, "'hlfir.product' op ""attribute 'fastmath' failed to satisfy constraint: Floating point fast math flags");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ProductOp::getODSOperandIndexAndLength(unsigned index) {
  auto sizeAttr = ::llvm::cast<::mlir::DenseI32ArrayAttr>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getOperandSegmentSizesAttrName()));

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::Operation::operand_range ProductOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ProductOp::getArray() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value ProductOp::getDim() {
  auto operands = getODSOperands(1);
  return operands.empty() ? ::mlir::Value{} : ::llvm::cast<::mlir::Value>(*operands.begin());
}

::mlir::Value ProductOp::getMask() {
  auto operands = getODSOperands(2);
  return operands.empty() ? ::mlir::Value{} : ::llvm::cast<::mlir::Value>(*operands.begin());
}

::mlir::MutableOperandRange ProductOp::getArrayMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(0u, *::mlir::impl::getNamedAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getOperandSegmentSizesAttrName())));
  return mutableRange;
}

::mlir::MutableOperandRange ProductOp::getDimMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(1u, *::mlir::impl::getNamedAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getOperandSegmentSizesAttrName())));
  return mutableRange;
}

::mlir::MutableOperandRange ProductOp::getMaskMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(2u, *::mlir::impl::getNamedAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getOperandSegmentSizesAttrName())));
  return mutableRange;
}

std::pair<unsigned, unsigned> ProductOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ProductOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::arith::FastMathFlagsAttr ProductOp::getFastmathAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 1, getFastmathAttrName()));
}

::mlir::arith::FastMathFlags ProductOp::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

void ProductOp::setFastmathAttr(::mlir::arith::FastMathFlagsAttr attr) {
  (*this)->setAttr(getFastmathAttrName(), attr);
}

void ProductOp::setFastmath(::mlir::arith::FastMathFlags attrValue) {
  (*this)->setAttr(getFastmathAttrName(), ::mlir::arith::FastMathFlagsAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void ProductOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value array, /*optional*/::mlir::Value dim, /*optional*/::mlir::Value mask, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(array);
  if (dim)
    odsState.addOperands(dim);
  if (mask)
    odsState.addOperands(mask);
  odsState.addAttribute(getOperandSegmentSizesAttrName(odsState.name), odsBuilder.getDenseI32ArrayAttr({1, (dim ? 1 : 0), (mask ? 1 : 0)}));
  if (fastmath) {
    odsState.addAttribute(getFastmathAttrName(odsState.name), fastmath);
  }
  odsState.addTypes(resultType0);
}

void ProductOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value array, /*optional*/::mlir::Value dim, /*optional*/::mlir::Value mask, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(array);
  if (dim)
    odsState.addOperands(dim);
  if (mask)
    odsState.addOperands(mask);
  odsState.addAttribute(getOperandSegmentSizesAttrName(odsState.name), odsBuilder.getDenseI32ArrayAttr({1, (dim ? 1 : 0), (mask ? 1 : 0)}));
  if (fastmath) {
    odsState.addAttribute(getFastmathAttrName(odsState.name), fastmath);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ProductOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value array, /*optional*/::mlir::Value dim, /*optional*/::mlir::Value mask, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(array);
  if (dim)
    odsState.addOperands(dim);
  if (mask)
    odsState.addOperands(mask);
  odsState.addAttribute(getOperandSegmentSizesAttrName(odsState.name), odsBuilder.getDenseI32ArrayAttr({1, (dim ? 1 : 0), (mask ? 1 : 0)}));
  odsState.addAttribute(getFastmathAttrName(odsState.name), ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath));
  odsState.addTypes(resultType0);
}

void ProductOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value array, /*optional*/::mlir::Value dim, /*optional*/::mlir::Value mask, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(array);
  if (dim)
    odsState.addOperands(dim);
  if (mask)
    odsState.addOperands(mask);
  odsState.addAttribute(getOperandSegmentSizesAttrName(odsState.name), odsBuilder.getDenseI32ArrayAttr({1, (dim ? 1 : 0), (mask ? 1 : 0)}));
  odsState.addAttribute(getFastmathAttrName(odsState.name), ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath));
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ProductOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void ProductOp::populateDefaultAttrs(const ::mlir::OperationName &opName, ::mlir::NamedAttrList &attributes) {
  auto attrNames = opName.getAttributeNames();
  ::mlir::Builder odsBuilder(attrNames.front().getContext());
  if (!attributes.get(attrNames[0])) {
    attributes.append(attrNames[0], ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::FastMathFlags::none));
  }
}

::mlir::LogicalResult ProductOp::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_operandSegmentSizes;
  ::mlir::Attribute tblgen_fastmath;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'operandSegmentSizes'");
    if (namedAttrIt->getName() == getOperandSegmentSizesAttrName()) {
      tblgen_operandSegmentSizes = namedAttrIt->getValue();
      break;
    }
    else if (namedAttrIt->getName() == getFastmathAttrName()) {
      tblgen_fastmath = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  {
    auto sizeAttr = ::llvm::cast<::mlir::DenseI32ArrayAttr>(tblgen_operandSegmentSizes);
    auto numElements = sizeAttr.asArrayRef().size();
    if (numElements != 3)
      return emitOpError("'operandSegmentSizes' attribute for specifying operand segments must have 3 "
                "elements, but got ") << numElements;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_HLFIROps6(*this, tblgen_fastmath, "fastmath")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps18(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    if (valueGroup1.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup1.size();
    }

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    if (valueGroup2.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup2.size();
    }

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps19(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps4(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ProductOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult ProductOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand arrayRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> arrayOperands(arrayRawOperands);  ::llvm::SMLoc arrayOperandsLoc;
  (void)arrayOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> dimOperands;
  ::llvm::SMLoc dimOperandsLoc;
  (void)dimOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> maskOperands;
  ::llvm::SMLoc maskOperandsLoc;
  (void)maskOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  arrayOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(arrayRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("dim"))) {

  {
    dimOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      dimOperands.push_back(operand);
    }
  }
  }
  if (::mlir::succeeded(parser.parseOptionalKeyword("mask"))) {

  {
    maskOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      maskOperands.push_back(operand);
    }
  }
  }
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
  result.addAttribute("operandSegmentSizes", parser.getBuilder().getDenseI32ArrayAttr({1, static_cast<int32_t>(dimOperands.size()), static_cast<int32_t>(maskOperands.size())}));
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(::llvm::concat<const ::mlir::OpAsmParser::UnresolvedOperand>(arrayOperands, dimOperands, maskOperands), allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ProductOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getArray();
  if (getDim()) {
    _odsPrinter << ' ' << "dim";
    _odsPrinter << ' ';
    if (::mlir::Value value = getDim())
      _odsPrinter << value;
  }
  if (getMask()) {
    _odsPrinter << ' ' << "mask";
    _odsPrinter << ' ';
    if (::mlir::Value value = getMask())
      _odsPrinter << value;
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("operandSegmentSizes");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getFastmathAttr();
     if(attr && (attr == ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::FastMathFlags::none)))
       elidedAttrs.push_back("fastmath");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace hlfir
MLIR_DEFINE_EXPLICIT_TYPE_ID(hlfir::ProductOp)

namespace hlfir {

//===----------------------------------------------------------------------===//
// hlfir::RegionAssignOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
RegionAssignOpGenericAdaptorBase::RegionAssignOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("hlfir.region_assign", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> RegionAssignOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr RegionAssignOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Region &RegionAssignOpGenericAdaptorBase::getRhsRegion() {
  return *odsRegions[0];
}

::mlir::Region &RegionAssignOpGenericAdaptorBase::getLhsRegion() {
  return *odsRegions[1];
}

::mlir::Region &RegionAssignOpGenericAdaptorBase::getUserDefinedAssignment() {
  return *odsRegions[2];
}

::mlir::RegionRange RegionAssignOpGenericAdaptorBase::getRegions() {
  return odsRegions;
}

} // namespace detail
RegionAssignOpAdaptor::RegionAssignOpAdaptor(RegionAssignOp op) : RegionAssignOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult RegionAssignOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> RegionAssignOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range RegionAssignOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> RegionAssignOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range RegionAssignOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Region &RegionAssignOp::getRhsRegion() {
  return (*this)->getRegion(0);
}

::mlir::Region &RegionAssignOp::getLhsRegion() {
  return (*this)->getRegion(1);
}

::mlir::Region &RegionAssignOp::getUserDefinedAssignment() {
  return (*this)->getRegion(2);
}

void RegionAssignOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
  (void)odsState.addRegion();
  (void)odsState.addRegion();
  (void)odsState.addRegion();
}

void RegionAssignOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  (void)odsState.addRegion();
  (void)odsState.addRegion();
  (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RegionAssignOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 3; ++i)
    (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult RegionAssignOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(0)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_HLFIROps0(*this, region, "rhs_region", index++)))
        return ::mlir::failure();

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(1)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_HLFIROps0(*this, region, "lhs_region", index++)))
        return ::mlir::failure();

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(2)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_HLFIROps1(*this, region, "user_defined_assignment", index++)))
        return ::mlir::failure();
  }
  return ::mlir::success();
}

::mlir::LogicalResult RegionAssignOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

} // namespace hlfir
MLIR_DEFINE_EXPLICIT_TYPE_ID(hlfir::RegionAssignOp)

namespace hlfir {

//===----------------------------------------------------------------------===//
// hlfir::SetLengthOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
SetLengthOpGenericAdaptorBase::SetLengthOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("hlfir.set_length", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> SetLengthOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr SetLengthOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
SetLengthOpAdaptor::SetLengthOpAdaptor(SetLengthOp op) : SetLengthOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult SetLengthOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> SetLengthOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range SetLengthOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SetLengthOp::getString() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value SetLengthOp::getLength() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::MutableOperandRange SetLengthOp::getStringMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::mlir::MutableOperandRange SetLengthOp::getLengthMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> SetLengthOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range SetLengthOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void SetLengthOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value string, ::mlir::Value length) {
  odsState.addOperands(string);
  odsState.addOperands(length);
  odsState.addTypes(resultType0);
}

void SetLengthOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value string, ::mlir::Value length) {
  odsState.addOperands(string);
  odsState.addOperands(length);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SetLengthOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult SetLengthOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps10(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps11(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult SetLengthOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult SetLengthOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand stringRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> stringOperands(stringRawOperands);  ::llvm::SMLoc stringOperandsLoc;
  (void)stringOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand lengthRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> lengthOperands(lengthRawOperands);  ::llvm::SMLoc lengthOperandsLoc;
  (void)lengthOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  stringOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(stringRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseKeyword("len"))
    return ::mlir::failure();

  lengthOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(lengthRawOperands[0]))
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
  if (parser.resolveOperands(::llvm::concat<const ::mlir::OpAsmParser::UnresolvedOperand>(stringOperands, lengthOperands), allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void SetLengthOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getString();
  _odsPrinter << ' ' << "len";
  _odsPrinter << ' ';
  _odsPrinter << getLength();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace hlfir
MLIR_DEFINE_EXPLICIT_TYPE_ID(hlfir::SetLengthOp)

namespace hlfir {

//===----------------------------------------------------------------------===//
// hlfir::ShapeOfOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ShapeOfOpGenericAdaptorBase::ShapeOfOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("hlfir.shape_of", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> ShapeOfOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ShapeOfOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ShapeOfOpAdaptor::ShapeOfOpAdaptor(ShapeOfOp op) : ShapeOfOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult ShapeOfOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ShapeOfOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ShapeOfOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ShapeOfOp::getExpr() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::MutableOperandRange ShapeOfOp::getExprMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> ShapeOfOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ShapeOfOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void ShapeOfOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value expr) {
  odsState.addOperands(expr);
  odsState.addTypes(resultType0);
}

void ShapeOfOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value expr) {
  odsState.addOperands(expr);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ShapeOfOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ShapeOfOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps15(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ShapeOfOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

void ShapeOfOp::getCanonicalizationPatterns(::mlir::RewritePatternSet &results, ::mlir::MLIRContext *context) {
  results.add(canonicalize);
}

::mlir::ParseResult ShapeOfOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand exprRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> exprOperands(exprRawOperands);  ::llvm::SMLoc exprOperandsLoc;
  (void)exprOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  exprOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(exprRawOperands[0]))
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
  if (parser.resolveOperands(exprOperands, allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ShapeOfOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getExpr();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

void ShapeOfOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace hlfir
MLIR_DEFINE_EXPLICIT_TYPE_ID(hlfir::ShapeOfOp)

namespace hlfir {

//===----------------------------------------------------------------------===//
// hlfir::SumOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
SumOpGenericAdaptorBase::SumOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("hlfir.sum", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> SumOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  assert(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, SumOp::getOperandSegmentSizesAttrName(*odsOpName)) && "missing segment size attribute for op");
  auto sizeAttr = ::llvm::cast<::mlir::DenseI32ArrayAttr>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, SumOp::getOperandSegmentSizesAttrName(*odsOpName)));

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::DictionaryAttr SumOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::arith::FastMathFlagsAttr SumOpGenericAdaptorBase::getFastmathAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 1, SumOp::getFastmathAttrName(*odsOpName)));
  return attr;
}

::mlir::arith::FastMathFlags SumOpGenericAdaptorBase::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

} // namespace detail
SumOpAdaptor::SumOpAdaptor(SumOp op) : SumOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult SumOpAdaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_operandSegmentSizes;
  ::mlir::Attribute tblgen_fastmath;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'hlfir.sum' op ""requires attribute 'operandSegmentSizes'");
    if (namedAttrIt->getName() == SumOp::getOperandSegmentSizesAttrName(*odsOpName)) {
      tblgen_operandSegmentSizes = namedAttrIt->getValue();
      break;
    }
    else if (namedAttrIt->getName() == SumOp::getFastmathAttrName(*odsOpName)) {
      tblgen_fastmath = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  {
    auto sizeAttr = ::llvm::cast<::mlir::DenseI32ArrayAttr>(tblgen_operandSegmentSizes);
    auto numElements = sizeAttr.asArrayRef().size();
    if (numElements != 3)
      return emitError(loc, "'hlfir.sum' op ""'operandSegmentSizes' attribute for specifying operand segments must have 3 "
                "elements, but got ") << numElements;
  }

  if (tblgen_fastmath && !((::llvm::isa<::mlir::arith::FastMathFlagsAttr>(tblgen_fastmath))))
    return emitError(loc, "'hlfir.sum' op ""attribute 'fastmath' failed to satisfy constraint: Floating point fast math flags");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> SumOp::getODSOperandIndexAndLength(unsigned index) {
  auto sizeAttr = ::llvm::cast<::mlir::DenseI32ArrayAttr>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getOperandSegmentSizesAttrName()));

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::Operation::operand_range SumOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value SumOp::getArray() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Value SumOp::getDim() {
  auto operands = getODSOperands(1);
  return operands.empty() ? ::mlir::Value{} : ::llvm::cast<::mlir::Value>(*operands.begin());
}

::mlir::Value SumOp::getMask() {
  auto operands = getODSOperands(2);
  return operands.empty() ? ::mlir::Value{} : ::llvm::cast<::mlir::Value>(*operands.begin());
}

::mlir::MutableOperandRange SumOp::getArrayMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(0u, *::mlir::impl::getNamedAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getOperandSegmentSizesAttrName())));
  return mutableRange;
}

::mlir::MutableOperandRange SumOp::getDimMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(1u, *::mlir::impl::getNamedAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getOperandSegmentSizesAttrName())));
  return mutableRange;
}

::mlir::MutableOperandRange SumOp::getMaskMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(2u, *::mlir::impl::getNamedAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getOperandSegmentSizesAttrName())));
  return mutableRange;
}

std::pair<unsigned, unsigned> SumOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range SumOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::arith::FastMathFlagsAttr SumOp::getFastmathAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::arith::FastMathFlagsAttr>(::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 1, getFastmathAttrName()));
}

::mlir::arith::FastMathFlags SumOp::getFastmath() {
  auto attr = getFastmathAttr();
  return attr.getValue();
}

void SumOp::setFastmathAttr(::mlir::arith::FastMathFlagsAttr attr) {
  (*this)->setAttr(getFastmathAttrName(), attr);
}

void SumOp::setFastmath(::mlir::arith::FastMathFlags attrValue) {
  (*this)->setAttr(getFastmathAttrName(), ::mlir::arith::FastMathFlagsAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void SumOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value array, /*optional*/::mlir::Value dim, /*optional*/::mlir::Value mask, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(array);
  if (dim)
    odsState.addOperands(dim);
  if (mask)
    odsState.addOperands(mask);
  odsState.addAttribute(getOperandSegmentSizesAttrName(odsState.name), odsBuilder.getDenseI32ArrayAttr({1, (dim ? 1 : 0), (mask ? 1 : 0)}));
  if (fastmath) {
    odsState.addAttribute(getFastmathAttrName(odsState.name), fastmath);
  }
  odsState.addTypes(resultType0);
}

void SumOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value array, /*optional*/::mlir::Value dim, /*optional*/::mlir::Value mask, ::mlir::arith::FastMathFlagsAttr fastmath) {
  odsState.addOperands(array);
  if (dim)
    odsState.addOperands(dim);
  if (mask)
    odsState.addOperands(mask);
  odsState.addAttribute(getOperandSegmentSizesAttrName(odsState.name), odsBuilder.getDenseI32ArrayAttr({1, (dim ? 1 : 0), (mask ? 1 : 0)}));
  if (fastmath) {
    odsState.addAttribute(getFastmathAttrName(odsState.name), fastmath);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SumOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value array, /*optional*/::mlir::Value dim, /*optional*/::mlir::Value mask, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(array);
  if (dim)
    odsState.addOperands(dim);
  if (mask)
    odsState.addOperands(mask);
  odsState.addAttribute(getOperandSegmentSizesAttrName(odsState.name), odsBuilder.getDenseI32ArrayAttr({1, (dim ? 1 : 0), (mask ? 1 : 0)}));
  odsState.addAttribute(getFastmathAttrName(odsState.name), ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath));
  odsState.addTypes(resultType0);
}

void SumOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value array, /*optional*/::mlir::Value dim, /*optional*/::mlir::Value mask, ::mlir::arith::FastMathFlags fastmath) {
  odsState.addOperands(array);
  if (dim)
    odsState.addOperands(dim);
  if (mask)
    odsState.addOperands(mask);
  odsState.addAttribute(getOperandSegmentSizesAttrName(odsState.name), odsBuilder.getDenseI32ArrayAttr({1, (dim ? 1 : 0), (mask ? 1 : 0)}));
  odsState.addAttribute(getFastmathAttrName(odsState.name), ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), fastmath));
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SumOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void SumOp::populateDefaultAttrs(const ::mlir::OperationName &opName, ::mlir::NamedAttrList &attributes) {
  auto attrNames = opName.getAttributeNames();
  ::mlir::Builder odsBuilder(attrNames.front().getContext());
  if (!attributes.get(attrNames[0])) {
    attributes.append(attrNames[0], ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::FastMathFlags::none));
  }
}

::mlir::LogicalResult SumOp::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_operandSegmentSizes;
  ::mlir::Attribute tblgen_fastmath;

  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'operandSegmentSizes'");
    if (namedAttrIt->getName() == getOperandSegmentSizesAttrName()) {
      tblgen_operandSegmentSizes = namedAttrIt->getValue();
      break;
    }
    else if (namedAttrIt->getName() == getFastmathAttrName()) {
      tblgen_fastmath = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  {
    auto sizeAttr = ::llvm::cast<::mlir::DenseI32ArrayAttr>(tblgen_operandSegmentSizes);
    auto numElements = sizeAttr.asArrayRef().size();
    if (numElements != 3)
      return emitOpError("'operandSegmentSizes' attribute for specifying operand segments must have 3 "
                "elements, but got ") << numElements;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_HLFIROps6(*this, tblgen_fastmath, "fastmath")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps18(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    if (valueGroup1.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup1.size();
    }

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    if (valueGroup2.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup2.size();
    }

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps19(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps4(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult SumOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult SumOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand arrayRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> arrayOperands(arrayRawOperands);  ::llvm::SMLoc arrayOperandsLoc;
  (void)arrayOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> dimOperands;
  ::llvm::SMLoc dimOperandsLoc;
  (void)dimOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> maskOperands;
  ::llvm::SMLoc maskOperandsLoc;
  (void)maskOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  arrayOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(arrayRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("dim"))) {

  {
    dimOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      dimOperands.push_back(operand);
    }
  }
  }
  if (::mlir::succeeded(parser.parseOptionalKeyword("mask"))) {

  {
    maskOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      maskOperands.push_back(operand);
    }
  }
  }
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
  result.addAttribute("operandSegmentSizes", parser.getBuilder().getDenseI32ArrayAttr({1, static_cast<int32_t>(dimOperands.size()), static_cast<int32_t>(maskOperands.size())}));
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(::llvm::concat<const ::mlir::OpAsmParser::UnresolvedOperand>(arrayOperands, dimOperands, maskOperands), allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void SumOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getArray();
  if (getDim()) {
    _odsPrinter << ' ' << "dim";
    _odsPrinter << ' ';
    if (::mlir::Value value = getDim())
      _odsPrinter << value;
  }
  if (getMask()) {
    _odsPrinter << ' ' << "mask";
    _odsPrinter << ' ';
    if (::mlir::Value value = getMask())
      _odsPrinter << value;
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("operandSegmentSizes");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getFastmathAttr();
     if(attr && (attr == ::mlir::arith::FastMathFlagsAttr::get(odsBuilder.getContext(), ::mlir::arith::FastMathFlags::none)))
       elidedAttrs.push_back("fastmath");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace hlfir
MLIR_DEFINE_EXPLICIT_TYPE_ID(hlfir::SumOp)

namespace hlfir {

//===----------------------------------------------------------------------===//
// hlfir::TransposeOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
TransposeOpGenericAdaptorBase::TransposeOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("hlfir.transpose", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> TransposeOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr TransposeOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
TransposeOpAdaptor::TransposeOpAdaptor(TransposeOp op) : TransposeOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult TransposeOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> TransposeOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range TransposeOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value TransposeOp::getArray() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::MutableOperandRange TransposeOp::getArrayMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> TransposeOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range TransposeOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void TransposeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value array) {
  odsState.addOperands(array);
  odsState.addTypes(resultType0);
}

void TransposeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value array) {
  odsState.addOperands(array);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TransposeOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult TransposeOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps20(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps5(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult TransposeOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult TransposeOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand arrayRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> arrayOperands(arrayRawOperands);  ::llvm::SMLoc arrayOperandsLoc;
  (void)arrayOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  arrayOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(arrayRawOperands[0]))
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
  if (parser.resolveOperands(arrayOperands, allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void TransposeOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getArray();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace hlfir
MLIR_DEFINE_EXPLICIT_TYPE_ID(hlfir::TransposeOp)

namespace hlfir {

//===----------------------------------------------------------------------===//
// hlfir::WhereOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
WhereOpGenericAdaptorBase::WhereOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("hlfir.where", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> WhereOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr WhereOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Region &WhereOpGenericAdaptorBase::getMaskRegion() {
  return *odsRegions[0];
}

::mlir::Region &WhereOpGenericAdaptorBase::getBody() {
  return *odsRegions[1];
}

::mlir::RegionRange WhereOpGenericAdaptorBase::getRegions() {
  return odsRegions;
}

} // namespace detail
WhereOpAdaptor::WhereOpAdaptor(WhereOp op) : WhereOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult WhereOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> WhereOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range WhereOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> WhereOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range WhereOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Region &WhereOp::getMaskRegion() {
  return (*this)->getRegion(0);
}

::mlir::Region &WhereOp::getBody() {
  return (*this)->getRegion(1);
}

void WhereOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
  (void)odsState.addRegion();
  (void)odsState.addRegion();
}

void WhereOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  (void)odsState.addRegion();
  (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void WhereOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 2; ++i)
    (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult WhereOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(0)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_HLFIROps0(*this, region, "mask_region", index++)))
        return ::mlir::failure();

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(1)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_HLFIROps0(*this, region, "body", index++)))
        return ::mlir::failure();
  }
  return ::mlir::success();
}

::mlir::LogicalResult WhereOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult WhereOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  std::unique_ptr<::mlir::Region> mask_regionRegion = std::make_unique<::mlir::Region>();
  std::unique_ptr<::mlir::Region> bodyRegion = std::make_unique<::mlir::Region>();

  if (parser.parseRegion(*mask_regionRegion))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseKeyword("do"))
    return ::mlir::failure();
  {
    if (parseAssignmentMaskOpBody(parser, *bodyRegion))
      return ::mlir::failure();
  }
  result.addRegion(std::move(mask_regionRegion));
  result.addRegion(std::move(bodyRegion));
  return ::mlir::success();
}

void WhereOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter.printRegion(getMaskRegion());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << "do";
  _odsPrinter << ' ';
  printAssignmentMaskOpBody(_odsPrinter, *this, getBody());
}

} // namespace hlfir
MLIR_DEFINE_EXPLICIT_TYPE_ID(hlfir::WhereOp)

namespace hlfir {

//===----------------------------------------------------------------------===//
// hlfir::YieldElementOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
YieldElementOpGenericAdaptorBase::YieldElementOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("hlfir.yield_element", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> YieldElementOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr YieldElementOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
YieldElementOpAdaptor::YieldElementOpAdaptor(YieldElementOp op) : YieldElementOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult YieldElementOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> YieldElementOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range YieldElementOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value YieldElementOp::getElementValue() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::MutableOperandRange YieldElementOp::getElementValueMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> YieldElementOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range YieldElementOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void YieldElementOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value element_value) {
  odsState.addOperands(element_value);
}

void YieldElementOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value element_value) {
  odsState.addOperands(element_value);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void YieldElementOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult YieldElementOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps21(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult YieldElementOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult YieldElementOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand element_valueRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> element_valueOperands(element_valueRawOperands);  ::llvm::SMLoc element_valueOperandsLoc;
  (void)element_valueOperandsLoc;
  ::mlir::Type element_valueRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> element_valueTypes(element_valueRawTypes);

  element_valueOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(element_valueRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    element_valueRawTypes[0] = type;
  }
  if (parser.resolveOperands(element_valueOperands, element_valueTypes, element_valueOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void YieldElementOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getElementValue();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getElementValue().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void YieldElementOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace hlfir
MLIR_DEFINE_EXPLICIT_TYPE_ID(hlfir::YieldElementOp)

namespace hlfir {

//===----------------------------------------------------------------------===//
// hlfir::YieldOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
YieldOpGenericAdaptorBase::YieldOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("hlfir.yield", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> YieldOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr YieldOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Region &YieldOpGenericAdaptorBase::getCleanup() {
  return *odsRegions[0];
}

::mlir::RegionRange YieldOpGenericAdaptorBase::getRegions() {
  return odsRegions;
}

} // namespace detail
YieldOpAdaptor::YieldOpAdaptor(YieldOp op) : YieldOpAdaptor(op->getOperands(), op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

::mlir::LogicalResult YieldOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> YieldOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range YieldOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value YieldOp::getEntity() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::MutableOperandRange YieldOp::getEntityMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> YieldOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range YieldOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Region &YieldOp::getCleanup() {
  return (*this)->getRegion(0);
}

void YieldOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value entity) {
  odsState.addOperands(entity);
  (void)odsState.addRegion();
}

void YieldOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value entity) {
  odsState.addOperands(entity);
  (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void YieldOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult YieldOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_HLFIROps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(0)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_HLFIROps1(*this, region, "cleanup", index++)))
        return ::mlir::failure();
  }
  return ::mlir::success();
}

::mlir::LogicalResult YieldOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult YieldOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand entityRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> entityOperands(entityRawOperands);  ::llvm::SMLoc entityOperandsLoc;
  (void)entityOperandsLoc;
  ::mlir::Type entityRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> entityTypes(entityRawTypes);
  std::unique_ptr<::mlir::Region> cleanupRegion = std::make_unique<::mlir::Region>();

  entityOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(entityRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    entityRawTypes[0] = type;
  }
  {
    if (parseYieldOpCleanup(parser, *cleanupRegion))
      return ::mlir::failure();
  }
  result.addRegion(std::move(cleanupRegion));
  if (parser.resolveOperands(entityOperands, entityTypes, entityOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void YieldOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getEntity();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getEntity().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ';
  printYieldOpCleanup(_odsPrinter, *this, getCleanup());
}

} // namespace hlfir
MLIR_DEFINE_EXPLICIT_TYPE_ID(hlfir::YieldOp)


#endif  // GET_OP_CLASSES

