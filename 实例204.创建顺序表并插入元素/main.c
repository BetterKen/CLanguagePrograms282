#include <stdio.h>
#include <malloc.h>

struct sqlist {
    int data[100];
    int length;
};


int main() {
    struct sqlist *sq;
    int n;
    sq = (struct sqlist *) malloc(sizeof(struct sqlist));
    sq->length = 0;
    puts("请输入大小:");
    scanf("%d", &n);

    puts("请输入元素:");
    for (int i = 0; i < n; ++i) {
        int tmp;
        scanf("%d", &tmp);
        sq->data[i] = tmp;
        sq->length += 1;
    }

    for (int j = 0; j < n; ++j) {
        printf("%d\t", sq->data[j]);
    }

    return 0;
}