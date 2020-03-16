#include<stdlib.h>
#include <time.h>

main() {
    time_t time1;
    time(&time1);
    printf("%s", ctime(&time1));//这两种方式相等
    printf("%s", asctime(localtime(&time1)));

    return 0;
}