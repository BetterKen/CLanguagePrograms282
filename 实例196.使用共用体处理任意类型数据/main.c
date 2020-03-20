#include <stdio.h>


union {
    int i;
    char c;
    float f;
    double d;
} t;


int main() {
    char tp;
    puts("请输入成员类型:");
    scanf("%c", &tp);
    puts("请输入数字:");
    switch (tp) {
        case 'i':
            scanf("%d", &t.i);
            printf("%d", t.i);
            break;
        case 'c':
            scanf("%c", &t.c);
            printf("%c", t.c);
            break;
        case 'f':
            scanf("%f", &t.f);
            printf("%f", t.f);
            break;
        case 'd':
            scanf("%lf", &t.d);
            printf("%lf", t.d);
            break;
        default:
            puts("输入错误!");
    }


}
