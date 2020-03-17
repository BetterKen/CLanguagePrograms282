#include <stdio.h>

#define LENGTH 10

int *FindMax(int *, int n);

int *FindMax(int *p, int n) {
    int *max;
    max = p;
    for (int i = 1; i < n; ++i) {
        if (*(p + i) > *max) {
            max = p + i;
        }
    }
    return max;
}

int main() {
    int arr[LENGTH];
    int *max;
    puts("请输入十个整数:");
    for (int i = 0; i < 10; ++i) {
        scanf("%d", &arr[i]);
    }
    max = FindMax(arr, LENGTH);
    printf("最大值为:%d\n", *max);

}
