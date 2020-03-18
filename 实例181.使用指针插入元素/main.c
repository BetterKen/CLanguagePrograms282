#include <stdio.h>

int main() {

    int arr[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p;
    int i, j = 0;
    p = arr;

    puts("请输入要插入的元素:");
    scanf("%d", &i);


    while (1) {
        if (*(p + j) > i) {
            for (int k = 10; k > j; --k) {
                *(p + k) = *(p + k - 1);
            }
            *(p + j) = i;
            break;
        }
        if (j == 10) {
            *(p + j) = i;
            break;
        }
        j++;
    }

    for (int l = 0; l < 11; ++l) {
        printf("%d\t", arr[l]);
    }

}
