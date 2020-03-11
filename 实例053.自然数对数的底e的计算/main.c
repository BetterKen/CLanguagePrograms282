#include <stdio.h>

int main() {
    float e = 1;
    float n = 1.0;
    float i = 1;
    while (1 / n > 1e-10) {
        e += 1 / n;
        i = i+1.0;
        n = i * n;
    }
    printf("e=%f\n",e);
}