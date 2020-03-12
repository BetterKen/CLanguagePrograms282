#include <stdio.h>

int main() {
    int sum;
    for (int j = 1; j <= 10; ++j) {
        sum += j * j;
    }
    printf("Sum=%d", sum);
    return 0;
}