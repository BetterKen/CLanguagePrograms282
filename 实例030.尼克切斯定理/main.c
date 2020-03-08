#include <stdio.h>

int main() {
    int n;
    printf("请输入任意整数:\n");
    scanf("%d", &n);
    int tri_n = n * n * n;
    int mid = tri_n / 2;
    if (mid % 2 == 0) mid++;
    while (1) {
        int flag = 0;
        int sum = 0;
        int count = 0;
        while (1) {
            if (sum < tri_n) {
                sum = sum + mid - count * 2;
                count++;
            }
            if (sum > tri_n) {
                mid = mid - 2;
                break;
            }
            if (sum == tri_n) {
                printf("%d*%d*%d = %d = ", n, n, n, tri_n);
                for (int j = 0; j < count; j++) {
                    printf("%d", mid - j * 2);
                    if (j != count - 1) {
                        printf("+");
                    }
                }
                flag = 1;
                break;
            }
        }
        if (flag == 1) {
            break;
        }
    }

}