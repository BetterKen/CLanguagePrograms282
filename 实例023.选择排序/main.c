#include <stdio.h>

void selectSort(int *, int);

void selectSort(int *a, int length) {
    for (int i = 0; i < length - 1; i++) {
        for (int j = i + 1; j < length; j++) {
            if (a[i] > a[j]) {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}

int main() {
    int a[10];
    printf("请输入十个数据:\n");
    for (int i = 0; i < 10; ++i) {
        scanf("%d", &a[i]);
    }
    printf("原始数组排序为:\n");
    for (int j = 0; j < 10; ++j) {
        printf("%d\t", a[j]);
    }
    selectSort(a, sizeof(a) / sizeof(a[0]));
    printf("\n排序后的数组为:\n");
    for (int k = 0; k < 10; ++k) {
        printf("%d\t", a[k]);
    }
    return 0;
}
