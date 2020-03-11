#include <stdio.h>

int main() {
    float a;
    float b;
    char c;
    float r;
    printf("请输入要运算的公式a+(-&/)b:\n");
    scanf("%f%c%f", &a, &c, &b);
    if(c-'+' == 0){
        printf("%f",a+b);
    }
    if(c-'-' == 0){
        printf("%f",a-b);
    }
    if(c-'*' == 0){
        printf("%f",a*b);
    }
    if(c-'/' == 0){
        printf("%f",a/b);
    }

    return 0;
}