#include <stdio.h>
#include <string.h>
//size_t strspn(const char *str, const char * accept);
//【函数说明】strspn() 从参数 str 字符串的开头计算连续的字符
// 而这些字符都完全是 accept 所指字符串中的字符
// 简单的说，若 strspn() 返回的数值为n，则代表字符串 str 开头连续有 n 个字符都是属于字符串 accept 内的字符
//【返回值】返回字符串 str 开头连续包含字符串 accept 内的字符数目
// 所以，如果 str 所包含的字符都属于 accept，那么返回 str 的长度
// 如果 str 的第一个字符不属于 accept，那么返回 0
//
//char *strstr(char *str1,char *str2)
// 该函数的作用是在字符串str1中寻找str2字符串的位置
// 并返回指向该位置的指针 没有找到相匹配的就返回空指针

int main() {

    char str1[100], str2[100];
    char str3[100], str4[100];
    int len1, len2;
    int pos;
    puts("请输入字符串1:");
    fgets(str1, 100, stdin);
    puts("请输入字符串2:");
    fgets(str2, 100, stdin);

    len1 = strlen(str1) - 1;
    len2 = strlen(str2) - 1;
    pos = strspn(str1, str2);
    if(pos >= len1){
        printf("全部包含\n");

    }else{
        printf("位置为:%d\n", pos);
    }

    puts("请输入字符串3:");
    fgets(str3, 100, stdin);
    puts("请输入字符串4:");
    fgets(str4, 100, stdin);

    if (strstr(str3,str4) == NULL){
        puts("str3包含str4");
    }else{
        puts("str3不包含str4");
    }

    return 0;
}