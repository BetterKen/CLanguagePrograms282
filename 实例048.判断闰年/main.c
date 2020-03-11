#include <stdio.h>

int main() {
    unsigned int year;
    printf("请输入年份:\n");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || year % 400) {
        printf("%d年是闰年\n", year);
    } else {
        printf("%d年不是闰年\n", year);
    }
    return 0;
}