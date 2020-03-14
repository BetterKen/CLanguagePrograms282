#include <stdio.h>

int ss(int);

int ss(int a) {
    if (a == 1 || a == 2) {
        return 1;
    }
    for (int i = 2; i < a; ++i) {
        if (a % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int a;
    puts("请输入一个整数:");
    scanf("%d", &a);

    if (ss(a)) {
        puts("是素数");
    } else {
        puts("不是素数");
    }

    return 0;
}