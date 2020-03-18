#include <stdio.h>

int main() {

    char *Month[] = {
            "Jan", "Feb", "Mar", "Apr", "May", "June", "Junly", "Aug", "Sep", "Oct", "Nov", "Dec"
    };
    int i;
    puts("请输入一个数字:");
    scanf("%d", &i);
    printf("%s", *(Month + i - 1));

}
