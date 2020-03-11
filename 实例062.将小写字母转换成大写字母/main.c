#include <stdio.h>
#include <string.h>

int main() {
    char a;
    printf("请输入一个小写字母:\n");
    scanf("%c", &a);
    printf("转化以后的大写字母为:%c,ASCII值为:%d", toupper(a), (int) toupper(a));
    return 0;
}