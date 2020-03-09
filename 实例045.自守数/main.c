#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    for (int i = 0; i < 10000; ++i) {
        char a[4] = {};
        int len = 0;
        long int s = 0;
        sprintf(a, "%d", i);
        len = (int) strlen(a);
        s = i * i;
        if (s % (long) pow(10, len) == i) {
            printf("%d ", i);
        }
    }
}