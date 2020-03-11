#include <stdio.h>

int main() {

    char a;
    int count = 0;
    printf("请输入字符串a:\n");
    while (1){
        a = getchar();
        printf("%c",a);
        if(a == '\0' || a == EOF || a == '\n'){
            break;
        }
        count++;
    }

    printf("字符串长度为%d",count);

    return 0;

}