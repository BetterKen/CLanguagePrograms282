#include <stdio.h>


int main() {
    int a;
    printf("请输入一个整数:\n");
    scanf("%d", &a);
    if (a % 5 == 0 && a % 7 == 0) {
        printf("Yes\n");
    } else{
        printf("No\n");
    }
    return 0;

}