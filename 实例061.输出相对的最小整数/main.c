#include <stdio.h>
#include <math.h>
int main() {
    float a;
    printf("请输入一个数:\n");
    scanf("%f", &a);
    printf("得到的结果为:\n");
    printf("%d",(int)ceil(a));
    return 0;
}