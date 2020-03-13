#include <stdio.h>

#define MAX 50

int main() {
    int n;
    float chinese[MAX], math[MAX], english[MAX], average[MAX];
    printf("请输入学生数量:\n");
    scanf("%d", &n);
    printf("NO\t语文\t数学\t英语:\n");
    for (int i = 1; i <= n; ++i) {
        printf("NO%d:\t", i);
        scanf("%f %f %f", &chinese[i], &math[i], &english[i]);
        average[i] = (chinese[i] + math[i] + english[i]) / 3.0;
    }
    printf("NO\t语文\t数学\t英语\t平均分:\n");
    for (int j = 1; j <= n; ++j) {
        printf("%d\t%f\t%f\t%f\t%f\n", j, chinese[j], math[j], english[j], average[j]);
    }


}