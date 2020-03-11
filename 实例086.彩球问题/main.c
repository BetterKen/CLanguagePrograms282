#include <stdio.h>

int main() {

    int i, j;
    for (int i = 0; i <= 3; ++i) {
        for (int j = 0; j <= 3; ++j) {
            if ((8 - i - j )<= 6) {
                printf("%d %d %d\n", i, j, 8 - i - j);
            }
        }
    }

    return 0;

}