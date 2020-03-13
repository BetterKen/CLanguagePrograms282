#include <stdio.h>

int main() {

    int a[5];
    printf("请输入数组Array:\n");
    for (int i = 4; i >= 0; i--) {
        scanf("%d", &a[i]);
    }
    printf("Array:");
    for (int j = 0; j < 5; ++j) {
        printf("%d\t", a[j]);
    }
    return 0;
}