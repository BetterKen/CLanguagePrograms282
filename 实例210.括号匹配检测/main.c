#include <stdio.h>
#include <malloc.h>
#include "stack.h"


int main() {
    PStack s;
    char ch;
    int flag = 0;

    s = (PStack) malloc(sizeof(SeqStack));
    Initial(s);
    puts("请输入:");
    while ((ch = getchar()) != '\n') {
        char tmp;
        switch (ch) {
            case '[':
                Push(s, '[');
                break;
            case '(':
                Push(s, '(');
                break;
            case '{':
                Push(s, '{');
                break;
            case ']':
            case ')':
            case '}':
                tmp = Pop(s);
                if ((ch == ']' && tmp != '[') || (ch == ')' && tmp != '(') || (ch == '}' && tmp != '{')) {
                    flag = 1;
                    puts("不匹配!");
                    break;
                }
                break;
        }
        if (flag == 1) {
            break;
        }
    }

    if (flag == 0 && IsEmpty(s) == 1) {
        puts("匹配!");
    } else {
        puts("不匹配");
    }
}
