#include <stdio.h>

int main() {

    int a[10] = {0};

    for (int i = 18; i <= 22; ++i) {
        int flag = 0;
        int t3 = i * i * i;
        int t4 = t3 * i;

        if (t3 <= 1000 || t3 >= 10000 || t4 <= 100000 || t4 >= 1000000) {
            continue;
        }

        for (int j = 0; j < 4; ++j) {
            a[t3 % 10]++;
            t3 = t3 / 10;
        }
        for (int j = 4; j < 10; ++j) {
            a[t4 % 10]++;
            t4 = t4 / 10;
        }

        for (int k = 0; k < 10; ++k) {
            if (a[k] != 1) {
                flag = 1;
                break;
            }
        }

        if(flag == 0){
            printf("i = %d", i);
        }
    }

    return 0;

}