#include <stdio.h>


int main() {
    int a[4][4];
    printf("请输入二维数组:\n");
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("二维数组为:\n");
    for (int k = 0; k < 4; ++k) {
        for (int i = 0; i < 4; ++i) {
            printf("%d\t", a[k][i]);
        }
        printf("\n");
    }
    printf("对角线之和为:%d", a[0][0] + a[1][1] + a[2][2] + a[3][3]);
    return 0;
}