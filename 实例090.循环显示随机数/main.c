#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int sum;
    for (int j = 1; j <= 10; ++j) {
        srand(j+(unsigned)time(NULL)); //在这里不能这样使用 time(NULL)返回的是当前的秒数间隔不到一秒的 显示的都是一样的
        printf("随机发生数%d是:%d\n", j, rand());
    }
    return 0;
}