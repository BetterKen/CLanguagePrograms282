#include <stdio.h>
#include <math.h>

int main() {
    for (int i = 100; i < 1000; ++i) {
        int a = i / 100;
        int b = i % 100 / 10;
        int c = i % 100 % 10;
        if (i == pow(a, 3) + pow(b, 3) + pow(c, 3)) {
            printf("%d\t", i);
        }
    }
    return 0;
}