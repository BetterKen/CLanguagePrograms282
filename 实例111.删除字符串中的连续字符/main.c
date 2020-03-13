#include <stdio.h>


int main() {

    char s[100];
    int pos;
    int len;
    int l;
    printf("请输入字符串:");
    gets(s);
    len = strlen(s);
    printf("请输入要删除的开始位置:");
    scanf("%d", &pos);
    printf("请输入要删除的长度:");
    scanf("%d", &l);

    if (pos + l >= len) {
        printf("不合法!");
        return 0;
    }

    for (int i = pos; i < pos + l; ++i) {
        s[i] = s[i + l];
        s[i + l] = '\0';
    }

    puts(s);
    return 0;
}