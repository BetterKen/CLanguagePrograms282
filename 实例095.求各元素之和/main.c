#include <stdio.h>


int main() {
    int len = 3;
    int a[len][len];
    int total = 0;
    printf("请输入数组元素:\n");
    for (int i = 0; i < len; ++i) {
        for (int j = 0; j < len; ++j) {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < len; ++i) {
        for (int j = 0; j < len; ++j) {
            total = total + a[i][j];
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("Total = %d",total);
    return 0;
}