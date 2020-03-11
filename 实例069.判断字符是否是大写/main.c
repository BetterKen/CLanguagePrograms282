#include <stdio.h>

int main() {
    char a;
    printf("请输入一个字母:\n");
    scanf("%c",&a);
    if(a >= 'A' && a <= 'Z'){
        printf("是大写");
    }else{
        printf("不是大写");
    }
    return 0;
}