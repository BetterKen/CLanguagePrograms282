#include<stdlib.h>
#include <unistd.h>

int compare1(const void *, const void *);

int compare2(const void *, const void *);

int compare1(const void *a, const void *b) {
    return *(int *) a - *(int *) b;
}
int compare2(const void *a, const void *b) {
    return *(int *) b - *(int *) a;
}

#define LEN 7

main() {
    int base[LEN] = {3, 102, 5, -2, 98, 52, 18};
    int i;
    for (i = 0; i < LEN; i++)
        printf("%d\t", base[i]);
    printf("\n");
    qsort(base, LEN, sizeof(int), compare1);//最后一项参数compar为一函数指针，这个函数用来判断两个元素间的大小关系，
    // 若传给compar的第一个参数所指的元素数据大于第二个参数所指的元素数据则必须回传大于零的值，两个元素数据相等则回传0。
    for (i = 0; i < LEN; i++)
        printf("%d\t", base[i]);
    printf("\n");

    qsort(base, LEN, sizeof(int), compare2);
    for (i = 0; i < LEN; i++)
        printf("%d\t", base[i]);
    printf("\n");
    return 0;
}