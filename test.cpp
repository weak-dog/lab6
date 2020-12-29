#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main(){
    string s="\'s\'";
    cout<<s.at(1)<<endl;
}
// TreeNode *node = new TreeNode(NODE_CONST, lineno);
//     string s = string(yytext);
//     node->char_val = s.at(1);
//     node->str_val = s.substr(1,1);
//     node->var_name = "ConstChar";
//     yylval = node;
//     return ConstChar;