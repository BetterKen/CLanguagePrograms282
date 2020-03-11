#include <stdio.h>

int main() {
    int a, b, c;
    printf("请输入三个学生成绩:\n");
    scanf("%d %d %d", &a, &b, &c);
    printf("总成绩=%d, 平均成绩=%f", (a + b + c), (float) (a + b + c) / 3.0);
    return 0;
}