#include <stdio.h>
#include <string.h>

int main() {

    char a[100];
    int len;
    puts("请输入加密字符串:");
    gets(a);
    len = strlen(a);
    for (int i = 0; i < len; ++i) {
        a[i] = a[i] + i + 5;
    }
    puts(a);
    return 0;
}