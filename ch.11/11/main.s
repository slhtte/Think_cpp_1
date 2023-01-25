	.file	"main.cpp"
	.text
	.globl	_Z11MY_FUNC_INTi
	.type	_Z11MY_FUNC_INTi, @function
_Z11MY_FUNC_INTi:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -4(%rbp)
	addl	$1, -4(%rbp)
	movl	-4(%rbp), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	_Z11MY_FUNC_INTi, .-_Z11MY_FUNC_INTi
	.globl	_Z12MY_FUNC_CHARc
	.type	_Z12MY_FUNC_CHARc, @function
_Z12MY_FUNC_CHARc:
.LFB1:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, %eax
	movb	%al, -4(%rbp)
	movb	$90, -4(%rbp)
	movzbl	-4(%rbp), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	_Z12MY_FUNC_CHARc, .-_Z12MY_FUNC_CHARc
	.globl	_Z13MY_FUNC_FLOATf
	.type	_Z13MY_FUNC_FLOATf, @function
_Z13MY_FUNC_FLOATf:
.LFB2:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movss	%xmm0, -4(%rbp)
	cvtss2sd	-4(%rbp), %xmm1
	movsd	.LC0(%rip), %xmm0
	addsd	%xmm1, %xmm0
	cvtsd2ss	%xmm0, %xmm0
	movss	%xmm0, -4(%rbp)
	movss	-4(%rbp), %xmm0
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	_Z13MY_FUNC_FLOATf, .-_Z13MY_FUNC_FLOATf
	.globl	_Z14MY_FUNC_DOUBLEd
	.type	_Z14MY_FUNC_DOUBLEd, @function
_Z14MY_FUNC_DOUBLEd:
.LFB3:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movsd	%xmm0, -8(%rbp)
	movsd	-8(%rbp), %xmm1
	movsd	.LC1(%rip), %xmm0
	addsd	%xmm1, %xmm0
	movsd	%xmm0, -8(%rbp)
	movsd	-8(%rbp), %xmm0
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3:
	.size	_Z14MY_FUNC_DOUBLEd, .-_Z14MY_FUNC_DOUBLEd
	.globl	main
	.type	main, @function
main:
.LFB4:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	$42, %edi
	call	_Z11MY_FUNC_INTi
	movl	%eax, -16(%rbp)
	movl	$65, %edi
	call	_Z12MY_FUNC_CHARc
	movb	%al, -17(%rbp)
	movss	.LC2(%rip), %xmm0
	call	_Z13MY_FUNC_FLOATf
	movd	%xmm0, %eax
	movl	%eax, -12(%rbp)
	movq	.LC3(%rip), %rax
	movq	%rax, %xmm0
	call	_Z14MY_FUNC_DOUBLEd
	movq	%xmm0, %rax
	movq	%rax, -8(%rbp)
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE4:
	.size	main, .-main
	.section	.rodata
	.align 8
.LC0:
	.long	2576980378
	.long	1072798105
	.align 8
.LC1:
	.long	858993459
	.long	1077293875
	.align 4
.LC2:
	.long	1066192077
	.align 8
.LC3:
	.long	3951369912
	.long	1076246609
	.ident	"GCC: (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
