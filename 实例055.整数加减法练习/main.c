#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char a = '+';
    char b = '-';
    char sign = ' ';
    int t = 10000;
    int x;
    int y;
    int z;
    int r;

    while (sign != '+' && sign != '-') {
        printf("请选择运算符:+/-\\:");
        scanf("%c", &sign);
    }
    while (t >= 10000) {
        t = 10000;
        printf("请选择最大的数<%d:\n", t);
        scanf("%d", &t);
    }

    srand((unsigned) time(NULL));
    x = rand() % t;
    y = rand() % t;
    if (sign == "+") {
        z = x + y;
        printf("%d+%d=\n",x,y);
    } else {
        z = x - y;
        printf("%d-%d=\n",x,y);
    }
    printf("请输入答案:\n");
    scanf("%d", &r);
    if (r == z) {
        printf("回答正确!");
    } else {
        printf("回答错误!");
    }
    return 0;

}