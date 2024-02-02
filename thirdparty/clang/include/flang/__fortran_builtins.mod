!mod$ v1 sum:0d9acd058152fc72
module __fortran_builtins
intrinsic::__builtin_c_f_pointer
intrinsic::sizeof
intrinsic::selected_int_kind
private::selected_int_kind
integer(4),parameter,private::int64=8_4
type,bind(c)::__builtin_c_ptr
integer(8)::__address
end type
type,bind(c)::__builtin_c_funptr
integer(8)::__address
end type
type::__builtin_event_type
integer(8)::__count
end type
type::__builtin_lock_type
integer(8)::__count
end type
type::__builtin_team_type
integer(8)::__id
end type
integer(4),parameter::__builtin_atomic_int_kind=8_4
integer(4),parameter::__builtin_atomic_logical_kind=8_4
intrinsic::__builtin_c_loc
type::__builtin_dim3
integer(4)::x=1_4
integer(4)::y=1_4
integer(4)::z=1_4
end type
type(__builtin_dim3)::__builtin_threadidx
type(__builtin_dim3)::__builtin_blockdim
type(__builtin_dim3)::__builtin_blockidx
type(__builtin_dim3)::__builtin_griddim
integer(4),parameter::__builtin_warpsize=32_4
intrinsic::__builtin_fma
intrinsic::__builtin_ieee_is_nan
intrinsic::__builtin_ieee_is_negative
intrinsic::__builtin_ieee_is_normal
intrinsic::__builtin_ieee_next_after
intrinsic::__builtin_ieee_next_down
intrinsic::__builtin_ieee_next_up
intrinsic::scale
intrinsic::__builtin_ieee_selected_real_kind
intrinsic::__builtin_ieee_support_datatype
intrinsic::__builtin_ieee_support_denormal
intrinsic::__builtin_ieee_support_divide
intrinsic::__builtin_ieee_support_inf
intrinsic::__builtin_ieee_support_io
intrinsic::__builtin_ieee_support_nan
intrinsic::__builtin_ieee_support_sqrt
intrinsic::__builtin_ieee_support_standard
intrinsic::__builtin_ieee_support_subnormal
intrinsic::__builtin_ieee_support_underflow_control
type,private::__force_derived_type_instantiations
type(__builtin_c_ptr)::c_ptr
type(__builtin_c_funptr)::c_funptr
type(__builtin_event_type)::event_type
type(__builtin_lock_type)::lock_type
type(__builtin_team_type)::team_type
end type
intrinsic::__builtin_compiler_options
intrinsic::__builtin_compiler_version
interface operator(==)
procedure::__builtin_c_ptr_eq
end interface
interface operator(/=)
procedure::__builtin_c_ptr_eq
end interface
contains
elemental function __builtin_c_ptr_eq(x,y)
type(__builtin_c_ptr),intent(in)::x
type(__builtin_c_ptr),intent(in)::y
logical(4)::__builtin_c_ptr_eq
end
elemental function __builtin_c_ptr_ne(x,y)
type(__builtin_c_ptr),intent(in)::x
type(__builtin_c_ptr),intent(in)::y
logical(4)::__builtin_c_ptr_ne
end
end
