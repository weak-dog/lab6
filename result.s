


# define strings here
.section   .data
_S0:
	.string "%c"
_S1:
	.string "%c"
_S2:
	.string "%c"
_S3:
	.string "%c"
_S4:
	.string "%c"
__0:
	.string "9"
__1:
	.string "\t"
__2:
	.string "t"
__3:
	.string "\n"
__4:
	.string "a"

# define variables and temp variables here
.section .bss
_s:
	.zero	4
	.align	4
_t:
	.zero	4
	.align	4
_a:
	.zero	4
	.align	4
_r:
	.zero	4
	.align	4
.section .text
	.globl main
main:
	movl __0, %eax
	movl %eax, _s
	movl __1, %eax
	movl %eax, _t
	movl __2, %eax
	movl %eax, _a
	movl __3, %eax
	movl %eax, _r
	movl __4, %eax
	movl %eax, _t
	pushl _s
	pushl $_S0
	call printf
	addl $8,%esp
	pushl _t
	pushl $_S1
	call printf
	addl $8,%esp
	pushl _a
	pushl $_S2
	call printf
	addl $8,%esp
	pushl _r
	pushl $_S3
	call printf
	addl $8,%esp
	pushl _t
	pushl $_S4
	call printf
	addl $8,%esp
	pushl $0
	call exit
