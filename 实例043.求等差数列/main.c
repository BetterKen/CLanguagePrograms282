#include <stdio.h>

int main() {
    int i;
    float gap;
    for (i = 0; i <= 4; i++) {
         gap = (13 - 2 * i) / 3.0;

        if (gap != (int) gap) {
            continue;
        }
        if (i * (i + (int) gap) * (i + 2 * (int) gap) * (i + 3 * (int) gap) == 880) {
            break;
        }
    }
    printf("结果是:\n");
    for (int j = 1; j <= 20; ++j) {
        printf("%2d\t", i + (j - 1) * (int)gap);
        if (j % 5 == 0) {
            printf("\n");
        }
    }
}