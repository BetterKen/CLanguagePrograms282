#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

/**
 * fget获取字符串 可以从文件获取 也可以从标准输入获取 它在stdio.h里
 * toupper将小写字符改成大写字符 它在ctype里面
 */

int main() {
    char a[100];
    int n = 0;
    int len = 0;
    int dec = 0;
    printf("请输入要转换的数字:\n");
    fgets(a, 100, stdin);
    for (int i = 0; a[i] != '\0'; i++) { //把小写字母转换成大写字母
        //另一种方法把小写字母转换成大写字母
//        if (a[i] >= 'a' && a[i] <= 'z')
//            a[i] -= 32;
        a[i] = toupper(a[i]);
    }
    len = (int) strlen(a) - 1; //减去回车符或\0占用的一位
    for (int k = 0; k < len; ++k) {
        putchar(a[k]);
    }
    while (n != 2 && n != 8 && n != 16) {
        printf("请输入进制(2,8,16):\n");
        scanf("%d", &n);
    }

    for (int j = 0; j < len; j++) {
        if (((n == 2 || n == 8) && (a[j] - '0' >= n)) ||
            ((n == 16) && (a[j] - '0' >= 10 && a[j] - 'A' >= 6))) {
            printf("要转换的数字与进制不符合请重新输入!\n");
        }

        if ((a[j] - '0' < 10 && a[j] - '0' >= 0 && n == 16)
            || (n == 2 || n == 8)) {
            dec += (a[j] - '0') * (int) pow(n, len - j - 1);
        } else {
            dec += (10 + a[j] - 'A') * (int) pow(n, len - j - 1);
        }
    }
    printf("%d", dec);

}