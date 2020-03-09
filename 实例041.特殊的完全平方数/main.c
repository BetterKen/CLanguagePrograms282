#include <stdio.h>
#include <math.h>

/**
 * sprintf()函数用于将格式化的数据写入字符串 在stdio.h里面，其原型为：
 * int sprintf(char *str, char * format [, argument, ...]);
 *   sprintf(s, "%d", 123);  把整数123打印成一个字符串保存在s中
 *   sprintf(s, "%8x", 4567);  小写16进制，宽度占8个位置，右对齐
 */

int main() {
    for (int i = 100; i < 1000; ++i) {
        double tmp = sqrt(i);
        if (sqrt((double)i) != (int)tmp) {
//        if (sqrt((double)i) != (int)sqrt((double)i)) { 这样比较会出错 但是不知道原因在哪??
            continue;
        }
        char a[3];
        sprintf(a, "%d", i);
        if (a[0] == a[1] ||
            a[1] == a[2] ||
            a[2] == a[0]) {
            printf("%d ", i);
        }
    }
    return 0;
}