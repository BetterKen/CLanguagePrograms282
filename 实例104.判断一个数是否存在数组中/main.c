#include <stdio.h>


int main() {
    int a[10] = {10, 11, 2, 34, 545, 213, 34, 12, 42, 41};
    int x;
    int i;
    printf("请输入你要查找的值:\n");
    scanf("%d", &x);
    for (i = 0; i < 10; ++i) {
        if (x == a[i]) {
            printf("存在\n");
            break;
        }
    }
    if (i == 10) {
        printf("不存在\n");
    }

    return 0;
}