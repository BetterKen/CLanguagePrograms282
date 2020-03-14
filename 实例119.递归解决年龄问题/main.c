#include <stdio.h>

int age(int);

int age(int n) {
    int f;
    if (n == 1) {
        f = 10;
    } else {
        f = age(n - 1) + 2;
    }
    return f;
}

int main() {
    int n;
    puts("请输入第几个人:");
    scanf("%d", &n);

    printf("年龄为:%d", age(n));

    return 0;
}