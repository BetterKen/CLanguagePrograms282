#include <stdio.h>
#include <math.h>

int main() {
    char ip[33];
    int a[4] = {0};
    printf("请输入32位二进制数:\n");
    while (1) {
        fgets(ip, 33, stdin);
        int flag = 0;
        for (int i = 0; i < 32; ++i) {
            if (ip[i] != '1' && ip[i] != '0') {
                flag = 1;
                printf("输入的32位二进制不正确!请重新输入:\n");
                break;
            }
        }
        if (flag == 0) {
            break;
        }
    }
    printf("ip地址为:");
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 8; ++j) {
            int pos = (i + 1) * 8 - j - 1;
            a[i] += (int) (ip[pos] - '0') * pow(2, j);
        }
        printf("%d", a[i]);
        if (i != 3) {
            printf(".");
        }
    }


    return 0;

}