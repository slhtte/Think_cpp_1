	.file	"PassingBigStructures.cpp"
	.text
	.globl	B
	.bss
	.align 32
	.type	B, @object
	.size	B, 112
B:
	.zero	112
	.globl	B2
	.align 32
	.type	B2, @object
	.size	B2, 112
B2:
	.zero	112
	.text
	.globl	_Z6bigfun3Big
	.type	_Z6bigfun3Big, @function
_Z6bigfun3Big:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	.cfi_offset 3, -24
	movq	%rdi, -16(%rbp)
	movl	$100, 116(%rbp)
	movq	-16(%rbp), %rax
	movq	16(%rbp), %rcx
	movq	24(%rbp), %rbx
	movq	%rcx, (%rax)
	movq	%rbx, 8(%rax)
	movq	32(%rbp), %rcx
	movq	40(%rbp), %rbx
	movq	%rcx, 16(%rax)
	movq	%rbx, 24(%rax)
	movq	48(%rbp), %rcx
	movq	56(%rbp), %rbx
	movq	%rcx, 32(%rax)
	movq	%rbx, 40(%rax)
	movq	64(%rbp), %rcx
	movq	72(%rbp), %rbx
	movq	%rcx, 48(%rax)
	movq	%rbx, 56(%rax)
	movq	80(%rbp), %rcx
	movq	88(%rbp), %rbx
	movq	%rcx, 64(%rax)
	movq	%rbx, 72(%rax)
	movq	96(%rbp), %rcx
	movq	104(%rbp), %rbx
	movq	%rcx, 80(%rax)
	movq	%rbx, 88(%rax)
	movq	112(%rbp), %rcx
	movq	120(%rbp), %rbx
	movq	%rcx, 96(%rax)
	movq	%rbx, 104(%rax)
	movq	-16(%rbp), %rax
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	_Z6bigfun3Big, .-_Z6bigfun3Big
	.globl	main
	.type	main, @function
main:
.LFB1:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	addq	$-128, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	leaq	-128(%rbp), %rax
	pushq	104+B(%rip)
	pushq	96+B(%rip)
	pushq	88+B(%rip)
	pushq	80+B(%rip)
	pushq	72+B(%rip)
	pushq	64+B(%rip)
	pushq	56+B(%rip)
	pushq	48+B(%rip)
	pushq	40+B(%rip)
	pushq	32+B(%rip)
	pushq	24+B(%rip)
	pushq	16+B(%rip)
	pushq	8+B(%rip)
	pushq	B(%rip)
	movq	%rax, %rdi
	call	_Z6bigfun3Big
	addq	$112, %rsp
	movq	-128(%rbp), %rax
	movq	-120(%rbp), %rdx
	movq	%rax, B2(%rip)
	movq	%rdx, 8+B2(%rip)
	movq	-112(%rbp), %rax
	movq	-104(%rbp), %rdx
	movq	%rax, 16+B2(%rip)
	movq	%rdx, 24+B2(%rip)
	movq	-96(%rbp), %rax
	movq	-88(%rbp), %rdx
	movq	%rax, 32+B2(%rip)
	movq	%rdx, 40+B2(%rip)
	movq	-80(%rbp), %rax
	movq	-72(%rbp), %rdx
	movq	%rax, 48+B2(%rip)
	movq	%rdx, 56+B2(%rip)
	movq	-64(%rbp), %rax
	movq	-56(%rbp), %rdx
	movq	%rax, 64+B2(%rip)
	movq	%rdx, 72+B2(%rip)
	movq	-48(%rbp), %rax
	movq	-40(%rbp), %rdx
	movq	%rax, 80+B2(%rip)
	movq	%rdx, 88+B2(%rip)
	movq	-32(%rbp), %rax
	movq	-24(%rbp), %rdx
	movq	%rax, 96+B2(%rip)
	movq	%rdx, 104+B2(%rip)
	movl	$0, %eax
	movq	-8(%rbp), %rdx
	xorq	%fs:40, %rdx
	je	.L5
	call	__stack_chk_fail@PLT
.L5:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	main, .-main
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
