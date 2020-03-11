#include <stdio.h>

int main() {


    int a[11][11];
    for (int i = 1; i <= 10; ++i) {
        for (int j = 1; j <= i; ++j) {
            if (j == 1 || j == i) {
                a[i][j] = 1;
            } else {
                a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
            }
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    return 0;

}