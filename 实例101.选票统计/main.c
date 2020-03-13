#include <stdio.h>
#include <malloc.h>

typedef struct {
    int len;
    int a[];
} varArray;


int main() {
    int n;
    printf("请输入投票人数:\n");
    scanf("%d", &n);
    varArray *arr = (varArray *) malloc(sizeof(varArray) + sizeof(int) * 4);
    printf("请输入选择的候选人1/2/3:\n");
    for (int i = 0; i < n; ++i) {
        int t;
        scanf("%d", &t);
        if (t >= 4 || t <= 0){
            arr->a[0]++;
        }else{
            arr->a[t]++;
        }
    }
    printf("Result:\n");
    printf("候选人1得票:%d\n", arr->a[1]);
    printf("候选人2得票:%d\n", arr->a[2]);
    printf("候选人3得票:%d\n", arr->a[3]);
    printf("无效票数%d\n", arr->a[0]);
    return 0;
}