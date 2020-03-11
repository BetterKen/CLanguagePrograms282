#include <stdio.h>

int ss(int);

int ss(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i < n; ++i) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}


int main() {
    for (int i = 10; i < 1000; ++i) {
        if (ss(i)) {
            if (i < 100) {
                if (i % 10 == i / 10) {
                    printf("%d\t", i);
                }
            } else {
                if (i / 100 == (i % 100) % 10) {
                    printf("%d\t", i);
                }
            }
        }
    }

    return 0;
}