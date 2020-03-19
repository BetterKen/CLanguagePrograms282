#include <stdio.h>

union word {
    char ch[2];
    int num;
};

// ASCII码表
//十六进制     十进制     字符
//62          98	    b

int main() {
    union word word1;
    word1.num = 0x1234;
    printf("十六位进制数是:%x\n", word1.num);
    printf("高字节位数据是:%x\n", word1.ch[1]);
    word1.ch[1] = 'b';
    printf("%d\n",word1.ch[1]);
    printf("现在这个数变为:%x\n", word1.num);
}
