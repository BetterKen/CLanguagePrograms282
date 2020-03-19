#include <stdio.h>

struct orderNum {
    int num;
    int con;
};

int main() {
    struct orderNum a[20];

    puts("请输入要排列的五个数字:");
    for (int i = 0; i < 5; ++i) {
        scanf("%d", &a[i].num);
        a[i].con = 0;
    }

    puts("各数的顺序是:");
    for (int p = 0; p < 4; ++p) {
        for (int q = p + 1; q < 5; ++q) {
            if (a[p].num > a[q].num) {
                a[p].con++;
            } else {
                a[q].con++;
            }
        }
    }

    for (int j = 0; j < 5; ++j) {
        printf("%d %d\n", a[j].num, a[j].con);
    }

}
