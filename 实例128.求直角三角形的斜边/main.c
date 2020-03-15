#include <stdio.h>
#include <math.h>

int main() {
    double a, b;
    printf("请输入两个直角边:\n");
    scanf("%lf %lf", &a, &b);

    /* Return `sqrt(X*X + Y*Y)'.  */
    printf("斜边长为%f", hypot(a, b));

    return 0;
}