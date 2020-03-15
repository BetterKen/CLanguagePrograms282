#include <stdio.h>

float average(float *, int);

float average(float height[], int n) {
    float total = 0.0;
    for (int i = 0; i < n; ++i) {
        total += height[i];
    }
    return total / n;
}

int main() {

    int n;
    float height[100];
    puts("请输入学生人数:");
    scanf("%d", &n);
    puts("请输入学生身高:");
    for (int i = 0; i < n; ++i) {
        scanf("%f", &height[i]);
    }

    printf("平均身高为%f", average(height, n));


    return 0;
}