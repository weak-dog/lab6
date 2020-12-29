#include "tree.h"
static int nodeid=0;
extern symbolTable sb;
extern strTable st;
//插入符号表，检查是否重复定义
void symbolTable::insert(string id){
    if(search(id)){
        //重复定义
        //cout<<"重复定义符号: "<<id<<endl;
    }else{
        name[size]=id;
        size++;
    }
}
//查询符号是否在符号表中
bool symbolTable::search(string id){
    for(int i=0;i<size;i++){
        if(name[i]==id){
            return true;
        }
    }
    return false;
}
//打印符号表
void symbolTable::display(){
    cout<<"打印符号表: ";
    for(int i=0;i<size;i++){
        cout<<name[i]<<" ";
    }
    cout<<endl;
}
//插入字符串表
int strTable::insert(string s){
    str[seq]=s;
    seq++;
    return seq-1;
}
//打印字符串表
void strTable::display(){
    cout<<"打印字符串表"<<endl;
    for(int i=0;i<seq;i++){
        cout<<str[i]<<endl;
    }
}
//构造函数
TreeNode::TreeNode(int lineno, int type) {
    this->lineno=lineno;
    this->nodeType=type;
    for(int i=0;i<MAX_CHILD;i++)
        this->child[i]=nullptr;
    this->sibling=nullptr;
}
//添加兄弟结点
void TreeNode::addSibling(TreeNode* sibling){
    TreeNode*s=this;
    while(s->sibling!=NULL){
        s=s->sibling;
    }
    s->sibling=sibling;
}
//递归给结点编号
void TreeNode::genNodeId() {
    if(this!=nullptr){
        this->nodeID=nodeid++;
        int i=0;
        while(i<4&&this->child[i++]!=nullptr){
            this->child[i-1]->genNodeId();
        }
        this->sibling->genNodeId();
    }
}
//递归打印AST
void TreeNode::printAST() {
    if(this!=nullptr){
        this->printNodeInfo();
        int i=0;
        while(i<4&&this->child[i++]!=nullptr){
            this->child[i-1]->printAST();
        }
        this->sibling->printAST();
    }
}
//打印节点信息
void TreeNode::printNodeInfo() {
    if(this!=nullptr){
        //打印自身基本信息
        cout<<"lno@"<<this->lineno<<setw(8)<<"@"<<this->nodeID<<setw(16)<<nodeType2String(this->nodeType);
        //打印自身特殊信息
        this->printSpecialInfo();
        //打印孩子节点编号
        this->printChildrenId();
        //打印兄弟节点编号
        this->printSiblingId();
        cout<<endl;
    }
}
//打印孩子节点序号
void TreeNode::printChildrenId() {
    if(this!=nullptr){
        if(this->child[0]){
            cout<<setw(16)<<"children: [";
            int i=0;
            while(i<4&&this->child[i++]!=nullptr){
                cout<<"@"<<this->child[i-1]->nodeID<<" ";
            }
            cout<<"]";
        }    
    }
}
//打印兄弟节点的序号
void TreeNode::printSiblingId(){
    if(this!=nullptr){
        if(this->sibling){
            cout<<setw(16)<<"sibling: [";
            TreeNode* t=this->sibling;
            while(t){
                cout<<"@"<<t->nodeID<<" ";
                t=t->sibling;
            }
            cout<<"]";
        }
    }
}
//打印节点特殊信息
void TreeNode::printSpecialInfo() {
    //根据节点类型打印特殊信息
    switch(this->nodeType){
        case NODE_CONST://如果是常量，打印类型和值
            switch (this->valType){
                case VALUE_INT:
                    cout<<setw(16)<<" type: "<<this->getTypeInfo(this->valType)<<setw(16)<<" value: "<<this->int_val;
                break;
                case VALUE_BOOL:
                    cout<<setw(16)<<" type: "<<this->getTypeInfo(this->valType)<<setw(16)<<" value: "<<this->bool_val;
                break;
                case VALUE_CHAR:
                    cout<<setw(16)<<" type: "<<this->getTypeInfo(this->valType)<<setw(16);//<<" value: "<<this->ch_val;
                break;
                case VALUE_STRING:
                    cout<<setw(16)<<" type: "<<this->getTypeInfo(this->valType)<<setw(16)<<" value: "<<this->str_val;
                break;
            }
        break;
        case NODE_VAR:
            cout<<setw(16)<<" var_name: "<<this->varName;
        break;
        case NODE_EXPR://如果是表达式，打印运算类型
            cout<<setw(16)<<" operator: "<<opType2String(this->opType)<<setw(16)<<"valuetype: "<<getTypeInfo(valType);
        break;
        case NODE_STMT://如果是语句，打印语句类型
            cout<<setw(16)<<" stmt: "<<sType2String(this->sType);
        break;
        case NODE_TYPE://如果是类型,打印类型
            cout<<setw(16)<<" type: "<<this->getTypeInfo(valType);
        break;
    }
}
//结点类型转化为字符串
string TreeNode::nodeType2String (int type){
    switch(type){    
        case NODE_COMP:
            return "block";
        case NODE_STMT: 
            return "statement";
        case NODE_EXPR: 
            return "expression";  
        case NODE_CONST: 
            return "const";        
        case NODE_VAR: 
            return "variable";        
        case NODE_TYPE: 
            return "type";       
    }
    return "<>";
}
//语句类型枚举转化为字符串
string TreeNode::sType2String(int type) {
    switch(type){       
        case STMT_DECL: 
            return "declation";        
        case STMT_ASSIGN: 
            return "assign";   
        case STMT_ADD_ASSIGN:
            return "add_assign";     
        case STMT_SUB_ASSIGN:
            return "sub_assign";    
        case STMT_MUL_ASSIGN:
            return "mul_assign";    
        case STMT_DIV_ASSIGN:
            return "div_assign";    
        case STMT_MOD_ASSIGN:
            return "mod_assign";    
        case STMT_RETURN: 
            return "return";       
        case STMT_IFELSE: 
            return "ifelse";       
        case STMT_WHILE: 
            return "while"; 
        case STMT_FOR: 
            return "for";    
        case STMT_CONTINUE: 
            return "continue";
        case STMT_BREAK: 
            return "break";
        case STMT_MAIN:
            return "main";
        case STMT_SCANF:
            return "scanf";
        case STMT_PRINTF:
            return "printf";
        case STMT_BLOCK:
            return "block";
    }
    return "?";
}
//运算符类型转化为字符串
string TreeNode::opType2String(int type){
    switch(type){      
        case OP_ADD: 
            return "+";        
        case OP_SUB: 
            return "-";       
        case OP_MUL: 
            return "*";       
        case OP_DIV: 
            return "/"; 
        case OP_MOD: 
            return "%";   
        case OP_INC: 
            return "++";       
        case OP_DEC: 
            return "--";       
        case OP_MINUS: 
            return "-"; 
        case OP_AND: 
            return "&&";
        case OP_OR: 
            return "||";     
        case OP_NOT: 
            return "!";   
        case OP_LT: 
            return "<";       
        case OP_GT: 
            return ">"; 
        case OP_LE: 
            return "<=";    
        case OP_GE: 
            return ">=";
        case OP_EQ: 
            return "==";
        case OP_NEQ: 
            return "!=";    
    }
    return "?";    
}
//结点值类型转化为字符串
string TreeNode::getTypeInfo(int type) {
    switch(type) {
        case VALUE_BOOL:
            return "bool";
        case VALUE_INT:
            return "int";
        case VALUE_CHAR:
            return "char";
        case VALUE_STRING:
            return "string";
        default:
            cerr << "shouldn't reach here, typeinfo";
            assert(0);
    }
    return "?";
}
//构造函数
Tree::Tree(TreeNode* n){
    this->root=n;
}
//类型检查
void Tree::type_check(TreeNode*t){
    if(t!=nullptr){
        switch(t->nodeType){
            case NODE_STMT:
                switch(t->sType){
                    case STMT_IFELSE:
                        if(t->child[0]->valType!=VALUE_BOOL)
                            cout<<"Bad boolean type at line: "<<t->lineno<<endl;  
                        break;
                    case STMT_WHILE:
                        if(t->child[0]->valType!=VALUE_BOOL)
                            cout<<"Bad boolean type at line: "<<t->lineno<<endl;    
                        break;
                    case STMT_ADD_ASSIGN:
                        if(t->child[0]->valType!=t->child[1]->valType)
                            cerr<<"Assign error type at line: "<<t->lineno<<endl;
                        break;
                    case STMT_SUB_ASSIGN:
                        if(t->child[0]->valType!=t->child[1]->valType)
                            cerr<<"Assign error type at line: "<<t->lineno<<endl;
                        break;
                    case STMT_MUL_ASSIGN:
                        if(t->child[0]->valType!=t->child[1]->valType)
                            cerr<<"Assign error type at line: "<<t->lineno<<endl;
                        break;
                    case STMT_DIV_ASSIGN:
                        if(t->child[0]->valType!=t->child[1]->valType)
                            cerr<<"Assign error type at line: "<<t->lineno<<endl;
                        break;
                    case STMT_MOD_ASSIGN:
                        if(t->child[0]->valType!=t->child[1]->valType)
                            cerr<<"Assign error type at line: "<<t->lineno<<endl;
                        break;
                    case STMT_ASSIGN:
                        if(t->child[0]->valType!=t->child[1]->valType)
                            cerr<<"Assign error type at line: "<<t->lineno<<endl;
                        break;
                    case STMT_FOR:
                        if(t->child[1]->valType!=VALUE_BOOL)//TODO&&t->child[1]->nodeType!=STMT_NULL)
                            cerr<<"Bad boolean type at line: "<<t->lineno<<endl;    
                        break;
                }
                break;
            case NODE_EXPR:
                switch(t->opType){
                    case OP_ADD:
                        if(t->child[0]->valType!=t->child[1]->valType)
                            cerr<<"Bad add type at line: "<<t->lineno<<endl;
                        break;
                    case OP_SUB:
                        if(t->child[0]->valType!=t->child[1]->valType)
                            cerr<<"Bad sub type at line: "<<t->lineno<<endl;
                        break;
                    case OP_MUL:
                        if(t->child[0]->valType!=t->child[1]->valType)
                            cerr<<"Bad mul type at line: "<<t->lineno<<endl;
                        break;
                    case OP_DIV:
                        if(t->child[0]->valType!=t->child[1]->valType)
                            cerr<<"Bad div type at line: "<<t->lineno<<endl;
                        break;
                    case OP_MOD:
                        if(t->child[0]->valType!=t->child[1]->valType)
                            cerr<<"Bad mod type at line: "<<t->lineno<<endl;
                        break;
                    case OP_LE:
                        if(t->child[0]->valType!=t->child[1]->valType||t->child[0]->valType!=VALUE_INT)
                            cerr<<"Compare error at line: "<<t->lineno<<endl;
                        break;
                        break;
                    case OP_GE:
                        if(t->child[0]->valType!=t->child[1]->valType||t->child[0]->valType!=VALUE_INT)
                            cerr<<"Compare error at line: "<<t->lineno<<endl;
                        break;
                    case OP_LT:
                        if(t->child[0]->valType!=t->child[1]->valType||t->child[0]->valType!=VALUE_INT)
                            cerr<<"Compare error at line: "<<t->lineno<<endl;
                        break;
                    case OP_GT:
                        if(t->child[0]->valType!=t->child[1]->valType||t->child[0]->valType!=VALUE_INT)
                            cerr<<"Compare error at line: "<<t->lineno<<endl;
                        break;
                    case OP_AND:
                        if(t->child[0]->valType!=t->child[1]->valType||t->child[0]->valType!=VALUE_BOOL)
                            cerr<<"AND error at line: "<<t->lineno<<endl;
                        break;
                    case OP_OR:
                        if(t->child[0]->valType!=t->child[1]->valType||t->child[0]->valType!=VALUE_BOOL)
                            cerr<<"OR error at line: "<<t->lineno<<endl;
                        break;
                    case OP_DEC:
                        if(t->child[0]->valType!=VALUE_INT)
                            cerr<<"DEC error at line: "<<t->lineno<<endl;
                        break;
                    case OP_INC:
                        if(t->child[0]->valType!=VALUE_INT)
                            cerr<<"INC error at lineno: "<<t->lineno<<endl;
                        break;
                    case OP_MINUS:
                        if(t->child[0]->valType!=VALUE_INT)
                            cerr<<"MINUS error at lineno: "<<t->lineno<<endl;
                        break;
                    case OP_EQ:
                        if(t->child[0]->valType!=t->child[1]->valType)
                            cerr<<"EQ error at lineno: "<<t->lineno<<endl;
                        break;
                    case OP_NEQ:
                        if(t->child[0]->valType!=t->child[1]->valType)
                            cerr<<"NEQ error at lineno: "<<t->lineno<<endl;
                        break;
                    case OP_NOT:
                        if(t->child[0]->valType!=VALUE_BOOL&&t->child[0]->valType!=VALUE_INT)
                            cerr<<"NOT error at lineno: "<<t->lineno<<endl;
                        break;
                }
                break;
            case NODE_VAR:
                if(!sb.search(t->varName))
                    cerr<<"Uninitialized variable at lineno: "<<t->lineno<<endl;
                break;
        }
        int i=0;
        while(i<4&&t->child[i++]!=nullptr){
            type_check(t->child[i-1]);
        }
        type_check(t->sibling);
    }
}
//生成标签
void Tree::get_label(){
    TreeNode* p=root->child[0];
    //cout<<"get_label: "<<p->nodeID<<endl;
    while(p&&p->nodeType==NODE_STMT&&p->sType==STMT_DECL){p=p->sibling;}
    for(;p;p=p->sibling){
        //cout<<"recursize_get_label(): " <<p->nodeID<<endl;
        recursive_get_label(p);
    }       
    //cout<<"get label end"<<endl;
}
//新建一个标签
string Tree::new_label(void){
    char tmp[20];
    sprintf(tmp,"_%d",Tree::label_seq);
    Tree::label_seq++;
    return tmp;
}
//递归获取标签
void Tree::recursive_get_label(TreeNode *t){
    if(t){
        //cout<<"recursize_get_label: "<<t->nodeID<<endl;
        if(t->nodeType==NODE_STMT)
            stmt_get_label(t);
        if(t->nodeType==NODE_EXPR){
            expr_get_label(t);
        }
        if(t->nodeType==NODE_COMP){
            block_get_label(t);
        }
        for(int i=0;i<4;i++)
            recursive_get_label(t->child[i]);
    }
}
//代码块生成标签
void Tree::block_get_label(TreeNode *t){
	for (TreeNode* p = t->child[0];p;p = p->sibling) {
		//if (p->sibling == NULL)
            //p->label.next_label = t->label.next_label;
        recursive_get_label(p);
	}
}
//语句生成标签
void Tree::stmt_get_label(TreeNode *t){
    //cout<<"stmt_get_label: "<<t->nodeID<<endl;
    TreeNode* e = t->child[0];
	TreeNode* s1 = t->child[1];
	TreeNode* s2 = t->child[2];
	TreeNode* s3 = t->child[3];
	switch (t->sType) {
	case STMT_IFELSE:
		if (s2 == NULL) {//if(e) s1
			if (e->label.true_label == "")
				e->label.true_label = new_label();
			if (t->label.next_label == "")
				t->label.next_label = new_label();
			e->label.false_label = t->label.next_label;
			s1->label.next_label = t->label.next_label;
		}
		else {//if(e) s1 else s2
			if (e->label.true_label == "")
				e->label.true_label = new_label();
			if (t->label.next_label == "")
				t->label.next_label = new_label();
			e->label.false_label = new_label();
			s1->label.next_label = t->label.next_label;
			s2->label.next_label = t->label.next_label;
		}
		break;
	case STMT_WHILE://while(e) s1
		t->label.begin_label = new_label();
		e->label.true_label = new_label();
		if (t->label.next_label == "")
			t->label.next_label = new_label();
		e->label.false_label = t->label.next_label;
		s1->label.next_label = t->label.begin_label;
		break;
	case STMT_FOR: //for(e;s1;s2) s3
		t->label.begin_label = new_label();
		s1->label.true_label = new_label();
		if (t->label.next_label == "")
			t->label.next_label = new_label();
		s1->label.false_label = t->label.next_label;
		s1->label.next_label = t->label.begin_label;
		break;
    }
}
//表达式生成标签
void Tree::expr_get_label(TreeNode *t)
{
    //cout<<"expr_get_label"<<endl;
	if (t->valType != VALUE_BOOL)
		return;
	TreeNode *e1 = t->child[0];
	TreeNode *e2 = t->child[1];
	switch (t->opType)
	{
	case OP_AND:
        if(e1->label.true_label=="")
            e1->label.true_label=new_label();
        if(t->label.false_label=="")
            t->label.false_label=new_label();
        if(t->label.true_label=="")
            t->label.true_label=new_label();
        e2->label.true_label=t->label.true_label;
        e1->label.false_label=e2->label.false_label=t->label.false_label;
        break;
	case OP_OR:
		if (t->label.true_label == "")
			t->label.true_label = new_label();
		if (t->label.false_label == "")
			t->label.false_label = new_label();
		e1->label.false_label = new_label();
		e2->label.false_label = t->label.false_label;
		e1->label.true_label = e2->label.true_label = t->label.true_label;
		break;
    case OP_NOT:
        if (t->label.true_label == "")
			t->label.true_label = new_label();
		if (t->label.false_label == "")
			t->label.false_label = new_label();
		e1->label.false_label = t->label.true_label;
		e1->label.true_label = t->label.false_label;
		break;
	}
}
//生成汇编代码
void Tree::gen_code(){  
    cout<<endl<<endl;  
    gen_header();
    gen_str();
	gen_decl();
    TreeNode* p=root->child[0];
	cout << ".section .text" << endl;
    cout << "\t.globl main" << endl;
    cout<<"main:"<<endl;
    for(;p;p=p->sibling){
        recursive_gen_code(p);
    }
	// if (root->label.next_label != "")
	// 	cout << root->label.next_label << ":" << endl;
	// cout << "\tret" << endl;
}
//为表达式节点生成临时变量，每个表达式结点都是一个临时变量
void Tree::get_temp_var(TreeNode *t)
{
    if(t!=nullptr){
        if(t->nodeType==NODE_EXPR&&(t->opType>=OP_ADD&&t->opType<=OP_NEQ)){
            t->temp_var = Tree::temp_var_seq;
	        Tree::temp_var_seq++;
        }
        int i=0;
        while(i<4&&t->child[i++]!=nullptr){
            Tree::get_temp_var(t->child[i-1]);
        }
        Tree::get_temp_var(t->sibling);
    }
}
//在data中定义字符串
void Tree::gen_str(){
    cout << endl << "# define strings here" << endl;
    cout<<".section   .data"<<endl;
    for(int i=0;i<st.seq;i++){
        cout<<"_S"<<i<<":"<<endl;
        cout<<"\t.string "<<st.str[i]<<endl;
    }
}
//全局变量生成代码
void Tree::gen_decl(){
    cout << endl << "# define variables and temp variables here" << endl;
	cout << ".section .bss" << endl;
    //符号表中的全局变量
    for(int i=0;i<sb.size;i++){
        cout<<"_"<<sb.name[i]<<":"<<endl;
        cout<<"\t.zero\t4"<<endl;
        cout<<"\t.align\t4"<<endl;
    }
    //给所有表达式节点生成临时变量
	for (int i = 0; i < temp_var_seq; i++){
		cout << "t" <<  i << ":" << endl;
        cout << "\t.zero\t4" << endl;
        cout << "\t.align\t4" << endl;
	}
}
//生成汇编语言头部
void Tree::gen_header(){
    //cout << "# my asm code header here" << endl;
}
//递归生成汇编代码
void Tree::recursive_gen_code(TreeNode *t){
    if(t){
        if(t->nodeType==NODE_STMT)
            stmt_gen_code(t);
        if(t->nodeType==NODE_EXPR)
            expr_gen_code(t);
        if(t->nodeType==NODE_COMP)
            block_gen_code(t);
    }
}
//代码块生成汇编代码
void Tree::block_gen_code(TreeNode *t){
    //cout<<"\t\t\t\t\t\t\t\tBLOCK: "<<t->nodeID<<endl;
    for(TreeNode*p=t->child[0];p;p=p->sibling){
        recursive_gen_code(p);
    }
}
//语句生成汇编代码
void Tree::stmt_gen_code(TreeNode *t)
{
    //cout<<"\t\t\t\t\t\t\t\tstmt_gen_code: "<<t->nodeID<<"  t->sType: "<<t->sType<<endl;
    switch(t->sType){
        case STMT_WHILE:
        {
            //cout<<"\t\t\t\t\t\t\t\tSTMT_WHILE: "<<t->nodeID<<endl;
            TreeNode* e=t->child[0];
            TreeNode* s=t->child[1];
            cout<<t->label.begin_label<<":"<<endl;
            recursive_gen_code(e);
            cout<<e->label.true_label<<":"<<endl;
            recursive_gen_code(s);
            cout<<"\tjmp "<<t->label.begin_label<<endl;
            if(t->label.next_label!="")
                cout<<t->label.next_label<<":"<<endl;
            return;
        }
        case STMT_FOR:
        {
            //cout<<"\t\t\t\t\t\t\t\tSTMT_FOR: "<<t->nodeID<<endl;
            TreeNode* e = t->child[0];
		    TreeNode* s1 = t->child[1];
		    TreeNode* s2 = t->child[2];
		    TreeNode* s3 = t->child[3];
		    recursive_gen_code(e);					//初始化
		    cout << t->label.begin_label << ":" << endl;	//开始
		    recursive_gen_code(s1);				//判断语句，从此处跳走
		    cout << s1->label.true_label << ":" << endl;	//循环体标号
		    recursive_gen_code(s3);				//循环体
		    recursive_gen_code(s2);				//每次循环后的变化
		    cout << "\tjmp " << t->label.begin_label << endl;
		    if (t->label.next_label != "")
			    cout <<t->label.next_label << ":" << endl;
		    return;
        }
        case STMT_IFELSE:
        {
            //cout<<"\t\t\t\t\t\t\t\tSTMT_IFELSE: "<<t->nodeID<<endl;
            TreeNode* s2 = t->child[2];
		    if (s2 == NULL) {//if (e) s1
			    TreeNode* e = t->child[0]; TreeNode* s1 = t->child[1];
			    recursive_gen_code(e);//e S1 
			    cout << e->label.true_label << ":" << endl;
			    for (; s1; s1 = s1->sibling) {
				    recursive_gen_code(s1);
			    }
		    }
		    else {//if(e)s1 else s2 
			    TreeNode* e = t->child[0]; TreeNode* s1 = t->child[1]; TreeNode* s2 = t->child[2];
			    recursive_gen_code(e);
			    cout << e->label.true_label << ":" << endl;
			    for (; s1; s1 = s1->sibling) 
				    recursive_gen_code(s1);
			    cout << "\tjmp " << t->label.next_label << endl;
			    cout <<e->label.false_label << ":" << endl;
			    for (; s2; s2 = s2->sibling)
				    recursive_gen_code(s2);
		    }
		    if (t->label.next_label != "")
			    cout << t->label.next_label << ":" << endl;
		    return;
        }
        case STMT_ASSIGN:
        {
            //cout<<"\t\t\t\t\t\t\t\tSTMT_ASSIGN: "<<t->nodeID<<endl;
            TreeNode* e1 = t->child[0]; TreeNode* e2 = t->child[1];
            if(e2->nodeType==NODE_EXPR)
		        expr_gen_code(e2);
            cout << "\tmovl ";
		    if (e2->nodeType == NODE_VAR)
			    cout << "_"<<e2->varName<<", %eax"<<endl;
		    else if (e2->nodeType == NODE_CONST)
			    cout << "$" <<e2->int_val<<", %eax"<<endl;
		    // else if (e2->kind == CK)
			//     cout << 80;
		    else {
                cout << "t" << e2->temp_var<<", %eax"<<endl;
            }
		    cout << "\tmovl %eax, _" << e1->varName << endl;
		    return;
        }
        case STMT_ADD_ASSIGN:
        {
            TreeNode* e1 = t->child[0]; TreeNode* e2 = t->child[1];
            if(e2->nodeType==NODE_EXPR)
		        expr_gen_code(e2);
            cout << "\tmovl ";
		    if (e2->nodeType == NODE_VAR)
			    cout << "_"<<e2->varName<<", %eax"<<endl;
		    else if (e2->nodeType == NODE_CONST)
			    cout << "$" <<e2->int_val<<", %eax"<<endl;
		    else {
                cout << "t" << e2->temp_var<<", %eax"<<endl;
            }
            cout<<"\taddl _"<<e1->varName<<", %eax"<<endl;
		    cout << "\tmovl %eax, _" << e1->varName << endl;
		    return;
        }
        case STMT_SUB_ASSIGN:
        {
            TreeNode* e1 = t->child[0]; TreeNode* e2 = t->child[1];
            if(e2->nodeType==NODE_EXPR)
		        expr_gen_code(e2);
            cout << "\tmovl _"<<e1->varName<<", %eax"<<endl;
            cout<<"\tsubl ";
		    if (e2->nodeType == NODE_VAR)
			    cout << "_"<<e2->varName<<", %eax"<<endl;
		    else if (e2->nodeType == NODE_CONST)
			    cout << "$" <<e2->int_val<<", %eax"<<endl;
		    else {
                cout << "t" << e2->temp_var<<", %eax"<<endl;
            }
		    cout << "\tmovl %eax, _" << e1->varName << endl;
		    return;
        }
        case STMT_MUL_ASSIGN:
        {
            TreeNode* e1 = t->child[0]; TreeNode* e2 = t->child[1];
            if(e2->nodeType==NODE_EXPR)
		        expr_gen_code(e2);
            cout << "\tmovl ";
		    if (e2->nodeType == NODE_VAR)
			    cout << "_"<<e2->varName<<", %eax"<<endl;
		    else if (e2->nodeType == NODE_CONST)
			    cout << "$" <<e2->int_val<<", %eax"<<endl;
		    else {
                cout << "t" << e2->temp_var<<", %eax"<<endl;
            }
            cout<<"\timull _"<<e1->varName<<", %eax"<<endl;
		    cout << "\tmovl %eax, _" << e1->varName << endl;
		    return;
        }
        case STMT_DIV_ASSIGN://TODO
        {
            TreeNode* e1 = t->child[0]; TreeNode* e2 = t->child[1];
            cout<<"\tmovl ";
            cout<<"_"<<e1->varName<<", %edx"<<endl;
            cout<<"\tmovl %edx, %eax"<<endl;
            cout<<"\tsarl $31, %edx"<<endl;
            cout<<"movl ";
            if(e2->nodeType==NODE_VAR)
                cout<<"_"<<e2->varName<<", %ebx"<<endl;
            else if(e2->nodeType==NODE_CONST)
                cout<<"$"<<e2->int_val<<", %ebx"<<endl;
            else cout<<"t"<<e2->temp_var<<", %ebx"<<endl;
            cout<<"\tidivl %ebx"<<endl;
            cout<<"\tmovl %eax, _"<<e1->varName<<endl;
            return;
        }
        case STMT_MOD_ASSIGN:
        {
            TreeNode* e1 = t->child[0]; TreeNode* e2 = t->child[1];
            cout<<"\tmovl ";
            cout<<"_"<<e1->varName<<", %edx"<<endl;
            cout<<"\tmovl %edx, %eax"<<endl;
            cout<<"\tsarl $31, %edx"<<endl;
            cout<<"movl ";
            if(e2->nodeType==NODE_VAR)
                cout<<"_"<<e2->varName<<", %ebx"<<endl;
            else if(e2->nodeType==NODE_CONST)
                cout<<"$"<<e2->int_val<<", %ebx"<<endl;
            else cout<<"t"<<e2->temp_var<<", %ebx"<<endl;
            cout<<"\tidivl %ebx"<<endl;
            cout<<"\tmovl %edx, _"<<e1->varName<<endl;
            return;
        }
        case STMT_DECL:
        {
            //cout<<"\t\t\t\t\t\t\t\tSTMT_DECL"<<endl;
            TreeNode* e = t->child[1];
            recursive_gen_code(e);
            break;
        }
        case STMT_PRINTF:
        {
            TreeNode* e1=t->child[0];
            TreeNode* e2=t->child[1];
            if(e2){//两个参数
                //第二个参数
                if(e2->nodeType==NODE_EXPR){
                    expr_gen_code(e2);
                    cout<<"\tpushl t"<<e2->temp_var<<endl;
                }   
		        if (e2->nodeType == NODE_VAR)
			        cout << "\tpushl _"<<e2->varName<<endl;
		        if (e2->nodeType == NODE_CONST)
			        cout << "\tpushl $" <<e2->int_val<<endl;
                //第一个参数
                cout<<"\tpushl $_S"<<e1->str_seq<<endl;
                cout<<"\tcall printf"<<endl;
                cout<<"\taddl $8,%esp"<<endl;
            }else{//只有一个参数
                cout<<"\tpushl $_S"<<e1->str_seq<<endl;
                cout<<"\tcall printf"<<endl;
                cout<<"\taddl $4,%esp"<<endl;
            }
            break;
        }
        case STMT_SCANF://TODO
        {
            TreeNode* e1=t->child[0];
            TreeNode* e2=t->child[1];
			cout << "\tpushl $_"<<e2->varName<<endl;
            cout<<"\tpushl $_S"<<e1->str_seq<<endl;
            cout<<"\tcall scanf"<<endl;
            cout<<"\taddl $8,%esp"<<endl;
            break;
        }
        case STMT_RETURN://TODO
        {
            TreeNode* e=t->child[0];
            if(e->nodeType==NODE_EXPR)
		        cout<<"\tpushl t"<<e->temp_var<<endl;
		    if (e->nodeType == NODE_VAR)
			    cout << "\tpushl _"<<e->varName<<endl;
		    if (e->nodeType == NODE_CONST)
			    cout << "\tpushl $" <<e->int_val<<endl;
            cout<<"\tcall exit"<<endl;
            break;
        }
    }
}
//表达式生成汇编代码
void Tree::expr_gen_code(TreeNode *t){
	int i;
	if (t->opType != OP_AND && t->opType != OP_OR && t->opType != OP_NOT)
		for (i = 0; i < MAX_CHILD && t->child[i] != NULL; i++)
			recursive_gen_code(t->child[i]);  //为了优先级，先考虑子节点
	TreeNode* e1 = t->child[0];
	TreeNode* e2 = t->child[1];
	switch (t->opType) {
	case OP_ADD:
	{
        cout<<"\tmovl ";
        if(e1->nodeType==NODE_VAR)
            cout<<"_"<<e1->varName<<", %eax"<<endl;
        else if(e1->nodeType==NODE_CONST)
            cout<<"$"<<e1->int_val<<", %eax"<<endl;
        else cout<<"t"<<e1->temp_var<<", %eax"<<endl;
        cout<<"\taddl ";
        if(e2->nodeType==NODE_VAR)
            cout<<"_"<<e2->varName<<", %eax"<<endl;
        else if(e2->nodeType==NODE_CONST)
            cout<<"$"<<e2->int_val<<", %eax"<<endl;
        else cout<<"t"<<e2->temp_var<<", %eax"<<endl;
        cout<<"\tmovl %eax, t"<<t->temp_var<<endl;
		break;
	}
	case OP_SUB:
	{
		cout<<"\tmovl ";
        if(e1->nodeType==NODE_VAR)
            cout<<"_"<<e1->varName<<", %eax"<<endl;
        else if(e1->nodeType==NODE_CONST)
            cout<<"$"<<e1->int_val<<", %eax"<<endl;
        else cout<<"t"<<e1->temp_var<<", %eax"<<endl;
        cout<<"\tsubl ";
        if(e2->nodeType==NODE_VAR)
            cout<<"_"<<e2->varName<<", %eax"<<endl;
        else if(e2->nodeType==NODE_CONST)
            cout<<"$"<<e2->int_val<<", %eax"<<endl;
        else cout<<"t"<<e2->temp_var<<", %eax"<<endl;
        cout<<"\tmovl %eax, t"<<t->temp_var<<endl;
		break;
	}
	case OP_MUL:{
		cout<<"\tmovl ";
        if(e1->nodeType==NODE_VAR)
            cout<<"_"<<e1->varName<<", %eax"<<endl;
        else if(e1->nodeType==NODE_CONST)
            cout<<"$"<<e1->int_val<<", %eax"<<endl;
        else cout<<"t"<<e1->temp_var<<", %eax"<<endl;
        cout<<"\timull ";
        if(e2->nodeType==NODE_VAR)
            cout<<"_"<<e2->varName<<", %eax"<<endl;
        else if(e2->nodeType==NODE_CONST)
            cout<<"$"<<e2->int_val<<", %eax"<<endl;
        else cout<<"t"<<e2->temp_var<<", %eax"<<endl;
        cout<<"\tmovl %eax, t"<<t->temp_var<<endl;
		break;
    }    
    case OP_DIV:
    {
        cout<<"\tmovl ";
        if(e1->nodeType==NODE_VAR)
            cout<<"_"<<e1->varName<<", %edx"<<endl;
        else if(e1->nodeType==NODE_CONST)
            cout<<"$"<<e1->int_val<<", %edx"<<endl;
        else cout<<"t"<<e1->temp_var<<", %edx"<<endl;
        cout<<"\tmovl %edx, %eax"<<endl;
        cout<<"\tsarl $31, %edx"<<endl;
        cout<<"movl ";
        if(e2->nodeType==NODE_VAR)
            cout<<"_"<<e2->varName<<", %ebx"<<endl;
        else if(e2->nodeType==NODE_CONST)
            cout<<"$"<<e2->int_val<<", %ebx"<<endl;
        else cout<<"t"<<e2->temp_var<<", %ebx"<<endl;
        cout<<"\tidivl %ebx"<<endl;
        cout<<"\tmovl %eax, t"<<t->temp_var<<endl;
        break;
    }
    case OP_MOD:
    {
        cout<<"\tmovl ";
        if(e1->nodeType==NODE_VAR)
            cout<<"_"<<e1->varName<<", %edx"<<endl;
        else if(e1->nodeType==NODE_CONST)
            cout<<"$"<<e1->int_val<<", %edx"<<endl;
        else cout<<"t"<<e1->temp_var<<", %edx"<<endl;
        cout<<"\tmovl %edx, %eax"<<endl;
        cout<<"\tsarl $31, %edx"<<endl;
        cout<<"\tmovl ";
        if(e2->nodeType==NODE_VAR)
            cout<<"_"<<e2->varName<<", %ebx"<<endl;
        else if(e2->nodeType==NODE_CONST)
            cout<<"$"<<e2->int_val<<", %ebx"<<endl;
        else cout<<"t"<<e2->temp_var<<", %ebx"<<endl;
        cout<<"\tidivl %ebx"<<endl;
        cout<<"\tmovl %edx, t"<<t->temp_var<<endl;
        break;
    }
    case OP_INC:
    {
        cout<<"\tincl _"<<e1->varName<<endl;
        break;
    } 
    case OP_DEC:
    {
        cout<<"\tdecl _"<<e1->varName<<endl;
        break;
    } 
    case OP_MINUS:
    {
        cout << "\tmovl ";
		if (e1->nodeType == NODE_VAR)
			cout << "_"<<e1->varName<<", %eax"<<endl;
		else if (e1->nodeType == NODE_CONST)
			cout << "$"<<e1->int_val<<", %eax"<<endl;
		else cout << "t" << e1->temp_var<<", %eax"<<endl;
		cout<<"\tnegl %eax"<<endl;
        cout<<"\tmovl %eax, t"<<t->temp_var<<endl;
        break;
    } 
    case OP_AND:
    {
        recursive_gen_code(e1);
        if(e1->label.true_label!="")cout<<e1->label.true_label<<":"<<endl;
        recursive_gen_code(e2);
        break;
    }
    case OP_OR:
    {
        recursive_gen_code(e1);
        if(e1->label.false_label!="")cout<<e1->label.false_label<<":"<<endl;
        recursive_gen_code(e2);
        break;
    }
    case OP_NOT:
    {
        recursive_gen_code(e1);
        break;
    }
    case OP_LT:
        {cout << "\tmovl ";
		if (e1->nodeType == NODE_VAR)
			cout << "_"<<e1->varName<<", %eax"<<endl;
		else if (e1->nodeType == NODE_CONST)
			cout << "$"<<e1->int_val<<", %eax"<<endl;
		else cout << "t" << e1->temp_var<<", %eax"<<endl;
		cout << "\tcmpl ";
		if (e2->nodeType == NODE_VAR)
			cout << "_"<<e2->varName<<", %eax"<<endl;
		else if (e2->nodeType == NODE_CONST)
			cout << "$"<<e2->int_val<<", %eax"<<endl;
		else cout << "t" << e2->temp_var<<", %eax"<<endl;
        if(t->label.true_label!="")
            cout << "\tjl " << t->label.true_label << endl;
        if(t->label.false_label!="")
		    cout << "\tjmp " << t->label.false_label << endl;
		break;}
    case OP_LE:
        {cout << "\tmovl ";
		if (e1->nodeType == NODE_VAR)
			cout << "_"<<e1->varName<<", %eax"<<endl;
		else if (e1->nodeType == NODE_CONST)
			cout << "$"<<e1->int_val<<", %eax"<<endl;
		else cout << "t" << e1->temp_var<<", %eax"<<endl;
		cout << "\tcmpl ";
		if (e2->nodeType == NODE_VAR)
			cout << "_"<<e2->varName<<", %eax"<<endl;
		else if (e2->nodeType == NODE_CONST)
			cout << "$"<<e2->int_val<<", %eax"<<endl;
		else cout << "t" << e2->temp_var<<", %eax"<<endl;
        if(t->label.true_label!="")
        cout << "\tjle " << t->label.true_label << endl;
        if(t->label.false_label!="")
		cout << "\tjmp " << t->label.false_label << endl;
		break;}
    case OP_GT:
        {cout << "\tmovl ";
		if (e1->nodeType == NODE_VAR)
			cout << "_"<<e1->varName<<", %eax"<<endl;
		else if (e1->nodeType == NODE_CONST)
			cout << "$"<<e1->int_val<<", %eax"<<endl;
		else cout << "t" << e1->temp_var<<", %eax"<<endl;
		cout << "\tcmpl ";
		if (e2->nodeType == NODE_VAR)
			cout << "_"<<e2->varName<<", %eax"<<endl;
		else if (e2->nodeType == NODE_CONST)
			cout << "$"<<e2->int_val<<", %eax"<<endl;
		else cout << "t" << e2->temp_var<<", %eax"<<endl;
        if(t->label.true_label!="")
        cout << "\tjg " << t->label.true_label << endl;
        if(t->label.false_label!="")
		cout << "\tjmp " << t->label.false_label << endl;
		break;}
    case OP_GE:
        {cout << "\tmovl ";
		if (e1->nodeType == NODE_VAR)
			cout << "_"<<e1->varName<<", %eax"<<endl;
		else if (e1->nodeType == NODE_CONST)
			cout << "$"<<e1->int_val<<", %eax"<<endl;
		else cout << "t" << e1->temp_var<<", %eax"<<endl;
		cout << "\tcmpl ";
		if (e2->nodeType == NODE_VAR)
			cout << "_"<<e2->varName<<", %eax"<<endl;
		else if (e2->nodeType == NODE_CONST)
			cout << "$"<<e2->int_val<<", %eax"<<endl;
		else cout << "t" << e2->temp_var<<", %eax"<<endl;
        if(t->label.true_label!="")
        cout << "\tjge " << t->label.true_label << endl;
        if(t->label.false_label!="")
		cout << "\tjmp " << t->label.false_label << endl;
		break;}
    case OP_EQ:
        {cout << "\tmovl ";
		if (e1->nodeType == NODE_VAR)
			cout << "_"<<e1->varName<<", %eax"<<endl;
		else if (e1->nodeType == NODE_CONST)
			cout << "$"<<e1->int_val<<", %eax"<<endl;
		else cout << "t" << e1->temp_var<<", %eax"<<endl;
		cout << "\tsubl ";
		if (e2->nodeType == NODE_VAR)
			cout << "_"<<e2->varName<<", %eax"<<endl;
		else if (e2->nodeType == NODE_CONST)
		    cout <<"$"<<e2->int_val<<", %eax"<<endl;
		else cout << "t" << e2->temp_var<<", %eax"<<endl;
        if(t->label.true_label!="")
		cout << "\tjz " << t->label.true_label << endl;
        if(t->label.false_label!="")
		cout << "\tjmp " << t->label.false_label << endl;
        break;}
    case OP_NEQ:
         {cout << "\tmovl ";
		if (e1->nodeType == NODE_VAR)
			cout << "_"<<e1->varName<<", %eax"<<endl;
		else if (e1->nodeType == NODE_CONST)
			cout << "$"<<e1->int_val<<", %eax"<<endl;
		else cout << "t" << e1->temp_var<<", %eax"<<endl;
		cout << "\tsubl ";
		if (e2->nodeType == NODE_VAR)
			cout << "_"<<e2->varName<<", %eax"<<endl;
		else if (e2->nodeType == NODE_CONST)
		    cout <<"$"<<e2->int_val<<", %eax"<<endl;
		else cout << "t" << e2->temp_var<<", %eax"<<endl;
        if(t->label.true_label!="")
		cout << "\tjnz " << t->label.true_label << endl;
        if(t->label.false_label!="")
		cout << "\tjmp " << t->label.false_label << endl;
        break;}
    }
}