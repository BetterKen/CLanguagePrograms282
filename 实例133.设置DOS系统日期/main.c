#include <stdio.h>
#include <sys/time.h>
#include <time.h>
#include <unistd.h>

int main() {
    struct timeval stime;
    gettimeofday(&stime, NULL);
    printf("现在的时间秒数是：%ld,毫秒数是：%ld\n现在的时间是:", stime.tv_sec, stime.tv_usec);
    fflush(stdout);
    system("date");

    stime.tv_sec = 123456789;
    settimeofday(&stime, NULL);
    printf("现在的时间秒数是：%ld,毫秒数是：%ld\n现在的时间是:", stime.tv_sec, stime.tv_usec);//这个函数只有在root用户下才会起作用
    fflush(stdout);
    system("date");
    return 0;
}