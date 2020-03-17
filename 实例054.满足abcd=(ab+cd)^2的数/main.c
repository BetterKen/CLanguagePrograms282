#include <stdio.h>

int main() {
    for (int i = 1000; i < 10000; ++i) {
        int abcd = i;
        int ab = abcd % 100;
        int cd = abcd / 100;
        if (abcd == (ab + cd) * (ab + cd)) {
            printf("%d\t", abcd);
        }
    }
    return 0;
}