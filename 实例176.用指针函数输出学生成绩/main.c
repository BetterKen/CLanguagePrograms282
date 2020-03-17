#include <stdio.h>


int main() {

    float score[][4] = {
            {100.0, 95, 88, 44.4},
            {99.0,  95, 88, 44.4},
            {55.0,  95, 88, 44.4},
            {77.0,  95, 88, 44.4},
    };
    float (*p)[4] = score;
    int no;
    puts("请输入学号:");
    scanf("%d", &no);
    for (int i = 0; i < 4; ++i) {
        printf("%f\t", *(*(p + no) + i));
    }

}
