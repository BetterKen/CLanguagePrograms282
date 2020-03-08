#include <stdio.h>

int main() {
    int dec;
    printf("请输入一个数值在0_32767之间:\n");
    scanf("%d", &dec);
    int a[16] = {0};
    int s = dec;
    int i = 0;

    while (s != 0) {
        a[15 - i] = s % 2;
        s = s / 2;
        i++;
    }
    for (int j = 0; j < 16; ++j) {
        printf("%d", a[j]);
        if ((j + 1) % 4 == 0) {
            printf("\t");
        }
    }
}