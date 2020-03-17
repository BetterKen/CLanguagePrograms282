#include <stdio.h>

int main() {

    char *week[] = {
            "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"
    };
    int i;
    puts("请输入一个数字:");
    scanf("%d", &i);
    printf("%s", *(week + i - 1));

}
