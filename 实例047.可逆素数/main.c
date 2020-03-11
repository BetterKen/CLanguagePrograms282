#include <stdio.h>
#include <math.h>

int ss(int);

int revert(int);

int ss(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i < n; ++i) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}


int revert(int n) {
    int len = 1;
    int r = 0;
    int a = n;
    int b = n;
    while (1) {
        int t = 10;
        if (a / t == 0) {
            break;
        }
        a = a / t;
        len++;
    }

    for (int i = 1; i <= len; ++i) {
        r += (b % 10) * (int) pow(10, len - i);
        b = b / 10;
    }
    return r;
}


int main() {
    int count = 1;
    printf("%d", ss(9967));
    printf("%d", ss(7699));
    for (int i = 1000; i < 10000; ++i) {
        if (ss(i)) {
            int r = revert(i);
            if (ss(r) && i < r) {
                printf("%d \t", i);
                if (count % 5 == 0) {
                    printf("\n");
                }
                count++;
            }
        }
    }
    return 0;
}