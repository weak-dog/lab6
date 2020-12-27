#ifndef TREE_H
#define TREE_H
#define MAX_CHILD 4
#define MAX_ID 1024
#include "pch.h"
using namespace std;

//节点类型
enum NodeType
{
    NODE_PROG,  //程序
    NODE_STMT,  //语句
    NODE_EXPR,  //表达式
    NODE_CONST, //常量
    NODE_VAR,   //变量
    NODE_TYPE,  //变量类
    NODE_NULL,  //空
};

//结点值的类型
enum ValueType
{
    VALUE_BOOL,     //布尔类型
    VALUE_INT,      //整型
    VALUE_CHAR,     //字符型
    VALUE_STRING,   //字符串型
    COMPOSE_STRUCT, 
    COMPOSE_UNION,
    COMPOSE_FUNCTION
};

//表达式节点子类型
enum OperatorType
{
    OP_ADD,     // +
    OP_SUB,     // -
    OP_MUL,     // *
    OP_DIV,     // /
    OP_MOD,     // %
    OP_INC,     // ++
    OP_DEC,     // --
    OP_MINUS,   // -
    OP_AND,     // &&
    OP_OR,      // ||
    OP_NOT,     // ！
    OP_LT,      // <
    OP_GT,      // >
    OP_LE,      // <=
    OP_GE,      // >=
    OP_EQ,      // ==
    OP_NEQ,     // !=
};

//语句节点子类型
enum StmtType 
{
    STMT_DECL,      //声明语句
    STMT_ASSIGN,    //赋值语句
    STMT_RETURN,    //返回语句
    STMT_IFELSE,    //条件语句
    STMT_WHILE,     //while循环
    STMT_FOR,       //for循环
    STMT_CONTINUE,  //continue
    STMT_BREAK,     //break
    STMT_MAIN,      //main函数语句
    STMT_SCANF,     //输入语句
    STMT_PRINTF,    //输出语句
    STMT_BLOCK,     //代码块  
};

//标签属性
struct Label {
	string true_label="";
	string false_label="";
	string begin_label="";
	string next_label="";
};

//符号表
class symbolTable{
public:
    string name[MAX_ID];
    int size=0;
    void insert(string id);
    bool search(string id);
    void display();
};

//树节点
class TreeNode {
public:
    int nodeID;                     //结点编号
    int lineno;                     //结点行号
    int nodeType;                   //结点类型
    int valType;                    //节点值的类型
    int sType;                      //语句结点类型
    int opType;                     //表达式运算符类型
    int temp_var;                   //分配的临时变量
    string varName;                 //变量名
    TreeNode* child[MAX_CHILD];     //孩子结点
    TreeNode* sibling;              //兄弟结点
    Label label;                    //标签
public:
    TreeNode(int lineno, int type); //构造函数         
    void addSibling(TreeNode*);     //添加兄弟结点
    void genNodeId();               //递归给结点编号
    void printAST();                //递归打印AST，输出自己信息+孩子id，之后递归打印孩子和兄弟。
    void printNodeInfo();           //打印结点信息
    void printChildrenId();         //打印孩子结点的序号
    void printSiblingId();          //打印兄弟结点的序号
    void printSpecialInfo();        //打印结点特殊信息
    static string nodeType2String (int type);   //结点类型转化为字符串
    static string sType2String (int type);      //语句类型枚举转化为字符串
    static string opType2String (int type);     //运算符类型转化为字符串
    static string getTypeInfo(int type);        //结点值类型转化为字符串
};

//树
class Tree{
public:
    TreeNode* root;                                     //根节点
    int label_seq=0;                                    //下一个生成标签的序号
    int temp_var_seq = 0;                               //临时变量的序号
public:
    Tree(TreeNode* n);                                  //构造函数√
    void type_check(TreeNode* t);                       //类型检查√
    void get_label();                                   //生成标签√
    string new_label(void);                             //新建一个标签√
    void recursive_get_label(TreeNode *t);              //递归获取标签√
    void stmt_get_label(TreeNode *t);                   //语句生成标签√
	void expr_get_label(TreeNode *t);                   //表达式生成标签√
    void gen_code();                                    //生成汇编代码
	void get_temp_var(TreeNode *t);                     //为表达式节点生成临时变量√
    void gen_decl();                                    //全局变量生成代码√
	void gen_header();                                  //生成汇编语言头部
	void recursive_gen_code(TreeNode *t);               //递归生成汇编代码√
	void stmt_gen_code(TreeNode *t);                    //语句生成汇编代码
	void expr_gen_code(TreeNode *t);                    //表达式生成汇编代码
};

#endif