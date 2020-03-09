#include <stdio.h>

int main() {

    int n=11;
    float sum1;
    float sum2;
    while (1) {
        sum1 = (n + 9) / 10.0;
        sum2 = (9 * n + 171) / 100.0;
        if (sum1 != (int) sum2 || sum2 != (int) sum1) {
            n++;
            continue;
        }
        if (sum1 == sum2)
            break;
    }
    printf("总共有学生%d名,有糖果%d份", n / (int)sum1, n);

    return 0;
}