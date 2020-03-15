#include <stdio.h>
#include <sys/time.h>
#include <time.h>
#include <unistd.h>

int main() {
    struct timeval t_val;
    struct tm *t;
    t_val.tv_sec = 123456789;
    system("date");
    settimeofday(&t_val,NULL); //这个函数只有在root用户下才会起作用
    system("date");
//    t = localtime((time_t *)&t_val.tv_sec);
//    printf("%s",asctime(t));
    return 0;
}