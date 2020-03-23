#include <stdio.h>
#include "stack.h"


int main() {
    PStack s;
    s = (SeqStack *)malloc(sizeof(SeqStack));
    int n;
    int x;
    Initial(s);
    puts("请输入要转换的值:");
    scanf("%d", &n);
    puts("请输入进制");
    scanf("%d", &x);

    while (n != 0) {
        Push(s, n % x);
        n = n / x;
    }

    while (!IsEmpty(s)) {
        printf("%d", Pop(s));
    }
}
