!mod$ v1 sum:7211acf8615fbf38
module __ppc_intrinsics
private::func_r4r4r4r4
abstract interface
elemental function func_r4r4r4r4(a,x,y)
real(4),intent(in)::a
real(4),intent(in)::x
real(4),intent(in)::y
real(4)::func_r4r4r4r4
end
end interface
private::func_r8r8r8r8
abstract interface
elemental function func_r8r8r8r8(a,x,y)
real(8),intent(in)::a
real(8),intent(in)::x
real(8),intent(in)::y
real(8)::func_r8r8r8r8
end
end interface
private::elem_func_vi1vi1
abstract interface
elemental function elem_func_vi1vi1(arg1)
vector(integer(1)),intent(in)::arg1
vector(integer(1))::elem_func_vi1vi1
end
end interface
private::elem_func_vi2vi2
abstract interface
elemental function elem_func_vi2vi2(arg1)
vector(integer(2)),intent(in)::arg1
vector(integer(2))::elem_func_vi2vi2
end
end interface
private::elem_func_vi4vi4
abstract interface
elemental function elem_func_vi4vi4(arg1)
vector(integer(4)),intent(in)::arg1
vector(integer(4))::elem_func_vi4vi4
end
end interface
private::elem_func_vi8vi8
abstract interface
elemental function elem_func_vi8vi8(arg1)
vector(integer(8)),intent(in)::arg1
vector(integer(8))::elem_func_vi8vi8
end
end interface
private::elem_func_vr4vr8
abstract interface
elemental function elem_func_vr4vr8(arg1)
vector(real(8)),intent(in)::arg1
vector(real(4))::elem_func_vr4vr8
end
end interface
private::elem_func_vr8vr4
abstract interface
elemental function elem_func_vr8vr4(arg1)
vector(real(4)),intent(in)::arg1
vector(real(8))::elem_func_vr8vr4
end
end interface
private::elem_func_vr4vr4
abstract interface
elemental function elem_func_vr4vr4(arg1)
vector(real(4)),intent(in)::arg1
vector(real(4))::elem_func_vr4vr4
end
end interface
private::elem_func_vr8vr8
abstract interface
elemental function elem_func_vr8vr8(arg1)
vector(real(8)),intent(in)::arg1
vector(real(8))::elem_func_vr8vr8
end
end interface
private::func_vec_convert_vi1vivi1
abstract interface
pure function func_vec_convert_vi1vivi1(v,mold)
vector(integer(8)),intent(in)::v
!dir$ ignore_tkr(tk) v
vector(integer(1)),intent(in)::mold
!dir$ ignore_tkr(r) mold
vector(integer(1))::func_vec_convert_vi1vivi1
end
end interface
private::func_vec_convert_vi2vivi2
abstract interface
pure function func_vec_convert_vi2vivi2(v,mold)
vector(integer(8)),intent(in)::v
!dir$ ignore_tkr(tk) v
vector(integer(2)),intent(in)::mold
!dir$ ignore_tkr(r) mold
vector(integer(2))::func_vec_convert_vi2vivi2
end
end interface
private::func_vec_convert_vi4vivi4
abstract interface
pure function func_vec_convert_vi4vivi4(v,mold)
vector(integer(8)),intent(in)::v
!dir$ ignore_tkr(tk) v
vector(integer(4)),intent(in)::mold
!dir$ ignore_tkr(r) mold
vector(integer(4))::func_vec_convert_vi4vivi4
end
end interface
private::func_vec_convert_vi8vivi8
abstract interface
pure function func_vec_convert_vi8vivi8(v,mold)
vector(integer(8)),intent(in)::v
!dir$ ignore_tkr(tk) v
vector(integer(8)),intent(in)::mold
!dir$ ignore_tkr(r) mold
vector(integer(8))::func_vec_convert_vi8vivi8
end
end interface
private::func_vec_convert_vu1vivu1
abstract interface
pure function func_vec_convert_vu1vivu1(v,mold)
vector(integer(8)),intent(in)::v
!dir$ ignore_tkr(tk) v
vector(unsigned(1)),intent(in)::mold
!dir$ ignore_tkr(r) mold
vector(unsigned(1))::func_vec_convert_vu1vivu1
end
end interface
private::func_vec_convert_vu2vivu2
abstract interface
pure function func_vec_convert_vu2vivu2(v,mold)
vector(integer(8)),intent(in)::v
!dir$ ignore_tkr(tk) v
vector(unsigned(2)),intent(in)::mold
!dir$ ignore_tkr(r) mold
vector(unsigned(2))::func_vec_convert_vu2vivu2
end
end interface
private::func_vec_convert_vu4vivu4
abstract interface
pure function func_vec_convert_vu4vivu4(v,mold)
vector(integer(8)),intent(in)::v
!dir$ ignore_tkr(tk) v
vector(unsigned(4)),intent(in)::mold
!dir$ ignore_tkr(r) mold
vector(unsigned(4))::func_vec_convert_vu4vivu4
end
end interface
private::func_vec_convert_vu8vivu8
abstract interface
pure function func_vec_convert_vu8vivu8(v,mold)
vector(integer(8)),intent(in)::v
!dir$ ignore_tkr(tk) v
vector(unsigned(8)),intent(in)::mold
!dir$ ignore_tkr(r) mold
vector(unsigned(8))::func_vec_convert_vu8vivu8
end
end interface
private::func_vec_convert_vr4vivr4
abstract interface
pure function func_vec_convert_vr4vivr4(v,mold)
vector(integer(8)),intent(in)::v
!dir$ ignore_tkr(tk) v
vector(real(4)),intent(in)::mold
!dir$ ignore_tkr(r) mold
vector(real(4))::func_vec_convert_vr4vivr4
end
end interface
private::func_vec_convert_vr8vivr8
abstract interface
pure function func_vec_convert_vr8vivr8(v,mold)
vector(integer(8)),intent(in)::v
!dir$ ignore_tkr(tk) v
vector(real(8)),intent(in)::mold
!dir$ ignore_tkr(r) mold
vector(real(8))::func_vec_convert_vr8vivr8
end
end interface
private::elem_func_vi1vi1vi1
abstract interface
elemental function elem_func_vi1vi1vi1(arg1,arg2)
vector(integer(1)),intent(in)::arg1
vector(integer(1)),intent(in)::arg2
vector(integer(1))::elem_func_vi1vi1vi1
end
end interface
private::elem_func_vi2vi2vi2
abstract interface
elemental function elem_func_vi2vi2vi2(arg1,arg2)
vector(integer(2)),intent(in)::arg1
vector(integer(2)),intent(in)::arg2
vector(integer(2))::elem_func_vi2vi2vi2
end
end interface
private::elem_func_vi4vi4vi4
abstract interface
elemental function elem_func_vi4vi4vi4(arg1,arg2)
vector(integer(4)),intent(in)::arg1
vector(integer(4)),intent(in)::arg2
vector(integer(4))::elem_func_vi4vi4vi4
end
end interface
private::elem_func_vi8vi8vi8
abstract interface
elemental function elem_func_vi8vi8vi8(arg1,arg2)
vector(integer(8)),intent(in)::arg1
vector(integer(8)),intent(in)::arg2
vector(integer(8))::elem_func_vi8vi8vi8
end
end interface
private::elem_func_vu1vi1vi1
abstract interface
elemental function elem_func_vu1vi1vi1(arg1,arg2)
vector(integer(1)),intent(in)::arg1
vector(integer(1)),intent(in)::arg2
vector(unsigned(1))::elem_func_vu1vi1vi1
end
end interface
private::elem_func_vu2vi2vi2
abstract interface
elemental function elem_func_vu2vi2vi2(arg1,arg2)
vector(integer(2)),intent(in)::arg1
vector(integer(2)),intent(in)::arg2
vector(unsigned(2))::elem_func_vu2vi2vi2
end
end interface
private::elem_func_vu4vi4vi4
abstract interface
elemental function elem_func_vu4vi4vi4(arg1,arg2)
vector(integer(4)),intent(in)::arg1
vector(integer(4)),intent(in)::arg2
vector(unsigned(4))::elem_func_vu4vi4vi4
end
end interface
private::elem_func_vu8vi8vi8
abstract interface
elemental function elem_func_vu8vi8vi8(arg1,arg2)
vector(integer(8)),intent(in)::arg1
vector(integer(8)),intent(in)::arg2
vector(unsigned(8))::elem_func_vu8vi8vi8
end
end interface
private::elem_func_vu1vu1vu1
abstract interface
elemental function elem_func_vu1vu1vu1(arg1,arg2)
vector(unsigned(1)),intent(in)::arg1
vector(unsigned(1)),intent(in)::arg2
vector(unsigned(1))::elem_func_vu1vu1vu1
end
end interface
private::elem_func_vu2vu2vu2
abstract interface
elemental function elem_func_vu2vu2vu2(arg1,arg2)
vector(unsigned(2)),intent(in)::arg1
vector(unsigned(2)),intent(in)::arg2
vector(unsigned(2))::elem_func_vu2vu2vu2
end
end interface
private::elem_func_vu4vu4vu4
abstract interface
elemental function elem_func_vu4vu4vu4(arg1,arg2)
vector(unsigned(4)),intent(in)::arg1
vector(unsigned(4)),intent(in)::arg2
vector(unsigned(4))::elem_func_vu4vu4vu4
end
end interface
private::elem_func_vu8vu8vu8
abstract interface
elemental function elem_func_vu8vu8vu8(arg1,arg2)
vector(unsigned(8)),intent(in)::arg1
vector(unsigned(8)),intent(in)::arg2
vector(unsigned(8))::elem_func_vu8vu8vu8
end
end interface
private::elem_func_vi1vi1vu1
abstract interface
elemental function elem_func_vi1vi1vu1(arg1,arg2)
vector(integer(1)),intent(in)::arg1
vector(unsigned(1)),intent(in)::arg2
vector(integer(1))::elem_func_vi1vi1vu1
end
end interface
private::elem_func_vi2vi2vu2
abstract interface
elemental function elem_func_vi2vi2vu2(arg1,arg2)
vector(integer(2)),intent(in)::arg1
vector(unsigned(2)),intent(in)::arg2
vector(integer(2))::elem_func_vi2vi2vu2
end
end interface
private::elem_func_vi4vi4vu4
abstract interface
elemental function elem_func_vi4vi4vu4(arg1,arg2)
vector(integer(4)),intent(in)::arg1
vector(unsigned(4)),intent(in)::arg2
vector(integer(4))::elem_func_vi4vi4vu4
end
end interface
private::elem_func_vi8vi8vu8
abstract interface
elemental function elem_func_vi8vi8vu8(arg1,arg2)
vector(integer(8)),intent(in)::arg1
vector(unsigned(8)),intent(in)::arg2
vector(integer(8))::elem_func_vi8vi8vu8
end
end interface
private::elem_func_vi1vi1vu2
abstract interface
elemental function elem_func_vi1vi1vu2(arg1,arg2)
vector(integer(1)),intent(in)::arg1
vector(unsigned(2)),intent(in)::arg2
vector(integer(1))::elem_func_vi1vi1vu2
end
end interface
private::elem_func_vi1vi1vu4
abstract interface
elemental function elem_func_vi1vi1vu4(arg1,arg2)
vector(integer(1)),intent(in)::arg1
vector(unsigned(4)),intent(in)::arg2
vector(integer(1))::elem_func_vi1vi1vu4
end
end interface
private::elem_func_vi2vi2vu1
abstract interface
elemental function elem_func_vi2vi2vu1(arg1,arg2)
vector(integer(2)),intent(in)::arg1
vector(unsigned(1)),intent(in)::arg2
vector(integer(2))::elem_func_vi2vi2vu1
end
end interface
private::elem_func_vi2vi2vu4
abstract interface
elemental function elem_func_vi2vi2vu4(arg1,arg2)
vector(integer(2)),intent(in)::arg1
vector(unsigned(4)),intent(in)::arg2
vector(integer(2))::elem_func_vi2vi2vu4
end
end interface
private::elem_func_vi4vi4vu1
abstract interface
elemental function elem_func_vi4vi4vu1(arg1,arg2)
vector(integer(4)),intent(in)::arg1
vector(unsigned(1)),intent(in)::arg2
vector(integer(4))::elem_func_vi4vi4vu1
end
end interface
private::elem_func_vi4vi4vu2
abstract interface
elemental function elem_func_vi4vi4vu2(arg1,arg2)
vector(integer(4)),intent(in)::arg1
vector(unsigned(2)),intent(in)::arg2
vector(integer(4))::elem_func_vi4vi4vu2
end
end interface
private::elem_func_vu1vu1vu2
abstract interface
elemental function elem_func_vu1vu1vu2(arg1,arg2)
vector(unsigned(1)),intent(in)::arg1
vector(unsigned(2)),intent(in)::arg2
vector(unsigned(1))::elem_func_vu1vu1vu2
end
end interface
private::elem_func_vu1vu1vu4
abstract interface
elemental function elem_func_vu1vu1vu4(arg1,arg2)
vector(unsigned(1)),intent(in)::arg1
vector(unsigned(4)),intent(in)::arg2
vector(unsigned(1))::elem_func_vu1vu1vu4
end
end interface
private::elem_func_vu2vu2vu1
abstract interface
elemental function elem_func_vu2vu2vu1(arg1,arg2)
vector(unsigned(2)),intent(in)::arg1
vector(unsigned(1)),intent(in)::arg2
vector(unsigned(2))::elem_func_vu2vu2vu1
end
end interface
private::elem_func_vu2vu2vu4
abstract interface
elemental function elem_func_vu2vu2vu4(arg1,arg2)
vector(unsigned(2)),intent(in)::arg1
vector(unsigned(4)),intent(in)::arg2
vector(unsigned(2))::elem_func_vu2vu2vu4
end
end interface
private::elem_func_vu4vu4vu1
abstract interface
elemental function elem_func_vu4vu4vu1(arg1,arg2)
vector(unsigned(4)),intent(in)::arg1
vector(unsigned(1)),intent(in)::arg2
vector(unsigned(4))::elem_func_vu4vu4vu1
end
end interface
private::elem_func_vu4vu4vu2
abstract interface
elemental function elem_func_vu4vu4vu2(arg1,arg2)
vector(unsigned(4)),intent(in)::arg1
vector(unsigned(2)),intent(in)::arg2
vector(unsigned(4))::elem_func_vu4vu4vu2
end
end interface
private::elem_func_vr4vr4vu1
abstract interface
elemental function elem_func_vr4vr4vu1(arg1,arg2)
vector(real(4)),intent(in)::arg1
vector(unsigned(1)),intent(in)::arg2
vector(real(4))::elem_func_vr4vr4vu1
end
end interface
private::elem_func_vr4vr4vu2
abstract interface
elemental function elem_func_vr4vr4vu2(arg1,arg2)
vector(real(4)),intent(in)::arg1
vector(unsigned(2)),intent(in)::arg2
vector(real(4))::elem_func_vr4vr4vu2
end
end interface
private::elem_func_vr4vr4vr4
abstract interface
elemental function elem_func_vr4vr4vr4(arg1,arg2)
vector(real(4)),intent(in)::arg1
vector(real(4)),intent(in)::arg2
vector(real(4))::elem_func_vr4vr4vr4
end
end interface
private::elem_func_vr8vr8vr8
abstract interface
elemental function elem_func_vr8vr8vr8(arg1,arg2)
vector(real(8)),intent(in)::arg1
vector(real(8)),intent(in)::arg2
vector(real(8))::elem_func_vr8vr8vr8
end
end interface
private::elem_func_vu4vr4vr4
abstract interface
elemental function elem_func_vu4vr4vr4(arg1,arg2)
vector(real(4)),intent(in)::arg1
vector(real(4)),intent(in)::arg2
vector(unsigned(4))::elem_func_vu4vr4vr4
end
end interface
private::elem_func_vu8vr8vr8
abstract interface
elemental function elem_func_vu8vr8vr8(arg1,arg2)
vector(real(8)),intent(in)::arg1
vector(real(8)),intent(in)::arg2
vector(unsigned(8))::elem_func_vu8vr8vr8
end
end interface
private::elem_func_i4vi1vi1
abstract interface
elemental function elem_func_i4vi1vi1(arg1,arg2)
vector(integer(1)),intent(in)::arg1
vector(integer(1)),intent(in)::arg2
integer(4)::elem_func_i4vi1vi1
end
end interface
private::elem_func_i4vi2vi2
abstract interface
elemental function elem_func_i4vi2vi2(arg1,arg2)
vector(integer(2)),intent(in)::arg1
vector(integer(2)),intent(in)::arg2
integer(4)::elem_func_i4vi2vi2
end
end interface
private::elem_func_i4vi4vi4
abstract interface
elemental function elem_func_i4vi4vi4(arg1,arg2)
vector(integer(4)),intent(in)::arg1
vector(integer(4)),intent(in)::arg2
integer(4)::elem_func_i4vi4vi4
end
end interface
private::elem_func_i4vi8vi8
abstract interface
elemental function elem_func_i4vi8vi8(arg1,arg2)
vector(integer(8)),intent(in)::arg1
vector(integer(8)),intent(in)::arg2
integer(4)::elem_func_i4vi8vi8
end
end interface
private::elem_func_i4vu1vu1
abstract interface
elemental function elem_func_i4vu1vu1(arg1,arg2)
vector(unsigned(1)),intent(in)::arg1
vector(unsigned(1)),intent(in)::arg2
integer(4)::elem_func_i4vu1vu1
end
end interface
private::elem_func_i4vu2vu2
abstract interface
elemental function elem_func_i4vu2vu2(arg1,arg2)
vector(unsigned(2)),intent(in)::arg1
vector(unsigned(2)),intent(in)::arg2
integer(4)::elem_func_i4vu2vu2
end
end interface
private::elem_func_i4vu4vu4
abstract interface
elemental function elem_func_i4vu4vu4(arg1,arg2)
vector(unsigned(4)),intent(in)::arg1
vector(unsigned(4)),intent(in)::arg2
integer(4)::elem_func_i4vu4vu4
end
end interface
private::elem_func_i4vu8vu8
abstract interface
elemental function elem_func_i4vu8vu8(arg1,arg2)
vector(unsigned(8)),intent(in)::arg1
vector(unsigned(8)),intent(in)::arg2
integer(4)::elem_func_i4vu8vu8
end
end interface
private::elem_func_i4vr4vr4
abstract interface
elemental function elem_func_i4vr4vr4(arg1,arg2)
vector(real(4)),intent(in)::arg1
vector(real(4)),intent(in)::arg2
integer(4)::elem_func_i4vr4vr4
end
end interface
private::elem_func_i4vr8vr8
abstract interface
elemental function elem_func_i4vr8vr8(arg1,arg2)
vector(real(8)),intent(in)::arg1
vector(real(8)),intent(in)::arg2
integer(4)::elem_func_i4vr8vr8
end
end interface
private::elem_func_vr4vi4i
abstract interface
elemental function elem_func_vr4vi4i(arg1,arg2)
vector(integer(4)),intent(in)::arg1
integer(8),intent(in)::arg2
!dir$ ignore_tkr(k) arg2
vector(real(4))::elem_func_vr4vi4i
end
end interface
private::elem_func_vr8vi8i
abstract interface
elemental function elem_func_vr8vi8i(arg1,arg2)
vector(integer(8)),intent(in)::arg1
integer(8),intent(in)::arg2
!dir$ ignore_tkr(k) arg2
vector(real(8))::elem_func_vr8vi8i
end
end interface
private::elem_func_vr4vu4i
abstract interface
elemental function elem_func_vr4vu4i(arg1,arg2)
vector(unsigned(4)),intent(in)::arg1
integer(8),intent(in)::arg2
!dir$ ignore_tkr(k) arg2
vector(real(4))::elem_func_vr4vu4i
end
end interface
private::elem_func_vr8vu8i
abstract interface
elemental function elem_func_vr8vu8i(arg1,arg2)
vector(unsigned(8)),intent(in)::arg1
integer(8),intent(in)::arg2
!dir$ ignore_tkr(k) arg2
vector(real(8))::elem_func_vr8vu8i
end
end interface
private::elem_func_vi1vi1vi1vu1
abstract interface
elemental function elem_func_vi1vi1vi1vu1(arg1,arg2,arg3)
vector(integer(1)),intent(in)::arg1
vector(integer(1)),intent(in)::arg2
vector(unsigned(1)),intent(in)::arg3
vector(integer(1))::elem_func_vi1vi1vi1vu1
end
end interface
private::elem_func_vi2vi2vi2vu2
abstract interface
elemental function elem_func_vi2vi2vi2vu2(arg1,arg2,arg3)
vector(integer(2)),intent(in)::arg1
vector(integer(2)),intent(in)::arg2
vector(unsigned(2)),intent(in)::arg3
vector(integer(2))::elem_func_vi2vi2vi2vu2
end
end interface
private::elem_func_vi4vi4vi4vu4
abstract interface
elemental function elem_func_vi4vi4vi4vu4(arg1,arg2,arg3)
vector(integer(4)),intent(in)::arg1
vector(integer(4)),intent(in)::arg2
vector(unsigned(4)),intent(in)::arg3
vector(integer(4))::elem_func_vi4vi4vi4vu4
end
end interface
private::elem_func_vi8vi8vi8vu8
abstract interface
elemental function elem_func_vi8vi8vi8vu8(arg1,arg2,arg3)
vector(integer(8)),intent(in)::arg1
vector(integer(8)),intent(in)::arg2
vector(unsigned(8)),intent(in)::arg3
vector(integer(8))::elem_func_vi8vi8vi8vu8
end
end interface
private::elem_func_vu1vu1vu1vu1
abstract interface
elemental function elem_func_vu1vu1vu1vu1(arg1,arg2,arg3)
vector(unsigned(1)),intent(in)::arg1
vector(unsigned(1)),intent(in)::arg2
vector(unsigned(1)),intent(in)::arg3
vector(unsigned(1))::elem_func_vu1vu1vu1vu1
end
end interface
private::elem_func_vu2vu2vu2vu2
abstract interface
elemental function elem_func_vu2vu2vu2vu2(arg1,arg2,arg3)
vector(unsigned(2)),intent(in)::arg1
vector(unsigned(2)),intent(in)::arg2
vector(unsigned(2)),intent(in)::arg3
vector(unsigned(2))::elem_func_vu2vu2vu2vu2
end
end interface
private::elem_func_vu4vu4vu4vu4
abstract interface
elemental function elem_func_vu4vu4vu4vu4(arg1,arg2,arg3)
vector(unsigned(4)),intent(in)::arg1
vector(unsigned(4)),intent(in)::arg2
vector(unsigned(4)),intent(in)::arg3
vector(unsigned(4))::elem_func_vu4vu4vu4vu4
end
end interface
private::elem_func_vu8vu8vu8vu8
abstract interface
elemental function elem_func_vu8vu8vu8vu8(arg1,arg2,arg3)
vector(unsigned(8)),intent(in)::arg1
vector(unsigned(8)),intent(in)::arg2
vector(unsigned(8)),intent(in)::arg3
vector(unsigned(8))::elem_func_vu8vu8vu8vu8
end
end interface
private::elem_func_vr4vr4vr4vu4
abstract interface
elemental function elem_func_vr4vr4vr4vu4(arg1,arg2,arg3)
vector(real(4)),intent(in)::arg1
vector(real(4)),intent(in)::arg2
vector(unsigned(4)),intent(in)::arg3
vector(real(4))::elem_func_vr4vr4vr4vu4
end
end interface
private::elem_func_vr8vr8vr8vu8
abstract interface
elemental function elem_func_vr8vr8vr8vu8(arg1,arg2,arg3)
vector(real(8)),intent(in)::arg1
vector(real(8)),intent(in)::arg2
vector(unsigned(8)),intent(in)::arg3
vector(real(8))::elem_func_vr8vr8vr8vu8
end
end interface
private::elem_func_vr4vr4vr4vr4
abstract interface
elemental function elem_func_vr4vr4vr4vr4(arg1,arg2,arg3)
vector(real(4)),intent(in)::arg1
vector(real(4)),intent(in)::arg2
vector(real(4)),intent(in)::arg3
vector(real(4))::elem_func_vr4vr4vr4vr4
end
end interface
private::elem_func_vr8vr8vr8vr8
abstract interface
elemental function elem_func_vr8vr8vr8vr8(arg1,arg2,arg3)
vector(real(8)),intent(in)::arg1
vector(real(8)),intent(in)::arg2
vector(real(8)),intent(in)::arg3
vector(real(8))::elem_func_vr8vr8vr8vr8
end
end interface
private::elem_func_vi1vi1vi1i
abstract interface
elemental function elem_func_vi1vi1vi1i(arg1,arg2,arg3)
vector(integer(1)),intent(in)::arg1
vector(integer(1)),intent(in)::arg2
integer(8),intent(in)::arg3
!dir$ ignore_tkr(k) arg3
vector(integer(1))::elem_func_vi1vi1vi1i
end
end interface
private::elem_func_vi2vi2vi2i
abstract interface
elemental function elem_func_vi2vi2vi2i(arg1,arg2,arg3)
vector(integer(2)),intent(in)::arg1
vector(integer(2)),intent(in)::arg2
integer(8),intent(in)::arg3
!dir$ ignore_tkr(k) arg3
vector(integer(2))::elem_func_vi2vi2vi2i
end
end interface
private::elem_func_vi4vi4vi4i
abstract interface
elemental function elem_func_vi4vi4vi4i(arg1,arg2,arg3)
vector(integer(4)),intent(in)::arg1
vector(integer(4)),intent(in)::arg2
integer(8),intent(in)::arg3
!dir$ ignore_tkr(k) arg3
vector(integer(4))::elem_func_vi4vi4vi4i
end
end interface
private::elem_func_vi8vi8vi8i
abstract interface
elemental function elem_func_vi8vi8vi8i(arg1,arg2,arg3)
vector(integer(8)),intent(in)::arg1
vector(integer(8)),intent(in)::arg2
integer(8),intent(in)::arg3
!dir$ ignore_tkr(k) arg3
vector(integer(8))::elem_func_vi8vi8vi8i
end
end interface
private::elem_func_vu1vu1vu1i
abstract interface
elemental function elem_func_vu1vu1vu1i(arg1,arg2,arg3)
vector(unsigned(1)),intent(in)::arg1
vector(unsigned(1)),intent(in)::arg2
integer(8),intent(in)::arg3
!dir$ ignore_tkr(k) arg3
vector(unsigned(1))::elem_func_vu1vu1vu1i
end
end interface
private::elem_func_vu2vu2vu2i
abstract interface
elemental function elem_func_vu2vu2vu2i(arg1,arg2,arg3)
vector(unsigned(2)),intent(in)::arg1
vector(unsigned(2)),intent(in)::arg2
integer(8),intent(in)::arg3
!dir$ ignore_tkr(k) arg3
vector(unsigned(2))::elem_func_vu2vu2vu2i
end
end interface
private::elem_func_vu4vu4vu4i
abstract interface
elemental function elem_func_vu4vu4vu4i(arg1,arg2,arg3)
vector(unsigned(4)),intent(in)::arg1
vector(unsigned(4)),intent(in)::arg2
integer(8),intent(in)::arg3
!dir$ ignore_tkr(k) arg3
vector(unsigned(4))::elem_func_vu4vu4vu4i
end
end interface
private::elem_func_vu8vu8vu8i
abstract interface
elemental function elem_func_vu8vu8vu8i(arg1,arg2,arg3)
vector(unsigned(8)),intent(in)::arg1
vector(unsigned(8)),intent(in)::arg2
integer(8),intent(in)::arg3
!dir$ ignore_tkr(k) arg3
vector(unsigned(8))::elem_func_vu8vu8vu8i
end
end interface
private::elem_func_vr4vr4vr4i
abstract interface
elemental function elem_func_vr4vr4vr4i(arg1,arg2,arg3)
vector(real(4)),intent(in)::arg1
vector(real(4)),intent(in)::arg2
integer(8),intent(in)::arg3
!dir$ ignore_tkr(k) arg3
vector(real(4))::elem_func_vr4vr4vr4i
end
end interface
private::elem_func_vr8vr8vr8i
abstract interface
elemental function elem_func_vr8vr8vr8i(arg1,arg2,arg3)
vector(real(8)),intent(in)::arg1
vector(real(8)),intent(in)::arg2
integer(8),intent(in)::arg3
!dir$ ignore_tkr(k) arg3
vector(real(8))::elem_func_vr8vr8vr8i
end
end interface
procedure(func_r4r4r4r4),private::__ppc_fmadd_r4
procedure(func_r8r8r8r8),private::__ppc_fmadd_r8
interface fmadd
procedure::__ppc_fmadd_r4
procedure::__ppc_fmadd_r8
end interface
procedure(func_r4r4r4r4),private::__ppc_fmsub_r4
procedure(func_r8r8r8r8),private::__ppc_fmsub_r8
interface fmsub
procedure::__ppc_fmsub_r4
procedure::__ppc_fmsub_r8
end interface
procedure(func_r4r4r4r4),private::__ppc_fnmadd_r4
procedure(func_r8r8r8r8),private::__ppc_fnmadd_r8
interface fnmadd
procedure::__ppc_fnmadd_r4
procedure::__ppc_fnmadd_r8
end interface
procedure(func_r4r4r4r4),private::__ppc_fnmsub_r4
procedure(func_r8r8r8r8),private::__ppc_fnmsub_r8
interface fnmsub
procedure::__ppc_fnmsub_r4
procedure::__ppc_fnmsub_r8
end interface
private::func_r4r4x
abstract interface
elemental function func_r4r4x(x)
real(4),intent(in)::x
real(4)::func_r4r4x
end
end interface
private::func_r8r8x
abstract interface
elemental function func_r8r8x(x)
real(8),intent(in)::x
real(8)::func_r8r8x
end
end interface
procedure(func_r8r8x),private::__ppc_fctid
interface fctid
procedure::__ppc_fctid
end interface
procedure(func_r8r8x),private::__ppc_fctidz
interface fctidz
procedure::__ppc_fctidz
end interface
procedure(func_r8r8x),private::__ppc_fctiw
interface fctiw
procedure::__ppc_fctiw
end interface
procedure(func_r8r8x),private::__ppc_fctiwz
interface fctiwz
procedure::__ppc_fctiwz
end interface
procedure(func_r8r8x),private::__ppc_fctudz
interface fctudz
procedure::__ppc_fctudz
end interface
procedure(func_r8r8x),private::__ppc_fctuwz
interface fctuwz
procedure::__ppc_fctuwz
end interface
private::func_r8r8i
abstract interface
elemental function func_r8r8i(i)
real(8),intent(in)::i
real(8)::func_r8r8i
end
end interface
procedure(func_r8r8i),private::__ppc_fcfi
interface fcfi
procedure::__ppc_fcfi
end interface
procedure(func_r8r8i),private::__ppc_fcfid
interface fcfid
procedure::__ppc_fcfid
end interface
procedure(func_r8r8i),private::__ppc_fcfud
interface fcfud
procedure::__ppc_fcfud
end interface
procedure(func_r4r4x),private::__ppc_fnabs_r4
procedure(func_r8r8x),private::__ppc_fnabs_r8
interface fnabs
procedure::__ppc_fnabs_r4
procedure::__ppc_fnabs_r8
end interface
procedure(func_r8r8x),private::__ppc_fre
interface fre
procedure::__ppc_fre
end interface
procedure(func_r4r4x),private::__ppc_fres
interface fres
procedure::__ppc_fres
end interface
procedure(func_r8r8x),private::__ppc_frsqrte
interface frsqrte
procedure::__ppc_frsqrte
end interface
procedure(func_r4r4x),private::__ppc_frsqrtes
interface frsqrtes
procedure::__ppc_frsqrtes
end interface
interface mtfsf
procedure::__ppc_mtfsf
end interface
private::__ppc_mtfsf
interface
subroutine __ppc_mtfsf(mask,r)
integer(4),intent(in)::mask
real(8),intent(in)::r
end
end interface
interface mtfsfi
procedure::__ppc_mtfsfi
end interface
private::__ppc_mtfsfi
interface
subroutine __ppc_mtfsfi(bf,i)
integer(4),intent(in)::bf
integer(4),intent(in)::i
end
end interface
procedure(elem_func_vi1vi1),private::__ppc_vec_abs_vi1vi1
procedure(elem_func_vi2vi2),private::__ppc_vec_abs_vi2vi2
procedure(elem_func_vi4vi4),private::__ppc_vec_abs_vi4vi4
procedure(elem_func_vi8vi8),private::__ppc_vec_abs_vi8vi8
procedure(elem_func_vr4vr4),private::__ppc_vec_abs_vr4vr4
procedure(elem_func_vr8vr8),private::__ppc_vec_abs_vr8vr8
interface vec_abs
procedure::__ppc_vec_abs_vi1vi1
procedure::__ppc_vec_abs_vi2vi2
procedure::__ppc_vec_abs_vi4vi4
procedure::__ppc_vec_abs_vi8vi8
procedure::__ppc_vec_abs_vr4vr4
procedure::__ppc_vec_abs_vr8vr8
end interface
procedure(elem_func_vr4vr8),private::__ppc_vec_cvf_vr4vr8
procedure(elem_func_vr8vr4),private::__ppc_vec_cvf_vr8vr4
interface vec_cvf
procedure::__ppc_vec_cvf_vr4vr8
procedure::__ppc_vec_cvf_vr8vr4
end interface
procedure(elem_func_vi1vi1vi1),private::__ppc_vec_add_vi1vi1vi1
procedure(elem_func_vi2vi2vi2),private::__ppc_vec_add_vi2vi2vi2
procedure(elem_func_vi4vi4vi4),private::__ppc_vec_add_vi4vi4vi4
procedure(elem_func_vi8vi8vi8),private::__ppc_vec_add_vi8vi8vi8
procedure(elem_func_vu1vu1vu1),private::__ppc_vec_add_vu1vu1vu1
procedure(elem_func_vu2vu2vu2),private::__ppc_vec_add_vu2vu2vu2
procedure(elem_func_vu4vu4vu4),private::__ppc_vec_add_vu4vu4vu4
procedure(elem_func_vu8vu8vu8),private::__ppc_vec_add_vu8vu8vu8
procedure(elem_func_vr4vr4vr4),private::__ppc_vec_add_vr4vr4vr4
procedure(elem_func_vr8vr8vr8),private::__ppc_vec_add_vr8vr8vr8
interface vec_add
procedure::__ppc_vec_add_vi1vi1vi1
procedure::__ppc_vec_add_vi2vi2vi2
procedure::__ppc_vec_add_vi4vi4vi4
procedure::__ppc_vec_add_vi8vi8vi8
procedure::__ppc_vec_add_vu1vu1vu1
procedure::__ppc_vec_add_vu2vu2vu2
procedure::__ppc_vec_add_vu4vu4vu4
procedure::__ppc_vec_add_vu8vu8vu8
procedure::__ppc_vec_add_vr4vr4vr4
procedure::__ppc_vec_add_vr8vr8vr8
end interface
procedure(elem_func_vi1vi1vi1),private::__ppc_vec_and_vi1vi1vi1
procedure(elem_func_vi2vi2vi2),private::__ppc_vec_and_vi2vi2vi2
procedure(elem_func_vi4vi4vi4),private::__ppc_vec_and_vi4vi4vi4
procedure(elem_func_vi8vi8vi8),private::__ppc_vec_and_vi8vi8vi8
procedure(elem_func_vu1vu1vu1),private::__ppc_vec_and_vu1vu1vu1
procedure(elem_func_vu2vu2vu2),private::__ppc_vec_and_vu2vu2vu2
procedure(elem_func_vu4vu4vu4),private::__ppc_vec_and_vu4vu4vu4
procedure(elem_func_vu8vu8vu8),private::__ppc_vec_and_vu8vu8vu8
procedure(elem_func_vr4vr4vr4),private::__ppc_vec_and_vr4vr4vr4
procedure(elem_func_vr8vr8vr8),private::__ppc_vec_and_vr8vr8vr8
interface vec_and
procedure::__ppc_vec_and_vi1vi1vi1
procedure::__ppc_vec_and_vi2vi2vi2
procedure::__ppc_vec_and_vi4vi4vi4
procedure::__ppc_vec_and_vi8vi8vi8
procedure::__ppc_vec_and_vu1vu1vu1
procedure::__ppc_vec_and_vu2vu2vu2
procedure::__ppc_vec_and_vu4vu4vu4
procedure::__ppc_vec_and_vu8vu8vu8
procedure::__ppc_vec_and_vr4vr4vr4
procedure::__ppc_vec_and_vr8vr8vr8
end interface
procedure(elem_func_vu1vi1vi1),private::__ppc_vec_cmpge_vu1vi1vi1
procedure(elem_func_vu2vi2vi2),private::__ppc_vec_cmpge_vu2vi2vi2
procedure(elem_func_vu4vi4vi4),private::__ppc_vec_cmpge_vu4vi4vi4
procedure(elem_func_vu8vi8vi8),private::__ppc_vec_cmpge_vu8vi8vi8
procedure(elem_func_vu1vu1vu1),private::__ppc_vec_cmpge_vu1vu1vu1
procedure(elem_func_vu2vu2vu2),private::__ppc_vec_cmpge_vu2vu2vu2
procedure(elem_func_vu4vu4vu4),private::__ppc_vec_cmpge_vu4vu4vu4
procedure(elem_func_vu8vu8vu8),private::__ppc_vec_cmpge_vu8vu8vu8
procedure(elem_func_vu4vr4vr4),private::__ppc_vec_cmpge_vu4vr4vr4
procedure(elem_func_vu8vr8vr8),private::__ppc_vec_cmpge_vu8vr8vr8
interface vec_cmpge
procedure::__ppc_vec_cmpge_vu1vi1vi1
procedure::__ppc_vec_cmpge_vu2vi2vi2
procedure::__ppc_vec_cmpge_vu4vi4vi4
procedure::__ppc_vec_cmpge_vu8vi8vi8
procedure::__ppc_vec_cmpge_vu1vu1vu1
procedure::__ppc_vec_cmpge_vu2vu2vu2
procedure::__ppc_vec_cmpge_vu4vu4vu4
procedure::__ppc_vec_cmpge_vu8vu8vu8
procedure::__ppc_vec_cmpge_vu4vr4vr4
procedure::__ppc_vec_cmpge_vu8vr8vr8
end interface
procedure(elem_func_vu1vi1vi1),private::__ppc_vec_cmpgt_vu1vi1vi1
procedure(elem_func_vu2vi2vi2),private::__ppc_vec_cmpgt_vu2vi2vi2
procedure(elem_func_vu4vi4vi4),private::__ppc_vec_cmpgt_vu4vi4vi4
procedure(elem_func_vu8vi8vi8),private::__ppc_vec_cmpgt_vu8vi8vi8
procedure(elem_func_vu1vu1vu1),private::__ppc_vec_cmpgt_vu1vu1vu1
procedure(elem_func_vu2vu2vu2),private::__ppc_vec_cmpgt_vu2vu2vu2
procedure(elem_func_vu4vu4vu4),private::__ppc_vec_cmpgt_vu4vu4vu4
procedure(elem_func_vu8vu8vu8),private::__ppc_vec_cmpgt_vu8vu8vu8
procedure(elem_func_vu4vr4vr4),private::__ppc_vec_cmpgt_vu4vr4vr4
procedure(elem_func_vu8vr8vr8),private::__ppc_vec_cmpgt_vu8vr8vr8
interface vec_cmpgt
procedure::__ppc_vec_cmpgt_vu1vi1vi1
procedure::__ppc_vec_cmpgt_vu2vi2vi2
procedure::__ppc_vec_cmpgt_vu4vi4vi4
procedure::__ppc_vec_cmpgt_vu8vi8vi8
procedure::__ppc_vec_cmpgt_vu1vu1vu1
procedure::__ppc_vec_cmpgt_vu2vu2vu2
procedure::__ppc_vec_cmpgt_vu4vu4vu4
procedure::__ppc_vec_cmpgt_vu8vu8vu8
procedure::__ppc_vec_cmpgt_vu4vr4vr4
procedure::__ppc_vec_cmpgt_vu8vr8vr8
end interface
procedure(elem_func_vu1vi1vi1),private::__ppc_vec_cmple_vu1vi1vi1
procedure(elem_func_vu2vi2vi2),private::__ppc_vec_cmple_vu2vi2vi2
procedure(elem_func_vu4vi4vi4),private::__ppc_vec_cmple_vu4vi4vi4
procedure(elem_func_vu8vi8vi8),private::__ppc_vec_cmple_vu8vi8vi8
procedure(elem_func_vu1vu1vu1),private::__ppc_vec_cmple_vu1vu1vu1
procedure(elem_func_vu2vu2vu2),private::__ppc_vec_cmple_vu2vu2vu2
procedure(elem_func_vu4vu4vu4),private::__ppc_vec_cmple_vu4vu4vu4
procedure(elem_func_vu8vu8vu8),private::__ppc_vec_cmple_vu8vu8vu8
procedure(elem_func_vu4vr4vr4),private::__ppc_vec_cmple_vu4vr4vr4
procedure(elem_func_vu8vr8vr8),private::__ppc_vec_cmple_vu8vr8vr8
interface vec_cmple
procedure::__ppc_vec_cmple_vu1vi1vi1
procedure::__ppc_vec_cmple_vu2vi2vi2
procedure::__ppc_vec_cmple_vu4vi4vi4
procedure::__ppc_vec_cmple_vu8vi8vi8
procedure::__ppc_vec_cmple_vu1vu1vu1
procedure::__ppc_vec_cmple_vu2vu2vu2
procedure::__ppc_vec_cmple_vu4vu4vu4
procedure::__ppc_vec_cmple_vu8vu8vu8
procedure::__ppc_vec_cmple_vu4vr4vr4
procedure::__ppc_vec_cmple_vu8vr8vr8
end interface
procedure(elem_func_vu1vi1vi1),private::__ppc_vec_cmplt_vu1vi1vi1
procedure(elem_func_vu2vi2vi2),private::__ppc_vec_cmplt_vu2vi2vi2
procedure(elem_func_vu4vi4vi4),private::__ppc_vec_cmplt_vu4vi4vi4
procedure(elem_func_vu8vi8vi8),private::__ppc_vec_cmplt_vu8vi8vi8
procedure(elem_func_vu1vu1vu1),private::__ppc_vec_cmplt_vu1vu1vu1
procedure(elem_func_vu2vu2vu2),private::__ppc_vec_cmplt_vu2vu2vu2
procedure(elem_func_vu4vu4vu4),private::__ppc_vec_cmplt_vu4vu4vu4
procedure(elem_func_vu8vu8vu8),private::__ppc_vec_cmplt_vu8vu8vu8
procedure(elem_func_vu4vr4vr4),private::__ppc_vec_cmplt_vu4vr4vr4
procedure(elem_func_vu8vr8vr8),private::__ppc_vec_cmplt_vu8vr8vr8
interface vec_cmplt
procedure::__ppc_vec_cmplt_vu1vi1vi1
procedure::__ppc_vec_cmplt_vu2vi2vi2
procedure::__ppc_vec_cmplt_vu4vi4vi4
procedure::__ppc_vec_cmplt_vu8vi8vi8
procedure::__ppc_vec_cmplt_vu1vu1vu1
procedure::__ppc_vec_cmplt_vu2vu2vu2
procedure::__ppc_vec_cmplt_vu4vu4vu4
procedure::__ppc_vec_cmplt_vu8vu8vu8
procedure::__ppc_vec_cmplt_vu4vr4vr4
procedure::__ppc_vec_cmplt_vu8vr8vr8
end interface
procedure(func_vec_convert_vi1vivi1),private::__ppc_vec_convert_vi1vivi1
procedure(func_vec_convert_vi2vivi2),private::__ppc_vec_convert_vi2vivi2
procedure(func_vec_convert_vi4vivi4),private::__ppc_vec_convert_vi4vivi4
procedure(func_vec_convert_vi8vivi8),private::__ppc_vec_convert_vi8vivi8
procedure(func_vec_convert_vu1vivu1),private::__ppc_vec_convert_vu1vivu1
procedure(func_vec_convert_vu2vivu2),private::__ppc_vec_convert_vu2vivu2
procedure(func_vec_convert_vu4vivu4),private::__ppc_vec_convert_vu4vivu4
procedure(func_vec_convert_vu8vivu8),private::__ppc_vec_convert_vu8vivu8
procedure(func_vec_convert_vr4vivr4),private::__ppc_vec_convert_vr4vivr4
procedure(func_vec_convert_vr8vivr8),private::__ppc_vec_convert_vr8vivr8
interface vec_convert
procedure::__ppc_vec_convert_vi1vivi1
procedure::__ppc_vec_convert_vi2vivi2
procedure::__ppc_vec_convert_vi4vivi4
procedure::__ppc_vec_convert_vi8vivi8
procedure::__ppc_vec_convert_vu1vivu1
procedure::__ppc_vec_convert_vu2vivu2
procedure::__ppc_vec_convert_vu4vivu4
procedure::__ppc_vec_convert_vu8vivu8
procedure::__ppc_vec_convert_vr4vivr4
procedure::__ppc_vec_convert_vr8vivr8
end interface
procedure(elem_func_vi1vi1vi1),private::__ppc_vec_max_vi1vi1vi1
procedure(elem_func_vi2vi2vi2),private::__ppc_vec_max_vi2vi2vi2
procedure(elem_func_vi4vi4vi4),private::__ppc_vec_max_vi4vi4vi4
procedure(elem_func_vi8vi8vi8),private::__ppc_vec_max_vi8vi8vi8
procedure(elem_func_vu1vu1vu1),private::__ppc_vec_max_vu1vu1vu1
procedure(elem_func_vu2vu2vu2),private::__ppc_vec_max_vu2vu2vu2
procedure(elem_func_vu4vu4vu4),private::__ppc_vec_max_vu4vu4vu4
procedure(elem_func_vu8vu8vu8),private::__ppc_vec_max_vu8vu8vu8
procedure(elem_func_vr4vr4vr4),private::__ppc_vec_max_vr4vr4vr4
procedure(elem_func_vr8vr8vr8),private::__ppc_vec_max_vr8vr8vr8
interface vec_max
procedure::__ppc_vec_max_vi1vi1vi1
procedure::__ppc_vec_max_vi2vi2vi2
procedure::__ppc_vec_max_vi4vi4vi4
procedure::__ppc_vec_max_vi8vi8vi8
procedure::__ppc_vec_max_vu1vu1vu1
procedure::__ppc_vec_max_vu2vu2vu2
procedure::__ppc_vec_max_vu4vu4vu4
procedure::__ppc_vec_max_vu8vu8vu8
procedure::__ppc_vec_max_vr4vr4vr4
procedure::__ppc_vec_max_vr8vr8vr8
end interface
procedure(elem_func_vi1vi1vi1),private::__ppc_vec_min_vi1vi1vi1
procedure(elem_func_vi2vi2vi2),private::__ppc_vec_min_vi2vi2vi2
procedure(elem_func_vi4vi4vi4),private::__ppc_vec_min_vi4vi4vi4
procedure(elem_func_vi8vi8vi8),private::__ppc_vec_min_vi8vi8vi8
procedure(elem_func_vu1vu1vu1),private::__ppc_vec_min_vu1vu1vu1
procedure(elem_func_vu2vu2vu2),private::__ppc_vec_min_vu2vu2vu2
procedure(elem_func_vu4vu4vu4),private::__ppc_vec_min_vu4vu4vu4
procedure(elem_func_vu8vu8vu8),private::__ppc_vec_min_vu8vu8vu8
procedure(elem_func_vr4vr4vr4),private::__ppc_vec_min_vr4vr4vr4
procedure(elem_func_vr8vr8vr8),private::__ppc_vec_min_vr8vr8vr8
interface vec_min
procedure::__ppc_vec_min_vi1vi1vi1
procedure::__ppc_vec_min_vi2vi2vi2
procedure::__ppc_vec_min_vi4vi4vi4
procedure::__ppc_vec_min_vi8vi8vi8
procedure::__ppc_vec_min_vu1vu1vu1
procedure::__ppc_vec_min_vu2vu2vu2
procedure::__ppc_vec_min_vu4vu4vu4
procedure::__ppc_vec_min_vu8vu8vu8
procedure::__ppc_vec_min_vr4vr4vr4
procedure::__ppc_vec_min_vr8vr8vr8
end interface
procedure(elem_func_vi1vi1vi1),private::__ppc_vec_mul_vi1vi1vi1
procedure(elem_func_vi2vi2vi2),private::__ppc_vec_mul_vi2vi2vi2
procedure(elem_func_vi4vi4vi4),private::__ppc_vec_mul_vi4vi4vi4
procedure(elem_func_vi8vi8vi8),private::__ppc_vec_mul_vi8vi8vi8
procedure(elem_func_vu1vu1vu1),private::__ppc_vec_mul_vu1vu1vu1
procedure(elem_func_vu2vu2vu2),private::__ppc_vec_mul_vu2vu2vu2
procedure(elem_func_vu4vu4vu4),private::__ppc_vec_mul_vu4vu4vu4
procedure(elem_func_vu8vu8vu8),private::__ppc_vec_mul_vu8vu8vu8
procedure(elem_func_vr4vr4vr4),private::__ppc_vec_mul_vr4vr4vr4
procedure(elem_func_vr8vr8vr8),private::__ppc_vec_mul_vr8vr8vr8
interface vec_mul
procedure::__ppc_vec_mul_vi1vi1vi1
procedure::__ppc_vec_mul_vi2vi2vi2
procedure::__ppc_vec_mul_vi4vi4vi4
procedure::__ppc_vec_mul_vi8vi8vi8
procedure::__ppc_vec_mul_vu1vu1vu1
procedure::__ppc_vec_mul_vu2vu2vu2
procedure::__ppc_vec_mul_vu4vu4vu4
procedure::__ppc_vec_mul_vu8vu8vu8
procedure::__ppc_vec_mul_vr4vr4vr4
procedure::__ppc_vec_mul_vr8vr8vr8
end interface
procedure(elem_func_vi1vi1vi1),private::__ppc_vec_sub_vi1vi1vi1
procedure(elem_func_vi2vi2vi2),private::__ppc_vec_sub_vi2vi2vi2
procedure(elem_func_vi4vi4vi4),private::__ppc_vec_sub_vi4vi4vi4
procedure(elem_func_vi8vi8vi8),private::__ppc_vec_sub_vi8vi8vi8
procedure(elem_func_vu1vu1vu1),private::__ppc_vec_sub_vu1vu1vu1
procedure(elem_func_vu2vu2vu2),private::__ppc_vec_sub_vu2vu2vu2
procedure(elem_func_vu4vu4vu4),private::__ppc_vec_sub_vu4vu4vu4
procedure(elem_func_vu8vu8vu8),private::__ppc_vec_sub_vu8vu8vu8
procedure(elem_func_vr4vr4vr4),private::__ppc_vec_sub_vr4vr4vr4
procedure(elem_func_vr8vr8vr8),private::__ppc_vec_sub_vr8vr8vr8
interface vec_sub
procedure::__ppc_vec_sub_vi1vi1vi1
procedure::__ppc_vec_sub_vi2vi2vi2
procedure::__ppc_vec_sub_vi4vi4vi4
procedure::__ppc_vec_sub_vi8vi8vi8
procedure::__ppc_vec_sub_vu1vu1vu1
procedure::__ppc_vec_sub_vu2vu2vu2
procedure::__ppc_vec_sub_vu4vu4vu4
procedure::__ppc_vec_sub_vu8vu8vu8
procedure::__ppc_vec_sub_vr4vr4vr4
procedure::__ppc_vec_sub_vr8vr8vr8
end interface
procedure(elem_func_vi1vi1vu1),private::__ppc_vec_sl_vi1vi1vu1
procedure(elem_func_vi2vi2vu2),private::__ppc_vec_sl_vi2vi2vu2
procedure(elem_func_vi4vi4vu4),private::__ppc_vec_sl_vi4vi4vu4
procedure(elem_func_vi8vi8vu8),private::__ppc_vec_sl_vi8vi8vu8
procedure(elem_func_vu1vu1vu1),private::__ppc_vec_sl_vu1vu1vu1
procedure(elem_func_vu2vu2vu2),private::__ppc_vec_sl_vu2vu2vu2
procedure(elem_func_vu4vu4vu4),private::__ppc_vec_sl_vu4vu4vu4
procedure(elem_func_vu8vu8vu8),private::__ppc_vec_sl_vu8vu8vu8
interface vec_sl
procedure::__ppc_vec_sl_vi1vi1vu1
procedure::__ppc_vec_sl_vi2vi2vu2
procedure::__ppc_vec_sl_vi4vi4vu4
procedure::__ppc_vec_sl_vi8vi8vu8
procedure::__ppc_vec_sl_vu1vu1vu1
procedure::__ppc_vec_sl_vu2vu2vu2
procedure::__ppc_vec_sl_vu4vu4vu4
procedure::__ppc_vec_sl_vu8vu8vu8
end interface
procedure(elem_func_vi1vi1vu1),private::__ppc_vec_sll_vi1vi1vu1
procedure(elem_func_vi2vi2vu1),private::__ppc_vec_sll_vi2vi2vu1
procedure(elem_func_vi4vi4vu1),private::__ppc_vec_sll_vi4vi4vu1
procedure(elem_func_vi1vi1vu2),private::__ppc_vec_sll_vi1vi1vu2
procedure(elem_func_vi2vi2vu2),private::__ppc_vec_sll_vi2vi2vu2
procedure(elem_func_vi4vi4vu2),private::__ppc_vec_sll_vi4vi4vu2
procedure(elem_func_vi1vi1vu4),private::__ppc_vec_sll_vi1vi1vu4
procedure(elem_func_vi2vi2vu4),private::__ppc_vec_sll_vi2vi2vu4
procedure(elem_func_vi4vi4vu4),private::__ppc_vec_sll_vi4vi4vu4
procedure(elem_func_vu1vu1vu1),private::__ppc_vec_sll_vu1vu1vu1
procedure(elem_func_vu2vu2vu1),private::__ppc_vec_sll_vu2vu2vu1
procedure(elem_func_vu4vu4vu1),private::__ppc_vec_sll_vu4vu4vu1
procedure(elem_func_vu1vu1vu2),private::__ppc_vec_sll_vu1vu1vu2
procedure(elem_func_vu2vu2vu2),private::__ppc_vec_sll_vu2vu2vu2
procedure(elem_func_vu4vu4vu2),private::__ppc_vec_sll_vu4vu4vu2
procedure(elem_func_vu1vu1vu4),private::__ppc_vec_sll_vu1vu1vu4
procedure(elem_func_vu2vu2vu4),private::__ppc_vec_sll_vu2vu2vu4
procedure(elem_func_vu4vu4vu4),private::__ppc_vec_sll_vu4vu4vu4
interface vec_sll
procedure::__ppc_vec_sll_vi1vi1vu1
procedure::__ppc_vec_sll_vi2vi2vu1
procedure::__ppc_vec_sll_vi4vi4vu1
procedure::__ppc_vec_sll_vi1vi1vu2
procedure::__ppc_vec_sll_vi2vi2vu2
procedure::__ppc_vec_sll_vi4vi4vu2
procedure::__ppc_vec_sll_vi1vi1vu4
procedure::__ppc_vec_sll_vi2vi2vu4
procedure::__ppc_vec_sll_vi4vi4vu4
procedure::__ppc_vec_sll_vu1vu1vu1
procedure::__ppc_vec_sll_vu2vu2vu1
procedure::__ppc_vec_sll_vu4vu4vu1
procedure::__ppc_vec_sll_vu1vu1vu2
procedure::__ppc_vec_sll_vu2vu2vu2
procedure::__ppc_vec_sll_vu4vu4vu2
procedure::__ppc_vec_sll_vu1vu1vu4
procedure::__ppc_vec_sll_vu2vu2vu4
procedure::__ppc_vec_sll_vu4vu4vu4
end interface
procedure(elem_func_vi1vi1vu1),private::__ppc_vec_slo_vi1vi1vu1
procedure(elem_func_vi2vi2vu1),private::__ppc_vec_slo_vi2vi2vu1
procedure(elem_func_vi4vi4vu1),private::__ppc_vec_slo_vi4vi4vu1
procedure(elem_func_vi1vi1vu2),private::__ppc_vec_slo_vi1vi1vu2
procedure(elem_func_vi2vi2vu2),private::__ppc_vec_slo_vi2vi2vu2
procedure(elem_func_vi4vi4vu2),private::__ppc_vec_slo_vi4vi4vu2
procedure(elem_func_vu1vu1vu1),private::__ppc_vec_slo_vu1vu1vu1
procedure(elem_func_vu2vu2vu1),private::__ppc_vec_slo_vu2vu2vu1
procedure(elem_func_vu4vu4vu1),private::__ppc_vec_slo_vu4vu4vu1
procedure(elem_func_vu1vu1vu2),private::__ppc_vec_slo_vu1vu1vu2
procedure(elem_func_vu2vu2vu2),private::__ppc_vec_slo_vu2vu2vu2
procedure(elem_func_vu4vu4vu2),private::__ppc_vec_slo_vu4vu4vu2
procedure(elem_func_vr4vr4vu1),private::__ppc_vec_slo_vr4vr4vu1
procedure(elem_func_vr4vr4vu2),private::__ppc_vec_slo_vr4vr4vu2
interface vec_slo
procedure::__ppc_vec_slo_vi1vi1vu1
procedure::__ppc_vec_slo_vi2vi2vu1
procedure::__ppc_vec_slo_vi4vi4vu1
procedure::__ppc_vec_slo_vi1vi1vu2
procedure::__ppc_vec_slo_vi2vi2vu2
procedure::__ppc_vec_slo_vi4vi4vu2
procedure::__ppc_vec_slo_vu1vu1vu1
procedure::__ppc_vec_slo_vu2vu2vu1
procedure::__ppc_vec_slo_vu4vu4vu1
procedure::__ppc_vec_slo_vu1vu1vu2
procedure::__ppc_vec_slo_vu2vu2vu2
procedure::__ppc_vec_slo_vu4vu4vu2
procedure::__ppc_vec_slo_vr4vr4vu1
procedure::__ppc_vec_slo_vr4vr4vu2
end interface
procedure(elem_func_vi1vi1vu1),private::__ppc_vec_sr_vi1vi1vu1
procedure(elem_func_vi2vi2vu2),private::__ppc_vec_sr_vi2vi2vu2
procedure(elem_func_vi4vi4vu4),private::__ppc_vec_sr_vi4vi4vu4
procedure(elem_func_vi8vi8vu8),private::__ppc_vec_sr_vi8vi8vu8
procedure(elem_func_vu1vu1vu1),private::__ppc_vec_sr_vu1vu1vu1
procedure(elem_func_vu2vu2vu2),private::__ppc_vec_sr_vu2vu2vu2
procedure(elem_func_vu4vu4vu4),private::__ppc_vec_sr_vu4vu4vu4
procedure(elem_func_vu8vu8vu8),private::__ppc_vec_sr_vu8vu8vu8
interface vec_sr
procedure::__ppc_vec_sr_vi1vi1vu1
procedure::__ppc_vec_sr_vi2vi2vu2
procedure::__ppc_vec_sr_vi4vi4vu4
procedure::__ppc_vec_sr_vi8vi8vu8
procedure::__ppc_vec_sr_vu1vu1vu1
procedure::__ppc_vec_sr_vu2vu2vu2
procedure::__ppc_vec_sr_vu4vu4vu4
procedure::__ppc_vec_sr_vu8vu8vu8
end interface
procedure(elem_func_vi1vi1vu1),private::__ppc_vec_srl_vi1vi1vu1
procedure(elem_func_vi2vi2vu1),private::__ppc_vec_srl_vi2vi2vu1
procedure(elem_func_vi4vi4vu1),private::__ppc_vec_srl_vi4vi4vu1
procedure(elem_func_vi1vi1vu2),private::__ppc_vec_srl_vi1vi1vu2
procedure(elem_func_vi2vi2vu2),private::__ppc_vec_srl_vi2vi2vu2
procedure(elem_func_vi4vi4vu2),private::__ppc_vec_srl_vi4vi4vu2
procedure(elem_func_vi1vi1vu4),private::__ppc_vec_srl_vi1vi1vu4
procedure(elem_func_vi2vi2vu4),private::__ppc_vec_srl_vi2vi2vu4
procedure(elem_func_vi4vi4vu4),private::__ppc_vec_srl_vi4vi4vu4
procedure(elem_func_vu1vu1vu1),private::__ppc_vec_srl_vu1vu1vu1
procedure(elem_func_vu2vu2vu1),private::__ppc_vec_srl_vu2vu2vu1
procedure(elem_func_vu4vu4vu1),private::__ppc_vec_srl_vu4vu4vu1
procedure(elem_func_vu1vu1vu2),private::__ppc_vec_srl_vu1vu1vu2
procedure(elem_func_vu2vu2vu2),private::__ppc_vec_srl_vu2vu2vu2
procedure(elem_func_vu4vu4vu2),private::__ppc_vec_srl_vu4vu4vu2
procedure(elem_func_vu1vu1vu4),private::__ppc_vec_srl_vu1vu1vu4
procedure(elem_func_vu2vu2vu4),private::__ppc_vec_srl_vu2vu2vu4
procedure(elem_func_vu4vu4vu4),private::__ppc_vec_srl_vu4vu4vu4
interface vec_srl
procedure::__ppc_vec_srl_vi1vi1vu1
procedure::__ppc_vec_srl_vi2vi2vu1
procedure::__ppc_vec_srl_vi4vi4vu1
procedure::__ppc_vec_srl_vi1vi1vu2
procedure::__ppc_vec_srl_vi2vi2vu2
procedure::__ppc_vec_srl_vi4vi4vu2
procedure::__ppc_vec_srl_vi1vi1vu4
procedure::__ppc_vec_srl_vi2vi2vu4
procedure::__ppc_vec_srl_vi4vi4vu4
procedure::__ppc_vec_srl_vu1vu1vu1
procedure::__ppc_vec_srl_vu2vu2vu1
procedure::__ppc_vec_srl_vu4vu4vu1
procedure::__ppc_vec_srl_vu1vu1vu2
procedure::__ppc_vec_srl_vu2vu2vu2
procedure::__ppc_vec_srl_vu4vu4vu2
procedure::__ppc_vec_srl_vu1vu1vu4
procedure::__ppc_vec_srl_vu2vu2vu4
procedure::__ppc_vec_srl_vu4vu4vu4
end interface
procedure(elem_func_vi1vi1vu1),private::__ppc_vec_sro_vi1vi1vu1
procedure(elem_func_vi2vi2vu1),private::__ppc_vec_sro_vi2vi2vu1
procedure(elem_func_vi4vi4vu1),private::__ppc_vec_sro_vi4vi4vu1
procedure(elem_func_vi1vi1vu2),private::__ppc_vec_sro_vi1vi1vu2
procedure(elem_func_vi2vi2vu2),private::__ppc_vec_sro_vi2vi2vu2
procedure(elem_func_vi4vi4vu2),private::__ppc_vec_sro_vi4vi4vu2
procedure(elem_func_vu1vu1vu1),private::__ppc_vec_sro_vu1vu1vu1
procedure(elem_func_vu2vu2vu1),private::__ppc_vec_sro_vu2vu2vu1
procedure(elem_func_vu4vu4vu1),private::__ppc_vec_sro_vu4vu4vu1
procedure(elem_func_vu1vu1vu2),private::__ppc_vec_sro_vu1vu1vu2
procedure(elem_func_vu2vu2vu2),private::__ppc_vec_sro_vu2vu2vu2
procedure(elem_func_vu4vu4vu2),private::__ppc_vec_sro_vu4vu4vu2
procedure(elem_func_vr4vr4vu1),private::__ppc_vec_sro_vr4vr4vu1
procedure(elem_func_vr4vr4vu2),private::__ppc_vec_sro_vr4vr4vu2
interface vec_sro
procedure::__ppc_vec_sro_vi1vi1vu1
procedure::__ppc_vec_sro_vi2vi2vu1
procedure::__ppc_vec_sro_vi4vi4vu1
procedure::__ppc_vec_sro_vi1vi1vu2
procedure::__ppc_vec_sro_vi2vi2vu2
procedure::__ppc_vec_sro_vi4vi4vu2
procedure::__ppc_vec_sro_vu1vu1vu1
procedure::__ppc_vec_sro_vu2vu2vu1
procedure::__ppc_vec_sro_vu4vu4vu1
procedure::__ppc_vec_sro_vu1vu1vu2
procedure::__ppc_vec_sro_vu2vu2vu2
procedure::__ppc_vec_sro_vu4vu4vu2
procedure::__ppc_vec_sro_vr4vr4vu1
procedure::__ppc_vec_sro_vr4vr4vu2
end interface
procedure(elem_func_vi1vi1vi1),private::__ppc_vec_xor_vi1vi1vi1
procedure(elem_func_vi2vi2vi2),private::__ppc_vec_xor_vi2vi2vi2
procedure(elem_func_vi4vi4vi4),private::__ppc_vec_xor_vi4vi4vi4
procedure(elem_func_vi8vi8vi8),private::__ppc_vec_xor_vi8vi8vi8
procedure(elem_func_vu1vu1vu1),private::__ppc_vec_xor_vu1vu1vu1
procedure(elem_func_vu2vu2vu2),private::__ppc_vec_xor_vu2vu2vu2
procedure(elem_func_vu4vu4vu4),private::__ppc_vec_xor_vu4vu4vu4
procedure(elem_func_vu8vu8vu8),private::__ppc_vec_xor_vu8vu8vu8
procedure(elem_func_vr4vr4vr4),private::__ppc_vec_xor_vr4vr4vr4
procedure(elem_func_vr8vr8vr8),private::__ppc_vec_xor_vr8vr8vr8
interface vec_xor
procedure::__ppc_vec_xor_vi1vi1vi1
procedure::__ppc_vec_xor_vi2vi2vi2
procedure::__ppc_vec_xor_vi4vi4vi4
procedure::__ppc_vec_xor_vi8vi8vi8
procedure::__ppc_vec_xor_vu1vu1vu1
procedure::__ppc_vec_xor_vu2vu2vu2
procedure::__ppc_vec_xor_vu4vu4vu4
procedure::__ppc_vec_xor_vu8vu8vu8
procedure::__ppc_vec_xor_vr4vr4vr4
procedure::__ppc_vec_xor_vr8vr8vr8
end interface
procedure(elem_func_vr4vr4vr4vr4),private::__ppc_vec_madd_vr4vr4vr4vr4
procedure(elem_func_vr8vr8vr8vr8),private::__ppc_vec_madd_vr8vr8vr8vr8
interface vec_madd
procedure::__ppc_vec_madd_vr4vr4vr4vr4
procedure::__ppc_vec_madd_vr8vr8vr8vr8
end interface
procedure(elem_func_vr4vr4vr4vr4),private::__ppc_vec_msub_vr4vr4vr4vr4
procedure(elem_func_vr8vr8vr8vr8),private::__ppc_vec_msub_vr8vr8vr8vr8
interface vec_msub
procedure::__ppc_vec_msub_vr4vr4vr4vr4
procedure::__ppc_vec_msub_vr8vr8vr8vr8
end interface
procedure(elem_func_vr4vr4vr4vr4),private::__ppc_vec_nmadd_vr4vr4vr4vr4
procedure(elem_func_vr8vr8vr8vr8),private::__ppc_vec_nmadd_vr8vr8vr8vr8
interface vec_nmadd
procedure::__ppc_vec_nmadd_vr4vr4vr4vr4
procedure::__ppc_vec_nmadd_vr8vr8vr8vr8
end interface
procedure(elem_func_vr4vr4vr4vr4),private::__ppc_vec_nmsub_vr4vr4vr4vr4
procedure(elem_func_vr8vr8vr8vr8),private::__ppc_vec_nmsub_vr8vr8vr8vr8
interface vec_nmsub
procedure::__ppc_vec_nmsub_vr4vr4vr4vr4
procedure::__ppc_vec_nmsub_vr8vr8vr8vr8
end interface
procedure(elem_func_vi1vi1vi1vu1),private::__ppc_vec_sel_vi1vi1vi1vu1
procedure(elem_func_vi2vi2vi2vu2),private::__ppc_vec_sel_vi2vi2vi2vu2
procedure(elem_func_vi4vi4vi4vu4),private::__ppc_vec_sel_vi4vi4vi4vu4
procedure(elem_func_vi8vi8vi8vu8),private::__ppc_vec_sel_vi8vi8vi8vu8
procedure(elem_func_vu1vu1vu1vu1),private::__ppc_vec_sel_vu1vu1vu1vu1
procedure(elem_func_vu2vu2vu2vu2),private::__ppc_vec_sel_vu2vu2vu2vu2
procedure(elem_func_vu4vu4vu4vu4),private::__ppc_vec_sel_vu4vu4vu4vu4
procedure(elem_func_vu8vu8vu8vu8),private::__ppc_vec_sel_vu8vu8vu8vu8
procedure(elem_func_vr4vr4vr4vu4),private::__ppc_vec_sel_vr4vr4vr4vu4
procedure(elem_func_vr8vr8vr8vu8),private::__ppc_vec_sel_vr8vr8vr8vu8
interface vec_sel
procedure::__ppc_vec_sel_vi1vi1vi1vu1
procedure::__ppc_vec_sel_vi2vi2vi2vu2
procedure::__ppc_vec_sel_vi4vi4vi4vu4
procedure::__ppc_vec_sel_vi8vi8vi8vu8
procedure::__ppc_vec_sel_vu1vu1vu1vu1
procedure::__ppc_vec_sel_vu2vu2vu2vu2
procedure::__ppc_vec_sel_vu4vu4vu4vu4
procedure::__ppc_vec_sel_vu8vu8vu8vu8
procedure::__ppc_vec_sel_vr4vr4vr4vu4
procedure::__ppc_vec_sel_vr8vr8vr8vu8
end interface
procedure(elem_func_i4vi1vi1),private::__ppc_vec_any_ge_i4vi1vi1
procedure(elem_func_i4vi2vi2),private::__ppc_vec_any_ge_i4vi2vi2
procedure(elem_func_i4vi4vi4),private::__ppc_vec_any_ge_i4vi4vi4
procedure(elem_func_i4vi8vi8),private::__ppc_vec_any_ge_i4vi8vi8
procedure(elem_func_i4vu1vu1),private::__ppc_vec_any_ge_i4vu1vu1
procedure(elem_func_i4vu2vu2),private::__ppc_vec_any_ge_i4vu2vu2
procedure(elem_func_i4vu4vu4),private::__ppc_vec_any_ge_i4vu4vu4
procedure(elem_func_i4vu8vu8),private::__ppc_vec_any_ge_i4vu8vu8
procedure(elem_func_i4vr4vr4),private::__ppc_vec_any_ge_i4vr4vr4
procedure(elem_func_i4vr8vr8),private::__ppc_vec_any_ge_i4vr8vr8
interface vec_any_ge
procedure::__ppc_vec_any_ge_i4vi1vi1
procedure::__ppc_vec_any_ge_i4vi2vi2
procedure::__ppc_vec_any_ge_i4vi4vi4
procedure::__ppc_vec_any_ge_i4vi8vi8
procedure::__ppc_vec_any_ge_i4vu1vu1
procedure::__ppc_vec_any_ge_i4vu2vu2
procedure::__ppc_vec_any_ge_i4vu4vu4
procedure::__ppc_vec_any_ge_i4vu8vu8
procedure::__ppc_vec_any_ge_i4vr4vr4
procedure::__ppc_vec_any_ge_i4vr8vr8
end interface
procedure(elem_func_vi1vi1vi1i),private::__ppc_vec_sld_vi1vi1vi1i0
procedure(elem_func_vi2vi2vi2i),private::__ppc_vec_sld_vi2vi2vi2i0
procedure(elem_func_vi4vi4vi4i),private::__ppc_vec_sld_vi4vi4vi4i0
procedure(elem_func_vi8vi8vi8i),private::__ppc_vec_sld_vi8vi8vi8i0
procedure(elem_func_vu1vu1vu1i),private::__ppc_vec_sld_vu1vu1vu1i0
procedure(elem_func_vu2vu2vu2i),private::__ppc_vec_sld_vu2vu2vu2i0
procedure(elem_func_vu4vu4vu4i),private::__ppc_vec_sld_vu4vu4vu4i0
procedure(elem_func_vu8vu8vu8i),private::__ppc_vec_sld_vu8vu8vu8i0
procedure(elem_func_vr4vr4vr4i),private::__ppc_vec_sld_vr4vr4vr4i0
procedure(elem_func_vr8vr8vr8i),private::__ppc_vec_sld_vr8vr8vr8i0
interface vec_sld
procedure::__ppc_vec_sld_vi1vi1vi1i0
procedure::__ppc_vec_sld_vi2vi2vi2i0
procedure::__ppc_vec_sld_vi4vi4vi4i0
procedure::__ppc_vec_sld_vi8vi8vi8i0
procedure::__ppc_vec_sld_vu1vu1vu1i0
procedure::__ppc_vec_sld_vu2vu2vu2i0
procedure::__ppc_vec_sld_vu4vu4vu4i0
procedure::__ppc_vec_sld_vu8vu8vu8i0
procedure::__ppc_vec_sld_vr4vr4vr4i0
procedure::__ppc_vec_sld_vr8vr8vr8i0
end interface
procedure(elem_func_vi1vi1vi1i),private::__ppc_vec_sldw_vi1vi1vi1i0
procedure(elem_func_vi2vi2vi2i),private::__ppc_vec_sldw_vi2vi2vi2i0
procedure(elem_func_vi4vi4vi4i),private::__ppc_vec_sldw_vi4vi4vi4i0
procedure(elem_func_vi8vi8vi8i),private::__ppc_vec_sldw_vi8vi8vi8i0
procedure(elem_func_vu1vu1vu1i),private::__ppc_vec_sldw_vu1vu1vu1i0
procedure(elem_func_vu2vu2vu2i),private::__ppc_vec_sldw_vu2vu2vu2i0
procedure(elem_func_vu4vu4vu4i),private::__ppc_vec_sldw_vu4vu4vu4i0
procedure(elem_func_vu8vu8vu8i),private::__ppc_vec_sldw_vu8vu8vu8i0
procedure(elem_func_vr4vr4vr4i),private::__ppc_vec_sldw_vr4vr4vr4i0
procedure(elem_func_vr8vr8vr8i),private::__ppc_vec_sldw_vr8vr8vr8i0
interface vec_sldw
procedure::__ppc_vec_sldw_vi1vi1vi1i0
procedure::__ppc_vec_sldw_vi2vi2vi2i0
procedure::__ppc_vec_sldw_vi4vi4vi4i0
procedure::__ppc_vec_sldw_vi8vi8vi8i0
procedure::__ppc_vec_sldw_vu1vu1vu1i0
procedure::__ppc_vec_sldw_vu2vu2vu2i0
procedure::__ppc_vec_sldw_vu4vu4vu4i0
procedure::__ppc_vec_sldw_vu8vu8vu8i0
procedure::__ppc_vec_sldw_vr4vr4vr4i0
procedure::__ppc_vec_sldw_vr8vr8vr8i0
end interface
procedure(elem_func_vr4vi4i),private::__ppc_vec_ctf_vr4vi4i0
procedure(elem_func_vr8vi8i),private::__ppc_vec_ctf_vr8vi8i0
procedure(elem_func_vr4vu4i),private::__ppc_vec_ctf_vr4vu4i0
procedure(elem_func_vr8vu8i),private::__ppc_vec_ctf_vr8vu8i0
interface vec_ctf
procedure::__ppc_vec_ctf_vr4vi4i0
procedure::__ppc_vec_ctf_vr8vi8i0
procedure::__ppc_vec_ctf_vr4vu4i0
procedure::__ppc_vec_ctf_vr8vu8i0
end interface
end
