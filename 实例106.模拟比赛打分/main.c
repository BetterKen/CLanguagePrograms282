#include <stdio.h>

#define MAX 50

int main() {
    float a[MAX][6];
    int n;
    printf("请输入选手数量:\n");
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        printf("选手%d得分分别为:\n", i);
        float total = 0;
        for (int j = 0; j < 5; ++j) {
            scanf("%f", &a[i][j]);
            total += a[i][j];
        }
        a[i][5] = total;
    }

    printf("选手\t裁判A\t裁判B\t裁判C\t裁判D\t裁判E\t总成绩\n");
    for (int k = 0; k < n; ++k) {
        printf("%d\t", k);
        for (int i = 0; i < 6; ++i) {
            printf("%f\t", a[k][i]);
        }
        printf("\n");
    }

    return 0;
}