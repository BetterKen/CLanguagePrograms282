#include <stdio.h>


int main() {
    char a[100];
    int i = 0;
    printf("请输入字符串:\n");
    fgets(a, 100, stdin);
    for (int j = 0; j < 100; ++j) {
        if (a[j] == '\000' || a[j] == '\0' || a[j] == '\n') {
            break;
        } else if (a[j] != ' ' && (a[j + 1] == ' ' || a[j + 1] == '\000' || a[j + 1] == '\0' || a[j + 1] == '\n')) {
            i++;
        }
    }
    printf("INPUT is :%s\n", a);
    printf("Words count is %d", i);
    return 0;
}