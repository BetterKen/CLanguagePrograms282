#include <stdio.h>
#include "stack.h"


int main() {
    PStack s;
    char ch;
    int i = 0;
    char a[STACK_SIZE];
    s = (SeqStack *) malloc(sizeof(SeqStack));
    Initial(s);
    ch = getchar();
    while (ch != '\n' && ch != '\000') {
        switch (ch) {
            case '#':
                Pop(s);
                break;
            case '@':
                ClearStack(s);
                break;
            default:
                Push(s, ch);
        }
        ch = getchar();
    }

    while (!IsEmpty(s)) {
        a[i] = Pop(s);
        i++;
    }
    for (int j = i-1; j >= 0; j--) {
        printf("%c", a[j]);
    }
}
