#include <stdio.h>

int main() {
    int n;
    int result = 1;
    printf("请输入整数n:\n");
    scanf("%d", &n);
    while (n > 0) {
        result = result * n;
        n--;
    }
    printf("result:%d", result);
    return 0;
}