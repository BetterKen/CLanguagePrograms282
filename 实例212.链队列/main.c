#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "stack.h"


int main() {
    int n;
    PStack s;
    while (1) {
        int i;
        int *p;
        puts("\t1\t创建队列");
        puts("\t2\t向队列中插入元素");
        puts("\t3\t从队列中删除元素");
        puts("\t4\t显示队列中元素");
        puts("\t5\t退出");
        puts("--------------------------");
        puts("请选择:(1,2,3,4,5)");
        scanf("%d", &n);
        switch (n) {
            case 1:
                if (s != NULL) {
                    free(s);
                }
                s = (PStack) malloc(sizeof(SeqStack));
                Initial(s);
                break;
            case 2:
                puts("请输入你想要插入的元素:");
                scanf("%d", &i);
                Push(s, i);
                break;
            case 3:
                printf("%d", *(++s->base));
                break;
            case 4:
                p = s->base + 1;
                while (p <= s->top) {
                    printf("data = %d\n", *p);
                    p++;
                }
            case 5:
                exit(0);
        }
    }


}
