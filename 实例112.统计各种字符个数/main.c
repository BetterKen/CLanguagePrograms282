#include <stdio.h>


int main() {
    char a[100];
    int len;
    int num = 0, lets = 0, blank = 0, other = 0;
    puts("请输入字符");
    gets(a);
    len = strlen(a);
    for (int i = 0; i < len; ++i) {
        if (a[i] >= '0' && a[i] <= '9') {
            num++;
        } else if ((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z')) {
            lets++;
        } else if (a[i] == ' ') {
            blank++;
        } else {
            other++;
        }
    }
    printf("字母%d个,数字%d个,空白字符%d个,其他字符%d个", lets, num, blank, other);
}