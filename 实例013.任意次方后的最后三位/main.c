#include <stdio.h>

int main() {
    int x, y, result = 1;
    printf("请输入两个数x,y(x^y):\n");
    scanf("%d %d", &x, &y);
    for (int i = 0; i < y; i++) {
        result = result * x;
    }
    printf("x^y的结果为%d\n", result);
    result = result % 1000;
    if (result >= 100) {
        printf("%d^%d次方的最后三位数为%d", x, y, result);
    } else if (result >= 10){
        printf("%d^%d次方的最后三位数为0%d", x, y, result);
    } else{
        printf("%d^%d次方的最后三位数为00%d", x, y, result);
    }
    return 0;

}
