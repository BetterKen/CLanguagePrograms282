#include <stdio.h>
#include <math.h>

int main() {

    int i, n;
    puts("请输入底数:"); //puts不用加 \n自动有换行符
    scanf("%d", &i);
    puts("请输入幂:");
    scanf("%d", &n);
    for (int j = 1; j < 5; ++j) {
        printf("%d^%d=%d\n", i, n + j, pow(i, n + j));
    }

    return 0;
}