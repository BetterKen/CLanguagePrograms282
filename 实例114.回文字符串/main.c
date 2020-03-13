#include <stdio.h>


int main() {
    int len;
    char a[100];
    puts("请输入字符串:");
    gets(a);
    len = strlen(a);
    if (len == 1) {
        printf("是回文字符串");
        return 0;
    }
    for (int i = 0; i <= (len / 2) - 1; i++) {
        if (a[i] != a[len - 1 - i]) {
            printf("不是回文字符串");
            return 0;
        }
    }
    printf("是回文字符串");

    return 0;
}