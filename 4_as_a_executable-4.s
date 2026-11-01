	.file	"4.c"
	.text
	.section .rdata,"dr"
.LC0:
	.ascii "Hello World\0"
.LC1:
	.ascii "Enter number a:\0"
.LC2:
	.ascii "%d\0"
.LC3:
	.ascii "Enter number b:\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	call	__main
	leaq	.LC0(%rip), %rax
	movq	%rax, %rcx
	call	puts
	leaq	.LC0(%rip), %rax
	movq	%rax, %rcx
	call	puts
	leaq	.LC0(%rip), %rax
	movq	%rax, %rcx
	call	puts
	leaq	.LC0(%rip), %rax
	movq	%rax, %rcx
	call	puts
	leaq	.LC0(%rip), %rax
	movq	%rax, %rcx
	call	puts
	leaq	.LC1(%rip), %rax
	movq	%rax, %rcx
	call	printf
	leaq	-4(%rbp), %rax
	leaq	.LC2(%rip), %rcx
	movq	%rax, %rdx
	call	scanf
	leaq	.LC3(%rip), %rax
	movq	%rax, %rcx
	call	puts
	leaq	-8(%rbp), %rax
	leaq	.LC2(%rip), %rcx
	movq	%rax, %rdx
	call	scanf
	movl	$0, %eax
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.def	__main;	.scl	2;	.type	32;	.endef
	.ident	"GCC: (Rev5, Built by MSYS2 project) 16.1.0"
	.def	puts;	.scl	2;	.type	32;	.endef
	.def	printf;	.scl	2;	.type	32;	.endef
	.def	scanf;	.scl	2;	.type	32;	.endef
