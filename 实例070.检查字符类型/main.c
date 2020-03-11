#include <stdio.h>

int main() {
    char a;
    printf("请输入一个字符:\n");
    scanf("%c",&a);
    if(a >= 'A' && a <= 'Z'){
        printf("是大写");
    }else if(a >= 'a' && a <= 'z'){
        printf("是小写");
    } else if (a>='0' && a<= '9'){
        printf("是数字");
    }else{
        printf("是符号");
    }
    return 0;
}