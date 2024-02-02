/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Declarations                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#if defined(GET_OP_CLASSES) || defined(GET_OP_FWD_DEFINES)
#undef GET_OP_FWD_DEFINES
namespace mlir {
namespace transform {
class ApplyEraseUnnecessaryInputsPatternsOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class ApplyFoldUnitExtentDimsViaReshapesPatternsOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class ApplyFoldUnitExtentDimsViaSlicesPatternsOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class ApplyTilingCanonicalizationPatternsOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class BufferizeToAllocationOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class ConvertConv2DToImg2ColOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class DecomposeInterfaceOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class DecomposeOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class EliminateLinalgOpAnchoredEmptyTensorsOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class FuseIntoContainingOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class FuseOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class GeneralizeOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class HoistPadBuildPackingLoopNestOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class HoistPadOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class HoistRedundantTensorSubsetsOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class HoistRedundantVectorTransfersOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class InsertSliceToCopyOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class InterchangeOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class LowerPackOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class LowerUnPackOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class MapCopyToThreadsOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class MaskedVectorizeOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class MatchOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class MultiTileSizesOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class PackGreedilyOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class PackOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class PackTransposeOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class PadOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class PromoteOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class ReplaceOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class RewriteInDestinationPassingStyleOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class ScalarizeOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class SplitOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class SplitReductionOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class TileOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class TileReductionUsingForallOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class TileReductionUsingScfOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class TileToForallOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class TileToScfForOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class VectorizeOp;
} // namespace transform
} // namespace mlir
#endif

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyEraseUnnecessaryInputsPatternsOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ApplyEraseUnnecessaryInputsPatternsOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ApplyEraseUnnecessaryInputsPatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class ApplyEraseUnnecessaryInputsPatternsOpGenericAdaptor : public detail::ApplyEraseUnnecessaryInputsPatternsOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ApplyEraseUnnecessaryInputsPatternsOpGenericAdaptorBase;
public:
  ApplyEraseUnnecessaryInputsPatternsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ApplyEraseUnnecessaryInputsPatternsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ApplyEraseUnnecessaryInputsPatternsOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ApplyEraseUnnecessaryInputsPatternsOpAdaptor : public ApplyEraseUnnecessaryInputsPatternsOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ApplyEraseUnnecessaryInputsPatternsOpGenericAdaptor::ApplyEraseUnnecessaryInputsPatternsOpGenericAdaptor;
  ApplyEraseUnnecessaryInputsPatternsOpAdaptor(ApplyEraseUnnecessaryInputsPatternsOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ApplyEraseUnnecessaryInputsPatternsOp : public ::mlir::Op<ApplyEraseUnnecessaryInputsPatternsOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::transform::PatternDescriptorOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ApplyEraseUnnecessaryInputsPatternsOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ApplyEraseUnnecessaryInputsPatternsOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.apply_patterns.linalg.erase_unnecessary_inputs");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  void populatePatterns(RewritePatternSet &patterns);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyEraseUnnecessaryInputsPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyFoldUnitExtentDimsViaReshapesPatternsOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ApplyFoldUnitExtentDimsViaReshapesPatternsOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ApplyFoldUnitExtentDimsViaReshapesPatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class ApplyFoldUnitExtentDimsViaReshapesPatternsOpGenericAdaptor : public detail::ApplyFoldUnitExtentDimsViaReshapesPatternsOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ApplyFoldUnitExtentDimsViaReshapesPatternsOpGenericAdaptorBase;
public:
  ApplyFoldUnitExtentDimsViaReshapesPatternsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ApplyFoldUnitExtentDimsViaReshapesPatternsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ApplyFoldUnitExtentDimsViaReshapesPatternsOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ApplyFoldUnitExtentDimsViaReshapesPatternsOpAdaptor : public ApplyFoldUnitExtentDimsViaReshapesPatternsOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ApplyFoldUnitExtentDimsViaReshapesPatternsOpGenericAdaptor::ApplyFoldUnitExtentDimsViaReshapesPatternsOpGenericAdaptor;
  ApplyFoldUnitExtentDimsViaReshapesPatternsOpAdaptor(ApplyFoldUnitExtentDimsViaReshapesPatternsOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ApplyFoldUnitExtentDimsViaReshapesPatternsOp : public ::mlir::Op<ApplyFoldUnitExtentDimsViaReshapesPatternsOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::transform::PatternDescriptorOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ApplyFoldUnitExtentDimsViaReshapesPatternsOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ApplyFoldUnitExtentDimsViaReshapesPatternsOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.apply_patterns.linalg.fold_unit_extent_dims_via_reshapes");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  void populatePatterns(RewritePatternSet &patterns);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyFoldUnitExtentDimsViaReshapesPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyFoldUnitExtentDimsViaSlicesPatternsOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ApplyFoldUnitExtentDimsViaSlicesPatternsOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ApplyFoldUnitExtentDimsViaSlicesPatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class ApplyFoldUnitExtentDimsViaSlicesPatternsOpGenericAdaptor : public detail::ApplyFoldUnitExtentDimsViaSlicesPatternsOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ApplyFoldUnitExtentDimsViaSlicesPatternsOpGenericAdaptorBase;
public:
  ApplyFoldUnitExtentDimsViaSlicesPatternsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ApplyFoldUnitExtentDimsViaSlicesPatternsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ApplyFoldUnitExtentDimsViaSlicesPatternsOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ApplyFoldUnitExtentDimsViaSlicesPatternsOpAdaptor : public ApplyFoldUnitExtentDimsViaSlicesPatternsOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ApplyFoldUnitExtentDimsViaSlicesPatternsOpGenericAdaptor::ApplyFoldUnitExtentDimsViaSlicesPatternsOpGenericAdaptor;
  ApplyFoldUnitExtentDimsViaSlicesPatternsOpAdaptor(ApplyFoldUnitExtentDimsViaSlicesPatternsOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ApplyFoldUnitExtentDimsViaSlicesPatternsOp : public ::mlir::Op<ApplyFoldUnitExtentDimsViaSlicesPatternsOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::transform::PatternDescriptorOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ApplyFoldUnitExtentDimsViaSlicesPatternsOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ApplyFoldUnitExtentDimsViaSlicesPatternsOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.apply_patterns.linalg.fold_unit_extent_dims_via_slices");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  void populatePatterns(RewritePatternSet &patterns);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyFoldUnitExtentDimsViaSlicesPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyTilingCanonicalizationPatternsOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ApplyTilingCanonicalizationPatternsOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ApplyTilingCanonicalizationPatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class ApplyTilingCanonicalizationPatternsOpGenericAdaptor : public detail::ApplyTilingCanonicalizationPatternsOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ApplyTilingCanonicalizationPatternsOpGenericAdaptorBase;
public:
  ApplyTilingCanonicalizationPatternsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ApplyTilingCanonicalizationPatternsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ApplyTilingCanonicalizationPatternsOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ApplyTilingCanonicalizationPatternsOpAdaptor : public ApplyTilingCanonicalizationPatternsOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ApplyTilingCanonicalizationPatternsOpGenericAdaptor::ApplyTilingCanonicalizationPatternsOpGenericAdaptor;
  ApplyTilingCanonicalizationPatternsOpAdaptor(ApplyTilingCanonicalizationPatternsOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ApplyTilingCanonicalizationPatternsOp : public ::mlir::Op<ApplyTilingCanonicalizationPatternsOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::transform::PatternDescriptorOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ApplyTilingCanonicalizationPatternsOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ApplyTilingCanonicalizationPatternsOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.apply_patterns.linalg.tiling_canonicalization");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  void populatePatterns(RewritePatternSet &patterns);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyTilingCanonicalizationPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::BufferizeToAllocationOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class BufferizeToAllocationOpGenericAdaptorBase {
public:
  struct Properties {
    using alloc_opTy = ::mlir::StringAttr;
    alloc_opTy alloc_op;

    auto getAllocOp() {
      auto &propStorage = this->alloc_op;
      return ::llvm::dyn_cast_or_null<::mlir::StringAttr>(propStorage);
    }
    void setAllocOp(const ::mlir::StringAttr &propValue) {
      this->alloc_op = propValue;
    }
    using bufferize_destination_onlyTy = ::mlir::UnitAttr;
    bufferize_destination_onlyTy bufferize_destination_only;

    auto getBufferizeDestinationOnly() {
      auto &propStorage = this->bufferize_destination_only;
      return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(propStorage);
    }
    void setBufferizeDestinationOnly(const ::mlir::UnitAttr &propValue) {
      this->bufferize_destination_only = propValue;
    }
    using memcpy_opTy = ::mlir::StringAttr;
    memcpy_opTy memcpy_op;

    auto getMemcpyOp() {
      auto &propStorage = this->memcpy_op;
      return ::llvm::dyn_cast_or_null<::mlir::StringAttr>(propStorage);
    }
    void setMemcpyOp(const ::mlir::StringAttr &propValue) {
      this->memcpy_op = propValue;
    }
    using memory_spaceTy = ::mlir::Attribute;
    memory_spaceTy memory_space;

    auto getMemorySpace() {
      auto &propStorage = this->memory_space;
      return ::llvm::dyn_cast_or_null<::mlir::Attribute>(propStorage);
    }
    void setMemorySpace(const ::mlir::Attribute &propValue) {
      this->memory_space = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.alloc_op == this->alloc_op &&
        rhs.bufferize_destination_only == this->bufferize_destination_only &&
        rhs.memcpy_op == this->memcpy_op &&
        rhs.memory_space == this->memory_space &&
        true;
    }
    bool operator!=(const Properties &rhs) const {
      return !(*this == rhs);
    }
  };
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  Properties properties;
  ::mlir::RegionRange odsRegions;
public:
  BufferizeToAllocationOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::Attribute getMemorySpaceAttr();
  ::std::optional<::mlir::Attribute> getMemorySpace();
  ::mlir::StringAttr getMemcpyOpAttr();
  ::llvm::StringRef getMemcpyOp();
  ::mlir::StringAttr getAllocOpAttr();
  ::llvm::StringRef getAllocOp();
  ::mlir::UnitAttr getBufferizeDestinationOnlyAttr();
  bool getBufferizeDestinationOnly();
};
} // namespace detail
template <typename RangeT>
class BufferizeToAllocationOpGenericAdaptor : public detail::BufferizeToAllocationOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::BufferizeToAllocationOpGenericAdaptorBase;
public:
  BufferizeToAllocationOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  BufferizeToAllocationOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : BufferizeToAllocationOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTarget() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class BufferizeToAllocationOpAdaptor : public BufferizeToAllocationOpGenericAdaptor<::mlir::ValueRange> {
public:
  using BufferizeToAllocationOpGenericAdaptor::BufferizeToAllocationOpGenericAdaptor;
  BufferizeToAllocationOpAdaptor(BufferizeToAllocationOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class BufferizeToAllocationOp : public ::mlir::Op<BufferizeToAllocationOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::NResults<2>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait, ::mlir::OpAsmOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = BufferizeToAllocationOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = BufferizeToAllocationOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("alloc_op"), ::llvm::StringRef("bufferize_destination_only"), ::llvm::StringRef("memcpy_op"), ::llvm::StringRef("memory_space")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getAllocOpAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getAllocOpAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getBufferizeDestinationOnlyAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getBufferizeDestinationOnlyAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getMemcpyOpAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getMemcpyOpAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr getMemorySpaceAttrName() {
    return getAttributeNameForIndex(3);
  }

  static ::mlir::StringAttr getMemorySpaceAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 3);
  }

  void getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn);
  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.bufferize_to_allocation");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTarget();
  ::mlir::MutableOperandRange getTargetMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::transform::AnyValueType> getAllocatedBuffer();
  ::mlir::TypedValue<::mlir::transform::AnyOpType> getNewOps();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::mlir::InFlightDiagnostic *diag);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::Attribute getMemorySpaceAttr();
  ::std::optional<::mlir::Attribute> getMemorySpace();
  ::mlir::StringAttr getMemcpyOpAttr();
  ::llvm::StringRef getMemcpyOp();
  ::mlir::StringAttr getAllocOpAttr();
  ::llvm::StringRef getAllocOp();
  ::mlir::UnitAttr getBufferizeDestinationOnlyAttr();
  bool getBufferizeDestinationOnly();
  void setMemorySpaceAttr(::mlir::Attribute attr);
  void setMemcpyOpAttr(::mlir::StringAttr attr);
  void setMemcpyOp(::llvm::StringRef attrValue);
  void setAllocOpAttr(::mlir::StringAttr attr);
  void setAllocOp(::llvm::StringRef attrValue);
  void setBufferizeDestinationOnlyAttr(::mlir::UnitAttr attr);
  void setBufferizeDestinationOnly(bool attrValue);
  ::mlir::Attribute removeMemorySpaceAttr();
  ::mlir::Attribute removeBufferizeDestinationOnlyAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value target, Attribute memorySpace);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value target, int64_t memorySpace);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type allocated_buffer, ::mlir::Type new_ops, ::mlir::Value target, /*optional*/::mlir::Attribute memory_space, ::mlir::StringAttr memcpy_op, ::mlir::StringAttr alloc_op, /*optional*/::mlir::UnitAttr bufferize_destination_only);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, /*optional*/::mlir::Attribute memory_space, ::mlir::StringAttr memcpy_op, ::mlir::StringAttr alloc_op, /*optional*/::mlir::UnitAttr bufferize_destination_only);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type allocated_buffer, ::mlir::Type new_ops, ::mlir::Value target, /*optional*/::mlir::Attribute memory_space, ::llvm::StringRef memcpy_op = "memref.tensor_store", ::llvm::StringRef alloc_op = "memref.alloc", /*optional*/bool bufferize_destination_only = false);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, /*optional*/::mlir::Attribute memory_space, ::llvm::StringRef memcpy_op = "memref.tensor_store", ::llvm::StringRef alloc_op = "memref.alloc", /*optional*/bool bufferize_destination_only = false);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultProperties(::mlir::OperationName opName, Properties &properties);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  ::mlir::DiagnosedSilenceableFailure apply(::mlir::transform::TransformRewriter &rewriter, ::mlir::transform::TransformResults &transformResults, ::mlir::transform::TransformState &state);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 4 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    return name.getAttributeNames()[index];
  }

public:
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::BufferizeToAllocationOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ConvertConv2DToImg2ColOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ConvertConv2DToImg2ColOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ConvertConv2DToImg2ColOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class ConvertConv2DToImg2ColOpGenericAdaptor : public detail::ConvertConv2DToImg2ColOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ConvertConv2DToImg2ColOpGenericAdaptorBase;
public:
  ConvertConv2DToImg2ColOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ConvertConv2DToImg2ColOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ConvertConv2DToImg2ColOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTarget() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ConvertConv2DToImg2ColOpAdaptor : public ConvertConv2DToImg2ColOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ConvertConv2DToImg2ColOpGenericAdaptor::ConvertConv2DToImg2ColOpGenericAdaptor;
  ConvertConv2DToImg2ColOpAdaptor(ConvertConv2DToImg2ColOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ConvertConv2DToImg2ColOp : public ::mlir::Op<ConvertConv2DToImg2ColOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::NResults<2>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::TransformEachOpTrait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait, ::mlir::OpAsmOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ConvertConv2DToImg2ColOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ConvertConv2DToImg2ColOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  void getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn);
  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.convert_conv2d_to_img2col");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTarget();
  ::mlir::MutableOperandRange getTargetMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getImg2colTensor();
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTransformed();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value target);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type img2col_tensor, ::mlir::Type transformed, ::mlir::Value target);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
  ::mlir::DiagnosedSilenceableFailure applyToOne(
      ::mlir::transform::TransformRewriter &rewriter,
      ::mlir::linalg::LinalgOp target,
      ::mlir::transform::ApplyToEachResultList &results,
      ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::ConvertConv2DToImg2ColOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::DecomposeInterfaceOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class DecomposeInterfaceOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  DecomposeInterfaceOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class DecomposeInterfaceOpGenericAdaptor : public detail::DecomposeInterfaceOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::DecomposeInterfaceOpGenericAdaptorBase;
public:
  DecomposeInterfaceOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  DecomposeInterfaceOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : DecomposeInterfaceOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTarget() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class DecomposeInterfaceOpAdaptor : public DecomposeInterfaceOpGenericAdaptor<::mlir::ValueRange> {
public:
  using DecomposeInterfaceOpGenericAdaptor::DecomposeInterfaceOpGenericAdaptor;
  DecomposeInterfaceOpAdaptor(DecomposeInterfaceOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class DecomposeInterfaceOp : public ::mlir::Op<DecomposeInterfaceOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::transform::TransformHandleTypeInterface>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::TransformEachOpTrait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = DecomposeInterfaceOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = DecomposeInterfaceOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.decompose_interface");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTarget();
  ::mlir::MutableOperandRange getTargetMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTransformed();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
  ::mlir::DiagnosedSilenceableFailure applyToOne(
      ::mlir::transform::TransformRewriter &rewriter,
      ::mlir::Operation *target,
      ::mlir::transform::ApplyToEachResultList &results,
      ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::DecomposeInterfaceOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::DecomposeOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class DecomposeOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  DecomposeOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class DecomposeOpGenericAdaptor : public detail::DecomposeOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::DecomposeOpGenericAdaptorBase;
public:
  DecomposeOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  DecomposeOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : DecomposeOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTarget() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class DecomposeOpAdaptor : public DecomposeOpGenericAdaptor<::mlir::ValueRange> {
public:
  using DecomposeOpGenericAdaptor::DecomposeOpGenericAdaptor;
  DecomposeOpAdaptor(DecomposeOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class DecomposeOp : public ::mlir::Op<DecomposeOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::transform::TransformHandleTypeInterface>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::TransformEachOpTrait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = DecomposeOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = DecomposeOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.decompose");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTarget();
  ::mlir::MutableOperandRange getTargetMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTransformed();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
  ::mlir::DiagnosedSilenceableFailure applyToOne(
      ::mlir::transform::TransformRewriter &rewriter,
      ::mlir::linalg::LinalgOp target,
      ::mlir::transform::ApplyToEachResultList &results,
      ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::DecomposeOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::EliminateLinalgOpAnchoredEmptyTensorsOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class EliminateLinalgOpAnchoredEmptyTensorsOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  EliminateLinalgOpAnchoredEmptyTensorsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class EliminateLinalgOpAnchoredEmptyTensorsOpGenericAdaptor : public detail::EliminateLinalgOpAnchoredEmptyTensorsOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::EliminateLinalgOpAnchoredEmptyTensorsOpGenericAdaptorBase;
public:
  EliminateLinalgOpAnchoredEmptyTensorsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  EliminateLinalgOpAnchoredEmptyTensorsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : EliminateLinalgOpAnchoredEmptyTensorsOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTarget() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class EliminateLinalgOpAnchoredEmptyTensorsOpAdaptor : public EliminateLinalgOpAnchoredEmptyTensorsOpGenericAdaptor<::mlir::ValueRange> {
public:
  using EliminateLinalgOpAnchoredEmptyTensorsOpGenericAdaptor::EliminateLinalgOpAnchoredEmptyTensorsOpGenericAdaptor;
  EliminateLinalgOpAnchoredEmptyTensorsOpAdaptor(EliminateLinalgOpAnchoredEmptyTensorsOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class EliminateLinalgOpAnchoredEmptyTensorsOp : public ::mlir::Op<EliminateLinalgOpAnchoredEmptyTensorsOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::transform::TransformOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = EliminateLinalgOpAnchoredEmptyTensorsOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = EliminateLinalgOpAnchoredEmptyTensorsOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.eliminate_empty_tensors");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTarget();
  ::mlir::MutableOperandRange getTargetMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value target);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::DiagnosedSilenceableFailure apply(::mlir::transform::TransformRewriter &rewriter, ::mlir::transform::TransformResults &transformResults, ::mlir::transform::TransformState &state);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::EliminateLinalgOpAnchoredEmptyTensorsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::FuseIntoContainingOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class FuseIntoContainingOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  FuseIntoContainingOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class FuseIntoContainingOpGenericAdaptor : public detail::FuseIntoContainingOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::FuseIntoContainingOpGenericAdaptorBase;
public:
  FuseIntoContainingOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  FuseIntoContainingOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : FuseIntoContainingOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getProducerOp() {
    return (*getODSOperands(0).begin());
  }

  ValueT getContainingOp() {
    return (*getODSOperands(1).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class FuseIntoContainingOpAdaptor : public FuseIntoContainingOpGenericAdaptor<::mlir::ValueRange> {
public:
  using FuseIntoContainingOpGenericAdaptor::FuseIntoContainingOpGenericAdaptor;
  FuseIntoContainingOpAdaptor(FuseIntoContainingOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class FuseIntoContainingOp : public ::mlir::Op<FuseIntoContainingOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::NResults<2>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::transform::TransformOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait, ::mlir::OpAsmOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = FuseIntoContainingOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = FuseIntoContainingOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  void getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn);
  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.fuse_into_containing_op");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getProducerOp();
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getContainingOp();
  ::mlir::MutableOperandRange getProducerOpMutable();
  ::mlir::MutableOperandRange getContainingOpMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getFusedOp();
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getNewContainingOp();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value producerOp, Value containingOp);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type fused_op, ::mlir::Type new_containing_op, ::mlir::Value producer_op, ::mlir::Value containing_op);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value producer_op, ::mlir::Value containing_op);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::DiagnosedSilenceableFailure apply(::mlir::transform::TransformRewriter &rewriter, ::mlir::transform::TransformResults &transformResults, ::mlir::transform::TransformState &state);
  bool allowsRepeatedHandleOperands();
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::FuseIntoContainingOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::FuseOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class FuseOpGenericAdaptorBase {
public:
  struct Properties {
    using tile_interchangeTy = ::mlir::ArrayAttr;
    tile_interchangeTy tile_interchange;

    auto getTileInterchange() {
      auto &propStorage = this->tile_interchange;
      return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(propStorage);
    }
    void setTileInterchange(const ::mlir::ArrayAttr &propValue) {
      this->tile_interchange = propValue;
    }
    using tile_sizesTy = ::mlir::ArrayAttr;
    tile_sizesTy tile_sizes;

    auto getTileSizes() {
      auto &propStorage = this->tile_sizes;
      return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(propStorage);
    }
    void setTileSizes(const ::mlir::ArrayAttr &propValue) {
      this->tile_sizes = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.tile_interchange == this->tile_interchange &&
        rhs.tile_sizes == this->tile_sizes &&
        true;
    }
    bool operator!=(const Properties &rhs) const {
      return !(*this == rhs);
    }
  };
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  Properties properties;
  ::mlir::RegionRange odsRegions;
public:
  FuseOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::ArrayAttr getTileSizesAttr();
  ::mlir::ArrayAttr getTileSizes();
  ::mlir::ArrayAttr getTileInterchangeAttr();
  ::mlir::ArrayAttr getTileInterchange();
};
} // namespace detail
template <typename RangeT>
class FuseOpGenericAdaptor : public detail::FuseOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::FuseOpGenericAdaptorBase;
public:
  FuseOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  FuseOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : FuseOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTarget() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class FuseOpAdaptor : public FuseOpGenericAdaptor<::mlir::ValueRange> {
public:
  using FuseOpGenericAdaptor::FuseOpGenericAdaptor;
  FuseOpAdaptor(FuseOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class FuseOp : public ::mlir::Op<FuseOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::AtLeastNResults<1>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait, ::mlir::OpAsmOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = FuseOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = FuseOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("tile_interchange"), ::llvm::StringRef("tile_sizes")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getTileInterchangeAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getTileInterchangeAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getTileSizesAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getTileSizesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  void getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn);
  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.fuse");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTarget();
  ::mlir::MutableOperandRange getTargetMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTransformed();
  ::mlir::Operation::result_range getLoops();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::mlir::InFlightDiagnostic *diag);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::ArrayAttr getTileSizesAttr();
  ::mlir::ArrayAttr getTileSizes();
  ::mlir::ArrayAttr getTileInterchangeAttr();
  ::mlir::ArrayAttr getTileInterchange();
  void setTileSizesAttr(::mlir::ArrayAttr attr);
  void setTileInterchangeAttr(::mlir::ArrayAttr attr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::TypeRange loops, ::mlir::Value target, ::mlir::ArrayAttr tile_sizes, ::mlir::ArrayAttr tile_interchange);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ArrayAttr tile_sizes, ::mlir::ArrayAttr tile_interchange);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultProperties(::mlir::OperationName opName, Properties &properties);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  ::mlir::DiagnosedSilenceableFailure apply(::mlir::transform::TransformRewriter &rewriter, ::mlir::transform::TransformResults &transformResults, ::mlir::transform::TransformState &state);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 2 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    return name.getAttributeNames()[index];
  }

public:
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::FuseOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::GeneralizeOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class GeneralizeOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  GeneralizeOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class GeneralizeOpGenericAdaptor : public detail::GeneralizeOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::GeneralizeOpGenericAdaptorBase;
public:
  GeneralizeOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  GeneralizeOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : GeneralizeOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTarget() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class GeneralizeOpAdaptor : public GeneralizeOpGenericAdaptor<::mlir::ValueRange> {
public:
  using GeneralizeOpGenericAdaptor::GeneralizeOpGenericAdaptor;
  GeneralizeOpAdaptor(GeneralizeOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class GeneralizeOp : public ::mlir::Op<GeneralizeOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::transform::TransformHandleTypeInterface>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::TransformEachOpTrait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = GeneralizeOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = GeneralizeOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.generalize");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTarget();
  ::mlir::MutableOperandRange getTargetMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTransformed();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
  ::mlir::DiagnosedSilenceableFailure applyToOne(
      ::mlir::transform::TransformRewriter &rewriter,
      ::mlir::linalg::LinalgOp target,
      ::mlir::transform::ApplyToEachResultList &results,
      ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::GeneralizeOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::HoistPadBuildPackingLoopNestOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class HoistPadBuildPackingLoopNestOpGenericAdaptorBase {
public:
  struct Properties {
    using transposeTy = ::mlir::DenseI64ArrayAttr;
    transposeTy transpose;

    auto getTranspose() {
      auto &propStorage = this->transpose;
      return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(propStorage);
    }
    void setTranspose(const ::mlir::DenseI64ArrayAttr &propValue) {
      this->transpose = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.transpose == this->transpose &&
        true;
    }
    bool operator!=(const Properties &rhs) const {
      return !(*this == rhs);
    }
  };
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  Properties properties;
  ::mlir::RegionRange odsRegions;
public:
  HoistPadBuildPackingLoopNestOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::DenseI64ArrayAttr getTransposeAttr();
  ::llvm::ArrayRef<int64_t> getTranspose();
};
} // namespace detail
template <typename RangeT>
class HoistPadBuildPackingLoopNestOpGenericAdaptor : public detail::HoistPadBuildPackingLoopNestOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::HoistPadBuildPackingLoopNestOpGenericAdaptorBase;
public:
  HoistPadBuildPackingLoopNestOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  HoistPadBuildPackingLoopNestOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : HoistPadBuildPackingLoopNestOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTarget() {
    return (*getODSOperands(0).begin());
  }

  ValueT getLoop() {
    return (*getODSOperands(1).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class HoistPadBuildPackingLoopNestOpAdaptor : public HoistPadBuildPackingLoopNestOpGenericAdaptor<::mlir::ValueRange> {
public:
  using HoistPadBuildPackingLoopNestOpGenericAdaptor::HoistPadBuildPackingLoopNestOpGenericAdaptor;
  HoistPadBuildPackingLoopNestOpAdaptor(HoistPadBuildPackingLoopNestOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class HoistPadBuildPackingLoopNestOp : public ::mlir::Op<HoistPadBuildPackingLoopNestOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::transform::TransformHandleTypeInterface>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = HoistPadBuildPackingLoopNestOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = HoistPadBuildPackingLoopNestOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("transpose")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getTransposeAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getTransposeAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.hoist_pad.build_packing_loop_nest");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTarget();
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getLoop();
  ::mlir::MutableOperandRange getTargetMutable();
  ::mlir::MutableOperandRange getLoopMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getPackingLoop();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::mlir::InFlightDiagnostic *diag);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::DenseI64ArrayAttr getTransposeAttr();
  ::llvm::ArrayRef<int64_t> getTranspose();
  void setTransposeAttr(::mlir::DenseI64ArrayAttr attr);
  void setTranspose(::llvm::ArrayRef<int64_t> attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type packing_loop, ::mlir::Value target, ::mlir::Value loop, ::mlir::DenseI64ArrayAttr transpose);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::Value loop, ::mlir::DenseI64ArrayAttr transpose);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type packing_loop, ::mlir::Value target, ::mlir::Value loop, ::llvm::ArrayRef<int64_t> transpose = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::Value loop, ::llvm::ArrayRef<int64_t> transpose = {});
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultProperties(::mlir::OperationName opName, Properties &properties);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
  ::mlir::DiagnosedSilenceableFailure apply(::mlir::transform::TransformRewriter &rewriter, ::mlir::transform::TransformResults &transformResults, ::mlir::transform::TransformState &state);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 1 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    return name.getAttributeNames()[index];
  }

public:
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::HoistPadBuildPackingLoopNestOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::HoistPadOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class HoistPadOpGenericAdaptorBase {
public:
  struct Properties {
    using num_loopsTy = ::mlir::IntegerAttr;
    num_loopsTy num_loops;

    auto getNumLoops() {
      auto &propStorage = this->num_loops;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setNumLoops(const ::mlir::IntegerAttr &propValue) {
      this->num_loops = propValue;
    }
    using transposeTy = ::mlir::DenseI64ArrayAttr;
    transposeTy transpose;

    auto getTranspose() {
      auto &propStorage = this->transpose;
      return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(propStorage);
    }
    void setTranspose(const ::mlir::DenseI64ArrayAttr &propValue) {
      this->transpose = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.num_loops == this->num_loops &&
        rhs.transpose == this->transpose &&
        true;
    }
    bool operator!=(const Properties &rhs) const {
      return !(*this == rhs);
    }
  };
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  Properties properties;
  ::mlir::RegionRange odsRegions;
public:
  HoistPadOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::IntegerAttr getNumLoopsAttr();
  uint64_t getNumLoops();
  ::mlir::DenseI64ArrayAttr getTransposeAttr();
  ::llvm::ArrayRef<int64_t> getTranspose();
};
} // namespace detail
template <typename RangeT>
class HoistPadOpGenericAdaptor : public detail::HoistPadOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::HoistPadOpGenericAdaptorBase;
public:
  HoistPadOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  HoistPadOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : HoistPadOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTarget() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class HoistPadOpAdaptor : public HoistPadOpGenericAdaptor<::mlir::ValueRange> {
public:
  using HoistPadOpGenericAdaptor::HoistPadOpGenericAdaptor;
  HoistPadOpAdaptor(HoistPadOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class HoistPadOp : public ::mlir::Op<HoistPadOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::transform::TransformHandleTypeInterface>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::TransformEachOpTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = HoistPadOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = HoistPadOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("num_loops"), ::llvm::StringRef("transpose")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getNumLoopsAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getNumLoopsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getTransposeAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getTransposeAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.hoist_pad");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTarget();
  ::mlir::MutableOperandRange getTargetMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTransformed();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::mlir::InFlightDiagnostic *diag);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::IntegerAttr getNumLoopsAttr();
  uint64_t getNumLoops();
  ::mlir::DenseI64ArrayAttr getTransposeAttr();
  ::llvm::ArrayRef<int64_t> getTranspose();
  void setNumLoopsAttr(::mlir::IntegerAttr attr);
  void setNumLoops(uint64_t attrValue);
  void setTransposeAttr(::mlir::DenseI64ArrayAttr attr);
  void setTranspose(::llvm::ArrayRef<int64_t> attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, ::mlir::IntegerAttr num_loops, ::mlir::DenseI64ArrayAttr transpose);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::IntegerAttr num_loops, ::mlir::DenseI64ArrayAttr transpose);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, uint64_t num_loops, ::llvm::ArrayRef<int64_t> transpose = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, uint64_t num_loops, ::llvm::ArrayRef<int64_t> transpose = {});
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultProperties(::mlir::OperationName opName, Properties &properties);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 2 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    return name.getAttributeNames()[index];
  }

public:
  ::mlir::DiagnosedSilenceableFailure applyToOne(
      ::mlir::transform::TransformRewriter &rewriter,
      ::mlir::tensor::PadOp,
      ::mlir::transform::ApplyToEachResultList &results,
      ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::HoistPadOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::HoistRedundantTensorSubsetsOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class HoistRedundantTensorSubsetsOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  HoistRedundantTensorSubsetsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class HoistRedundantTensorSubsetsOpGenericAdaptor : public detail::HoistRedundantTensorSubsetsOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::HoistRedundantTensorSubsetsOpGenericAdaptorBase;
public:
  HoistRedundantTensorSubsetsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  HoistRedundantTensorSubsetsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : HoistRedundantTensorSubsetsOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTarget() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class HoistRedundantTensorSubsetsOpAdaptor : public HoistRedundantTensorSubsetsOpGenericAdaptor<::mlir::ValueRange> {
public:
  using HoistRedundantTensorSubsetsOpGenericAdaptor::HoistRedundantTensorSubsetsOpGenericAdaptor;
  HoistRedundantTensorSubsetsOpAdaptor(HoistRedundantTensorSubsetsOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class HoistRedundantTensorSubsetsOp : public ::mlir::Op<HoistRedundantTensorSubsetsOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformEachOpTrait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = HoistRedundantTensorSubsetsOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = HoistRedundantTensorSubsetsOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.hoist_redundant_tensor_subsets");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTarget();
  ::mlir::MutableOperandRange getTargetMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value target);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
  ::mlir::DiagnosedSilenceableFailure applyToOne(
      ::mlir::transform::TransformRewriter &rewriter,
      ::mlir::Operation *target,
      ::mlir::transform::ApplyToEachResultList &results,
      ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::HoistRedundantTensorSubsetsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::HoistRedundantVectorTransfersOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class HoistRedundantVectorTransfersOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  HoistRedundantVectorTransfersOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class HoistRedundantVectorTransfersOpGenericAdaptor : public detail::HoistRedundantVectorTransfersOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::HoistRedundantVectorTransfersOpGenericAdaptorBase;
public:
  HoistRedundantVectorTransfersOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  HoistRedundantVectorTransfersOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : HoistRedundantVectorTransfersOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTarget() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class HoistRedundantVectorTransfersOpAdaptor : public HoistRedundantVectorTransfersOpGenericAdaptor<::mlir::ValueRange> {
public:
  using HoistRedundantVectorTransfersOpGenericAdaptor::HoistRedundantVectorTransfersOpGenericAdaptor;
  HoistRedundantVectorTransfersOpAdaptor(HoistRedundantVectorTransfersOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class HoistRedundantVectorTransfersOp : public ::mlir::Op<HoistRedundantVectorTransfersOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::transform::TransformHandleTypeInterface>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformEachOpTrait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = HoistRedundantVectorTransfersOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = HoistRedundantVectorTransfersOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.hoist_redundant_vector_transfers");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTarget();
  ::mlir::MutableOperandRange getTargetMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTransformed();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value target);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
  ::mlir::DiagnosedSilenceableFailure applyToOne(
       ::mlir::transform::TransformRewriter &rewriter,
       ::mlir::func::FuncOp target,
       ::mlir::transform::ApplyToEachResultList &results,
       ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::HoistRedundantVectorTransfersOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::InsertSliceToCopyOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class InsertSliceToCopyOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  InsertSliceToCopyOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class InsertSliceToCopyOpGenericAdaptor : public detail::InsertSliceToCopyOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::InsertSliceToCopyOpGenericAdaptorBase;
public:
  InsertSliceToCopyOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  InsertSliceToCopyOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : InsertSliceToCopyOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTarget() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class InsertSliceToCopyOpAdaptor : public InsertSliceToCopyOpGenericAdaptor<::mlir::ValueRange> {
public:
  using InsertSliceToCopyOpGenericAdaptor::InsertSliceToCopyOpGenericAdaptor;
  InsertSliceToCopyOpAdaptor(InsertSliceToCopyOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class InsertSliceToCopyOp : public ::mlir::Op<InsertSliceToCopyOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::transform::TransformHandleTypeInterface>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformEachOpTrait, ::mlir::transform::TransformOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = InsertSliceToCopyOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = InsertSliceToCopyOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.insert_slice_to_copy");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTarget();
  ::mlir::MutableOperandRange getTargetMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTransformed();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value target);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
  ::mlir::DiagnosedSilenceableFailure applyToOne(
      ::mlir::transform::TransformRewriter &rewriter,
      ::mlir::Operation *target,
      ::mlir::transform::ApplyToEachResultList &results,
      ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::InsertSliceToCopyOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::InterchangeOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class InterchangeOpGenericAdaptorBase {
public:
  struct Properties {
    using iterator_interchangeTy = ::mlir::DenseI64ArrayAttr;
    iterator_interchangeTy iterator_interchange;

    auto getIteratorInterchange() {
      auto &propStorage = this->iterator_interchange;
      return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(propStorage);
    }
    void setIteratorInterchange(const ::mlir::DenseI64ArrayAttr &propValue) {
      this->iterator_interchange = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.iterator_interchange == this->iterator_interchange &&
        true;
    }
    bool operator!=(const Properties &rhs) const {
      return !(*this == rhs);
    }
  };
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  Properties properties;
  ::mlir::RegionRange odsRegions;
public:
  InterchangeOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::DenseI64ArrayAttr getIteratorInterchangeAttr();
  ::llvm::ArrayRef<int64_t> getIteratorInterchange();
};
} // namespace detail
template <typename RangeT>
class InterchangeOpGenericAdaptor : public detail::InterchangeOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::InterchangeOpGenericAdaptorBase;
public:
  InterchangeOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  InterchangeOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : InterchangeOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTarget() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class InterchangeOpAdaptor : public InterchangeOpGenericAdaptor<::mlir::ValueRange> {
public:
  using InterchangeOpGenericAdaptor::InterchangeOpGenericAdaptor;
  InterchangeOpAdaptor(InterchangeOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class InterchangeOp : public ::mlir::Op<InterchangeOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::transform::TransformHandleTypeInterface>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::TransformEachOpTrait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = InterchangeOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = InterchangeOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("iterator_interchange")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getIteratorInterchangeAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getIteratorInterchangeAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.interchange");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTarget();
  ::mlir::MutableOperandRange getTargetMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTransformed();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::mlir::InFlightDiagnostic *diag);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::DenseI64ArrayAttr getIteratorInterchangeAttr();
  ::llvm::ArrayRef<int64_t> getIteratorInterchange();
  void setIteratorInterchangeAttr(::mlir::DenseI64ArrayAttr attr);
  void setIteratorInterchange(::std::optional<::llvm::ArrayRef<int64_t>> attrValue);
  ::mlir::Attribute removeIteratorInterchangeAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, /*optional*/::mlir::DenseI64ArrayAttr iterator_interchange);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, /*optional*/::mlir::DenseI64ArrayAttr iterator_interchange);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, /*optional*/::llvm::ArrayRef<int64_t> iterator_interchange = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, /*optional*/::llvm::ArrayRef<int64_t> iterator_interchange = {});
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 1 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    return name.getAttributeNames()[index];
  }

public:
  ::mlir::DiagnosedSilenceableFailure applyToOne(
      ::mlir::transform::TransformRewriter &rewriter,
      ::mlir::linalg::GenericOp target,
      ::mlir::transform::ApplyToEachResultList &results,
      ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::InterchangeOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::LowerPackOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class LowerPackOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  LowerPackOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class LowerPackOpGenericAdaptor : public detail::LowerPackOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::LowerPackOpGenericAdaptorBase;
public:
  LowerPackOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  LowerPackOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : LowerPackOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTarget() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class LowerPackOpAdaptor : public LowerPackOpGenericAdaptor<::mlir::ValueRange> {
public:
  using LowerPackOpGenericAdaptor::LowerPackOpGenericAdaptor;
  LowerPackOpAdaptor(LowerPackOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class LowerPackOp : public ::mlir::Op<LowerPackOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::NResults<3>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformEachOpTrait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait, ::mlir::OpAsmOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = LowerPackOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = LowerPackOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  void getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn);
  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.lower_pack");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::OperationType> getTarget();
  ::mlir::MutableOperandRange getTargetMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::transform::OperationType> getPadOp();
  ::mlir::TypedValue<::mlir::transform::OperationType> getExpandShapeOp();
  ::mlir::TypedValue<::mlir::transform::OperationType> getTransposeOp();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type pad_op, ::mlir::Type expand_shape_op, ::mlir::Type transpose_op, ::mlir::Value target);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
  ::mlir::DiagnosedSilenceableFailure applyToOne(
      ::mlir::transform::TransformRewriter &rewriter,
      ::mlir::tensor::PackOp target,
      ::mlir::transform::ApplyToEachResultList &transformResults,
      ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::LowerPackOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::LowerUnPackOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class LowerUnPackOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  LowerUnPackOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class LowerUnPackOpGenericAdaptor : public detail::LowerUnPackOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::LowerUnPackOpGenericAdaptorBase;
public:
  LowerUnPackOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  LowerUnPackOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : LowerUnPackOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTarget() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class LowerUnPackOpAdaptor : public LowerUnPackOpGenericAdaptor<::mlir::ValueRange> {
public:
  using LowerUnPackOpGenericAdaptor::LowerUnPackOpGenericAdaptor;
  LowerUnPackOpAdaptor(LowerUnPackOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class LowerUnPackOp : public ::mlir::Op<LowerUnPackOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::NResults<4>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformEachOpTrait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait, ::mlir::OpAsmOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = LowerUnPackOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = LowerUnPackOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  void getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn);
  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.lower_unpack");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::OperationType> getTarget();
  ::mlir::MutableOperandRange getTargetMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::transform::OperationType> getEmptyOp();
  ::mlir::TypedValue<::mlir::transform::OperationType> getTransposeOp();
  ::mlir::TypedValue<::mlir::transform::OperationType> getCollapseShapeOp();
  ::mlir::TypedValue<::mlir::transform::OperationType> getExtractSliceOp();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type empty_op, ::mlir::Type transpose_op, ::mlir::Type collapse_shape_op, ::mlir::Type extract_slice_op, ::mlir::Value target);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
  ::mlir::DiagnosedSilenceableFailure applyToOne(
      ::mlir::transform::TransformRewriter &rewriter,
      ::mlir::tensor::UnPackOp target,
      ::mlir::transform::ApplyToEachResultList &transformResults,
      ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::LowerUnPackOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::MapCopyToThreadsOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class MapCopyToThreadsOpGenericAdaptorBase {
public:
  struct Properties {
    using desired_bit_alignmentTy = ::mlir::IntegerAttr;
    desired_bit_alignmentTy desired_bit_alignment;

    auto getDesiredBitAlignment() {
      auto &propStorage = this->desired_bit_alignment;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setDesiredBitAlignment(const ::mlir::IntegerAttr &propValue) {
      this->desired_bit_alignment = propValue;
    }
    using total_num_threadsTy = ::mlir::IntegerAttr;
    total_num_threadsTy total_num_threads;

    auto getTotalNumThreads() {
      auto &propStorage = this->total_num_threads;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setTotalNumThreads(const ::mlir::IntegerAttr &propValue) {
      this->total_num_threads = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.desired_bit_alignment == this->desired_bit_alignment &&
        rhs.total_num_threads == this->total_num_threads &&
        true;
    }
    bool operator!=(const Properties &rhs) const {
      return !(*this == rhs);
    }
  };
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  Properties properties;
  ::mlir::RegionRange odsRegions;
public:
  MapCopyToThreadsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::IntegerAttr getTotalNumThreadsAttr();
  uint64_t getTotalNumThreads();
  ::mlir::IntegerAttr getDesiredBitAlignmentAttr();
  uint64_t getDesiredBitAlignment();
};
} // namespace detail
template <typename RangeT>
class MapCopyToThreadsOpGenericAdaptor : public detail::MapCopyToThreadsOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::MapCopyToThreadsOpGenericAdaptorBase;
public:
  MapCopyToThreadsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  MapCopyToThreadsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : MapCopyToThreadsOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTarget() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class MapCopyToThreadsOpAdaptor : public MapCopyToThreadsOpGenericAdaptor<::mlir::ValueRange> {
public:
  using MapCopyToThreadsOpGenericAdaptor::MapCopyToThreadsOpGenericAdaptor;
  MapCopyToThreadsOpAdaptor(MapCopyToThreadsOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class MapCopyToThreadsOp : public ::mlir::Op<MapCopyToThreadsOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::NResults<2>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformEachOpTrait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::OpAsmOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = MapCopyToThreadsOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = MapCopyToThreadsOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("desired_bit_alignment"), ::llvm::StringRef("total_num_threads")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getDesiredBitAlignmentAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getDesiredBitAlignmentAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getTotalNumThreadsAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getTotalNumThreadsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  void getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn);
  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.gpu.map_copy_to_threads");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTarget();
  ::mlir::MutableOperandRange getTargetMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getForallOp();
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTiledOp();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::mlir::InFlightDiagnostic *diag);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::IntegerAttr getTotalNumThreadsAttr();
  uint64_t getTotalNumThreads();
  ::mlir::IntegerAttr getDesiredBitAlignmentAttr();
  uint64_t getDesiredBitAlignment();
  void setTotalNumThreadsAttr(::mlir::IntegerAttr attr);
  void setTotalNumThreads(uint64_t attrValue);
  void setDesiredBitAlignmentAttr(::mlir::IntegerAttr attr);
  void setDesiredBitAlignment(uint64_t attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value target);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type forall_op, ::mlir::Type tiled_op, ::mlir::Value target, ::mlir::IntegerAttr total_num_threads, ::mlir::IntegerAttr desired_bit_alignment);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::IntegerAttr total_num_threads, ::mlir::IntegerAttr desired_bit_alignment);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type forall_op, ::mlir::Type tiled_op, ::mlir::Value target, uint64_t total_num_threads, uint64_t desired_bit_alignment);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, uint64_t total_num_threads, uint64_t desired_bit_alignment);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 2 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    return name.getAttributeNames()[index];
  }

public:
  ::mlir::DiagnosedSilenceableFailure applyToOne(
      ::mlir::transform::TransformRewriter &rewriter,
      ::mlir::Operation *target,
      ::mlir::transform::ApplyToEachResultList &results,
      ::mlir::transform::TransformState &state);

  ::llvm::SmallVector<::mlir::OpFoldResult> getMixedNumThreads();
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::MapCopyToThreadsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::MaskedVectorizeOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class MaskedVectorizeOpGenericAdaptorBase {
public:
  struct Properties {
    using scalable_sizesTy = ::mlir::DenseBoolArrayAttr;
    scalable_sizesTy scalable_sizes;

    auto getScalableSizes() {
      auto &propStorage = this->scalable_sizes;
      return ::llvm::dyn_cast_or_null<::mlir::DenseBoolArrayAttr>(propStorage);
    }
    void setScalableSizes(const ::mlir::DenseBoolArrayAttr &propValue) {
      this->scalable_sizes = propValue;
    }
    using static_vector_sizesTy = ::mlir::DenseI64ArrayAttr;
    static_vector_sizesTy static_vector_sizes;

    auto getStaticVectorSizes() {
      auto &propStorage = this->static_vector_sizes;
      return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(propStorage);
    }
    void setStaticVectorSizes(const ::mlir::DenseI64ArrayAttr &propValue) {
      this->static_vector_sizes = propValue;
    }
    using vectorize_nd_extractTy = ::mlir::UnitAttr;
    vectorize_nd_extractTy vectorize_nd_extract;

    auto getVectorizeNdExtract() {
      auto &propStorage = this->vectorize_nd_extract;
      return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(propStorage);
    }
    void setVectorizeNdExtract(const ::mlir::UnitAttr &propValue) {
      this->vectorize_nd_extract = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.scalable_sizes == this->scalable_sizes &&
        rhs.static_vector_sizes == this->static_vector_sizes &&
        rhs.vectorize_nd_extract == this->vectorize_nd_extract &&
        true;
    }
    bool operator!=(const Properties &rhs) const {
      return !(*this == rhs);
    }
  };
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  Properties properties;
  ::mlir::RegionRange odsRegions;
public:
  MaskedVectorizeOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::UnitAttr getVectorizeNdExtractAttr();
  bool getVectorizeNdExtract();
  ::mlir::DenseBoolArrayAttr getScalableSizesAttr();
  ::llvm::ArrayRef<bool> getScalableSizes();
  ::mlir::DenseI64ArrayAttr getStaticVectorSizesAttr();
  ::llvm::ArrayRef<int64_t> getStaticVectorSizes();
};
} // namespace detail
template <typename RangeT>
class MaskedVectorizeOpGenericAdaptor : public detail::MaskedVectorizeOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::MaskedVectorizeOpGenericAdaptorBase;
public:
  MaskedVectorizeOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  MaskedVectorizeOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : MaskedVectorizeOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTarget() {
    return (*getODSOperands(0).begin());
  }

  RangeT getVectorSizes() {
    return getODSOperands(1);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class MaskedVectorizeOpAdaptor : public MaskedVectorizeOpGenericAdaptor<::mlir::ValueRange> {
public:
  using MaskedVectorizeOpGenericAdaptor::MaskedVectorizeOpGenericAdaptor;
  MaskedVectorizeOpAdaptor(MaskedVectorizeOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class MaskedVectorizeOp : public ::mlir::Op<MaskedVectorizeOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<1>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = MaskedVectorizeOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = MaskedVectorizeOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("scalable_sizes"), ::llvm::StringRef("static_vector_sizes"), ::llvm::StringRef("vectorize_nd_extract")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getScalableSizesAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getScalableSizesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getStaticVectorSizesAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getStaticVectorSizesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getVectorizeNdExtractAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getVectorizeNdExtractAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.masked_vectorize");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTarget();
  ::mlir::Operation::operand_range getVectorSizes();
  ::mlir::MutableOperandRange getTargetMutable();
  ::mlir::MutableOperandRange getVectorSizesMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::mlir::InFlightDiagnostic *diag);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::UnitAttr getVectorizeNdExtractAttr();
  bool getVectorizeNdExtract();
  ::mlir::DenseBoolArrayAttr getScalableSizesAttr();
  ::llvm::ArrayRef<bool> getScalableSizes();
  ::mlir::DenseI64ArrayAttr getStaticVectorSizesAttr();
  ::llvm::ArrayRef<int64_t> getStaticVectorSizes();
  void setVectorizeNdExtractAttr(::mlir::UnitAttr attr);
  void setVectorizeNdExtract(bool attrValue);
  void setScalableSizesAttr(::mlir::DenseBoolArrayAttr attr);
  void setScalableSizes(::std::optional<::llvm::ArrayRef<bool>> attrValue);
  void setStaticVectorSizesAttr(::mlir::DenseI64ArrayAttr attr);
  void setStaticVectorSizes(::std::optional<::llvm::ArrayRef<int64_t>> attrValue);
  ::mlir::Attribute removeVectorizeNdExtractAttr();
  ::mlir::Attribute removeScalableSizesAttr();
  ::mlir::Attribute removeStaticVectorSizesAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value target, ::mlir::ValueRange vector_sizes, /*optional*/::mlir::UnitAttr vectorize_nd_extract, /*optional*/::mlir::DenseBoolArrayAttr scalable_sizes, /*optional*/::mlir::DenseI64ArrayAttr static_vector_sizes);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ValueRange vector_sizes, /*optional*/::mlir::UnitAttr vectorize_nd_extract, /*optional*/::mlir::DenseBoolArrayAttr scalable_sizes, /*optional*/::mlir::DenseI64ArrayAttr static_vector_sizes);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value target, ::mlir::ValueRange vector_sizes, /*optional*/bool vectorize_nd_extract = false, /*optional*/::llvm::ArrayRef<bool> scalable_sizes = {}, /*optional*/::llvm::ArrayRef<int64_t> static_vector_sizes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ValueRange vector_sizes, /*optional*/bool vectorize_nd_extract = false, /*optional*/::llvm::ArrayRef<bool> scalable_sizes = {}, /*optional*/::llvm::ArrayRef<int64_t> static_vector_sizes = {});
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 3 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    return name.getAttributeNames()[index];
  }

public:
  // TODO: applyToOne.
  ::mlir::DiagnosedSilenceableFailure apply(
      ::mlir::transform::TransformRewriter &rewriter,
      ::mlir::transform::TransformResults &transformResults,
      ::mlir::transform::TransformState &state);

  ::llvm::SmallVector<::mlir::OpFoldResult> getMixedVectorSizes();
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::MaskedVectorizeOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::MatchOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class MatchOpGenericAdaptorBase {
public:
  struct Properties {
    using filter_result_typeTy = ::mlir::TypeAttr;
    filter_result_typeTy filter_result_type;

    auto getFilterResultType() {
      auto &propStorage = this->filter_result_type;
      return ::llvm::dyn_cast_or_null<::mlir::TypeAttr>(propStorage);
    }
    void setFilterResultType(const ::mlir::TypeAttr &propValue) {
      this->filter_result_type = propValue;
    }
    using interfaceTy = mlir::transform::MatchInterfaceEnumAttr;
    interfaceTy interface;

    auto getInterface() {
      auto &propStorage = this->interface;
      return ::llvm::dyn_cast_or_null<mlir::transform::MatchInterfaceEnumAttr>(propStorage);
    }
    void setInterface(const mlir::transform::MatchInterfaceEnumAttr &propValue) {
      this->interface = propValue;
    }
    using op_attrsTy = ::mlir::DictionaryAttr;
    op_attrsTy op_attrs;

    auto getOpAttrs() {
      auto &propStorage = this->op_attrs;
      return ::llvm::dyn_cast_or_null<::mlir::DictionaryAttr>(propStorage);
    }
    void setOpAttrs(const ::mlir::DictionaryAttr &propValue) {
      this->op_attrs = propValue;
    }
    using opsTy = ::mlir::ArrayAttr;
    opsTy ops;

    auto getOps() {
      auto &propStorage = this->ops;
      return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(propStorage);
    }
    void setOps(const ::mlir::ArrayAttr &propValue) {
      this->ops = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.filter_result_type == this->filter_result_type &&
        rhs.interface == this->interface &&
        rhs.op_attrs == this->op_attrs &&
        rhs.ops == this->ops &&
        true;
    }
    bool operator!=(const Properties &rhs) const {
      return !(*this == rhs);
    }
  };
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  Properties properties;
  ::mlir::RegionRange odsRegions;
public:
  MatchOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::ArrayAttr getOpsAttr();
  ::std::optional< ::mlir::ArrayAttr > getOps();
  mlir::transform::MatchInterfaceEnumAttr getInterfaceAttr();
  ::std::optional<mlir::transform::MatchInterfaceEnum> getInterface();
  ::mlir::DictionaryAttr getOpAttrsAttr();
  ::std::optional< ::mlir::DictionaryAttr > getOpAttrs();
  ::mlir::TypeAttr getFilterResultTypeAttr();
  ::std::optional<::mlir::Type> getFilterResultType();
};
} // namespace detail
template <typename RangeT>
class MatchOpGenericAdaptor : public detail::MatchOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::MatchOpGenericAdaptorBase;
public:
  MatchOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  MatchOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : MatchOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTarget() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class MatchOpAdaptor : public MatchOpGenericAdaptor<::mlir::ValueRange> {
public:
  using MatchOpGenericAdaptor::MatchOpGenericAdaptor;
  MatchOpAdaptor(MatchOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class MatchOp : public ::mlir::Op<MatchOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::transform::TransformHandleTypeInterface>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::NavigationTransformOpTrait, ::mlir::transform::TransformOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = MatchOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = MatchOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("filter_result_type"), ::llvm::StringRef("interface"), ::llvm::StringRef("op_attrs"), ::llvm::StringRef("ops")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getFilterResultTypeAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getFilterResultTypeAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getInterfaceAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getInterfaceAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getOpAttrsAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getOpAttrsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr getOpsAttrName() {
    return getAttributeNameForIndex(3);
  }

  static ::mlir::StringAttr getOpsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 3);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.match");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTarget();
  ::mlir::MutableOperandRange getTargetMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getResults();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::mlir::InFlightDiagnostic *diag);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::ArrayAttr getOpsAttr();
  ::std::optional< ::mlir::ArrayAttr > getOps();
  mlir::transform::MatchInterfaceEnumAttr getInterfaceAttr();
  ::std::optional<mlir::transform::MatchInterfaceEnum> getInterface();
  ::mlir::DictionaryAttr getOpAttrsAttr();
  ::std::optional< ::mlir::DictionaryAttr > getOpAttrs();
  ::mlir::TypeAttr getFilterResultTypeAttr();
  ::std::optional<::mlir::Type> getFilterResultType();
  void setOpsAttr(::mlir::ArrayAttr attr);
  void setInterfaceAttr(mlir::transform::MatchInterfaceEnumAttr attr);
  void setInterface(::std::optional<mlir::transform::MatchInterfaceEnum> attrValue);
  void setOpAttrsAttr(::mlir::DictionaryAttr attr);
  void setFilterResultTypeAttr(::mlir::TypeAttr attr);
  void setFilterResultType(::std::optional<::mlir::Type> attrValue);
  ::mlir::Attribute removeOpsAttr();
  ::mlir::Attribute removeInterfaceAttr();
  ::mlir::Attribute removeOpAttrsAttr();
  ::mlir::Attribute removeFilterResultTypeAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value target, ArrayRef<StringRef> opNames);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, TypeRange resultTypes, Value target, ArrayRef<StringRef> opNames);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type results, ::mlir::Value target, /*optional*/::mlir::ArrayAttr ops, /*optional*/mlir::transform::MatchInterfaceEnumAttr interface, /*optional*/::mlir::DictionaryAttr op_attrs, /*optional*/::mlir::TypeAttr filter_result_type);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, /*optional*/::mlir::ArrayAttr ops, /*optional*/mlir::transform::MatchInterfaceEnumAttr interface, /*optional*/::mlir::DictionaryAttr op_attrs, /*optional*/::mlir::TypeAttr filter_result_type);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::DiagnosedSilenceableFailure apply(::mlir::transform::TransformRewriter &rewriter, ::mlir::transform::TransformResults &transformResults, ::mlir::transform::TransformState &state);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 4 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    return name.getAttributeNames()[index];
  }

public:
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::MatchOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::MultiTileSizesOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class MultiTileSizesOpGenericAdaptorBase {
public:
  struct Properties {
    using dimensionTy = ::mlir::IntegerAttr;
    dimensionTy dimension;

    auto getDimension() {
      auto &propStorage = this->dimension;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setDimension(const ::mlir::IntegerAttr &propValue) {
      this->dimension = propValue;
    }
    using divisorTy = ::mlir::IntegerAttr;
    divisorTy divisor;

    auto getDivisor() {
      auto &propStorage = this->divisor;
      return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(propStorage);
    }
    void setDivisor(const ::mlir::IntegerAttr &propValue) {
      this->divisor = propValue;
    }
    using target_sizeTy = ::mlir::IntegerAttr;
    target_sizeTy target_size;

    auto getTargetSize() {
      auto &propStorage = this->target_size;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setTargetSize(const ::mlir::IntegerAttr &propValue) {
      this->target_size = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.dimension == this->dimension &&
        rhs.divisor == this->divisor &&
        rhs.target_size == this->target_size &&
        true;
    }
    bool operator!=(const Properties &rhs) const {
      return !(*this == rhs);
    }
  };
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  Properties properties;
  ::mlir::RegionRange odsRegions;
public:
  MultiTileSizesOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::IntegerAttr getDimensionAttr();
  uint64_t getDimension();
  ::mlir::IntegerAttr getTargetSizeAttr();
  uint64_t getTargetSize();
  ::mlir::IntegerAttr getDivisorAttr();
  uint64_t getDivisor();
};
} // namespace detail
template <typename RangeT>
class MultiTileSizesOpGenericAdaptor : public detail::MultiTileSizesOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::MultiTileSizesOpGenericAdaptorBase;
public:
  MultiTileSizesOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  MultiTileSizesOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : MultiTileSizesOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTarget() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class MultiTileSizesOpAdaptor : public MultiTileSizesOpGenericAdaptor<::mlir::ValueRange> {
public:
  using MultiTileSizesOpGenericAdaptor::MultiTileSizesOpGenericAdaptor;
  MultiTileSizesOpAdaptor(MultiTileSizesOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class MultiTileSizesOp : public ::mlir::Op<MultiTileSizesOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::NResults<3>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::TransformEachOpTrait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait, ::mlir::OpAsmOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = MultiTileSizesOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = MultiTileSizesOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("dimension"), ::llvm::StringRef("divisor"), ::llvm::StringRef("target_size")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getDimensionAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getDimensionAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getDivisorAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getDivisorAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getTargetSizeAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getTargetSizeAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  void getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn);
  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.multitile_sizes");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTarget();
  ::mlir::MutableOperandRange getTargetMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getLowSize();
  ::mlir::Value getHighSize();
  ::mlir::Value getSplitPoint();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::mlir::InFlightDiagnostic *diag);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::IntegerAttr getDimensionAttr();
  uint64_t getDimension();
  ::mlir::IntegerAttr getTargetSizeAttr();
  uint64_t getTargetSize();
  ::mlir::IntegerAttr getDivisorAttr();
  uint64_t getDivisor();
  void setDimensionAttr(::mlir::IntegerAttr attr);
  void setDimension(uint64_t attrValue);
  void setTargetSizeAttr(::mlir::IntegerAttr attr);
  void setTargetSize(uint64_t attrValue);
  void setDivisorAttr(::mlir::IntegerAttr attr);
  void setDivisor(uint64_t attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type low_size, ::mlir::Type high_size, ::mlir::Type split_point, ::mlir::Value target, ::mlir::IntegerAttr dimension, ::mlir::IntegerAttr target_size, ::mlir::IntegerAttr divisor);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::IntegerAttr dimension, ::mlir::IntegerAttr target_size, ::mlir::IntegerAttr divisor);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type low_size, ::mlir::Type high_size, ::mlir::Type split_point, ::mlir::Value target, uint64_t dimension, uint64_t target_size, uint64_t divisor = 1);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, uint64_t dimension, uint64_t target_size, uint64_t divisor = 1);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultProperties(::mlir::OperationName opName, Properties &properties);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 3 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    return name.getAttributeNames()[index];
  }

public:
  ::mlir::DiagnosedSilenceableFailure applyToOne(
      ::mlir::transform::TransformRewriter &rewriter,
      ::mlir::linalg::LinalgOp target,
      ::mlir::transform::ApplyToEachResultList &results,
      TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::MultiTileSizesOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::PackGreedilyOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class PackGreedilyOpGenericAdaptorBase {
public:
  struct Properties {
    using matmul_inner_dims_orderTy = ::mlir::DenseI64ArrayAttr;
    matmul_inner_dims_orderTy matmul_inner_dims_order;

    auto getMatmulInnerDimsOrder() {
      auto &propStorage = this->matmul_inner_dims_order;
      return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(propStorage);
    }
    void setMatmulInnerDimsOrder(const ::mlir::DenseI64ArrayAttr &propValue) {
      this->matmul_inner_dims_order = propValue;
    }
    using matmul_padded_sizes_next_multiple_ofTy = ::mlir::DenseI64ArrayAttr;
    matmul_padded_sizes_next_multiple_ofTy matmul_padded_sizes_next_multiple_of;

    auto getMatmulPaddedSizesNextMultipleOf() {
      auto &propStorage = this->matmul_padded_sizes_next_multiple_of;
      return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(propStorage);
    }
    void setMatmulPaddedSizesNextMultipleOf(const ::mlir::DenseI64ArrayAttr &propValue) {
      this->matmul_padded_sizes_next_multiple_of = propValue;
    }
    using static_matmul_packed_sizesTy = ::mlir::DenseI64ArrayAttr;
    static_matmul_packed_sizesTy static_matmul_packed_sizes;

    auto getStaticMatmulPackedSizes() {
      auto &propStorage = this->static_matmul_packed_sizes;
      return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(propStorage);
    }
    void setStaticMatmulPackedSizes(const ::mlir::DenseI64ArrayAttr &propValue) {
      this->static_matmul_packed_sizes = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.matmul_inner_dims_order == this->matmul_inner_dims_order &&
        rhs.matmul_padded_sizes_next_multiple_of == this->matmul_padded_sizes_next_multiple_of &&
        rhs.static_matmul_packed_sizes == this->static_matmul_packed_sizes &&
        true;
    }
    bool operator!=(const Properties &rhs) const {
      return !(*this == rhs);
    }
  };
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  Properties properties;
  ::mlir::RegionRange odsRegions;
public:
  PackGreedilyOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::DenseI64ArrayAttr getStaticMatmulPackedSizesAttr();
  ::llvm::ArrayRef<int64_t> getStaticMatmulPackedSizes();
  ::mlir::DenseI64ArrayAttr getMatmulPaddedSizesNextMultipleOfAttr();
  ::llvm::ArrayRef<int64_t> getMatmulPaddedSizesNextMultipleOf();
  ::mlir::DenseI64ArrayAttr getMatmulInnerDimsOrderAttr();
  ::llvm::ArrayRef<int64_t> getMatmulInnerDimsOrder();
};
} // namespace detail
template <typename RangeT>
class PackGreedilyOpGenericAdaptor : public detail::PackGreedilyOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::PackGreedilyOpGenericAdaptorBase;
public:
  PackGreedilyOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  PackGreedilyOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : PackGreedilyOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTarget() {
    return (*getODSOperands(0).begin());
  }

  RangeT getMatmulPackedSizes() {
    return getODSOperands(1);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class PackGreedilyOpAdaptor : public PackGreedilyOpGenericAdaptor<::mlir::ValueRange> {
public:
  using PackGreedilyOpGenericAdaptor::PackGreedilyOpGenericAdaptor;
  PackGreedilyOpAdaptor(PackGreedilyOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class PackGreedilyOp : public ::mlir::Op<PackGreedilyOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::transform::TransformHandleTypeInterface>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<1>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = PackGreedilyOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = PackGreedilyOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("matmul_inner_dims_order"), ::llvm::StringRef("matmul_padded_sizes_next_multiple_of"), ::llvm::StringRef("static_matmul_packed_sizes")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getMatmulInnerDimsOrderAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getMatmulInnerDimsOrderAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getMatmulPaddedSizesNextMultipleOfAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getMatmulPaddedSizesNextMultipleOfAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getStaticMatmulPackedSizesAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getStaticMatmulPackedSizesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.pack_greedily");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTarget();
  ::mlir::Operation::operand_range getMatmulPackedSizes();
  ::mlir::MutableOperandRange getTargetMutable();
  ::mlir::MutableOperandRange getMatmulPackedSizesMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getPackedOp();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::mlir::InFlightDiagnostic *diag);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::DenseI64ArrayAttr getStaticMatmulPackedSizesAttr();
  ::llvm::ArrayRef<int64_t> getStaticMatmulPackedSizes();
  ::mlir::DenseI64ArrayAttr getMatmulPaddedSizesNextMultipleOfAttr();
  ::llvm::ArrayRef<int64_t> getMatmulPaddedSizesNextMultipleOf();
  ::mlir::DenseI64ArrayAttr getMatmulInnerDimsOrderAttr();
  ::llvm::ArrayRef<int64_t> getMatmulInnerDimsOrder();
  void setStaticMatmulPackedSizesAttr(::mlir::DenseI64ArrayAttr attr);
  void setStaticMatmulPackedSizes(::llvm::ArrayRef<int64_t> attrValue);
  void setMatmulPaddedSizesNextMultipleOfAttr(::mlir::DenseI64ArrayAttr attr);
  void setMatmulPaddedSizesNextMultipleOf(::llvm::ArrayRef<int64_t> attrValue);
  void setMatmulInnerDimsOrderAttr(::mlir::DenseI64ArrayAttr attr);
  void setMatmulInnerDimsOrder(::llvm::ArrayRef<int64_t> attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value target, ArrayRef<OpFoldResult> mixedMatmulPackedSizes, ArrayRef<int64_t> matmulPaddededSizesNextMultipleOf, ArrayRef<int64_t> matmulDimsInnerDimsOrder = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type packed_op, ::mlir::Value target, ::mlir::ValueRange matmul_packed_sizes, ::mlir::DenseI64ArrayAttr static_matmul_packed_sizes, ::mlir::DenseI64ArrayAttr matmul_padded_sizes_next_multiple_of, ::mlir::DenseI64ArrayAttr matmul_inner_dims_order);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ValueRange matmul_packed_sizes, ::mlir::DenseI64ArrayAttr static_matmul_packed_sizes, ::mlir::DenseI64ArrayAttr matmul_padded_sizes_next_multiple_of, ::mlir::DenseI64ArrayAttr matmul_inner_dims_order);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type packed_op, ::mlir::Value target, ::mlir::ValueRange matmul_packed_sizes, ::llvm::ArrayRef<int64_t> static_matmul_packed_sizes = {}, ::llvm::ArrayRef<int64_t> matmul_padded_sizes_next_multiple_of = {}, ::llvm::ArrayRef<int64_t> matmul_inner_dims_order = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ValueRange matmul_packed_sizes, ::llvm::ArrayRef<int64_t> static_matmul_packed_sizes = {}, ::llvm::ArrayRef<int64_t> matmul_padded_sizes_next_multiple_of = {}, ::llvm::ArrayRef<int64_t> matmul_inner_dims_order = {});
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultProperties(::mlir::OperationName opName, Properties &properties);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  ::mlir::DiagnosedSilenceableFailure apply(::mlir::transform::TransformRewriter &rewriter, ::mlir::transform::TransformResults &transformResults, ::mlir::transform::TransformState &state);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 3 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    return name.getAttributeNames()[index];
  }

public:
  /// Returns the list of tile sizes, which may be static (Attribute) or
  /// dynamic (Value).
  SmallVector<OpFoldResult> getMixedMatmulPackedSizes();
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::PackGreedilyOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::PackOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class PackOpGenericAdaptorBase {
public:
  struct Properties {
    using static_packed_sizesTy = ::mlir::DenseI64ArrayAttr;
    static_packed_sizesTy static_packed_sizes;

    auto getStaticPackedSizes() {
      auto &propStorage = this->static_packed_sizes;
      return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(propStorage);
    }
    void setStaticPackedSizes(const ::mlir::DenseI64ArrayAttr &propValue) {
      this->static_packed_sizes = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.static_packed_sizes == this->static_packed_sizes &&
        true;
    }
    bool operator!=(const Properties &rhs) const {
      return !(*this == rhs);
    }
  };
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  Properties properties;
  ::mlir::RegionRange odsRegions;
public:
  PackOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::DenseI64ArrayAttr getStaticPackedSizesAttr();
  ::llvm::ArrayRef<int64_t> getStaticPackedSizes();
};
} // namespace detail
template <typename RangeT>
class PackOpGenericAdaptor : public detail::PackOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::PackOpGenericAdaptorBase;
public:
  PackOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  PackOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : PackOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTarget() {
    return (*getODSOperands(0).begin());
  }

  RangeT getPackedSizes() {
    return getODSOperands(1);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class PackOpAdaptor : public PackOpGenericAdaptor<::mlir::ValueRange> {
public:
  using PackOpGenericAdaptor::PackOpGenericAdaptor;
  PackOpAdaptor(PackOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class PackOp : public ::mlir::Op<PackOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::transform::TransformHandleTypeInterface>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<1>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = PackOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = PackOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("static_packed_sizes")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getStaticPackedSizesAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getStaticPackedSizesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.pack");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTarget();
  ::mlir::Operation::operand_range getPackedSizes();
  ::mlir::MutableOperandRange getTargetMutable();
  ::mlir::MutableOperandRange getPackedSizesMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getPackedOp();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::mlir::InFlightDiagnostic *diag);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::DenseI64ArrayAttr getStaticPackedSizesAttr();
  ::llvm::ArrayRef<int64_t> getStaticPackedSizes();
  void setStaticPackedSizesAttr(::mlir::DenseI64ArrayAttr attr);
  void setStaticPackedSizes(::llvm::ArrayRef<int64_t> attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value target, ArrayRef<OpFoldResult> mixedPackedSizes);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type packed_op, ::mlir::Value target, ::mlir::ValueRange packed_sizes, ::mlir::DenseI64ArrayAttr static_packed_sizes);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ValueRange packed_sizes, ::mlir::DenseI64ArrayAttr static_packed_sizes);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type packed_op, ::mlir::Value target, ::mlir::ValueRange packed_sizes, ::llvm::ArrayRef<int64_t> static_packed_sizes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ValueRange packed_sizes, ::llvm::ArrayRef<int64_t> static_packed_sizes = {});
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultProperties(::mlir::OperationName opName, Properties &properties);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::DiagnosedSilenceableFailure apply(::mlir::transform::TransformRewriter &rewriter, ::mlir::transform::TransformResults &transformResults, ::mlir::transform::TransformState &state);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 1 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    return name.getAttributeNames()[index];
  }

public:
  ::llvm::SmallVector<::mlir::OpFoldResult> getMixedPackedSizes();
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::PackOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::PackTransposeOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class PackTransposeOpGenericAdaptorBase {
public:
  struct Properties {
    using inner_permTy = ::mlir::DenseI64ArrayAttr;
    inner_permTy inner_perm;

    auto getInnerPerm() {
      auto &propStorage = this->inner_perm;
      return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(propStorage);
    }
    void setInnerPerm(const ::mlir::DenseI64ArrayAttr &propValue) {
      this->inner_perm = propValue;
    }
    using outer_permTy = ::mlir::DenseI64ArrayAttr;
    outer_permTy outer_perm;

    auto getOuterPerm() {
      auto &propStorage = this->outer_perm;
      return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(propStorage);
    }
    void setOuterPerm(const ::mlir::DenseI64ArrayAttr &propValue) {
      this->outer_perm = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.inner_perm == this->inner_perm &&
        rhs.outer_perm == this->outer_perm &&
        true;
    }
    bool operator!=(const Properties &rhs) const {
      return !(*this == rhs);
    }
  };
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  Properties properties;
  ::mlir::RegionRange odsRegions;
public:
  PackTransposeOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::DenseI64ArrayAttr getOuterPermAttr();
  ::llvm::ArrayRef<int64_t> getOuterPerm();
  ::mlir::DenseI64ArrayAttr getInnerPermAttr();
  ::llvm::ArrayRef<int64_t> getInnerPerm();
};
} // namespace detail
template <typename RangeT>
class PackTransposeOpGenericAdaptor : public detail::PackTransposeOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::PackTransposeOpGenericAdaptorBase;
public:
  PackTransposeOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  PackTransposeOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : PackTransposeOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTargetPackOrUnPackOp() {
    return (*getODSOperands(0).begin());
  }

  ValueT getTargetLinalgOp() {
    return (*getODSOperands(1).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class PackTransposeOpAdaptor : public PackTransposeOpGenericAdaptor<::mlir::ValueRange> {
public:
  using PackTransposeOpGenericAdaptor::PackTransposeOpGenericAdaptor;
  PackTransposeOpAdaptor(PackTransposeOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class PackTransposeOp : public ::mlir::Op<PackTransposeOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::NResults<3>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait, ::mlir::OpAsmOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = PackTransposeOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = PackTransposeOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("inner_perm"), ::llvm::StringRef("outer_perm")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getInnerPermAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getInnerPermAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getOuterPermAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getOuterPermAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  void getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn);
  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.pack_transpose");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTargetPackOrUnPackOp();
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTargetLinalgOp();
  ::mlir::MutableOperandRange getTargetPackOrUnPackOpMutable();
  ::mlir::MutableOperandRange getTargetLinalgOpMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getPackedOp();
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getPackOp();
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getUnPackOp();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::mlir::InFlightDiagnostic *diag);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::DenseI64ArrayAttr getOuterPermAttr();
  ::llvm::ArrayRef<int64_t> getOuterPerm();
  ::mlir::DenseI64ArrayAttr getInnerPermAttr();
  ::llvm::ArrayRef<int64_t> getInnerPerm();
  void setOuterPermAttr(::mlir::DenseI64ArrayAttr attr);
  void setOuterPerm(::std::optional<::llvm::ArrayRef<int64_t>> attrValue);
  void setInnerPermAttr(::mlir::DenseI64ArrayAttr attr);
  void setInnerPerm(::std::optional<::llvm::ArrayRef<int64_t>> attrValue);
  ::mlir::Attribute removeOuterPermAttr();
  ::mlir::Attribute removeInnerPermAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type packed_op, ::mlir::Type pack_op, ::mlir::Type un_pack_op, ::mlir::Value target_pack_or_un_pack_op, ::mlir::Value target_linalg_op, /*optional*/::mlir::DenseI64ArrayAttr outer_perm, /*optional*/::mlir::DenseI64ArrayAttr inner_perm);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target_pack_or_un_pack_op, ::mlir::Value target_linalg_op, /*optional*/::mlir::DenseI64ArrayAttr outer_perm, /*optional*/::mlir::DenseI64ArrayAttr inner_perm);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type packed_op, ::mlir::Type pack_op, ::mlir::Type un_pack_op, ::mlir::Value target_pack_or_un_pack_op, ::mlir::Value target_linalg_op, /*optional*/::llvm::ArrayRef<int64_t> outer_perm = {}, /*optional*/::llvm::ArrayRef<int64_t> inner_perm = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target_pack_or_un_pack_op, ::mlir::Value target_linalg_op, /*optional*/::llvm::ArrayRef<int64_t> outer_perm = {}, /*optional*/::llvm::ArrayRef<int64_t> inner_perm = {});
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  ::mlir::DiagnosedSilenceableFailure apply(::mlir::transform::TransformRewriter &rewriter, ::mlir::transform::TransformResults &transformResults, ::mlir::transform::TransformState &state);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 2 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    return name.getAttributeNames()[index];
  }

public:
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::PackTransposeOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::PadOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class PadOpGenericAdaptorBase {
public:
  struct Properties {
    using copy_backTy = ::mlir::BoolAttr;
    copy_backTy copy_back;

    auto getCopyBack() {
      auto &propStorage = this->copy_back;
      return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(propStorage);
    }
    void setCopyBack(const ::mlir::BoolAttr &propValue) {
      this->copy_back = propValue;
    }
    using pack_paddingsTy = ::mlir::ArrayAttr;
    pack_paddingsTy pack_paddings;

    auto getPackPaddings() {
      auto &propStorage = this->pack_paddings;
      return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(propStorage);
    }
    void setPackPaddings(const ::mlir::ArrayAttr &propValue) {
      this->pack_paddings = propValue;
    }
    using pad_to_multiple_ofTy = ::mlir::ArrayAttr;
    pad_to_multiple_ofTy pad_to_multiple_of;

    auto getPadToMultipleOf() {
      auto &propStorage = this->pad_to_multiple_of;
      return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(propStorage);
    }
    void setPadToMultipleOf(const ::mlir::ArrayAttr &propValue) {
      this->pad_to_multiple_of = propValue;
    }
    using padding_dimensionsTy = ::mlir::ArrayAttr;
    padding_dimensionsTy padding_dimensions;

    auto getPaddingDimensions() {
      auto &propStorage = this->padding_dimensions;
      return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(propStorage);
    }
    void setPaddingDimensions(const ::mlir::ArrayAttr &propValue) {
      this->padding_dimensions = propValue;
    }
    using padding_valuesTy = ::mlir::ArrayAttr;
    padding_valuesTy padding_values;

    auto getPaddingValues() {
      auto &propStorage = this->padding_values;
      return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(propStorage);
    }
    void setPaddingValues(const ::mlir::ArrayAttr &propValue) {
      this->padding_values = propValue;
    }
    using transpose_paddingsTy = ::mlir::ArrayAttr;
    transpose_paddingsTy transpose_paddings;

    auto getTransposePaddings() {
      auto &propStorage = this->transpose_paddings;
      return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(propStorage);
    }
    void setTransposePaddings(const ::mlir::ArrayAttr &propValue) {
      this->transpose_paddings = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.copy_back == this->copy_back &&
        rhs.pack_paddings == this->pack_paddings &&
        rhs.pad_to_multiple_of == this->pad_to_multiple_of &&
        rhs.padding_dimensions == this->padding_dimensions &&
        rhs.padding_values == this->padding_values &&
        rhs.transpose_paddings == this->transpose_paddings &&
        true;
    }
    bool operator!=(const Properties &rhs) const {
      return !(*this == rhs);
    }
  };
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  Properties properties;
  ::mlir::RegionRange odsRegions;
public:
  PadOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::ArrayAttr getPaddingValuesAttr();
  ::mlir::ArrayAttr getPaddingValues();
  ::mlir::ArrayAttr getPaddingDimensionsAttr();
  ::mlir::ArrayAttr getPaddingDimensions();
  ::mlir::ArrayAttr getPadToMultipleOfAttr();
  ::std::optional< ::mlir::ArrayAttr > getPadToMultipleOf();
  ::mlir::ArrayAttr getPackPaddingsAttr();
  ::mlir::ArrayAttr getPackPaddings();
  ::mlir::ArrayAttr getTransposePaddingsAttr();
  ::mlir::ArrayAttr getTransposePaddings();
  ::mlir::BoolAttr getCopyBackAttr();
  bool getCopyBack();
};
} // namespace detail
template <typename RangeT>
class PadOpGenericAdaptor : public detail::PadOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::PadOpGenericAdaptorBase;
public:
  PadOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  PadOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : PadOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTarget() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class PadOpAdaptor : public PadOpGenericAdaptor<::mlir::ValueRange> {
public:
  using PadOpGenericAdaptor::PadOpGenericAdaptor;
  PadOpAdaptor(PadOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class PadOp : public ::mlir::Op<PadOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::NResults<2>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait, ::mlir::OpAsmOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = PadOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = PadOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("copy_back"), ::llvm::StringRef("pack_paddings"), ::llvm::StringRef("pad_to_multiple_of"), ::llvm::StringRef("padding_dimensions"), ::llvm::StringRef("padding_values"), ::llvm::StringRef("transpose_paddings")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getCopyBackAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getCopyBackAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getPackPaddingsAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getPackPaddingsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getPadToMultipleOfAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getPadToMultipleOfAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr getPaddingDimensionsAttrName() {
    return getAttributeNameForIndex(3);
  }

  static ::mlir::StringAttr getPaddingDimensionsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 3);
  }

  ::mlir::StringAttr getPaddingValuesAttrName() {
    return getAttributeNameForIndex(4);
  }

  static ::mlir::StringAttr getPaddingValuesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 4);
  }

  ::mlir::StringAttr getTransposePaddingsAttrName() {
    return getAttributeNameForIndex(5);
  }

  static ::mlir::StringAttr getTransposePaddingsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 5);
  }

  void getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn);
  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.pad");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTarget();
  ::mlir::MutableOperandRange getTargetMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getPadded();
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getPad();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::mlir::InFlightDiagnostic *diag);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::ArrayAttr getPaddingValuesAttr();
  ::mlir::ArrayAttr getPaddingValues();
  ::mlir::ArrayAttr getPaddingDimensionsAttr();
  ::mlir::ArrayAttr getPaddingDimensions();
  ::mlir::ArrayAttr getPadToMultipleOfAttr();
  ::std::optional< ::mlir::ArrayAttr > getPadToMultipleOf();
  ::mlir::ArrayAttr getPackPaddingsAttr();
  ::mlir::ArrayAttr getPackPaddings();
  ::mlir::ArrayAttr getTransposePaddingsAttr();
  ::mlir::ArrayAttr getTransposePaddings();
  ::mlir::BoolAttr getCopyBackAttr();
  bool getCopyBack();
  void setPaddingValuesAttr(::mlir::ArrayAttr attr);
  void setPaddingDimensionsAttr(::mlir::ArrayAttr attr);
  void setPadToMultipleOfAttr(::mlir::ArrayAttr attr);
  void setPackPaddingsAttr(::mlir::ArrayAttr attr);
  void setTransposePaddingsAttr(::mlir::ArrayAttr attr);
  void setCopyBackAttr(::mlir::BoolAttr attr);
  void setCopyBack(bool attrValue);
  ::mlir::Attribute removePadToMultipleOfAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value target, ArrayRef<int64_t> paddingDimensions, ArrayRef<int64_t> padToMultipleOf = {}, ArrayRef<int64_t> packPaddings = {}, ArrayRef<Attribute> transposePaddings = {}, bool copyBack = false);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type padded, ::mlir::Type pad, ::mlir::Value target, ::mlir::ArrayAttr padding_values, ::mlir::ArrayAttr padding_dimensions, /*optional*/::mlir::ArrayAttr pad_to_multiple_of, ::mlir::ArrayAttr pack_paddings, ::mlir::ArrayAttr transpose_paddings, ::mlir::BoolAttr copy_back);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ArrayAttr padding_values, ::mlir::ArrayAttr padding_dimensions, /*optional*/::mlir::ArrayAttr pad_to_multiple_of, ::mlir::ArrayAttr pack_paddings, ::mlir::ArrayAttr transpose_paddings, ::mlir::BoolAttr copy_back);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type padded, ::mlir::Type pad, ::mlir::Value target, ::mlir::ArrayAttr padding_values, ::mlir::ArrayAttr padding_dimensions, /*optional*/::mlir::ArrayAttr pad_to_multiple_of, ::mlir::ArrayAttr pack_paddings, ::mlir::ArrayAttr transpose_paddings, bool copy_back = true);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ArrayAttr padding_values, ::mlir::ArrayAttr padding_dimensions, /*optional*/::mlir::ArrayAttr pad_to_multiple_of, ::mlir::ArrayAttr pack_paddings, ::mlir::ArrayAttr transpose_paddings, bool copy_back = true);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultProperties(::mlir::OperationName opName, Properties &properties);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  ::mlir::DiagnosedSilenceableFailure apply(::mlir::transform::TransformRewriter &rewriter, ::mlir::transform::TransformResults &transformResults, ::mlir::transform::TransformState &state);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 6 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    return name.getAttributeNames()[index];
  }

public:
  ::mlir::DiagnosedSilenceableFailure applyToOne(
      ::mlir::transform::TransformRewriter &rewriter,
      ::mlir::linalg::LinalgOp target,
      ::mlir::transform::ApplyToEachResultList &results,
      ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::PadOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::PromoteOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class PromoteOpGenericAdaptorBase {
public:
  struct Properties {
    using alignmentTy = ::mlir::IntegerAttr;
    alignmentTy alignment;

    auto getAlignment() {
      auto &propStorage = this->alignment;
      return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(propStorage);
    }
    void setAlignment(const ::mlir::IntegerAttr &propValue) {
      this->alignment = propValue;
    }
    using mappingTy = ::mlir::ArrayAttr;
    mappingTy mapping;

    auto getMapping() {
      auto &propStorage = this->mapping;
      return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(propStorage);
    }
    void setMapping(const ::mlir::ArrayAttr &propValue) {
      this->mapping = propValue;
    }
    using operands_to_promoteTy = ::mlir::ArrayAttr;
    operands_to_promoteTy operands_to_promote;

    auto getOperandsToPromote() {
      auto &propStorage = this->operands_to_promote;
      return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(propStorage);
    }
    void setOperandsToPromote(const ::mlir::ArrayAttr &propValue) {
      this->operands_to_promote = propValue;
    }
    using use_allocaTy = ::mlir::UnitAttr;
    use_allocaTy use_alloca;

    auto getUseAlloca() {
      auto &propStorage = this->use_alloca;
      return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(propStorage);
    }
    void setUseAlloca(const ::mlir::UnitAttr &propValue) {
      this->use_alloca = propValue;
    }
    using use_full_tile_buffersTy = ::mlir::ArrayAttr;
    use_full_tile_buffersTy use_full_tile_buffers;

    auto getUseFullTileBuffers() {
      auto &propStorage = this->use_full_tile_buffers;
      return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(propStorage);
    }
    void setUseFullTileBuffers(const ::mlir::ArrayAttr &propValue) {
      this->use_full_tile_buffers = propValue;
    }
    using use_full_tiles_by_defaultTy = ::mlir::UnitAttr;
    use_full_tiles_by_defaultTy use_full_tiles_by_default;

    auto getUseFullTilesByDefault() {
      auto &propStorage = this->use_full_tiles_by_default;
      return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(propStorage);
    }
    void setUseFullTilesByDefault(const ::mlir::UnitAttr &propValue) {
      this->use_full_tiles_by_default = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.alignment == this->alignment &&
        rhs.mapping == this->mapping &&
        rhs.operands_to_promote == this->operands_to_promote &&
        rhs.use_alloca == this->use_alloca &&
        rhs.use_full_tile_buffers == this->use_full_tile_buffers &&
        rhs.use_full_tiles_by_default == this->use_full_tiles_by_default &&
        true;
    }
    bool operator!=(const Properties &rhs) const {
      return !(*this == rhs);
    }
  };
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  Properties properties;
  ::mlir::RegionRange odsRegions;
public:
  PromoteOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::ArrayAttr getOperandsToPromoteAttr();
  ::mlir::ArrayAttr getOperandsToPromote();
  ::mlir::ArrayAttr getUseFullTileBuffersAttr();
  ::mlir::ArrayAttr getUseFullTileBuffers();
  ::mlir::UnitAttr getUseFullTilesByDefaultAttr();
  bool getUseFullTilesByDefault();
  ::mlir::UnitAttr getUseAllocaAttr();
  bool getUseAlloca();
  ::mlir::ArrayAttr getMappingAttr();
  ::std::optional< ::mlir::ArrayAttr > getMapping();
  ::mlir::IntegerAttr getAlignmentAttr();
  ::std::optional<uint64_t> getAlignment();
};
} // namespace detail
template <typename RangeT>
class PromoteOpGenericAdaptor : public detail::PromoteOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::PromoteOpGenericAdaptorBase;
public:
  PromoteOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  PromoteOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : PromoteOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTarget() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class PromoteOpAdaptor : public PromoteOpGenericAdaptor<::mlir::ValueRange> {
public:
  using PromoteOpGenericAdaptor::PromoteOpGenericAdaptor;
  PromoteOpAdaptor(PromoteOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class PromoteOp : public ::mlir::Op<PromoteOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::transform::TransformHandleTypeInterface>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::TransformEachOpTrait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = PromoteOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = PromoteOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("alignment"), ::llvm::StringRef("mapping"), ::llvm::StringRef("operands_to_promote"), ::llvm::StringRef("use_alloca"), ::llvm::StringRef("use_full_tile_buffers"), ::llvm::StringRef("use_full_tiles_by_default")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getAlignmentAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getAlignmentAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getMappingAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getMappingAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getOperandsToPromoteAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getOperandsToPromoteAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr getUseAllocaAttrName() {
    return getAttributeNameForIndex(3);
  }

  static ::mlir::StringAttr getUseAllocaAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 3);
  }

  ::mlir::StringAttr getUseFullTileBuffersAttrName() {
    return getAttributeNameForIndex(4);
  }

  static ::mlir::StringAttr getUseFullTileBuffersAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 4);
  }

  ::mlir::StringAttr getUseFullTilesByDefaultAttrName() {
    return getAttributeNameForIndex(5);
  }

  static ::mlir::StringAttr getUseFullTilesByDefaultAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 5);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.promote");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTarget();
  ::mlir::MutableOperandRange getTargetMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTransformed();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::mlir::InFlightDiagnostic *diag);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::ArrayAttr getOperandsToPromoteAttr();
  ::mlir::ArrayAttr getOperandsToPromote();
  ::mlir::ArrayAttr getUseFullTileBuffersAttr();
  ::mlir::ArrayAttr getUseFullTileBuffers();
  ::mlir::UnitAttr getUseFullTilesByDefaultAttr();
  bool getUseFullTilesByDefault();
  ::mlir::UnitAttr getUseAllocaAttr();
  bool getUseAlloca();
  ::mlir::ArrayAttr getMappingAttr();
  ::std::optional< ::mlir::ArrayAttr > getMapping();
  ::mlir::IntegerAttr getAlignmentAttr();
  ::std::optional<uint64_t> getAlignment();
  void setOperandsToPromoteAttr(::mlir::ArrayAttr attr);
  void setUseFullTileBuffersAttr(::mlir::ArrayAttr attr);
  void setUseFullTilesByDefaultAttr(::mlir::UnitAttr attr);
  void setUseFullTilesByDefault(bool attrValue);
  void setUseAllocaAttr(::mlir::UnitAttr attr);
  void setUseAlloca(bool attrValue);
  void setMappingAttr(::mlir::ArrayAttr attr);
  void setAlignmentAttr(::mlir::IntegerAttr attr);
  void setAlignment(::std::optional<uint64_t> attrValue);
  ::mlir::Attribute removeUseFullTilesByDefaultAttr();
  ::mlir::Attribute removeUseAllocaAttr();
  ::mlir::Attribute removeMappingAttr();
  ::mlir::Attribute removeAlignmentAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, ::mlir::ArrayAttr operands_to_promote, ::mlir::ArrayAttr use_full_tile_buffers, /*optional*/::mlir::UnitAttr use_full_tiles_by_default, /*optional*/::mlir::UnitAttr use_alloca, /*optional*/::mlir::ArrayAttr mapping, /*optional*/::mlir::IntegerAttr alignment);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ArrayAttr operands_to_promote, ::mlir::ArrayAttr use_full_tile_buffers, /*optional*/::mlir::UnitAttr use_full_tiles_by_default, /*optional*/::mlir::UnitAttr use_alloca, /*optional*/::mlir::ArrayAttr mapping, /*optional*/::mlir::IntegerAttr alignment);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, ::mlir::ArrayAttr operands_to_promote, ::mlir::ArrayAttr use_full_tile_buffers, /*optional*/bool use_full_tiles_by_default, /*optional*/bool use_alloca, /*optional*/::mlir::ArrayAttr mapping, /*optional*/::mlir::IntegerAttr alignment);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ArrayAttr operands_to_promote, ::mlir::ArrayAttr use_full_tile_buffers, /*optional*/bool use_full_tiles_by_default, /*optional*/bool use_alloca, /*optional*/::mlir::ArrayAttr mapping, /*optional*/::mlir::IntegerAttr alignment);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultProperties(::mlir::OperationName opName, Properties &properties);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 6 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    return name.getAttributeNames()[index];
  }

public:
  ::mlir::DiagnosedSilenceableFailure applyToOne(
      ::mlir::transform::TransformRewriter &rewriter,
      ::mlir::linalg::LinalgOp target,
      ::mlir::transform::ApplyToEachResultList &results,
      ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::PromoteOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ReplaceOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ReplaceOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ReplaceOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::Region &getBodyRegion();
  ::mlir::RegionRange getRegions();
};
} // namespace detail
template <typename RangeT>
class ReplaceOpGenericAdaptor : public detail::ReplaceOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ReplaceOpGenericAdaptorBase;
public:
  ReplaceOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ReplaceOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ReplaceOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTarget() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ReplaceOpAdaptor : public ReplaceOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ReplaceOpGenericAdaptor::ReplaceOpGenericAdaptor;
  ReplaceOpAdaptor(ReplaceOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ReplaceOp : public ::mlir::Op<ReplaceOp, ::mlir::OpTrait::OneRegion, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::transform::TransformHandleTypeInterface>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::NoTerminator, ::mlir::OpTrait::SingleBlock, ::mlir::OpTrait::OpInvariants, ::mlir::OpTrait::IsIsolatedFromAbove, ::mlir::transform::TransformOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait, ::mlir::RegionKindInterface::Trait, ::mlir::OpTrait::HasOnlyGraphRegion> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ReplaceOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ReplaceOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.replace");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTarget();
  ::mlir::MutableOperandRange getTargetMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getReplacement();
  ::mlir::Region &getBodyRegion();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type replacement, ::mlir::Value target);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  ::mlir::DiagnosedSilenceableFailure apply(::mlir::transform::TransformRewriter &rewriter, ::mlir::transform::TransformResults &transformResults, ::mlir::transform::TransformState &state);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::ReplaceOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::RewriteInDestinationPassingStyleOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class RewriteInDestinationPassingStyleOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  RewriteInDestinationPassingStyleOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class RewriteInDestinationPassingStyleOpGenericAdaptor : public detail::RewriteInDestinationPassingStyleOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::RewriteInDestinationPassingStyleOpGenericAdaptorBase;
public:
  RewriteInDestinationPassingStyleOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  RewriteInDestinationPassingStyleOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : RewriteInDestinationPassingStyleOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTarget() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class RewriteInDestinationPassingStyleOpAdaptor : public RewriteInDestinationPassingStyleOpGenericAdaptor<::mlir::ValueRange> {
public:
  using RewriteInDestinationPassingStyleOpGenericAdaptor::RewriteInDestinationPassingStyleOpGenericAdaptor;
  RewriteInDestinationPassingStyleOpAdaptor(RewriteInDestinationPassingStyleOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class RewriteInDestinationPassingStyleOp : public ::mlir::Op<RewriteInDestinationPassingStyleOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::transform::TransformHandleTypeInterface>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::TransformEachOpTrait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = RewriteInDestinationPassingStyleOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = RewriteInDestinationPassingStyleOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.rewrite_in_destination_passing_style");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTarget();
  ::mlir::MutableOperandRange getTargetMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTransformed();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
  ::mlir::DiagnosedSilenceableFailure applyToOne(
      ::mlir::transform::TransformRewriter &rewriter,
      ::mlir::Operation *target,
      ::mlir::transform::ApplyToEachResultList &results,
      ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::RewriteInDestinationPassingStyleOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ScalarizeOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ScalarizeOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ScalarizeOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class ScalarizeOpGenericAdaptor : public detail::ScalarizeOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ScalarizeOpGenericAdaptorBase;
public:
  ScalarizeOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ScalarizeOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ScalarizeOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTarget() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ScalarizeOpAdaptor : public ScalarizeOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ScalarizeOpGenericAdaptor::ScalarizeOpGenericAdaptor;
  ScalarizeOpAdaptor(ScalarizeOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ScalarizeOp : public ::mlir::Op<ScalarizeOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::transform::TransformHandleTypeInterface>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::TransformEachOpTrait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ScalarizeOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ScalarizeOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.scalarize");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTarget();
  ::mlir::MutableOperandRange getTargetMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getResult();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value target);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
  ::mlir::DiagnosedSilenceableFailure applyToOne(
      ::mlir::transform::TransformRewriter &rewriter,
      ::mlir::linalg::LinalgOp target,
      ::mlir::transform::ApplyToEachResultList &results,
      ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::ScalarizeOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::SplitOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class SplitOpGenericAdaptorBase {
public:
  struct Properties {
    using dimensionTy = ::mlir::IntegerAttr;
    dimensionTy dimension;

    auto getDimension() {
      auto &propStorage = this->dimension;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setDimension(const ::mlir::IntegerAttr &propValue) {
      this->dimension = propValue;
    }
    using static_split_pointTy = ::mlir::IntegerAttr;
    static_split_pointTy static_split_point;

    auto getStaticSplitPoint() {
      auto &propStorage = this->static_split_point;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setStaticSplitPoint(const ::mlir::IntegerAttr &propValue) {
      this->static_split_point = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.dimension == this->dimension &&
        rhs.static_split_point == this->static_split_point &&
        true;
    }
    bool operator!=(const Properties &rhs) const {
      return !(*this == rhs);
    }
  };
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  Properties properties;
  ::mlir::RegionRange odsRegions;
public:
  SplitOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::IntegerAttr getDimensionAttr();
  uint64_t getDimension();
  ::mlir::IntegerAttr getStaticSplitPointAttr();
  uint64_t getStaticSplitPoint();
};
} // namespace detail
template <typename RangeT>
class SplitOpGenericAdaptor : public detail::SplitOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::SplitOpGenericAdaptorBase;
public:
  SplitOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  SplitOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : SplitOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTarget() {
    return (*getODSOperands(0).begin());
  }

  ValueT getDynamicSplitPoint() {
    auto operands = getODSOperands(1);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class SplitOpAdaptor : public SplitOpGenericAdaptor<::mlir::ValueRange> {
public:
  using SplitOpGenericAdaptor::SplitOpGenericAdaptor;
  SplitOpAdaptor(SplitOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class SplitOp : public ::mlir::Op<SplitOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::NResults<2>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<1>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait, ::mlir::OpAsmOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = SplitOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = SplitOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("dimension"), ::llvm::StringRef("static_split_point")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getDimensionAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getDimensionAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getStaticSplitPointAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getStaticSplitPointAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  void getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn);
  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.split");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTarget();
  ::mlir::Value getDynamicSplitPoint();
  ::mlir::MutableOperandRange getTargetMutable();
  ::mlir::MutableOperandRange getDynamicSplitPointMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getFirst();
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getSecond();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::mlir::InFlightDiagnostic *diag);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::IntegerAttr getDimensionAttr();
  uint64_t getDimension();
  ::mlir::IntegerAttr getStaticSplitPointAttr();
  uint64_t getStaticSplitPoint();
  void setDimensionAttr(::mlir::IntegerAttr attr);
  void setDimension(uint64_t attrValue);
  void setStaticSplitPointAttr(::mlir::IntegerAttr attr);
  void setStaticSplitPoint(uint64_t attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type first, ::mlir::Type second, ::mlir::Value target, ::mlir::IntegerAttr dimension, /*optional*/::mlir::Value dynamic_split_point, ::mlir::IntegerAttr static_split_point);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::IntegerAttr dimension, /*optional*/::mlir::Value dynamic_split_point, ::mlir::IntegerAttr static_split_point);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type first, ::mlir::Type second, ::mlir::Value target, uint64_t dimension, /*optional*/::mlir::Value dynamic_split_point, uint64_t static_split_point);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, uint64_t dimension, /*optional*/::mlir::Value dynamic_split_point, uint64_t static_split_point);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
  ::mlir::DiagnosedSilenceableFailure apply(::mlir::transform::TransformRewriter &rewriter, ::mlir::transform::TransformResults &transformResults, ::mlir::transform::TransformState &state);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 2 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    return name.getAttributeNames()[index];
  }

public:
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::SplitOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::SplitReductionOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class SplitReductionOpGenericAdaptorBase {
public:
  struct Properties {
    using inner_parallelTy = ::mlir::UnitAttr;
    inner_parallelTy inner_parallel;

    auto getInnerParallel() {
      auto &propStorage = this->inner_parallel;
      return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(propStorage);
    }
    void setInnerParallel(const ::mlir::UnitAttr &propValue) {
      this->inner_parallel = propValue;
    }
    using insert_split_dimensionTy = ::mlir::IntegerAttr;
    insert_split_dimensionTy insert_split_dimension;

    auto getInsertSplitDimension() {
      auto &propStorage = this->insert_split_dimension;
      return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(propStorage);
    }
    void setInsertSplitDimension(const ::mlir::IntegerAttr &propValue) {
      this->insert_split_dimension = propValue;
    }
    using split_factorTy = ::mlir::IntegerAttr;
    split_factorTy split_factor;

    auto getSplitFactor() {
      auto &propStorage = this->split_factor;
      return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(propStorage);
    }
    void setSplitFactor(const ::mlir::IntegerAttr &propValue) {
      this->split_factor = propValue;
    }
    using use_allocTy = ::mlir::UnitAttr;
    use_allocTy use_alloc;

    auto getUseAlloc() {
      auto &propStorage = this->use_alloc;
      return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(propStorage);
    }
    void setUseAlloc(const ::mlir::UnitAttr &propValue) {
      this->use_alloc = propValue;
    }
    using use_scaling_algorithmTy = ::mlir::UnitAttr;
    use_scaling_algorithmTy use_scaling_algorithm;

    auto getUseScalingAlgorithm() {
      auto &propStorage = this->use_scaling_algorithm;
      return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(propStorage);
    }
    void setUseScalingAlgorithm(const ::mlir::UnitAttr &propValue) {
      this->use_scaling_algorithm = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.inner_parallel == this->inner_parallel &&
        rhs.insert_split_dimension == this->insert_split_dimension &&
        rhs.split_factor == this->split_factor &&
        rhs.use_alloc == this->use_alloc &&
        rhs.use_scaling_algorithm == this->use_scaling_algorithm &&
        true;
    }
    bool operator!=(const Properties &rhs) const {
      return !(*this == rhs);
    }
  };
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  Properties properties;
  ::mlir::RegionRange odsRegions;
public:
  SplitReductionOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::IntegerAttr getSplitFactorAttr();
  uint64_t getSplitFactor();
  ::mlir::IntegerAttr getInsertSplitDimensionAttr();
  uint64_t getInsertSplitDimension();
  ::mlir::UnitAttr getInnerParallelAttr();
  bool getInnerParallel();
  ::mlir::UnitAttr getUseScalingAlgorithmAttr();
  bool getUseScalingAlgorithm();
  ::mlir::UnitAttr getUseAllocAttr();
  bool getUseAlloc();
};
} // namespace detail
template <typename RangeT>
class SplitReductionOpGenericAdaptor : public detail::SplitReductionOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::SplitReductionOpGenericAdaptorBase;
public:
  SplitReductionOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  SplitReductionOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : SplitReductionOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTarget() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class SplitReductionOpAdaptor : public SplitReductionOpGenericAdaptor<::mlir::ValueRange> {
public:
  using SplitReductionOpGenericAdaptor::SplitReductionOpGenericAdaptor;
  SplitReductionOpAdaptor(SplitReductionOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class SplitReductionOp : public ::mlir::Op<SplitReductionOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::NResults<4>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformEachOpTrait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait, ::mlir::OpAsmOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = SplitReductionOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = SplitReductionOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("inner_parallel"), ::llvm::StringRef("insert_split_dimension"), ::llvm::StringRef("split_factor"), ::llvm::StringRef("use_alloc"), ::llvm::StringRef("use_scaling_algorithm")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getInnerParallelAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getInnerParallelAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getInsertSplitDimensionAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getInsertSplitDimensionAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getSplitFactorAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getSplitFactorAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr getUseAllocAttrName() {
    return getAttributeNameForIndex(3);
  }

  static ::mlir::StringAttr getUseAllocAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 3);
  }

  ::mlir::StringAttr getUseScalingAlgorithmAttrName() {
    return getAttributeNameForIndex(4);
  }

  static ::mlir::StringAttr getUseScalingAlgorithmAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 4);
  }

  void getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn);
  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.split_reduction");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTarget();
  ::mlir::MutableOperandRange getTargetMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getInitOrAllocOp();
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getFillOp();
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getSplitLinalgOp();
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getCombiningLinalgOp();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::mlir::InFlightDiagnostic *diag);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::IntegerAttr getSplitFactorAttr();
  uint64_t getSplitFactor();
  ::mlir::IntegerAttr getInsertSplitDimensionAttr();
  uint64_t getInsertSplitDimension();
  ::mlir::UnitAttr getInnerParallelAttr();
  bool getInnerParallel();
  ::mlir::UnitAttr getUseScalingAlgorithmAttr();
  bool getUseScalingAlgorithm();
  ::mlir::UnitAttr getUseAllocAttr();
  bool getUseAlloc();
  void setSplitFactorAttr(::mlir::IntegerAttr attr);
  void setSplitFactor(uint64_t attrValue);
  void setInsertSplitDimensionAttr(::mlir::IntegerAttr attr);
  void setInsertSplitDimension(uint64_t attrValue);
  void setInnerParallelAttr(::mlir::UnitAttr attr);
  void setInnerParallel(bool attrValue);
  void setUseScalingAlgorithmAttr(::mlir::UnitAttr attr);
  void setUseScalingAlgorithm(bool attrValue);
  void setUseAllocAttr(::mlir::UnitAttr attr);
  void setUseAlloc(bool attrValue);
  ::mlir::Attribute removeInnerParallelAttr();
  ::mlir::Attribute removeUseScalingAlgorithmAttr();
  ::mlir::Attribute removeUseAllocAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value target, int64_t splitFactor, int64_t insertSplitDimension, bool innerParallel = false, bool useScalingAlgorithm = false, bool useAlloc = false);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type init_or_alloc_op, ::mlir::Type fill_op, ::mlir::Type split_linalg_op, ::mlir::Type combining_linalg_op, ::mlir::Value target, ::mlir::IntegerAttr split_factor, ::mlir::IntegerAttr insert_split_dimension, /*optional*/::mlir::UnitAttr inner_parallel, /*optional*/::mlir::UnitAttr use_scaling_algorithm, /*optional*/::mlir::UnitAttr use_alloc);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::IntegerAttr split_factor, ::mlir::IntegerAttr insert_split_dimension, /*optional*/::mlir::UnitAttr inner_parallel, /*optional*/::mlir::UnitAttr use_scaling_algorithm, /*optional*/::mlir::UnitAttr use_alloc);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type init_or_alloc_op, ::mlir::Type fill_op, ::mlir::Type split_linalg_op, ::mlir::Type combining_linalg_op, ::mlir::Value target, uint64_t split_factor = {}, uint64_t insert_split_dimension = {}, /*optional*/bool inner_parallel = false, /*optional*/bool use_scaling_algorithm = false, /*optional*/bool use_alloc = false);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, uint64_t split_factor = {}, uint64_t insert_split_dimension = {}, /*optional*/bool inner_parallel = false, /*optional*/bool use_scaling_algorithm = false, /*optional*/bool use_alloc = false);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultProperties(::mlir::OperationName opName, Properties &properties);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 5 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    return name.getAttributeNames()[index];
  }

public:
  ::mlir::DiagnosedSilenceableFailure applyToOne(
      ::mlir::transform::TransformRewriter &rewriter,
      ::mlir::linalg::LinalgOp target,
      ::mlir::transform::ApplyToEachResultList &results,
      ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::SplitReductionOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::TileOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class TileOpGenericAdaptorBase {
public:
  struct Properties {
    using interchangeTy = ::mlir::DenseI64ArrayAttr;
    interchangeTy interchange;

    auto getInterchange() {
      auto &propStorage = this->interchange;
      return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(propStorage);
    }
    void setInterchange(const ::mlir::DenseI64ArrayAttr &propValue) {
      this->interchange = propValue;
    }
    using scalable_sizesTy = ::mlir::DenseBoolArrayAttr;
    scalable_sizesTy scalable_sizes;

    auto getScalableSizes() {
      auto &propStorage = this->scalable_sizes;
      return ::llvm::dyn_cast_or_null<::mlir::DenseBoolArrayAttr>(propStorage);
    }
    void setScalableSizes(const ::mlir::DenseBoolArrayAttr &propValue) {
      this->scalable_sizes = propValue;
    }
    using static_sizesTy = ::mlir::DenseI64ArrayAttr;
    static_sizesTy static_sizes;

    auto getStaticSizes() {
      auto &propStorage = this->static_sizes;
      return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(propStorage);
    }
    void setStaticSizes(const ::mlir::DenseI64ArrayAttr &propValue) {
      this->static_sizes = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.interchange == this->interchange &&
        rhs.scalable_sizes == this->scalable_sizes &&
        rhs.static_sizes == this->static_sizes &&
        true;
    }
    bool operator!=(const Properties &rhs) const {
      return !(*this == rhs);
    }
  };
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  Properties properties;
  ::mlir::RegionRange odsRegions;
public:
  TileOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::DenseI64ArrayAttr getStaticSizesAttr();
  ::llvm::ArrayRef<int64_t> getStaticSizes();
  ::mlir::DenseI64ArrayAttr getInterchangeAttr();
  ::llvm::ArrayRef<int64_t> getInterchange();
  ::mlir::DenseBoolArrayAttr getScalableSizesAttr();
  ::llvm::ArrayRef<bool> getScalableSizes();
};
} // namespace detail
template <typename RangeT>
class TileOpGenericAdaptor : public detail::TileOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::TileOpGenericAdaptorBase;
public:
  TileOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  TileOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : TileOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTarget() {
    return (*getODSOperands(0).begin());
  }

  RangeT getDynamicSizes() {
    return getODSOperands(1);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class TileOpAdaptor : public TileOpGenericAdaptor<::mlir::ValueRange> {
public:
  using TileOpGenericAdaptor::TileOpGenericAdaptor;
  TileOpAdaptor(TileOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class TileOp : public ::mlir::Op<TileOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::AtLeastNResults<1>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<1>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait, ::mlir::OpAsmOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = TileOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = TileOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("interchange"), ::llvm::StringRef("scalable_sizes"), ::llvm::StringRef("static_sizes")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getInterchangeAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getInterchangeAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getScalableSizesAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getScalableSizesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getStaticSizesAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getStaticSizesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  void getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn);
  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.tile");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTarget();
  ::mlir::Operation::operand_range getDynamicSizes();
  ::mlir::MutableOperandRange getTargetMutable();
  ::mlir::MutableOperandRange getDynamicSizesMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTiledLinalgOp();
  ::mlir::Operation::result_range getLoops();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::mlir::InFlightDiagnostic *diag);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::DenseI64ArrayAttr getStaticSizesAttr();
  ::llvm::ArrayRef<int64_t> getStaticSizes();
  ::mlir::DenseI64ArrayAttr getInterchangeAttr();
  ::llvm::ArrayRef<int64_t> getInterchange();
  ::mlir::DenseBoolArrayAttr getScalableSizesAttr();
  ::llvm::ArrayRef<bool> getScalableSizes();
  void setStaticSizesAttr(::mlir::DenseI64ArrayAttr attr);
  void setStaticSizes(::std::optional<::llvm::ArrayRef<int64_t>> attrValue);
  void setInterchangeAttr(::mlir::DenseI64ArrayAttr attr);
  void setInterchange(::std::optional<::llvm::ArrayRef<int64_t>> attrValue);
  void setScalableSizesAttr(::mlir::DenseBoolArrayAttr attr);
  void setScalableSizes(::std::optional<::llvm::ArrayRef<bool>> attrValue);
  ::mlir::Attribute removeStaticSizesAttr();
  ::mlir::Attribute removeInterchangeAttr();
  ::mlir::Attribute removeScalableSizesAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, TypeRange loopTypes, Value target, ArrayRef<int64_t> staticTileSizes, ArrayRef<int64_t> interchange = {}, std::optional<ArrayRef<bool>> scalableSizes = std::nullopt);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, TypeRange loopTypes, Value target, ArrayRef<OpFoldResult> mixedTileSizes, ArrayRef<int64_t> interchange = {}, std::optional<ArrayRef<bool>> scalableSizes = std::nullopt);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value target, ArrayRef<int64_t> staticTileSizes, ArrayRef<int64_t> interchange = {}, std::optional<ArrayRef<bool>> scalableSizes = std::nullopt);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value target, ArrayRef<OpFoldResult> mixedTileSizes, ArrayRef<int64_t> interchange = {}, std::optional<ArrayRef<bool>> scalableSizes = std::nullopt);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type tiled_linalg_op, ::mlir::TypeRange loops, ::mlir::Value target, ::mlir::ValueRange dynamic_sizes, /*optional*/::mlir::DenseI64ArrayAttr static_sizes, /*optional*/::mlir::DenseI64ArrayAttr interchange, /*optional*/::mlir::DenseBoolArrayAttr scalable_sizes);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ValueRange dynamic_sizes, /*optional*/::mlir::DenseI64ArrayAttr static_sizes, /*optional*/::mlir::DenseI64ArrayAttr interchange, /*optional*/::mlir::DenseBoolArrayAttr scalable_sizes);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type tiled_linalg_op, ::mlir::TypeRange loops, ::mlir::Value target, ::mlir::ValueRange dynamic_sizes, /*optional*/::llvm::ArrayRef<int64_t> static_sizes = {}, /*optional*/::llvm::ArrayRef<int64_t> interchange = {}, /*optional*/::llvm::ArrayRef<bool> scalable_sizes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ValueRange dynamic_sizes, /*optional*/::llvm::ArrayRef<int64_t> static_sizes = {}, /*optional*/::llvm::ArrayRef<int64_t> interchange = {}, /*optional*/::llvm::ArrayRef<bool> scalable_sizes = {});
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  ::mlir::DiagnosedSilenceableFailure apply(::mlir::transform::TransformRewriter &rewriter, ::mlir::transform::TransformResults &transformResults, ::mlir::transform::TransformState &state);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 3 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    return name.getAttributeNames()[index];
  }

public:
  /// Returns the list of tile sizes, which may be static (Attribute) or
  /// dynamic (Value).
  SmallVector<OpFoldResult> getMixedSizes();
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::TileOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::TileReductionUsingForallOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class TileReductionUsingForallOpGenericAdaptorBase {
public:
  struct Properties {
    using mappingTy = ::mlir::ArrayAttr;
    mappingTy mapping;

    auto getMapping() {
      auto &propStorage = this->mapping;
      return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(propStorage);
    }
    void setMapping(const ::mlir::ArrayAttr &propValue) {
      this->mapping = propValue;
    }
    using num_threadsTy = ::mlir::DenseI64ArrayAttr;
    num_threadsTy num_threads;

    auto getNumThreads() {
      auto &propStorage = this->num_threads;
      return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(propStorage);
    }
    void setNumThreads(const ::mlir::DenseI64ArrayAttr &propValue) {
      this->num_threads = propValue;
    }
    using tile_sizesTy = ::mlir::DenseI64ArrayAttr;
    tile_sizesTy tile_sizes;

    auto getTileSizes() {
      auto &propStorage = this->tile_sizes;
      return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(propStorage);
    }
    void setTileSizes(const ::mlir::DenseI64ArrayAttr &propValue) {
      this->tile_sizes = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.mapping == this->mapping &&
        rhs.num_threads == this->num_threads &&
        rhs.tile_sizes == this->tile_sizes &&
        true;
    }
    bool operator!=(const Properties &rhs) const {
      return !(*this == rhs);
    }
  };
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  Properties properties;
  ::mlir::RegionRange odsRegions;
public:
  TileReductionUsingForallOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::DenseI64ArrayAttr getNumThreadsAttr();
  ::llvm::ArrayRef<int64_t> getNumThreads();
  ::mlir::DenseI64ArrayAttr getTileSizesAttr();
  ::llvm::ArrayRef<int64_t> getTileSizes();
  ::mlir::ArrayAttr getMappingAttr();
  ::std::optional< ::mlir::ArrayAttr > getMapping();
};
} // namespace detail
template <typename RangeT>
class TileReductionUsingForallOpGenericAdaptor : public detail::TileReductionUsingForallOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::TileReductionUsingForallOpGenericAdaptorBase;
public:
  TileReductionUsingForallOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  TileReductionUsingForallOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : TileReductionUsingForallOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTarget() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class TileReductionUsingForallOpAdaptor : public TileReductionUsingForallOpGenericAdaptor<::mlir::ValueRange> {
public:
  using TileReductionUsingForallOpGenericAdaptor::TileReductionUsingForallOpGenericAdaptor;
  TileReductionUsingForallOpAdaptor(TileReductionUsingForallOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class TileReductionUsingForallOp : public ::mlir::Op<TileReductionUsingForallOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::NResults<4>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformEachOpTrait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait, ::mlir::OpAsmOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = TileReductionUsingForallOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = TileReductionUsingForallOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("mapping"), ::llvm::StringRef("num_threads"), ::llvm::StringRef("tile_sizes")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getMappingAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getMappingAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getNumThreadsAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getNumThreadsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getTileSizesAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getTileSizesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  void getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn);
  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.tile_reduction_using_forall");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTarget();
  ::mlir::MutableOperandRange getTargetMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getForallOp();
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getFillOp();
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getSplitLinalgOp();
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getCombiningLinalgOp();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::mlir::InFlightDiagnostic *diag);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::DenseI64ArrayAttr getNumThreadsAttr();
  ::llvm::ArrayRef<int64_t> getNumThreads();
  ::mlir::DenseI64ArrayAttr getTileSizesAttr();
  ::llvm::ArrayRef<int64_t> getTileSizes();
  ::mlir::ArrayAttr getMappingAttr();
  ::std::optional< ::mlir::ArrayAttr > getMapping();
  void setNumThreadsAttr(::mlir::DenseI64ArrayAttr attr);
  void setNumThreads(::llvm::ArrayRef<int64_t> attrValue);
  void setTileSizesAttr(::mlir::DenseI64ArrayAttr attr);
  void setTileSizes(::llvm::ArrayRef<int64_t> attrValue);
  void setMappingAttr(::mlir::ArrayAttr attr);
  ::mlir::Attribute removeMappingAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value target, ArrayRef<int64_t> staticNumThreads, ArrayRef<int64_t> staticTileSizes, ArrayAttr mapping = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type forall_op, ::mlir::Type fill_op, ::mlir::Type split_linalg_op, ::mlir::Type combining_linalg_op, ::mlir::Value target, ::mlir::DenseI64ArrayAttr num_threads, ::mlir::DenseI64ArrayAttr tile_sizes, /*optional*/::mlir::ArrayAttr mapping);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::DenseI64ArrayAttr num_threads, ::mlir::DenseI64ArrayAttr tile_sizes, /*optional*/::mlir::ArrayAttr mapping);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type forall_op, ::mlir::Type fill_op, ::mlir::Type split_linalg_op, ::mlir::Type combining_linalg_op, ::mlir::Value target, ::llvm::ArrayRef<int64_t> num_threads, ::llvm::ArrayRef<int64_t> tile_sizes, /*optional*/::mlir::ArrayAttr mapping);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::llvm::ArrayRef<int64_t> num_threads, ::llvm::ArrayRef<int64_t> tile_sizes, /*optional*/::mlir::ArrayAttr mapping);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultProperties(::mlir::OperationName opName, Properties &properties);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 3 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    return name.getAttributeNames()[index];
  }

public:
  ::mlir::DiagnosedSilenceableFailure applyToOne(
      ::mlir::transform::TransformRewriter &rewriter,
      ::mlir::linalg::LinalgOp target,
      ::mlir::transform::ApplyToEachResultList &results,
      ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::TileReductionUsingForallOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::TileReductionUsingScfOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class TileReductionUsingScfOpGenericAdaptorBase {
public:
  struct Properties {
    using tile_sizesTy = ::mlir::DenseI64ArrayAttr;
    tile_sizesTy tile_sizes;

    auto getTileSizes() {
      auto &propStorage = this->tile_sizes;
      return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(propStorage);
    }
    void setTileSizes(const ::mlir::DenseI64ArrayAttr &propValue) {
      this->tile_sizes = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.tile_sizes == this->tile_sizes &&
        true;
    }
    bool operator!=(const Properties &rhs) const {
      return !(*this == rhs);
    }
  };
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  Properties properties;
  ::mlir::RegionRange odsRegions;
public:
  TileReductionUsingScfOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::DenseI64ArrayAttr getTileSizesAttr();
  ::llvm::ArrayRef<int64_t> getTileSizes();
};
} // namespace detail
template <typename RangeT>
class TileReductionUsingScfOpGenericAdaptor : public detail::TileReductionUsingScfOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::TileReductionUsingScfOpGenericAdaptorBase;
public:
  TileReductionUsingScfOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  TileReductionUsingScfOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : TileReductionUsingScfOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTarget() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class TileReductionUsingScfOpAdaptor : public TileReductionUsingScfOpGenericAdaptor<::mlir::ValueRange> {
public:
  using TileReductionUsingScfOpGenericAdaptor::TileReductionUsingScfOpGenericAdaptor;
  TileReductionUsingScfOpAdaptor(TileReductionUsingScfOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class TileReductionUsingScfOp : public ::mlir::Op<TileReductionUsingScfOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::NResults<4>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformEachOpTrait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait, ::mlir::OpAsmOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = TileReductionUsingScfOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = TileReductionUsingScfOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("tile_sizes")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getTileSizesAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getTileSizesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  void getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn);
  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.tile_reduction_using_scf");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTarget();
  ::mlir::MutableOperandRange getTargetMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getForOp();
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getFillOp();
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getSplitLinalgOp();
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getCombiningLinalgOp();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::mlir::InFlightDiagnostic *diag);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::DenseI64ArrayAttr getTileSizesAttr();
  ::llvm::ArrayRef<int64_t> getTileSizes();
  void setTileSizesAttr(::mlir::DenseI64ArrayAttr attr);
  void setTileSizes(::llvm::ArrayRef<int64_t> attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value target, ArrayRef<int64_t> staticTileSizes);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type for_op, ::mlir::Type fill_op, ::mlir::Type split_linalg_op, ::mlir::Type combining_linalg_op, ::mlir::Value target, ::mlir::DenseI64ArrayAttr tile_sizes);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::DenseI64ArrayAttr tile_sizes);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type for_op, ::mlir::Type fill_op, ::mlir::Type split_linalg_op, ::mlir::Type combining_linalg_op, ::mlir::Value target, ::llvm::ArrayRef<int64_t> tile_sizes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::llvm::ArrayRef<int64_t> tile_sizes = {});
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultProperties(::mlir::OperationName opName, Properties &properties);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 1 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    return name.getAttributeNames()[index];
  }

public:
  ::mlir::DiagnosedSilenceableFailure applyToOne(
      ::mlir::transform::TransformRewriter &rewriter,
      ::mlir::linalg::LinalgOp target,
      ::mlir::transform::ApplyToEachResultList &results,
      ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::TileReductionUsingScfOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::TileToForallOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class TileToForallOpGenericAdaptorBase {
public:
  struct Properties {
    using mappingTy = ::mlir::ArrayAttr;
    mappingTy mapping;

    auto getMapping() {
      auto &propStorage = this->mapping;
      return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(propStorage);
    }
    void setMapping(const ::mlir::ArrayAttr &propValue) {
      this->mapping = propValue;
    }
    using static_num_threadsTy = ::mlir::DenseI64ArrayAttr;
    static_num_threadsTy static_num_threads;

    auto getStaticNumThreads() {
      auto &propStorage = this->static_num_threads;
      return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(propStorage);
    }
    void setStaticNumThreads(const ::mlir::DenseI64ArrayAttr &propValue) {
      this->static_num_threads = propValue;
    }
    using static_tile_sizesTy = ::mlir::DenseI64ArrayAttr;
    static_tile_sizesTy static_tile_sizes;

    auto getStaticTileSizes() {
      auto &propStorage = this->static_tile_sizes;
      return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(propStorage);
    }
    void setStaticTileSizes(const ::mlir::DenseI64ArrayAttr &propValue) {
      this->static_tile_sizes = propValue;
    }
    using operandSegmentSizesTy = std::array<int32_t, 5>;
    operandSegmentSizesTy operandSegmentSizes;
    ::llvm::ArrayRef<int32_t> getOperandSegmentSizes() {
      auto &propStorage = this->operandSegmentSizes;
      return propStorage;
    }
    void setOperandSegmentSizes(const ::llvm::ArrayRef<int32_t> &propValue) {
      auto &propStorage = this->operandSegmentSizes;
      ::llvm::copy(propValue, propStorage.begin());
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.mapping == this->mapping &&
        rhs.static_num_threads == this->static_num_threads &&
        rhs.static_tile_sizes == this->static_tile_sizes &&
        rhs.operandSegmentSizes == this->operandSegmentSizes &&
        true;
    }
    bool operator!=(const Properties &rhs) const {
      return !(*this == rhs);
    }
  };
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  Properties properties;
  ::mlir::RegionRange odsRegions;
public:
  TileToForallOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::DenseI64ArrayAttr getStaticNumThreadsAttr();
  ::llvm::ArrayRef<int64_t> getStaticNumThreads();
  ::mlir::DenseI64ArrayAttr getStaticTileSizesAttr();
  ::llvm::ArrayRef<int64_t> getStaticTileSizes();
  ::mlir::ArrayAttr getMappingAttr();
  ::std::optional< ::mlir::ArrayAttr > getMapping();
};
} // namespace detail
template <typename RangeT>
class TileToForallOpGenericAdaptor : public detail::TileToForallOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::TileToForallOpGenericAdaptorBase;
public:
  TileToForallOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  TileToForallOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : TileToForallOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTarget() {
    return (*getODSOperands(0).begin());
  }

  RangeT getNumThreads() {
    return getODSOperands(1);
  }

  RangeT getTileSizes() {
    return getODSOperands(2);
  }

  ValueT getPackedNumThreads() {
    auto operands = getODSOperands(3);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  ValueT getPackedTileSizes() {
    auto operands = getODSOperands(4);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class TileToForallOpAdaptor : public TileToForallOpGenericAdaptor<::mlir::ValueRange> {
public:
  using TileToForallOpGenericAdaptor::TileToForallOpGenericAdaptor;
  TileToForallOpAdaptor(TileToForallOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class TileToForallOp : public ::mlir::Op<TileToForallOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::NResults<2>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<1>::Impl, ::mlir::OpTrait::AttrSizedOperandSegments, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait, ::mlir::OpAsmOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = TileToForallOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = TileToForallOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("mapping"), ::llvm::StringRef("static_num_threads"), ::llvm::StringRef("static_tile_sizes"), ::llvm::StringRef("operandSegmentSizes")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getMappingAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getMappingAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getStaticNumThreadsAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getStaticNumThreadsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getStaticTileSizesAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getStaticTileSizesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr getOperandSegmentSizesAttrName() {
   return (*this)->getName().getAttributeNames().back();
  }

  static ::mlir::StringAttr getOperandSegmentSizesAttrName(::mlir::OperationName name) {
   return name.getAttributeNames().back();
  }

  void getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn);
  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.tile_to_forall_op");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTarget();
  ::mlir::Operation::operand_range getNumThreads();
  ::mlir::Operation::operand_range getTileSizes();
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getPackedNumThreads();
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getPackedTileSizes();
  ::mlir::MutableOperandRange getTargetMutable();
  ::mlir::MutableOperandRange getNumThreadsMutable();
  ::mlir::MutableOperandRange getTileSizesMutable();
  ::mlir::MutableOperandRange getPackedNumThreadsMutable();
  ::mlir::MutableOperandRange getPackedTileSizesMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getForallOp();
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTiledOp();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::mlir::InFlightDiagnostic *diag);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::DenseI64ArrayAttr getStaticNumThreadsAttr();
  ::llvm::ArrayRef<int64_t> getStaticNumThreads();
  ::mlir::DenseI64ArrayAttr getStaticTileSizesAttr();
  ::llvm::ArrayRef<int64_t> getStaticTileSizes();
  ::mlir::ArrayAttr getMappingAttr();
  ::std::optional< ::mlir::ArrayAttr > getMapping();
  void setStaticNumThreadsAttr(::mlir::DenseI64ArrayAttr attr);
  void setStaticNumThreads(::std::optional<::llvm::ArrayRef<int64_t>> attrValue);
  void setStaticTileSizesAttr(::mlir::DenseI64ArrayAttr attr);
  void setStaticTileSizes(::std::optional<::llvm::ArrayRef<int64_t>> attrValue);
  void setMappingAttr(::mlir::ArrayAttr attr);
  ::mlir::Attribute removeStaticNumThreadsAttr();
  ::mlir::Attribute removeStaticTileSizesAttr();
  ::mlir::Attribute removeMappingAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value target, ArrayRef<int64_t> staticTileSizes, ::mlir::transform::TileSizesSpec odsArg2 = ::mlir::transform::TileSizesSpec(), ArrayAttr mapping = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value target, ArrayRef<OpFoldResult> mixedTileSizes, ::mlir::transform::TileSizesSpec odsArg2 = ::mlir::transform::TileSizesSpec(), ArrayAttr mapping = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value target, ArrayRef<int64_t> staticNumThreads, ::mlir::transform::NumThreadsSpec odsArg2 = ::mlir::transform::NumThreadsSpec(), ArrayAttr mapping = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value target, ArrayRef<OpFoldResult> mixedNumThreads, ::mlir::transform::NumThreadsSpec odsArg2 = ::mlir::transform::NumThreadsSpec(), ArrayAttr mapping = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type forall_op, ::mlir::Type tiled_op, ::mlir::Value target, ::mlir::ValueRange num_threads, ::mlir::ValueRange tile_sizes, /*optional*/::mlir::Value packed_num_threads, /*optional*/::mlir::Value packed_tile_sizes, /*optional*/::mlir::DenseI64ArrayAttr static_num_threads, /*optional*/::mlir::DenseI64ArrayAttr static_tile_sizes, /*optional*/::mlir::ArrayAttr mapping);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ValueRange num_threads, ::mlir::ValueRange tile_sizes, /*optional*/::mlir::Value packed_num_threads, /*optional*/::mlir::Value packed_tile_sizes, /*optional*/::mlir::DenseI64ArrayAttr static_num_threads, /*optional*/::mlir::DenseI64ArrayAttr static_tile_sizes, /*optional*/::mlir::ArrayAttr mapping);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type forall_op, ::mlir::Type tiled_op, ::mlir::Value target, ::mlir::ValueRange num_threads, ::mlir::ValueRange tile_sizes, /*optional*/::mlir::Value packed_num_threads, /*optional*/::mlir::Value packed_tile_sizes, /*optional*/::llvm::ArrayRef<int64_t> static_num_threads, /*optional*/::llvm::ArrayRef<int64_t> static_tile_sizes, /*optional*/::mlir::ArrayAttr mapping);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ValueRange num_threads, ::mlir::ValueRange tile_sizes, /*optional*/::mlir::Value packed_num_threads, /*optional*/::mlir::Value packed_tile_sizes, /*optional*/::llvm::ArrayRef<int64_t> static_num_threads, /*optional*/::llvm::ArrayRef<int64_t> static_tile_sizes, /*optional*/::mlir::ArrayAttr mapping);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 3 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    return name.getAttributeNames()[index];
  }

public:
  ::mlir::DiagnosedSilenceableFailure apply(
      ::mlir::transform::TransformRewriter &rewriter,
      ::mlir::transform::TransformResults &transformResults,
      ::mlir::transform::TransformState &state);

  ::llvm::SmallVector<::mlir::OpFoldResult> getMixedNumThreads();
  ::llvm::SmallVector<::mlir::OpFoldResult> getMixedTileSizes();
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::TileToForallOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::TileToScfForOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class TileToScfForOpGenericAdaptorBase {
public:
  struct Properties {
    using interchangeTy = ::mlir::DenseI64ArrayAttr;
    interchangeTy interchange;

    auto getInterchange() {
      auto &propStorage = this->interchange;
      return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(propStorage);
    }
    void setInterchange(const ::mlir::DenseI64ArrayAttr &propValue) {
      this->interchange = propValue;
    }
    using static_sizesTy = ::mlir::DenseI64ArrayAttr;
    static_sizesTy static_sizes;

    auto getStaticSizes() {
      auto &propStorage = this->static_sizes;
      return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(propStorage);
    }
    void setStaticSizes(const ::mlir::DenseI64ArrayAttr &propValue) {
      this->static_sizes = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.interchange == this->interchange &&
        rhs.static_sizes == this->static_sizes &&
        true;
    }
    bool operator!=(const Properties &rhs) const {
      return !(*this == rhs);
    }
  };
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  Properties properties;
  ::mlir::RegionRange odsRegions;
public:
  TileToScfForOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::DenseI64ArrayAttr getStaticSizesAttr();
  ::llvm::ArrayRef<int64_t> getStaticSizes();
  ::mlir::DenseI64ArrayAttr getInterchangeAttr();
  ::llvm::ArrayRef<int64_t> getInterchange();
};
} // namespace detail
template <typename RangeT>
class TileToScfForOpGenericAdaptor : public detail::TileToScfForOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::TileToScfForOpGenericAdaptorBase;
public:
  TileToScfForOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  TileToScfForOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : TileToScfForOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTarget() {
    return (*getODSOperands(0).begin());
  }

  RangeT getDynamicSizes() {
    return getODSOperands(1);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class TileToScfForOpAdaptor : public TileToScfForOpGenericAdaptor<::mlir::ValueRange> {
public:
  using TileToScfForOpGenericAdaptor::TileToScfForOpGenericAdaptor;
  TileToScfForOpAdaptor(TileToScfForOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class TileToScfForOp : public ::mlir::Op<TileToScfForOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::AtLeastNResults<1>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<1>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait, ::mlir::OpAsmOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = TileToScfForOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = TileToScfForOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("interchange"), ::llvm::StringRef("static_sizes")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getInterchangeAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getInterchangeAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getStaticSizesAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getStaticSizesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  void getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn);
  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.tile_to_scf_for");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTarget();
  ::mlir::Operation::operand_range getDynamicSizes();
  ::mlir::MutableOperandRange getTargetMutable();
  ::mlir::MutableOperandRange getDynamicSizesMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTiledLinalgOp();
  ::mlir::Operation::result_range getLoops();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::mlir::InFlightDiagnostic *diag);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::DenseI64ArrayAttr getStaticSizesAttr();
  ::llvm::ArrayRef<int64_t> getStaticSizes();
  ::mlir::DenseI64ArrayAttr getInterchangeAttr();
  ::llvm::ArrayRef<int64_t> getInterchange();
  void setStaticSizesAttr(::mlir::DenseI64ArrayAttr attr);
  void setStaticSizes(::std::optional<::llvm::ArrayRef<int64_t>> attrValue);
  void setInterchangeAttr(::mlir::DenseI64ArrayAttr attr);
  void setInterchange(::std::optional<::llvm::ArrayRef<int64_t>> attrValue);
  ::mlir::Attribute removeStaticSizesAttr();
  ::mlir::Attribute removeInterchangeAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value target, ArrayRef<OpFoldResult> mixedTileSizes, ArrayRef<int64_t> interchange = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type tiled_linalg_op, ::mlir::TypeRange loops, ::mlir::Value target, ::mlir::ValueRange dynamic_sizes, /*optional*/::mlir::DenseI64ArrayAttr static_sizes, /*optional*/::mlir::DenseI64ArrayAttr interchange);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ValueRange dynamic_sizes, /*optional*/::mlir::DenseI64ArrayAttr static_sizes, /*optional*/::mlir::DenseI64ArrayAttr interchange);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type tiled_linalg_op, ::mlir::TypeRange loops, ::mlir::Value target, ::mlir::ValueRange dynamic_sizes, /*optional*/::llvm::ArrayRef<int64_t> static_sizes = {}, /*optional*/::llvm::ArrayRef<int64_t> interchange = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ValueRange dynamic_sizes, /*optional*/::llvm::ArrayRef<int64_t> static_sizes = {}, /*optional*/::llvm::ArrayRef<int64_t> interchange = {});
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::DiagnosedSilenceableFailure apply(::mlir::transform::TransformRewriter &rewriter, ::mlir::transform::TransformResults &transformResults, ::mlir::transform::TransformState &state);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 2 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    return name.getAttributeNames()[index];
  }

public:
  /// Returns the list of tile sizes, which may be static (Attribute) or
  /// dynamic (Value).
  SmallVector<OpFoldResult> getMixedSizes();
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::TileToScfForOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::VectorizeOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class VectorizeOpGenericAdaptorBase {
public:
  struct Properties {
    using disable_multi_reduction_to_contract_patternsTy = ::mlir::UnitAttr;
    disable_multi_reduction_to_contract_patternsTy disable_multi_reduction_to_contract_patterns;

    auto getDisableMultiReductionToContractPatterns() {
      auto &propStorage = this->disable_multi_reduction_to_contract_patterns;
      return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(propStorage);
    }
    void setDisableMultiReductionToContractPatterns(const ::mlir::UnitAttr &propValue) {
      this->disable_multi_reduction_to_contract_patterns = propValue;
    }
    using disable_transfer_permutation_map_lowering_patternsTy = ::mlir::UnitAttr;
    disable_transfer_permutation_map_lowering_patternsTy disable_transfer_permutation_map_lowering_patterns;

    auto getDisableTransferPermutationMapLoweringPatterns() {
      auto &propStorage = this->disable_transfer_permutation_map_lowering_patterns;
      return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(propStorage);
    }
    void setDisableTransferPermutationMapLoweringPatterns(const ::mlir::UnitAttr &propValue) {
      this->disable_transfer_permutation_map_lowering_patterns = propValue;
    }
    using vectorize_nd_extractTy = ::mlir::UnitAttr;
    vectorize_nd_extractTy vectorize_nd_extract;

    auto getVectorizeNdExtract() {
      auto &propStorage = this->vectorize_nd_extract;
      return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(propStorage);
    }
    void setVectorizeNdExtract(const ::mlir::UnitAttr &propValue) {
      this->vectorize_nd_extract = propValue;
    }
    using vectorize_paddingTy = ::mlir::UnitAttr;
    vectorize_paddingTy vectorize_padding;

    auto getVectorizePadding() {
      auto &propStorage = this->vectorize_padding;
      return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(propStorage);
    }
    void setVectorizePadding(const ::mlir::UnitAttr &propValue) {
      this->vectorize_padding = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.disable_multi_reduction_to_contract_patterns == this->disable_multi_reduction_to_contract_patterns &&
        rhs.disable_transfer_permutation_map_lowering_patterns == this->disable_transfer_permutation_map_lowering_patterns &&
        rhs.vectorize_nd_extract == this->vectorize_nd_extract &&
        rhs.vectorize_padding == this->vectorize_padding &&
        true;
    }
    bool operator!=(const Properties &rhs) const {
      return !(*this == rhs);
    }
  };
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  Properties properties;
  ::mlir::RegionRange odsRegions;
public:
  VectorizeOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::UnitAttr getVectorizePaddingAttr();
  bool getVectorizePadding();
  ::mlir::UnitAttr getVectorizeNdExtractAttr();
  bool getVectorizeNdExtract();
  ::mlir::UnitAttr getDisableMultiReductionToContractPatternsAttr();
  bool getDisableMultiReductionToContractPatterns();
  ::mlir::UnitAttr getDisableTransferPermutationMapLoweringPatternsAttr();
  bool getDisableTransferPermutationMapLoweringPatterns();
};
} // namespace detail
template <typename RangeT>
class VectorizeOpGenericAdaptor : public detail::VectorizeOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::VectorizeOpGenericAdaptorBase;
public:
  VectorizeOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  VectorizeOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : VectorizeOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTarget() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class VectorizeOpAdaptor : public VectorizeOpGenericAdaptor<::mlir::ValueRange> {
public:
  using VectorizeOpGenericAdaptor::VectorizeOpGenericAdaptor;
  VectorizeOpAdaptor(VectorizeOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class VectorizeOp : public ::mlir::Op<VectorizeOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::transform::TransformHandleTypeInterface>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformEachOpTrait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = VectorizeOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = VectorizeOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("disable_multi_reduction_to_contract_patterns"), ::llvm::StringRef("disable_transfer_permutation_map_lowering_patterns"), ::llvm::StringRef("vectorize_nd_extract"), ::llvm::StringRef("vectorize_padding")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getDisableMultiReductionToContractPatternsAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getDisableMultiReductionToContractPatternsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getDisableTransferPermutationMapLoweringPatternsAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getDisableTransferPermutationMapLoweringPatternsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getVectorizeNdExtractAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getVectorizeNdExtractAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr getVectorizePaddingAttrName() {
    return getAttributeNameForIndex(3);
  }

  static ::mlir::StringAttr getVectorizePaddingAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 3);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.vectorize");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTarget();
  ::mlir::MutableOperandRange getTargetMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTransformed();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::mlir::InFlightDiagnostic *diag);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> getDiag);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::UnitAttr getVectorizePaddingAttr();
  bool getVectorizePadding();
  ::mlir::UnitAttr getVectorizeNdExtractAttr();
  bool getVectorizeNdExtract();
  ::mlir::UnitAttr getDisableMultiReductionToContractPatternsAttr();
  bool getDisableMultiReductionToContractPatterns();
  ::mlir::UnitAttr getDisableTransferPermutationMapLoweringPatternsAttr();
  bool getDisableTransferPermutationMapLoweringPatterns();
  void setVectorizePaddingAttr(::mlir::UnitAttr attr);
  void setVectorizePadding(bool attrValue);
  void setVectorizeNdExtractAttr(::mlir::UnitAttr attr);
  void setVectorizeNdExtract(bool attrValue);
  void setDisableMultiReductionToContractPatternsAttr(::mlir::UnitAttr attr);
  void setDisableMultiReductionToContractPatterns(bool attrValue);
  void setDisableTransferPermutationMapLoweringPatternsAttr(::mlir::UnitAttr attr);
  void setDisableTransferPermutationMapLoweringPatterns(bool attrValue);
  ::mlir::Attribute removeVectorizePaddingAttr();
  ::mlir::Attribute removeVectorizeNdExtractAttr();
  ::mlir::Attribute removeDisableMultiReductionToContractPatternsAttr();
  ::mlir::Attribute removeDisableTransferPermutationMapLoweringPatternsAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value target, bool vectorizePadding = false, bool vectorizeNDExtract = false);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, /*optional*/::mlir::UnitAttr vectorize_padding, /*optional*/::mlir::UnitAttr vectorize_nd_extract, /*optional*/::mlir::UnitAttr disable_multi_reduction_to_contract_patterns, /*optional*/::mlir::UnitAttr disable_transfer_permutation_map_lowering_patterns);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, /*optional*/::mlir::UnitAttr vectorize_padding, /*optional*/::mlir::UnitAttr vectorize_nd_extract, /*optional*/::mlir::UnitAttr disable_multi_reduction_to_contract_patterns, /*optional*/::mlir::UnitAttr disable_transfer_permutation_map_lowering_patterns);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, /*optional*/bool vectorize_padding = false, /*optional*/bool vectorize_nd_extract = false, /*optional*/bool disable_multi_reduction_to_contract_patterns = false, /*optional*/bool disable_transfer_permutation_map_lowering_patterns = false);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, /*optional*/bool vectorize_padding = false, /*optional*/bool vectorize_nd_extract = false, /*optional*/bool disable_multi_reduction_to_contract_patterns = false, /*optional*/bool disable_transfer_permutation_map_lowering_patterns = false);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 4 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    return name.getAttributeNames()[index];
  }

public:
  ::mlir::DiagnosedSilenceableFailure applyToOne(
      ::mlir::transform::TransformRewriter &rewriter,
      ::mlir::Operation *target,
      ::mlir::transform::ApplyToEachResultList &results,
      ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::VectorizeOp)


#endif  // GET_OP_CLASSES

