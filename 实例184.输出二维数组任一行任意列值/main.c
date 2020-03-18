#include <stdio.h>

int main() {
    int arr[3][4] = {
            {1, 2,  3,  4},
            {5, 6,  7,  8},
            {9, 10, 11, 12}
    };
    int (*p)[4];
    p = arr;
    int m, n;

    puts("请输入要输出的行列:");
    scanf("%d %d", &m, &n);
    printf("%d", *(*(p + m - 1) + n - 1));
}
