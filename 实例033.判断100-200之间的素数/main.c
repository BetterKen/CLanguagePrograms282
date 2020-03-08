#include <stdio.h>
#include <math.h>

int main() {
    int count = 1;
    for (int i = 100; i <= 200; i++) {
        int flag = 0;
        for (int j = 2; j <= sqrt(i); j++) { //这里要有等于的情况
            if (i % j == 0) {
                flag = 1;
            }
        }
        if (flag == 0) {
            printf("%d\t", i);
            if (count % 5 == 0) {
                printf("\n");
            }
            count++;
        }
    }
}