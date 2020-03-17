#include <stdio.h>

#define LENGTH 10

void revert(int *, int);

void revert(int *arr, int n) {
    for (int i = 0; i < n / 2; ++i) {
        int tmp;
        tmp = *(arr + i);
        *(arr + i) = *(arr + n - 1 - i);
        *(arr + n - 1 - i) = tmp;
    }

}


int main() {
    int arr[LENGTH];
    puts("请输入是个元素的值:");
    for (int i = 0; i < LENGTH; ++i) {
        scanf("%d", &arr[i]);
    }
    revert(arr, LENGTH);
    for (int j = 0; j < LENGTH; ++j) {
        printf("%d\t", arr[j]);
    }

}
