#include <stdio.h>


int main() {
    int n = 1020;
    for (int i = 1; i < 10; ++i) {
        n = n / 2 - 2;
        if (n == 0){
            printf("day=%d",i);
            break;
        }
    }
    return 0;
}