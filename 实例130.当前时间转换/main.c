#include <stdio.h>
#include <time.h>

int main() {
    time_t time1;
    struct tm *t, *gt;
    time1 = time(NULL);
    t = localtime(&time1);
    printf("现在时间为:%s", asctime(t));
    gt = gmtime(&time1); //当前时间转换为格林威治时间
    printf("格林威治时间为:%s", asctime(gt));
    return 0;
}