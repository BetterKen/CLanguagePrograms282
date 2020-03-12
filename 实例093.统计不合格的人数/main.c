#include <stdio.h>

int main() {
    int i;
    int s[5];
    printf("请输入5个学生的分数:\n");

    for (int j = 0; j < 5; ++j) {
        scanf("%d", s + j);
        if (s[j] < 60) {
            i++;
        }
    }
    printf("不合格的人数为%d人", i);

    return 0;
}