#include <stdio.h>
#include <malloc.h>
#include "stack.h"


int main() {
    PStack s;
    s = (PStack) malloc(sizeof(SeqStack));
    Initial(s);
    Push(s, '9');
    Push(s, '7');
    Push(s, '5');
    Push(s, '3');
    Push(s, '1');
    DataType *top = s->top;
    char a;
    int n = 3;
    puts("请输入密码:");
    for (int i = 0; i < n; ++i) {
        while (IsEmpty(s) == 0) {
            char tmp = Pop(s);
            char t = getchar();
            if (tmp != t) {
                printf("密码错误!\n");
                s->top = top;
                while ((t = getchar()) != '\n') {}
                break;
            }
        }
        if (IsEmpty(s) == 1) {
            printf("密码正确!\n");
            break;
        }
    }
}
