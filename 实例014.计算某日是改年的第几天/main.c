#include <stdio.h>

int leap(int year);

int calcDay(int year, int month, int day);

int leap(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        return 1;
    }
    return 0;
}

int calcDay(int year, int month, int day) {
    int sum = 0;
    int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (leap(year)) {
        days[1] = 29;
    }
    for (int i = 0; i < month - 1; i++) {
        sum = sum + days[i];
    }
    return sum + day;
}

int main() {
    int year, month, day, sum = 0;
    printf("请输入年月日:\n");
    scanf("%d %d %d", &year, &month, &day);
    sum = calcDay(year, month, day);
    printf("%d年%d月%d日是那一年的第%d天\n", year, month, day, sum);
    return 0;
}
