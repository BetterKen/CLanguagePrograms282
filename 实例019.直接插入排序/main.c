#include <stdio.h>

/**
 * 时间复杂度 稳定O(n^2)
 * 算法思路（从小到大排序）：
 * 1 一组数据a[N]，设置变量i , j , temp，i 是待插入元素的下标，将a[i]赋值给temp，j是用来搜索比较
 * 2 i 的初始值为1，即从第二个元素开始，一个元素认为是已经排好序的，所以从第二个元素开始，j的初始值为i-1
 * 3 将i前面的数据都与temp比较，即与待插入数据进行比较，用 j 来移动下标，直到找到一个比temp小的或等于的值，亦或者找到了该序列的尽头（即下标为0）停止，将temp放到j+1的位置，即将待插入的数据插入到j+1的位置，该待插入数据就已经插入到了正确的位
 * 4 然后将i=2，从第三个元素开始，j=i-1，执行temp=a[i]，重复步骤3，直到 i==N-1停止，即所有数据都已经放到了正确的位置上，该序列称为有序序列
 *
 * insertSort()函数注意的点
 * 1. sizeof(a)获取的是a地址指针的长度
 * 2. sizeof(*a)获取的是a地址指针所指向的数组第一个元素的长度
 * 3. 数组作为参数传递进来后 新的函数不知道数组的长度 需要将数组的长度一起传递进来
 */
void insertSort(int *a, int length);

void insertSort(int *a, int length) {
    for (int i = 1; i < length; i++) {
        if (a[i] < a[i - 1]) {
            int tmp = a[i];
            int j = i - 1;
            for (; j >= 0 && a[j] > tmp; j--) { //这里的条件是关键
                a[j + 1] = a[j];
            }
            a[j + 1] = tmp;
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
    insertSort(a, sizeof(a) / sizeof(a[0]));
    printf("\n排序后的数组为:\n");
    for (int k = 0; k < 10; ++k) {
        printf("%d\t", a[k]);
    }

    return 0;
}