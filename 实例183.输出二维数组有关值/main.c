#include <stdio.h>

int main() {
    int arr[3][4] = {
            {1,2,3,4},
            {5,6,7,8},
            {9,10,11,12}
    };

    printf("%p,%p\n",&arr[0],&arr[0][0]);
    printf("%p,%p\n",&arr[0],&arr[0][0]);
}
