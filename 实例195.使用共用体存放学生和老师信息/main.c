#include <stdio.h>

struct {
    int num;
    char name[10];
    char tp;
    union {
        int inclass;
        char position[10];
    } job;
} person[2];


int main() {

    int i;
    puts("请输入个人信息:");
    for (int i = 0; i < 2; ++i) {
        printf("第%d个人\n", i + 1);
        scanf("%d %s %c", &person[i].num, &person[i].name, &person[i].tp);
        if (person[i].tp == 's') {
            scanf("%d", &person[i].job.inclass);
        } else {
            scanf("%s", person[i].job.position);
        }
    }

    printf("\n编号\t姓名\t类型\t班级/职位\n");
    for (int j = 0; j < 2; ++j) {
        if (person[j].tp == 's') {
            printf("%d\t%s\t%c\t%d\n", person[j].num, person[j].name, person[j].tp, person[j].job.inclass);
        } else {
            printf("%d\t%s\t%c\t%s\n", person[j].num, person[j].name, person[j].tp, person[j].job.position);
        }
    }

}
