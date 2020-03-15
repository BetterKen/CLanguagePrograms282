#include <stdio.h>
#include <time.h>
#include <unistd.h>

//unistd.h相当于windows下的windows.h

int main() {
    time_t time1, time2;
    time1 = time(NULL);
    sleep(3);
    time2 = time(NULL);
    printf("经历时间:%f(s)",difftime(time2,time1));
    return 0;
}