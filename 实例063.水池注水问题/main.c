#include <stdio.h>

int main() {
    float a = 3, b = 1, c = 4, d = 5;
    float day;
    day = 1 / (1 / a + 1 / b + 1 / c + 1 / d);
    printf("需要%f天\n", day);

}