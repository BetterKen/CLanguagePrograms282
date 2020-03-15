#include <stdio.h>
#include <math.h>

int main() {
    double a;
    printf("请输入数字:\n");
    scanf("%lf", &a);

    printf("最小数字为%f", ceil(a));

    return 0;
}