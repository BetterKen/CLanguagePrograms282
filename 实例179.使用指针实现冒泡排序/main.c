#include <stdio.h>


int main() {
    int n;
    int a[20], tmp;
    int *p;
    p = a;
    puts("请输入元素个数:");
    scanf("%d", &n);
    puts("请输入元素:");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }

    for (int j = 0; j < n - 1; ++j) {
        for (int i = 0; i < n - 1 - j; ++i) {
            if (*(p + i) > *(p + i + 1)) {
                tmp = *(p + i);
                *(p + i) = *(p + i + 1);
                *(p + i + 1) = tmp;
            }
        }
    }

    for (int k = 0; k < n; ++k) {
        printf("%d\t", *(p + k));
    }

}
