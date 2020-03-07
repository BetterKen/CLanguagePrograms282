#include <stdio.h>

/**
 * 快速排序
 * 快速排序所采用的思想是分治的思想
 * 所谓分治，就是指以一个数为基准，将序列中的其他数往它两边“扔”
 * 以从小到大排序为例，比它小的都“扔”到它的左边，比它大的都“扔”到它的右边，
 * 后左右两边再分别重复这个操作，不停地分
 * 直至分到每一个分区的基准数的左边或者右边都只剩一个数为止
 *
 * 时间复杂度为O(nlog(n))
 */


void quickSort(int *, int, int);

void swap(int *, int *);

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void quickSort(int *a, int low, int high) {
    int i = low;
    int j = high;
    int key = a[low];
    if (low >= high) {
        return;
    }
    while (low < high) {
        while (low < high && key <= a[high]) {
            high--;
        }
        if (key > a[high]) {
            a[low] = a[high];
//            swap(&a[low],&a[high]);
            low++;
        }
        while (low < high && key >= a[low]) {
            low++;
        }
        if (key < a[low]) {
            a[high] = a[low];
//            swap(&a[low],&a[high]);
            high--;
        }
    }
    a[low] = key;
    quickSort(a, i, low - 1);
    quickSort(a, low + 1, j);
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
    printf("\n");

    quickSort(a, 0, 9);
    printf("\n排序后的数组为:\n");
    for (int k = 0; k < 10; ++k) {
        printf("%d\t", a[k]);
    }
    return 0;
}
