#include <stdio.h>


int main() {
    char *a[] = {"赵薇", "钱峰", "孙子", "周易"};
    char **p, i;
    p = a;
    for (i = 0; i < 4; i++) {
        printf("%s\t", *(p + i));
    }
}
