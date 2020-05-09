	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 10, 14	sdk_version 10, 14
	.globl	__Z18testfunc_referenceRKiS0_ ## -- Begin function _Z18testfunc_referenceRKiS0_
	.p2align	4, 0x90
__Z18testfunc_referenceRKiS0_:          ## @_Z18testfunc_referenceRKiS0_
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rsi
	movl	(%rsi), %eax
	movq	-16(%rbp), %rsi
	addl	(%rsi), %eax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	_main                   ## -- Begin function main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movl	$0, -4(%rbp)
	movl	$123, -8(%rbp)
	movl	$456, -12(%rbp)         ## imm = 0x1C8
	leaq	-8(%rbp), %rdi
	leaq	-12(%rbp), %rsi
	callq	__Z18testfunc_referenceRKiS0_
	xorl	%ecx, %ecx
	movl	%eax, _X(%rip)
	movl	%ecx, %eax
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	_X                      ## @X
.zerofill __DATA,__common,_X,4,2

.subsections_via_symbols
