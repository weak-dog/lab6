#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main(){
    int a;
    int b;
    a = -2;
    b = 1;
    a = a --b + -(a + b) % -(a - b);
    printf("%d\n",a);
    return 0;
}
// TreeNode *node = new TreeNode(NODE_CONST, lineno);
//     string s = string(yytext);
//     node->char_val = s.at(1);
//     node->str_val = s.substr(1,1);
//     node->var_name = "ConstChar";
//     yylval = node;
//     return ConstChar;