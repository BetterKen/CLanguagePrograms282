#include <stdio.h>

typedef struct {
    int num;
    char name[20];
    float score;
} Student;


int main() {
    Student stu[5] = {
            {101, "李明",  99},
            {102, "李明1", 88},
            {103, "李明3", 79},
            {104, "李明2", 69},
            {105, "李明4", 89},
    };

    float max_score = stu[0].score;
    int num = stu[0].num;
    char *name;

    name = &(stu[0].name);

    for (int i = 1; i < 5; ++i) {
        if (stu[i].score > max_score) {
            num = stu[i].num;
            name = &stu[i].name;
            max_score = stu[i].score;
        }
    }

    printf("最高分为:%f\n", max_score);
    printf("学号为:%d\n", num);
    printf("姓名为:%s\n", name);


}
