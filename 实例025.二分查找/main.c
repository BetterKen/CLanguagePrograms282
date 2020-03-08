#include <stdio.h>
/**
 * 二分法的关键思想是
 * 假设该数组的长度是N那么二分后是N/2，再二分后是N/4……直到二分到1结束
 * 当然这是属于最坏的情况了，即每次找到的那个中点数都不是我们要找的
 * 那么二分的次数就是基本语句执行的次数，于是我们可以设次数为x
 * N*（1/2）^x=1/2
 * 由此可推到出x=log(2n) --> x=log(n)
 * 所以二分法的时间复杂度为O(nlog(n))
 */

int binarySearch(const int *, int, int);

int binarySearch(const int *a, int n, int searched) {
    int mid = n / 2;
    int low = 0;
    int high = n - 1;
    int count = 0;
    while (low < high) {
        count++;
        if (searched < a[mid]) {
            high = mid;
            mid = (low + high) / 2;
        }
        if (searched > a[mid]) {
            low = mid;
            mid = (high + low) / 2;
        }
        if (searched == a[mid]) {
            printf("找到%d,它所在数组的位置为%d,共查找了%d次\n", searched, mid, count);
            return mid;
        }
    }

    printf("未找到%d,共查找%d次", searched, count);
    return -1;
}

int main(){
    int a[10];
    int searched;
    printf("请输入十个有序数据:\n");
    for (int i = 0; i < 10; ++i) {
        scanf("%d", &a[i]);
    }
    printf("有序数组为:\n");
    for (int j = 0; j < 10; ++j) {
        printf("%d\t", a[j]);
    }
    printf("\n请输入要查找的数字:\n");
    scanf("%d",&searched);
    printf("\n");
    binarySearch(a,10,searched);
}