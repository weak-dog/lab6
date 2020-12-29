#include "common.h"
#include <fstream>

extern TreeNode *root;
extern FILE *yyin;
extern symbolTable sb;
extern int yyparse();

using namespace std;
int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        FILE *fin = fopen(argv[1], "r");
        if (fin != nullptr)
        {
            yyin = fin;
        }
        else
        {
            cerr << "failed to open file: " << argv[1] << endl;
        }
    }
    yyparse();
    Tree tree(root);
    if(tree.root != NULL) {
        //sb.display();
        tree.root->genNodeId();
        //tree.root->printAST();
        //tree.type_check(root);
        tree.get_temp_var(root);
        tree.get_label();
        tree.gen_code();
    }
    return 0;
}