#include <stdio.h>
#include <math.h>

int main() {
    int n = 8;
    for (int j = 1; j < 100; ++j) {
        int total = 765;
        for (int i = 0; i < n; ++i) {
            total = total - j * pow(2, i);
        }
        if (total == 0) {
            printf("第一层灯数为%d", j);
            break;
        }
    }

    return 0;
}