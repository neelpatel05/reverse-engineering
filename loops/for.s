	.file	"for.c"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	endbr32
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$32, %esp
	call	__x86.get_pc_thunk.ax
	addl	$_GLOBAL_OFFSET_TABLE_, %eax
	movl	$16, -20(%ebp)
	movl	$41, -12(%ebp)
	movl	$80, -8(%ebp)
	movl	$16, -16(%ebp)
	jmp	.L2
.L7:
	cmpl	$47, -20(%ebp)
	jle	.L3
	cmpl	$35, -12(%ebp)
	jg	.L3
	movl	$16, -4(%ebp)
	addl	$16, -20(%ebp)
	jmp	.L4
.L3:
	cmpl	$88, -20(%ebp)
	jle	.L5
	cmpl	$15, -12(%ebp)
	jle	.L6
.L5:
	movl	$32, -4(%ebp)
	addl	$16, -20(%ebp)
	jmp	.L4
.L6:
	movl	$48, -4(%ebp)
	addl	$16, -20(%ebp)
.L4:
	addl	$18, -20(%ebp)
	addl	$3, -16(%ebp)
.L2:
	cmpl	$86, -16(%ebp)
	jle	.L7
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.section	.text.__x86.get_pc_thunk.ax,"axG",@progbits,__x86.get_pc_thunk.ax,comdat
	.globl	__x86.get_pc_thunk.ax
	.hidden	__x86.get_pc_thunk.ax
	.type	__x86.get_pc_thunk.ax, @function
__x86.get_pc_thunk.ax:
.LFB1:
	.cfi_startproc
	movl	(%esp), %eax
	ret
	.cfi_endproc
.LFE1:
	.ident	"GCC: (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 4
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 4
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 4
4:
