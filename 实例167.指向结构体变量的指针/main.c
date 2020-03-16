#include <stdio.h>

typedef struct {
    int number;
    char name[20];
    char sex;
    int age;
    float score;
} Student;

int main() {
    Student s = {1001, "李XX", 'M', 25, 90.3};
    Student *p = &s;
    printf("Number:%d\n", p->number);
    printf("Name:%s\n", p->name);
}
