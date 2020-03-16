#include<stdlib.h>

main() {

    char a;
    puts("请输入字符:");
    scanf("%c",&a);
    if (isalpha(a)){
        puts("是字母");
    }else{
        puts("不是字母");
    }
    return 0;
}