#include <stdio.h>
#include <math.h>
/**
 * 在c语言中，double类型的读入必须用"%lf"；输出必须用"%f"
 * 解释：double和float的精度是不同的，故存储空间也是不同的，所以如果要读入double类型，必须要用%lf来读入，以免精度丢失
 * 而输出，由于printf中并无对%lf的严格定义，故使用%lf不一定会出现正确结果。
 * 那使用%f输出又如何呢？由于c语言中的默认参数提升规则，%f输出的不论是float还是double都会被提升到双精度进行输出，并不会有精度丢失。
 */
int main() {
    double a, b, c;
    double area;
    printf("请输入三角形三条边长度:\n");
    scanf("%lf %lf %lf", &a, &b, &c);//这里要注意用double则需要使用lf
    if (a + b > c && a + c > b && b + c > a) {
        double p = (a + b + c) / 2.0;
        printf("%f",p);
        area = sqrt(p*(p-a)*(p-b)*(p-c));
        printf("三角形的面积为:%f\n", area);
        if (pow(a, 2) + pow(b, 2) == pow(c, 2) || pow(a, 2) + pow(c, 2) == pow(b, 2) ||
            pow(b, 2) + pow(c, 2) == pow(a, 2)) {
            printf("是直角三角形\n");
            return 0;
        }
        if (a == b && a == c && b == c) {
            printf("是等边三角形\n");
            return 0;
        }
        if ((a == b && b != c) || (a == c && b != c) || (b == c && a != b)) {
            printf("是等腰三角形\n");
            return 0;
        }
    } else {
        printf("不能组成三角形\n");
    }
    return 0;
}