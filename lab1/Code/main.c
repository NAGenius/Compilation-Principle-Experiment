#include <stdio.h>
#include "Tree.h"

extern int yyrestart(FILE* f);
extern int yyparse();
extern void printTree(Node* root, int depth);
extern Node* root;
extern int lexError;
extern int synError;

int main(int argc, char** argv) {
    if (argc <= 1)
        return 1;
    // argv[1]为命令行第二个, 即输入文件
    FILE* f = fopen(argv[1], "r");
    if (!f) {
        perror(argv[1]);
        return 1;
    }
    // 词法分析
    yyrestart(f);
    // 语法分析
    yyparse();
    // 如果不存在此法错误和语法错误, 并且语法树不为空
    if (root != NULL && lexError == 0 && synError == 0)
        printTree(root, 0);
    return 0;
}