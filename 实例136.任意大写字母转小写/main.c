#include <stdio.h>
#include <ctype.h>

int main() {
    char a;
    puts("请输入任意小写字母:");
    scanf("%c", &a);
    a = toupper(a);
    putchar(a);
    return 0;
}