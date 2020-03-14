#include <stdio.h>


int main() {
    int len;
    int a[100];
    int max;
    int min;
    int max_index;
    int min_index;
    puts("请输入元素个数:");
    scanf("%d", &len);
    puts("请输入元素:\n");

    for (int i = 0; i < len; ++i) {

        scanf("%d", &a[i]);
        if (i == 0) {
            max = a[i];
            max_index = i;
            min = a[i];
            min_index = i;
        }
        else
        {
            if (max < a[i]) {
                max = a[i];
                max_index = i;
            }
            if (min > a[i]) {
                min = a[i];
                min_index = i;
            }
        };
    }

    printf("最大数的位置为:%d\n", max_index);
    printf("最小数的位置为:%d\n", min_index);
    printf("对调后的数组为:\n");

    a[max_index] = min;
    a[min_index] = max;

    for (int j = 0; j < len; ++j) {
        printf("%d\t", a[j]);
    }

    return 0;
}