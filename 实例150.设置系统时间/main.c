#include <stdio.h>
#include <sys/time.h>
#include <time.h>
#include <unistd.h>
//同134题
int main() {
    struct tm tptr;
    struct timeval tv;

    tptr.tm_year = 2019 - 1900;
    tptr.tm_mon = 3 - 1;
    tptr.tm_mday = 16;
    tptr.tm_hour = 12;
    tptr.tm_min = 10;
    tptr.tm_sec = 15;
    tv.tv_sec = mktime(&tptr);
    tv.tv_usec = 0;
    settimeofday(&tv, NULL);
    system("date");
    return 0;
}