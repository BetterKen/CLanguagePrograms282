#include <stdio.h>

int main() {
    int a[4];
    int min, max;
    printf("请输入四个成绩:\n");
    scanf("%d %d %d %d", a, a + 1, a + 2, a + 3);
    min = a[0];
    max = a[0];
    for (int i = 1; i < 4; ++i) {
        if (a[i] < min) {
            min = a[i];
        }
        if (a[i] > max) {
            max = a[i];
        }
    }
    printf("最高分为%d,最低分为%d", max, min);
    return 0;
}