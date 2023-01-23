	.file	"Early.cpp"
	.section	.rodata
	.type	_ZStL19piecewise_construct, @object
	.size	_ZStL19piecewise_construct, 1
_ZStL19piecewise_construct:
	.zero	1
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
.LC0:
	.string	""
	.section	.text._ZNK3Pet5speakB5cxx11Ev,"axG",@progbits,_ZNK3Pet5speakB5cxx11Ev,comdat
	.align 2
	.weak	_ZNK3Pet5speakB5cxx11Ev
	.type	_ZNK3Pet5speakB5cxx11Ev, @function
_ZNK3Pet5speakB5cxx11Ev:
.LFB1383:
	.cfi_startproc
	.cfi_personality 0,__gxx_personality_v0
	.cfi_lsda 0,.LLSDA1383
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	pushl	%ebx
	subl	$36, %esp
	.cfi_offset 3, -12
	movl	8(%ebp), %eax
	movl	%eax, -28(%ebp)
	movl	12(%ebp), %eax
	movl	%eax, -32(%ebp)
	movl	%gs:20, %eax
	movl	%eax, -12(%ebp)
	xorl	%eax, %eax
	subl	$12, %esp
	leal	-13(%ebp), %eax
	pushl	%eax
	call	_ZNSaIcEC1Ev
	addl	$16, %esp
	subl	$4, %esp
	leal	-13(%ebp), %eax
	pushl	%eax
	pushl	$.LC0
	pushl	-28(%ebp)
.LEHB0:
	.cfi_escape 0x2e,0x10
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_
.LEHE0:
	addl	$16, %esp
	subl	$12, %esp
	leal	-13(%ebp), %eax
	pushl	%eax
	call	_ZNSaIcED1Ev
	addl	$16, %esp
	movl	-28(%ebp), %eax
	movl	-12(%ebp), %edx
	xorl	%gs:20, %edx
	je	.L4
	jmp	.L6
.L5:
	movl	%eax, %ebx
	subl	$12, %esp
	leal	-13(%ebp), %eax
	pushl	%eax
	call	_ZNSaIcED1Ev
	addl	$16, %esp
	movl	%ebx, %eax
	subl	$12, %esp
	pushl	%eax
.LEHB1:
	call	_Unwind_Resume
.LEHE1:
.L6:
	call	__stack_chk_fail
.L4:
	movl	-4(%ebp), %ebx
	leave
	.cfi_restore 5
	.cfi_restore 3
	.cfi_def_cfa 4, 4
	ret	$4
	.cfi_endproc
.LFE1383:
	.globl	__gxx_personality_v0
	.section	.gcc_except_table._ZNK3Pet5speakB5cxx11Ev,"aG",@progbits,_ZNK3Pet5speakB5cxx11Ev,comdat
.LLSDA1383:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1383-.LLSDACSB1383
.LLSDACSB1383:
	.uleb128 .LEHB0-.LFB1383
	.uleb128 .LEHE0-.LEHB0
	.uleb128 .L5-.LFB1383
	.uleb128 0
	.uleb128 .LEHB1-.LFB1383
	.uleb128 .LEHE1-.LEHB1
	.uleb128 0
	.uleb128 0
.LLSDACSE1383:
	.section	.text._ZNK3Pet5speakB5cxx11Ev,"axG",@progbits,_ZNK3Pet5speakB5cxx11Ev,comdat
	.size	_ZNK3Pet5speakB5cxx11Ev, .-_ZNK3Pet5speakB5cxx11Ev
	.section	.rodata
.LC1:
	.string	"Bark!"
	.section	.text._ZNK3Dog5speakB5cxx11Ev,"axG",@progbits,_ZNK3Dog5speakB5cxx11Ev,comdat
	.align 2
	.weak	_ZNK3Dog5speakB5cxx11Ev
	.type	_ZNK3Dog5speakB5cxx11Ev, @function
_ZNK3Dog5speakB5cxx11Ev:
.LFB1384:
	.cfi_startproc
	.cfi_personality 0,__gxx_personality_v0
	.cfi_lsda 0,.LLSDA1384
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	pushl	%ebx
	subl	$36, %esp
	.cfi_offset 3, -12
	movl	8(%ebp), %eax
	movl	%eax, -28(%ebp)
	movl	12(%ebp), %eax
	movl	%eax, -32(%ebp)
	movl	%gs:20, %eax
	movl	%eax, -12(%ebp)
	xorl	%eax, %eax
	subl	$12, %esp
	leal	-13(%ebp), %eax
	pushl	%eax
	call	_ZNSaIcEC1Ev
	addl	$16, %esp
	subl	$4, %esp
	leal	-13(%ebp), %eax
	pushl	%eax
	pushl	$.LC1
	pushl	-28(%ebp)
.LEHB2:
	.cfi_escape 0x2e,0x10
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_
.LEHE2:
	addl	$16, %esp
	subl	$12, %esp
	leal	-13(%ebp), %eax
	pushl	%eax
	call	_ZNSaIcED1Ev
	addl	$16, %esp
	movl	-28(%ebp), %eax
	movl	-12(%ebp), %edx
	xorl	%gs:20, %edx
	je	.L10
	jmp	.L12
.L11:
	movl	%eax, %ebx
	subl	$12, %esp
	leal	-13(%ebp), %eax
	pushl	%eax
	call	_ZNSaIcED1Ev
	addl	$16, %esp
	movl	%ebx, %eax
	subl	$12, %esp
	pushl	%eax
.LEHB3:
	call	_Unwind_Resume
.LEHE3:
.L12:
	call	__stack_chk_fail
.L10:
	movl	-4(%ebp), %ebx
	leave
	.cfi_restore 5
	.cfi_restore 3
	.cfi_def_cfa 4, 4
	ret	$4
	.cfi_endproc
.LFE1384:
	.section	.gcc_except_table._ZNK3Dog5speakB5cxx11Ev,"aG",@progbits,_ZNK3Dog5speakB5cxx11Ev,comdat
.LLSDA1384:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1384-.LLSDACSB1384
.LLSDACSB1384:
	.uleb128 .LEHB2-.LFB1384
	.uleb128 .LEHE2-.LEHB2
	.uleb128 .L11-.LFB1384
	.uleb128 0
	.uleb128 .LEHB3-.LFB1384
	.uleb128 .LEHE3-.LEHB3
	.uleb128 0
	.uleb128 0
.LLSDACSE1384:
	.section	.text._ZNK3Dog5speakB5cxx11Ev,"axG",@progbits,_ZNK3Dog5speakB5cxx11Ev,comdat
	.size	_ZNK3Dog5speakB5cxx11Ev, .-_ZNK3Dog5speakB5cxx11Ev
	.section	.rodata
.LC2:
	.string	"p1->speak() = "
.LC3:
	.string	"p2.speak() = "
.LC4:
	.string	"p3.speak() = "
	.text
	.globl	main
	.type	main, @function
main:
.LFB1385:
	.cfi_startproc
	.cfi_personality 0,__gxx_personality_v0
	.cfi_lsda 0,.LLSDA1385
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
	subl	$48, %esp
	movl	%gs:20, %eax
	movl	%eax, -12(%ebp)
	xorl	%eax, %eax
	movl	$_ZTV3Dog+8, %eax
	movl	%eax, -52(%ebp)
	leal	-52(%ebp), %eax
	movl	%eax, -44(%ebp)
	leal	-52(%ebp), %eax
	movl	%eax, -40(%ebp)
	movl	$_ZTV3Pet+8, %eax
	movl	%eax, -48(%ebp)
	movl	-44(%ebp), %eax
	movl	(%eax), %eax
	movl	(%eax), %eax
	leal	-36(%ebp), %edx
	subl	$8, %esp
	pushl	-44(%ebp)
	pushl	%edx
.LEHB4:
	call	*%eax
.LEHE4:
	addl	$12, %esp
	subl	$8, %esp
	pushl	$.LC2
	pushl	$_ZSt4cout
.LEHB5:
	.cfi_escape 0x2e,0x10
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	addl	$16, %esp
	movl	%eax, %edx
	subl	$8, %esp
	leal	-36(%ebp), %eax
	pushl	%eax
	pushl	%edx
	call	_ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
	addl	$16, %esp
	subl	$8, %esp
	pushl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
	pushl	%eax
	call	_ZNSolsEPFRSoS_E
.LEHE5:
	addl	$16, %esp
	subl	$12, %esp
	leal	-36(%ebp), %eax
	pushl	%eax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	addl	$16, %esp
	movl	-40(%ebp), %eax
	movl	(%eax), %eax
	movl	(%eax), %eax
	leal	-36(%ebp), %edx
	subl	$8, %esp
	pushl	-40(%ebp)
	pushl	%edx
.LEHB6:
	call	*%eax
.LEHE6:
	addl	$12, %esp
	subl	$8, %esp
	pushl	$.LC3
	pushl	$_ZSt4cout
.LEHB7:
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	addl	$16, %esp
	movl	%eax, %edx
	subl	$8, %esp
	leal	-36(%ebp), %eax
	pushl	%eax
	pushl	%edx
	call	_ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
	addl	$16, %esp
	subl	$8, %esp
	pushl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
	pushl	%eax
	call	_ZNSolsEPFRSoS_E
.LEHE7:
	addl	$16, %esp
	subl	$12, %esp
	leal	-36(%ebp), %eax
	pushl	%eax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	addl	$16, %esp
	leal	-36(%ebp), %eax
	subl	$8, %esp
	leal	-48(%ebp), %edx
	pushl	%edx
	pushl	%eax
.LEHB8:
	call	_ZNK3Pet5speakB5cxx11Ev
.LEHE8:
	addl	$12, %esp
	subl	$8, %esp
	pushl	$.LC4
	pushl	$_ZSt4cout
.LEHB9:
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	addl	$16, %esp
	movl	%eax, %edx
	subl	$8, %esp
	leal	-36(%ebp), %eax
	pushl	%eax
	pushl	%edx
	call	_ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
	addl	$16, %esp
	subl	$8, %esp
	pushl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
	pushl	%eax
	call	_ZNSolsEPFRSoS_E
.LEHE9:
	addl	$16, %esp
	subl	$12, %esp
	leal	-36(%ebp), %eax
	pushl	%eax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	addl	$16, %esp
	movl	$0, %eax
	movl	-12(%ebp), %ecx
	xorl	%gs:20, %ecx
	je	.L18
	jmp	.L22
.L19:
	movl	%eax, %ebx
	subl	$12, %esp
	leal	-36(%ebp), %eax
	pushl	%eax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	addl	$16, %esp
	movl	%ebx, %eax
	subl	$12, %esp
	pushl	%eax
.LEHB10:
	call	_Unwind_Resume
.L20:
	movl	%eax, %ebx
	subl	$12, %esp
	leal	-36(%ebp), %eax
	pushl	%eax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	addl	$16, %esp
	movl	%ebx, %eax
	subl	$12, %esp
	pushl	%eax
	call	_Unwind_Resume
.L21:
	movl	%eax, %ebx
	subl	$12, %esp
	leal	-36(%ebp), %eax
	pushl	%eax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	addl	$16, %esp
	movl	%ebx, %eax
	subl	$12, %esp
	pushl	%eax
	call	_Unwind_Resume
.LEHE10:
.L22:
	call	__stack_chk_fail
.L18:
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
	.section	.gcc_except_table,"a",@progbits
.LLSDA1385:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1385-.LLSDACSB1385
.LLSDACSB1385:
	.uleb128 .LEHB4-.LFB1385
	.uleb128 .LEHE4-.LEHB4
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB5-.LFB1385
	.uleb128 .LEHE5-.LEHB5
	.uleb128 .L19-.LFB1385
	.uleb128 0
	.uleb128 .LEHB6-.LFB1385
	.uleb128 .LEHE6-.LEHB6
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB7-.LFB1385
	.uleb128 .LEHE7-.LEHB7
	.uleb128 .L20-.LFB1385
	.uleb128 0
	.uleb128 .LEHB8-.LFB1385
	.uleb128 .LEHE8-.LEHB8
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB9-.LFB1385
	.uleb128 .LEHE9-.LEHB9
	.uleb128 .L21-.LFB1385
	.uleb128 0
	.uleb128 .LEHB10-.LFB1385
	.uleb128 .LEHE10-.LEHB10
	.uleb128 0
	.uleb128 0
.LLSDACSE1385:
	.text
	.size	main, .-main
	.weak	_ZTV3Dog
	.section	.rodata._ZTV3Dog,"aG",@progbits,_ZTV3Dog,comdat
	.align 4
	.type	_ZTV3Dog, @object
	.size	_ZTV3Dog, 12
_ZTV3Dog:
	.long	0
	.long	_ZTI3Dog
	.long	_ZNK3Dog5speakB5cxx11Ev
	.weak	_ZTV3Pet
	.section	.rodata._ZTV3Pet,"aG",@progbits,_ZTV3Pet,comdat
	.align 4
	.type	_ZTV3Pet, @object
	.size	_ZTV3Pet, 12
_ZTV3Pet:
	.long	0
	.long	_ZTI3Pet
	.long	_ZNK3Pet5speakB5cxx11Ev
	.weak	_ZTI3Dog
	.section	.rodata._ZTI3Dog,"aG",@progbits,_ZTI3Dog,comdat
	.align 4
	.type	_ZTI3Dog, @object
	.size	_ZTI3Dog, 12
_ZTI3Dog:
	.long	_ZTVN10__cxxabiv120__si_class_type_infoE+8
	.long	_ZTS3Dog
	.long	_ZTI3Pet
	.weak	_ZTS3Dog
	.section	.rodata._ZTS3Dog,"aG",@progbits,_ZTS3Dog,comdat
	.align 4
	.type	_ZTS3Dog, @object
	.size	_ZTS3Dog, 5
_ZTS3Dog:
	.string	"3Dog"
	.weak	_ZTI3Pet
	.section	.rodata._ZTI3Pet,"aG",@progbits,_ZTI3Pet,comdat
	.align 4
	.type	_ZTI3Pet, @object
	.size	_ZTI3Pet, 8
_ZTI3Pet:
	.long	_ZTVN10__cxxabiv117__class_type_infoE+8
	.long	_ZTS3Pet
	.weak	_ZTS3Pet
	.section	.rodata._ZTS3Pet,"aG",@progbits,_ZTS3Pet,comdat
	.align 4
	.type	_ZTS3Pet, @object
	.size	_ZTS3Pet, 5
_ZTS3Pet:
	.string	"3Pet"
	.text
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB1592:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$8, %esp
	cmpl	$1, 8(%ebp)
	jne	.L25
	cmpl	$65535, 12(%ebp)
	jne	.L25
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
.L25:
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE1592:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I_main, @function
_GLOBAL__sub_I_main:
.LFB1593:
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
.LFE1593:
	.size	_GLOBAL__sub_I_main, .-_GLOBAL__sub_I_main
	.section	.init_array,"aw"
	.align 4
	.long	_GLOBAL__sub_I_main
	.hidden	__dso_handle
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.12) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
