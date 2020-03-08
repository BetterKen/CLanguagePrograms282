#include <stdio.h>

int main() {
    int a[30] = {1, 1};
    for (int i = 2; i < 30; i++) {
        a[i] = a[i - 1] + a[i - 2];
    }
    for (int j = 0; j < 30; j++) {
        printf("%10d\t",a[j]);
        if((j+1) % 5 == 0){
            printf("\n");
        }
    }
    return 0;
}