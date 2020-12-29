#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main(){
    int a;
    int b;
    int c;
    int d;
    int result;
    a = 5;
    b = 5;
    c = 1;
    d = -2;
    result = 2;
    if ((d * 1 / 2) < 0 || (a - b) != 0 && (c + 3) % 2 != 0) {
        cout<<result<<endl;
    }
    // if ((d % 2 + 67) < 0 || (a - b) != 0 && (c + 2) % 2 != 0) {
    //     result = 4;
    //     cout<<result<<endl;
    // }
    return 0;
}
// TreeNode *node = new TreeNode(NODE_CONST, lineno);
//     string s = string(yytext);
//     node->char_val = s.at(1);
//     node->str_val = s.substr(1,1);
//     node->var_name = "ConstChar";
//     yylval = node;
//     return ConstChar;