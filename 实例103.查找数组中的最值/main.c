#include <stdio.h>
#include <malloc.h>

typedef struct {
    int len;
    int a[];
} varArray;

int main() {
    int n;
    int max;
    int min;
    int max_index;
    int min_index;
    printf("请输入元素数量:\n");
    scanf("%d", &n);
    varArray *arr = (varArray *) malloc(sizeof(varArray) + n * sizeof(int));
    printf("请输入元素:\n");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr->a[i]);
        if(i == 0){
            max = arr->a[i];
            min = arr->a[i];
            max_index = i;
            min_index = i;
        } else{
            if (max <= arr->a[i]) {
                max = arr->a[i];
                max_index = i;
            }
            if (min >= arr->a[i]) {
                min = arr->a[i];
                min_index = i;
            }
        }
    }

    printf("最大值为:%d,位于位置:%d\n", max, max_index);
    printf("最小值为:%d,位于位置:%d\n", min, min_index);
}