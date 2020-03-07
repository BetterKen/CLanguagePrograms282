#include <stdio.h>
#include <string.h>

void mergeSort(int *, int, int, int *);

void merge(int *, int, int, int, int, int *);

void mergeSort(int *a, int left, int right, int *tmp) {
    if (left >= right) {
        return;
    }
    int mid = left + (right - left) / 2;
    mergeSort(a, left, mid, tmp);
    mergeSort(a, mid + 1, right, tmp);
    merge(a, left, mid, mid + 1, right, tmp);
}

void merge(int *a, int begin1, int end1, int begin2, int end2, int *tmp) {

    int index = begin1;
    int i = begin1;
    int j = begin2;
    while (i <= end1 && j <= end2) { //一定要注意等于的情况！
        if (a[i] < a[j]) {
            tmp[index++] = a[i++];
        } else {
            tmp[index++] = a[j++];
        }
    }

    while (i <= end1) {
        tmp[index++] = a[i++];
    }
    while (j <= end2) {
        tmp[index++] = a[j++];
    }
    memcpy(a + begin1, tmp + begin1, sizeof(int) * (end2 - begin1 + 1)); //这里要加一
}

int main() {

    int a[10] = {9, 8, 7, 5, 2, 1, 1, 23, 1,1};
    int tmp[10];
    mergeSort(a, 0, 9, tmp);
    printf("\n");
    for (int i = 0; i < 10; i++) {
        printf("%d\t", a[i]);
    }
}