#include <stdio.h>
#include <time.h>

int main() {
    time_t time1;
    struct tm *t;
    time1 = time(NULL);
    t = localtime(&time1);
    printf("年月日:%d-%d-%d\n", t->tm_year+1900, t->tm_mon+1, t->tm_mday);
    printf("时分秒:%d:%d:%d",t->tm_hour,t->tm_min,t->tm_sec);
    return 0;
}