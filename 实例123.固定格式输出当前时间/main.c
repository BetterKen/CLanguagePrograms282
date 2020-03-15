#include <stdio.h>
#include <time.h>

//time_t  time1 = time(NULL);//获取系统时间，单位为秒;
//struct tm * time = localtime(&time1);//转换成tm类型的结构体;
//asctime(t) 返回一个指向字符串的指针
int main() {
    time_t Time;
    struct tm *t;
    Time = time(NULL);
    t = localtime(&Time);
    printf("LocalTime is %s", asctime(t));

    return 0;
}