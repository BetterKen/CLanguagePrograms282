#include <stdio.h>

int main() {
    int a[5];
    int b[5];
    int *max_a, *max_b;
    int tmp;
    puts("请输入数组A:");
    for (int i = 0; i < 5; ++i) {
        scanf("%d", &a[i]);
        if (i == 0) {
            max_a = &a[i];
        } else {
            if (*max_a < a[i]) {
                max_a = &a[i];
            }
        }
    }

    puts("请输入数组B:");
    for (int i = 0; i < 5; ++i) {
        scanf("%d", &b[i]);
        if (i == 0) {
            max_b = &b[i];
        } else {
            if (*max_b < b[i]) {
                max_b = &b[i];
            }
        }
    }
    tmp = *max_a;
    *max_a = *max_b;
    *max_b = tmp;

    puts("now a:");
    for (int j = 0; j < 5; ++j) {
        printf("%d\t", a[j]);
    }
    printf("\n");

    puts("now b:");
    for (int j = 0; j < 5; ++j) {
        printf("%d\t", b[j]);
    }
    printf("\n");

}
