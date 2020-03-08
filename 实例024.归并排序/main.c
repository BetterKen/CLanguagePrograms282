#include <stdio.h>
#include <string.h>

/***
 *
 * 归并排序算法有两个基本的操作
 * 一个是分，也就是把原数组划分成两个子数组的过程
 * 另一个是治，它将两个有序数组合并成一个更大的有序数组
 * 它将数组平均分成两部分: center = (left + right)/2
 * 当数组分得足够小时---数组中只有一个元素时，只有一个元素的数组自然而然地就可以视为是有序的
 * 此时就可以进行合并操作了
 * 因此，上面讲的合并两个有序的子数组，是从只有一个元素的两个子数组开始合并的
 *
 * 它的时间复杂度为O(nlog(n))
 *
 * memcpy函数:从存储区str2复制n个字符到存储区str1
 */


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

    int a[10];
    int tmp[10];
    printf("请输入十个数据:\n");
    for (int i = 0; i < 10; ++i) {
        scanf("%d", &a[i]);
    }
    printf("原始数组排序为:\n");
    for (int j = 0; j < 10; ++j) {
        printf("%d\t", a[j]);
    }
    printf("\n排序后的数组为:\n");
    mergeSort(a, 0, 9, tmp);
    printf("\n");
    for (int i = 0; i < 10; i++) {
        printf("%d\t", a[i]);
    }
}