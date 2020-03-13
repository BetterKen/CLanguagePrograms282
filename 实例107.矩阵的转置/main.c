#include <stdio.h>

#define MAX 100

int main() {
    int a[MAX][MAX];
    int b[MAX][MAX];
    int i, j;
    printf("请输入行数:\n");
    scanf("%d", &i);
    printf("请输入列数:\n");
    scanf("%d", &j);
    printf("请输入元素:\n");
    for (int k = 0; k < i; ++k) {
        for (int l = 0; l < j; ++l) {
            scanf("%d", &a[k][l]);
        }
    }
    printf("原数组为:\n");
    for (int k = 0; k < i; ++k) {
        for (int l = 0; l < j; ++l) {
            printf("%d\t", a[k][l]);
            b[l][k] = a[k][l];
        }
        printf("\n");
    }
    printf("转置数组为:\n");
    for (int k = 0; k < j; ++k) {
        for (int l = 0; l < i; ++l) {
            printf("%d\t", b[k][l]);
        }
        printf("\n");
    }

    return 0;
}