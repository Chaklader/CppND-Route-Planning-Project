/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Dialect Declarations                                                       *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace mlir {
namespace transform {

class TransformDialect : public ::mlir::Dialect {
  explicit TransformDialect(::mlir::MLIRContext *context);

  void initialize();
  friend class ::mlir::MLIRContext;
public:
  ~TransformDialect() override;
  static constexpr ::llvm::StringLiteral getDialectNamespace() {
    return ::llvm::StringLiteral("transform");
  }

    /// Provides a hook for verifying dialect attributes attached to the given
    /// op.
    ::mlir::LogicalResult verifyOperationAttribute(
        ::mlir::Operation *op, ::mlir::NamedAttribute attribute) override;

      /// Name of the attribute attachable to the symbol table operation
      /// containing named sequences. This is used to trigger verification.
      constexpr const static ::llvm::StringLiteral
          kWithNamedSequenceAttrName = "transform.with_named_sequence";

      /// Name of the attribute attachable to an operation so it can be
      /// identified as root by the default interpreter pass.
      constexpr const static ::llvm::StringLiteral
          kTargetTagAttrName = "transform.target_tag";

      /// Name of the attribute attachable to an operation, indicating that
      /// TrackingListener failures should be silenced.
      constexpr const static ::llvm::StringLiteral
          kSilenceTrackingFailuresAttrName = "transform.silence_tracking_failures";

      /// Names of the attributes indicating whether an argument of an external
      /// transform dialect symbol is consumed or only read.
      constexpr const static ::llvm::StringLiteral
          kArgConsumedAttrName = "transform.consumed";
      constexpr const static ::llvm::StringLiteral
          kArgReadOnlyAttrName = "transform.readonly";

      template <typename DataTy>
      const DataTy &getExtraData() const {
        return *static_cast<const DataTy *>(extraData.at(::mlir::TypeID::get<DataTy>()).get());
      }

      /// Parses a type registered by this dialect or one of its extensions.
      ::mlir::Type parseType(::mlir::DialectAsmParser &parser) const override;

      /// Prints a type registered by this dialect or one of its extensions.
      void printType(::mlir::Type type,
                     ::mlir::DialectAsmPrinter &printer) const override;

      /// Parser callback for an individual type registered by this dialect or
      /// its extensions.
      using ExtensionTypeParsingHook = ::mlir::Type (*)(::mlir::AsmParser &);

      /// Printer callback for an individual type registered by this dialect or
      /// its extensions.
      using ExtensionTypePrintingHook =
          std::function<void (::mlir::Type, ::mlir::AsmPrinter &)>;

    private:
      /// Registers operations specified as template parameters with this
      /// dialect. Checks that they implement the required interfaces.
      template <typename... OpTys>
      void addOperationsChecked() {
        (addOperationIfNotRegistered<OpTys>(), ...);
      }
      template <typename OpTy>
      void addOperationIfNotRegistered();

      /// Reports a repeated registration error of an op with the given name.
      [[noreturn]] void reportDuplicateOpRegistration(StringRef opName);

      /// Registers the types specified as template parameters with the
      /// Transform dialect. Checks that they meet the requirements for
      /// Transform IR types.
      template <typename... TypeTys>
      void addTypesChecked() {
        (addTypeIfNotRegistered<TypeTys>(), ...);
      }
      template <typename Type>
      void addTypeIfNotRegistered();

      /// Reports a repeated registration error of a type with the given
      /// mnemonic.
      [[noreturn]] void reportDuplicateTypeRegistration(StringRef mnemonic);

      /// Registers dialect types with the context.
      void initializeTypes();

      // Give extensions access to injection functions.
      template <typename, typename...>
      friend class TransformDialectExtension;

      /// Gets a mutable reference to extra data of the kind specified as
      /// template argument. Allocates the data on the first call.
      template <typename DataTy>
      DataTy &getOrCreateExtraData();

      //===----------------------------------------------------------------===//
      // Data fields
      //===----------------------------------------------------------------===//

      /// Additional data associated with and owned by the dialect. Accessible
      /// to extensions.
      ::llvm::DenseMap<::mlir::TypeID, std::unique_ptr<
            ::mlir::transform::detail::TransformDialectDataBase>>
          extraData;

      /// A map from type mnemonic to its parsing function for the remainder of
      /// the syntax. The parser has access to the mnemonic, so it is used for
      /// further dispatch.
      ::llvm::StringMap<ExtensionTypeParsingHook> typeParsingHooks;

      /// A map from type TypeID to its printing function. No need to do string
      /// lookups when the type is fully constructed.
      ::llvm::DenseMap<::mlir::TypeID, ExtensionTypePrintingHook>
      typePrintingHooks;
  };
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::TransformDialect)