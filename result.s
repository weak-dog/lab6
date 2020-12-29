lno@1       @0           block     children: [@1 ]
lno@2       @1       statement          stmt: declation     children: [@2 @3 ]      sibling: [@8 @26 @36 @57 ]
lno@2       @2            type          type: int
lno@2       @3       statement          stmt: assign     children: [@4 @5 ]
lno@2       @4        variable      var_name: a
lno@2       @5      expression      operator: +     valuetype: int     children: [@6 @7 ]
lno@2       @6           const          type: int         value: 1
lno@2       @7           const          type: int         value: 2
lno@3       @8       statement          stmt: ifelse     children: [@9 @12 @20 ]      sibling: [@26 @36 @57 ]
lno@3       @9      expression      operator: >     valuetype: bool     children: [@10 @11 ]
lno@3       @10           const          type: int         value: 2
lno@3       @11           const          type: int         value: 1
lno@5       @12           block     children: [@13 ]
lno@5       @13       statement          stmt: declation     children: [@14 @15 ]
lno@5       @14            type          type: int
lno@5       @15       statement          stmt: assign     children: [@16 @17 ]
lno@5       @16        variable      var_name: d
lno@5       @17      expression      operator: +     valuetype: int     children: [@18 @19 ]
lno@5       @18        variable      var_name: a
lno@5       @19        variable      var_name: c
lno@7       @20           block     children: [@21 ]
lno@7       @21       statement          stmt: assign     children: [@22 @23 ]
lno@7       @22        variable      var_name: a
lno@7       @23      expression      operator: +     valuetype: int     children: [@24 @25 ]
lno@7       @24        variable      var_name: d
lno@7       @25        variable      var_name: c
lno@9       @26       statement          stmt: while     children: [@27 @30 ]      sibling: [@36 @57 ]
lno@9       @27      expression      operator: >     valuetype: bool     children: [@28 @29 ]
lno@9       @28        variable      var_name: a
lno@9       @29        variable      var_name: b
lno@10       @30           block     children: [@31 ]
lno@10       @31       statement          stmt: assign     children: [@32 @33 ]
lno@10       @32        variable      var_name: m
lno@10       @33      expression      operator: +     valuetype: int     children: [@34 @35 ]
lno@10       @34        variable      var_name: n
lno@10       @35        variable      var_name: d
lno@12       @36       statement          stmt: for     children: [@37 @42 @49 @51 ]      sibling: [@57 ]
lno@12       @37       statement          stmt: declation     children: [@38 @39 ]
lno@12       @38            type          type: int
lno@12       @39       statement          stmt: assign     children: [@40 @41 ]
lno@12       @40        variable      var_name: i
lno@12       @41           const          type: int         value: 0
lno@12       @42      expression      operator: &&     valuetype: bool     children: [@43 @46 ]
lno@12       @43      expression      operator: <     valuetype: bool     children: [@44 @45 ]
lno@12       @44        variable      var_name: i
lno@12       @45           const          type: int         value: 4
lno@12       @46      expression      operator: >     valuetype: bool     children: [@47 @48 ]
lno@12       @47        variable      var_name: i
lno@12       @48           const          type: int         value: 5
lno@12       @49      expression      operator: ++     valuetype: int     children: [@50 ]
lno@12       @50        variable      var_name: i
lno@13       @51           block     children: [@52 ]
lno@13       @52       statement          stmt: assign     children: [@53 @54 ]
lno@13       @53        variable      var_name: m
lno@13       @54      expression      operator: +     valuetype: int     children: [@55 @56 ]
lno@13       @55        variable      var_name: n
lno@13       @56        variable      var_name: d
lno@15       @57       statement          stmt: assign     children: [@58 @59 ]
lno@15       @58        variable      var_name: c
lno@15       @59      expression      operator: +     valuetype: int     children: [@60 @61 ]
lno@15       @60        variable      var_name: a
lno@15       @61        variable      var_name: v



# define strings here
.section   .data

# define variables and temp variables here
.section .bss
_a:
	.zero	4
	.align	4
_d:
	.zero	4
	.align	4
_i:
	.zero	4
	.align	4
t0:
	.zero	4
	.align	4
t1:
	.zero	4
	.align	4
t2:
	.zero	4
	.align	4
t3:
	.zero	4
	.align	4
t4:
	.zero	4
	.align	4
t5:
	.zero	4
	.align	4
t6:
	.zero	4
	.align	4
t7:
	.zero	4
	.align	4
t8:
	.zero	4
	.align	4
t9:
	.zero	4
	.align	4
t10:
	.zero	4
	.align	4
t11:
	.zero	4
	.align	4
.section .text
	.globl main
main:
	movl $1, %eax
	addl $2, %eax
	movl %eax, t0
	movl t0, %eax
	movl %eax, _a
	movl $2, %eax
	cmpl $1, %eax
	jg _0
	jmp _2
_0:
	movl _a, %eax
	addl _c, %eax
	movl %eax, t2
	movl t2, %eax
	movl %eax, _d
	jmp _1
_2:
	movl _d, %eax
	addl _c, %eax
	movl %eax, t3
	movl t3, %eax
	movl %eax, _a
_1:
_3:
	movl _a, %eax
	cmpl _b, %eax
	jg _4
	jmp _5
_4:
	movl _n, %eax
	addl _d, %eax
	movl %eax, t5
	movl t5, %eax
	movl %eax, _m
	jmp _3
_5:
	movl $0, %eax
	movl %eax, _i
_6:
	movl _i, %eax
	cmpl $4, %eax
	jl _9
	jmp _8
_9:
	movl _i, %eax
	cmpl $5, %eax
	jg _7
	jmp _8
_7:
	movl _n, %eax
	addl _d, %eax
	movl %eax, t10
	movl t10, %eax
	movl %eax, _m
	incl _i
	jmp _6
_8:
	movl _a, %eax
	addl _v, %eax
	movl %eax, t11
	movl t11, %eax
	movl %eax, _c
