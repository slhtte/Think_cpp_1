	.file	"main.cpp"
	.section	.rodata
	.type	_ZStL19piecewise_construct, @object
	.size	_ZStL19piecewise_construct, 1
_ZStL19piecewise_construct:
	.zero	1
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.section	.text._ZNK4Base7MY_FUNCEv,"axG",@progbits,_ZNK4Base7MY_FUNCEv,comdat
	.align 2
	.weak	_ZNK4Base7MY_FUNCEv
	.type	_ZNK4Base7MY_FUNCEv, @function
_ZNK4Base7MY_FUNCEv:
.LFB1383:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	nop
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE1383:
	.size	_ZNK4Base7MY_FUNCEv, .-_ZNK4Base7MY_FUNCEv
	.section	.text._ZNK7Derived7MY_FUNCEv,"axG",@progbits,_ZNK7Derived7MY_FUNCEv,comdat
	.align 2
	.weak	_ZNK7Derived7MY_FUNCEv
	.type	_ZNK7Derived7MY_FUNCEv, @function
_ZNK7Derived7MY_FUNCEv:
.LFB1384:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	nop
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE1384:
	.size	_ZNK7Derived7MY_FUNCEv, .-_ZNK7Derived7MY_FUNCEv
	.section	.text._ZN4BaseC2Ev,"axG",@progbits,_ZN4BaseC5Ev,comdat
	.align 2
	.weak	_ZN4BaseC2Ev
	.type	_ZN4BaseC2Ev, @function
_ZN4BaseC2Ev:
.LFB1388:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	movl	$_ZTV4Base+8, %edx
	movl	8(%ebp), %eax
	movl	%edx, (%eax)
	nop
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE1388:
	.size	_ZN4BaseC2Ev, .-_ZN4BaseC2Ev
	.weak	_ZN4BaseC1Ev
	.set	_ZN4BaseC1Ev,_ZN4BaseC2Ev
	.section	.text._ZN7DerivedC2Ev,"axG",@progbits,_ZN7DerivedC5Ev,comdat
	.align 2
	.weak	_ZN7DerivedC2Ev
	.type	_ZN7DerivedC2Ev, @function
_ZN7DerivedC2Ev:
.LFB1390:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$8, %esp
	movl	8(%ebp), %eax
	subl	$12, %esp
	pushl	%eax
	call	_ZN4BaseC2Ev
	addl	$16, %esp
	movl	$_ZTV7Derived+8, %edx
	movl	8(%ebp), %eax
	movl	%edx, (%eax)
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE1390:
	.size	_ZN7DerivedC2Ev, .-_ZN7DerivedC2Ev
	.weak	_ZN7DerivedC1Ev
	.set	_ZN7DerivedC1Ev,_ZN7DerivedC2Ev
	.text
	.globl	main
	.type	main, @function
main:
.LFB1385:
	.cfi_startproc
	leal	4(%esp), %ecx
	.cfi_def_cfa 1, 0
	andl	$-16, %esp
	pushl	-4(%ecx)
	pushl	%ebp
	.cfi_escape 0x10,0x5,0x2,0x75,0
	movl	%esp, %ebp
	pushl	%ebx
	pushl	%ecx
	.cfi_escape 0xf,0x3,0x75,0x78,0x6
	.cfi_escape 0x10,0x3,0x2,0x75,0x7c
	subl	$16, %esp
	subl	$12, %esp
	pushl	$4
	call	_Znwj
	addl	$16, %esp
	movl	%eax, %ebx
	subl	$12, %esp
	pushl	%ebx
	call	_ZN7DerivedC1Ev
	addl	$16, %esp
	movl	%ebx, -12(%ebp)
	movl	-12(%ebp), %eax
	movl	(%eax), %eax
	movl	(%eax), %eax
	subl	$12, %esp
	pushl	-12(%ebp)
	call	*%eax
	addl	$16, %esp
	movl	$0, %eax
	leal	-8(%ebp), %esp
	popl	%ecx
	.cfi_restore 1
	.cfi_def_cfa 1, 0
	popl	%ebx
	.cfi_restore 3
	popl	%ebp
	.cfi_restore 5
	leal	-4(%ecx), %esp
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE1385:
	.size	main, .-main
	.weak	_ZTV7Derived
	.section	.rodata._ZTV7Derived,"aG",@progbits,_ZTV7Derived,comdat
	.align 4
	.type	_ZTV7Derived, @object
	.size	_ZTV7Derived, 12
_ZTV7Derived:
	.long	0
	.long	_ZTI7Derived
	.long	_ZNK7Derived7MY_FUNCEv
	.weak	_ZTV4Base
	.section	.rodata._ZTV4Base,"aG",@progbits,_ZTV4Base,comdat
	.align 4
	.type	_ZTV4Base, @object
	.size	_ZTV4Base, 12
_ZTV4Base:
	.long	0
	.long	_ZTI4Base
	.long	_ZNK4Base7MY_FUNCEv
	.weak	_ZTI7Derived
	.section	.rodata._ZTI7Derived,"aG",@progbits,_ZTI7Derived,comdat
	.align 4
	.type	_ZTI7Derived, @object
	.size	_ZTI7Derived, 12
_ZTI7Derived:
	.long	_ZTVN10__cxxabiv120__si_class_type_infoE+8
	.long	_ZTS7Derived
	.long	_ZTI4Base
	.weak	_ZTS7Derived
	.section	.rodata._ZTS7Derived,"aG",@progbits,_ZTS7Derived,comdat
	.align 4
	.type	_ZTS7Derived, @object
	.size	_ZTS7Derived, 9
_ZTS7Derived:
	.string	"7Derived"
	.weak	_ZTI4Base
	.section	.rodata._ZTI4Base,"aG",@progbits,_ZTI4Base,comdat
	.align 4
	.type	_ZTI4Base, @object
	.size	_ZTI4Base, 8
_ZTI4Base:
	.long	_ZTVN10__cxxabiv117__class_type_infoE+8
	.long	_ZTS4Base
	.weak	_ZTS4Base
	.section	.rodata._ZTS4Base,"aG",@progbits,_ZTS4Base,comdat
	.align 4
	.type	_ZTS4Base, @object
	.size	_ZTS4Base, 6
_ZTS4Base:
	.string	"4Base"
	.text
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB1572:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$8, %esp
	cmpl	$1, 8(%ebp)
	jne	.L9
	cmpl	$65535, 12(%ebp)
	jne	.L9
	subl	$12, %esp
	pushl	$_ZStL8__ioinit
	call	_ZNSt8ios_base4InitC1Ev
	addl	$16, %esp
	subl	$4, %esp
	pushl	$__dso_handle
	pushl	$_ZStL8__ioinit
	pushl	$_ZNSt8ios_base4InitD1Ev
	call	__cxa_atexit
	addl	$16, %esp
.L9:
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE1572:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I_main, @function
_GLOBAL__sub_I_main:
.LFB1573:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$8, %esp
	subl	$8, %esp
	pushl	$65535
	pushl	$1
	call	_Z41__static_initialization_and_destruction_0ii
	addl	$16, %esp
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE1573:
	.size	_GLOBAL__sub_I_main, .-_GLOBAL__sub_I_main
	.section	.init_array,"aw"
	.align 4
	.long	_GLOBAL__sub_I_main
	.hidden	__dso_handle
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.12) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
