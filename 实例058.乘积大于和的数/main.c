#include <stdio.h>


int main() {
    int count = 1;
    for (int i = 10; i < 100; ++i) {
        int a = i / 10;
        int b = i % 10;
        if (a * b > a + b) {
            printf("%d\t", i);
            if (count % 5 == 0) {
                printf("\n");
            }
            count++;
        }
    }

}