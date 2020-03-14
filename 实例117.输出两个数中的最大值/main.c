#include <stdio.h>

int max(int, int);

int max(int a, int b) {
    return a > b ? a : b;
}

int main() {

    int a;
    int b;
    puts("请输入两个数:");
    scanf("%d %d", &a, &b);
    printf("最大值为:%d", max(a, b));

    return 0;
}