#include <stdio.h>


int main() {

    int i, j = 1, x = 1, y = 3, a[6][6] = {0};
    for (int k = 1; k <= 25; ++k) {
        a[x][y] = k;
        if (x == 1 && y == 5) {
            x = x + 1;
            continue;
        }
        if (x == 1) {
            x = 5;
        } else {
            x--;
        }

        if (y == 5) {
            y = 1;
        } else {
            y++;
        }
        if (a[x][y] != 0) {
            x = x + 2;
            y = y - 1;
        }
    }

    for (int l = 1; l <= 5; ++l) {
        for (int k = 1; k <= 5; ++k) {
            printf("%d\t", a[l][k]);
        }
        printf("\n");
    }

    return 0;
}