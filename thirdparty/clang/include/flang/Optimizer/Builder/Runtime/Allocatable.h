//===-- Allocatable.h - generate Allocatable runtime API calls---*- C++ -*-===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef FORTRAN_OPTIMIZER_BUILDER_RUNTIME_ALLOCATABLE_H
#define FORTRAN_OPTIMIZER_BUILDER_RUNTIME_ALLOCATABLE_H

namespace mlir {
class Value;
class Location;
} // namespace mlir

namespace fir {
class FirOpBuilder;
}

namespace fir::runtime {

/// Generate runtime call to assign \p sourceBox to \p destBox.
/// \p destBox must be a fir.ref<fir.box<T>> and \p sourceBox a fir.box<T>.
/// \p destBox Fortran descriptor may be modified if destBox is an allocatable
/// according to Fortran allocatable assignment rules, otherwise it is not
/// modified.
mlir::Value genMoveAlloc(fir::FirOpBuilder &builder, mlir::Location loc,
                         mlir::Value to, mlir::Value from, mlir::Value hasStat,
                         mlir::Value errMsg);

/// Generate runtime call to apply bounds, cobounds, length type
/// parameters and derived type information from \p mold descriptor
/// to \p desc descriptor. The resulting rank of \p desc descriptor
/// is set to \p rank. The resulting descriptor must be initialized
/// and deallocated before the call.
void genAllocatableApplyMold(fir::FirOpBuilder &builder, mlir::Location loc,
                             mlir::Value desc, mlir::Value mold, int rank);

} // namespace fir::runtime
#endif // FORTRAN_OPTIMIZER_BUILDER_RUNTIME_ALLOCATABLE_H
