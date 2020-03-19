#include <stdio.h>
#include <string.h>

#define N 3
typedef struct {
    char name[20];
    int count;
} Cndt;

int main() {
    Cndt cndt[3] = {
            {"赵", 0},
            {"钱", 0},
            {"孙", 0}
    };

    for (int i = 0; i < N; ++i) {
        char name[20];
        scanf("%s", name);
        for (int j = 0; j < 3; ++j) {
            if (strcmp(name, cndt[j].name) == 0) {
                cndt[j].count++;
                break;
            }
        }

    }

    for (int j = 0; j < 3; ++j) {
        printf("%s:%d\n", cndt[j].name, cndt[j].count);
    }
}
