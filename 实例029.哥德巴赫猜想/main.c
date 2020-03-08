#include <stdio.h>

int ss(int);

int ss(int num) {
    if (num <= 0) {
        return -1;
    }
    if (num == 2) {
        return 1;
    }
    for (int j = 2; j < num; j++) {
        if (num % j == 0 && j != num) {
            return -1;
        }
    }
    return 1;
}

int main() {
    int s[100];
    int count = 0;
    for (int j = 1; j <= 100; j++) {
        if (ss(j) == 1) {
            s[count] = j;
            count++;
        }
    }

    for (int k = 4; k < 100; k = k + 2) {
        int flag = 0;
        printf("\n偶数:%d", k);
        for (int i = 0; i < k && i < count; i++) {
            if (ss(k - s[i]) == 1) {
                flag = 1;
                printf("可以被分解为两个素数的和:%d+%d\t", s[i], k - s[i]);
            }
        }
        if (!flag)
            printf("不可以被分解为两个素数的和\n");

    }

}