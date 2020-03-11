#include <stdio.h>

int main() {
    int count = 1;
    for (int i = 100; i < 1000; ++i) {
        int a = i / 100;
        int b = i % 100 /10;
        int c = i % 10;
        if (a + b + c == 5) {
            printf("%d\t", i);
            if (count % 5 == 0) {
                printf("\n");
            }
            count++;
        }
    }

}