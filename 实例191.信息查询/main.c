#include <stdio.h>
#include <string.h>

#define MAX 20
typedef struct {
    char name[20];
    char tel[15];
} Info;

int main() {
    Info info[20];
    int i = 0;
    char name[20];

    while (1) {
        scanf("%s", &info[i].name);
        if (strstr(info[i].name, "#") != NULL) {
            break;
        }
        scanf("%s", &info[i].tel);
        i++;
    }

    puts("输入姓名:");
    scanf("%s", name);
    for (int j = 0; j < i; ++j) {
        if (strcmp(info[j].name, name) == 0) {
            printf("%s:%s", info[j].name, info[j].tel);
            break;
        }
    }

}
