#include <stdio.h>
#include <malloc.h>
#include "stack.h"

int f1(int, int);

int f2(int, int);

int f1(int n, int x) {
    if (n == 0) {
        return 1;
    } else if (n == 1) {
        return 2 * x;
    } else {
        return 2 * x * f1(n - 1, x) - 2 * (n - 1) * f1(n - 2, x);
    }
}

int f2(int n, int x) {
    PStack s;
    s = (PStack) malloc(sizeof(SeqStack));
    int r;
    int sum1;
    int sum2;
    for (int i = n; i >= 0; --i) {
        if (n == 0) {
            r = 1;
            Push(s, r);
            sum1 = r;
        } else if (n == 1) {
            r = 2 * x;
            Push(s, r);
            sum2 = r;
        } else {
            r = 2 * x * sum2 - 2 * (n - 1) * sum1;
            Push(s, r);
            sum1 = sum2;
            sum2 = r;
        }
    }
    return Pop(s);
}


int main() {
    int n;
    int x;
    puts("请输入n:");
    scanf("%d", &n);
    puts("请输入x:");
    scanf("%d", &x);

    printf("%d\n", f1(n, x));
    printf("%d\n", f1(n, x));


}
