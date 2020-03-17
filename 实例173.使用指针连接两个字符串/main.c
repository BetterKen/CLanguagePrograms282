#include <stdio.h>

void connect(char *, char *, char *);

void connect(char *str1, char *str2, char *strCon) {
    while (*str1 != '\0' || *str1 != '\000') {
        *strCon = *str1;
        strCon++;  //这里strCon是一个临时局部变量
        str1++;
    }
    while (*str2 != '\0' || *str2 != '\000') {
        *strCon = *str2;
        strCon++;
        str2++;
    }
    *strCon = '\0';
//    strCon = NULL;
}


int main() {
    char fa[60], *strCon;
    char str1[] = "Hello ";
    char str2[] = "World!";
    strCon = fa;
    connect(str1, str2, strCon);
    printf("%s", strCon); //最后打印的是传入函数的地址里面的值即使在connect里面讲strCon赋值为NULL也是赋值的临时变量
}
