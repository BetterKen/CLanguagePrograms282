#include <stdio.h>
#include <math.h>

int main() {
    double number;//需要使用double类型 使用float类型 数字会有随机小数
    double f, i;
    puts("请输入数字:\n");
    scanf("%lf", &number);
    f = modf(number, &i); // double modf(double num,double *i) 函数返回num的小数部分 分解出的整数部分放在i里
    printf("%f=%f+%f", number, f, i);

    return 0;
}