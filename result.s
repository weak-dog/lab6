
# define strings here
.section   .data
_S0:
	.string "%d"
_S1:
	.string "%d"

# define variables and temp variables here
.section .bss
_a:
	.zero	4
	.align	4
_b:
	.zero	4
	.align	4
.section .text
	.globl main
main:
	movl $3, %eax
	movl %eax, _b
	movl _b, %eax
	movl %eax, _a
	pushl _a
	pushl $_S0
	call printf
	addl $8,%esp
	pushl _b
	pushl $_S1
	call printf
	addl $8,%esp
	pushl $0
	call exit
