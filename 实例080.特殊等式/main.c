#include <stdio.h>

int main() {

    int x, y, z;
    for (x = 1; x < 10; x++) {
        for (y = 1; y < 10; y++) {
            for (z = 0; z < 10; z++) {
                if (100 * x + 10 * y + z + 100 * y + 10 * z + z == 532) {
                    printf("x=%d,y=%d,z=%d", x, y, z);
                }
            }
        }
    }
    return 0;

}