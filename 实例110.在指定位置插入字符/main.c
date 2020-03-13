#include <stdio.h>
#include <string.h>

int main() {
    char a[100];
    char x;
    int pos;
    int len = 0;
    printf("请输入字符串:\n");
    gets(a);
    printf("请输入要插入的字符:\n");
    scanf("%c", &x);
    printf("请输入要插入的位置:\n");
    scanf("%d", &pos);

    len = strlen(a);
    if (pos >= len) {
        printf("位置过高不存在");
    }
    for (int i = len; i >= pos; i--) {
        a[i + 1] = a[i];
    }
    a[pos] = x;
    puts(a);
    return 0;
}