#include <stdio.h>


enum week {
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

int main() {
    int a;
    puts("请输入星期数");
    scanf("%d", &a);
    switch (a) {
        case Sunday:
            printf("周日");
            break;
        case Monday:
            printf("周一");
            break;
        case Tuesday:
            printf("周二");
            break;
        default:
            printf("输入错误！");
            break;
    }

}
