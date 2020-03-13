#include <stdio.h>


int main() {
    int len1;
    int len2;
    int pos;
    char a1[100];
    char a2[100];
    puts("请输入原始字符串:");
    gets(a1);
    len1 = strlen(a1);
    puts("请输入要替换的字符串:");
    gets(a2);
    len2 = strlen(a2);

    puts("请输入要开始替换的位置:");
    scanf("%d", &pos);

    for (int i = 0; i < len2; ++i) {
        a1[pos + i] = a2[i];
    }
    puts(a1);

    return 0;
}