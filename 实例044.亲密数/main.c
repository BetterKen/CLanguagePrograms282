#include <stdio.h>

int main() {
    for (int i = 2; i < 10000; i++) {

        int total1 = 0;
        int total2 = 0;
        for (int j = 1; j < i; ++j) {
            if (i % j == 0) {
                total1 += j;
            }
        }

        for (int k = 1; k < total1; ++k) {
            if (total1 % k == 0) {
                total2 += k;
            }
        }
        if (total2 == i && total1 != 0 && i < total1) {
            printf("%d==>%d\n", i, total1);
        }
    }

    return 0;
}


