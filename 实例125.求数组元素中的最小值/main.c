#include <stdio.h>

int min(int *, int);

int min(int a[], int len) {
    int m;
    for (int i = 0; i < len; ++i) {
        if (i == 0) {
            m = a[i];
        } else {
            if (m > a[i]) {
                m = a[i];
            }
        }
    }
    return m;
}

int main() {
    int n;
    int a[100];
    puts("请输入元素个数:");
    scanf("%d", &n);
    puts("请输入数组:");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    printf("最小值为:%d", min(a, n));
    return 0;
}