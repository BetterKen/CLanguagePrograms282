#include <stdio.h>


int main() {
    int len;
    int a[100];
    int max;
    int min;
    int max_index;
    int min_index;
    puts("请输入元素个数:");
    scanf("%d", len);
    puts("请输入元素:\n");

    for (int i = 0; i < len; ++i) {
        scanf("%d", &a[i]);
    }


    return 0;
}