#include <stdio.h>
#include <string.h>

struct {
    char s[100];
} note[100];


int main() {

    while (1) {
        char st[100];
        int n, line;
        char t;
        puts("\t1\tInput");
        puts("\t2\tDelete");
        puts("\t3\tList");
        puts("\t4\tExit");
        puts("--------------------------");
        puts("请选择:(1,2,3,4)");
        scanf("%d", &n);
        switch (n) {
            case 1:
                puts("请输入要编写插入的行数0~99");
                scanf("%d", &line);
                while ((t = getchar()) != '\n') {} //过滤scanf的回车
                puts("请输入字符串");
                gets(note[line].s);
                break;
            case 2:
                puts("请输入要删除的行数0~99");
                scanf("%d", st);
                strcpy(note[line].s, st);
                break;
            case 3:
                puts("请输入要查看的行数0~99");
                scanf("%d", &line);
                printf("%s\n", note[line].s);
                break;
            case 4:
                exit(0);
        }
    }


}
