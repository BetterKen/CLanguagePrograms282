#include <stdio.h>

/**
 * 希尔排序
 * 是插入排序的优化版 讲数组先分组排序
 * 提高数组的有序度
 * 希尔排序的时间复杂度是O(n^3/2)比插入排序要高效
 * 希尔排序的最坏时间复杂度是O(n^s) , 1<s<2, s是所选的分组 也就是说具体的时间复杂度跟步长有关
 */
void shellInsert(int a[], int length);

void insertSort(int a[], int gap, int i);

void shellInsert(int a[], int length) {
    for (int gap = length / 2; gap > 0; gap = gap / 2) {
        for (int i = gap; i < length; i++) {
            insertSort(a, gap, i);
        }
    }
}

void insertSort(int a[], int gap, int i) {
    int inserted = a[i];
    int j;
    for (j = i - gap; j >= 0 && inserted < a[j]; j = j - gap) {
        a[j + gap] = a[j];
    }
    a[j + gap] = inserted;
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
    int length = (int) sizeof(a) / sizeof(a[0]);
    shellInsert(a, length);
    printf("\n排序后的数组为:\n");
    for (int i = 0; i < length; ++i) {
        printf("%d\t", a[i]);
    }
    return 0;
}