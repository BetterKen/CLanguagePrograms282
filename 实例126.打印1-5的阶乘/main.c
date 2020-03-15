#include <stdio.h>

int fac(int);

int fac(int n) {
    int total = 1;
    for (int i = 1; i <= n; ++i) {
        total = total * i;
    }
    return total;
}

int main() {
    for (int i = 1; i <= 5; ++i) {
        printf("%d!=%d\n", i, fac(i));
    }

    return 0;
}