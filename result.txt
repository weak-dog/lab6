


# define strings here
.section   .data
_S0:
	.string "In Loop\n"
_S1:
	.string "End Loop\n"

# define variables and temp variables here
.section .bss
_a:
	.zero	4
	.align	4
t0:
	.zero	4
	.align	4
t1:
	.zero	4
	.align	4
.section .text
	.globl main
main:
	movl $0, %eax
	movl %eax, _a
_0:
	movl _a, %eax
	cmpl $200, %eax
	jl _1
	jmp _2
_1:
	pushl $_S0
	call printf
	addl $4,%esp
	movl _a, %eax
	addl $1, %eax
	movl %eax, t1
	movl t1, %eax
	movl %eax, _a
	jmp _0
_2:
	pushl $_S1
	call printf
	addl $4,%esp
	pushl $0
	call exit
