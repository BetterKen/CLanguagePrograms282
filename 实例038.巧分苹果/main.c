#include <stdio.h>

int main() {
    int total = 2520;
    int s = total / 6;
    int a[7];
    int b[7];
    for (int i = 2; i < 7; ++i) {
        a[i] = s * (9 - i) / (8 - i);
    }
    b[1] = a[1] = (s - a[6] / 3) * 8 / 7;
    for (int j = 2; j < 7; ++j) {
        b[j] = a[j] - a[j - 1]/(10-j);
    }
    for (int k = 1; k < 7; ++k) {
        printf("b[%d]=%d\n",k,b[k]);

    }
}