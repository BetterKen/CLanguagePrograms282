#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double x, y;
    printf("请输入a,b,c:\n");
    scanf("%lf %lf %lf", &a, &b, &c);
    if (b * b - 4 * a * c < 0) {
        printf("所输入的参数不能求出解!\n");
        return 0;
    }
    x = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    y = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
    printf("解为:x=%f,y=%f\n", x, y);
    return 0;
}