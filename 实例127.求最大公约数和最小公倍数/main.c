#include <stdio.h>

int gcd(int, int);

int gcd(int a, int b) {
    int tmp;
    int m;
    int n;
    if (a < b) {
        tmp = a;
        a = b;
        b = tmp;
    }
    m = a * b;
    n = a % b;
    while (n != 0) {
        a = b;
        b = n;
        n = a % b;
    }

    printf("最大公约数为%d\n", b);
    printf("最小公倍数为%d\n", m / b);
}

int main() {
    int a, b;
    printf("请输入两个数字:\n");
    scanf("%d %d", &a, &b);
    gcd(a, b);

    return 0;
}