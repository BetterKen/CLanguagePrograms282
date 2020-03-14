#include <stdio.h>

int sub(int n) {
    if (n == 1) {
        static int i = 0;
        do {
            i++;
        } while (i % 5 != 0);
        return (i + 1);
    } else {
        int t;
        do {
            t = sub(n - 1);
        } while (t % 4 != 0);
        return (t / 4 * 5 + 1);
    }
}

int main() {

    int total = sub(5);
    printf("最少需要:%d条",total);
    return 0;
}