#include <stdio.h>

int main() {

    int a[10];
    printf("请输入数组a:\n");
    for (int i = 0; i < 10; ++i) {
        scanf("%d", &a[i]);
    }
    for (int j = 0; j < 9; ++j) {
        printf("%d\t", a[j] + a[j + 1]);
        if ((j + 1) % 3 == 0) {
            printf("\n");
        }
    }
    return 0;
}