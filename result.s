


# define strings here
.section   .data
_S0:
	.string "%d\n"

# define variables and temp variables here
.section .bss
_a:
	.zero	4
	.align	4
.section .text
	.globl main
main:
	movl $4, %eax
	movl %eax, _a
	movl _a, %edx
	movl %edx, %eax
	sarl $31, %edx
movl $2, %ebx
	idivl %ebx
	movl %eax, _a
	pushl _a
	pushl $_S0
	call printf
	addl $8,%esp
