#include <stdio.h>

//连续使用scanf做io输入的时候 后面的scanf如果是%c类型的 会读取前一个输入的回车
//为避免这种情况 可以在第二个scanf前使用
//1.while ( (c = getchar()) != '\n' && c != EOF );
//注意网上的fflash在liunx环境下不起作用 那个跟编译器有关系
int main() {
    float t;
    char a;
    int b;
    float s[] = {3.25, 3.00, 2.75};
    float m[] = {0.95, 0.90};
    float total;
    char c;
    printf("请输入加油量:\n");
    scanf("%f", &t);
    printf("请选择加油品种:a,b,c:\n");
    while ((c = getchar()) != '\n' && c != EOF);
    scanf("%c", &a);
    printf("是否自助加油 0 不自助 1自助:\n");
    while ((c = getchar()) != '\n' && c != EOF);
    scanf("%d", &b);
    total = (s[(a - 'a') % 3] * t) * m[b];
    printf("用户应付金额是:%f", total);
    return 0;
}