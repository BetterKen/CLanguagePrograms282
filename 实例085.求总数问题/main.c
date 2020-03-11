#include <stdio.h>

int main() {

    int a;
    int b;
    int c;
    int x;
    int total;

    for (x = 0; x < 6; ++x) {
        if (10605 % (28 - 5 * x) == 0) {
            total = 10605 / (28 - 5 * x);
            a = total / 5;
            b = x * total / 7;
            c = 303;
            printf("邮票总数:%d\n", total);
            printf("a = %d\n",a);
            printf("b = %d\n",b);
            printf("c = %d\n",c);
        }
    }

    return 0;

}