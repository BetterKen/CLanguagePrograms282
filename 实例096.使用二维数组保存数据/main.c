#include <stdio.h>


int main() {
    int len_x = 2;
    int len_y = 3;
    int a[len_x][len_y];
    printf("请输入数组元素:\n");
    for (int i = 0; i < len_x; ++i) {
        for (int j = 0; j < len_y; ++j) {
            printf("a[%d][%d]=", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for (int k = 0; k < len_x; ++k) {
        for (int i = 0; i < len_y; ++i) {
            printf("%d\t", a[k][i]);
        }
        printf("\n");
    }


    return 0;
}