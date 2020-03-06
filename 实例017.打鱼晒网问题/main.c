#include <stdio.h>

#define YEAR 2011
#define MONTH 1
#define DAY 1

int leap(int year);

int calcDays(int year, int month, int day);

int leap(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        return 1;
    }
    return 0;
}

int calcDays(int year, int month, int day) {
    unsigned int d_year = YEAR - year, d_month = MONTH - month, d_day = DAY - day;
    int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int sum = 0;
    if (d_year == 0) {
        for (int i = 0; i < month - 1; i++) {
            sum = sum + days[i];
        }
    } else {
        for (int i = 0; i < d_year; i++) {
            int year_day = leap(YEAR + i) ? 366 : 365;
            sum += year_day;
        }
        if (leap(year)) {
            days[1] = 29;
        }
        for (int j = 0; j < month - 1; j++) {
            sum += days[j];
        }
    }
    return sum + day;
}


int main() {
    int year, month, day;
    int total_days = 0;
    printf("请输入年月日:\n");
    scanf("%d %d %d", &year, &month, &day);
    total_days = calcDays(year, month, day);
    if (total_days % 5 == 0 || total_days % 5 == 4) {
        printf("渔夫在晒网\n");
    } else{
        printf("渔夫在打鱼\n");
    }
    return 0;
}