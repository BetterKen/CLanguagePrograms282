#include <stdio.h>

int squareSum(int);

int squareSum(int n) {
    if (n == 1 || n == 145) {
        return 0;
    }
    int m = n;
    int len = 0;
    int sum = 0;
    int a[100] = {0};
    while (m != 0) {
        a[len] = m % 10;
        m = m / 10;
        len++;
    }
    printf("n=%d->", n);

    for (int i = 0; i <= len; ++i) {
        sum += a[i] * a[i];
        printf("%d*%d", a[i]);
        if (i != len) {
            printf("+");
        }
    }
    printf("=%d\n", sum);
    squareSum(sum);
}

int main() {

    int a = 0;
    printf("请输入整数a:\n");
    scanf("%d", &a);
    squareSum(a);

    return 0;

}