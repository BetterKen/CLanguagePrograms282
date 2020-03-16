#include<stdlib.h>
#include <time.h>

main() {
    struct tm *tmp;
    time_t secs;
    time(&secs);
    tmp = gmtime(&secs);
    printf("Now: %d-%d-%d %d:%d:%d", tmp->tm_year + 1900, tmp->tm_mon + 1, tmp->tm_mday, tmp->tm_hour, tmp->tm_min,
           tmp->tm_sec);

    return 0;
}