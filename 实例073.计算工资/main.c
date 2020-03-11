#include <stdio.h>

int main() {
    float base = 500;
    float sale;
    float t;

    printf("输入员工这个月的销售额:");
    scanf("%f", &sale);
    if (sale > 10000) {
        t = base + sale * 0.12;
    } else if (sale > 5000) {
        t = base + sale * 0.1;
    } else if (sale > 2000) {
        t = base + sale * 0.08;
    } else {
        t = base;
    }
    printf("员工这个月的工资为:%f", t);

    return 0;
}