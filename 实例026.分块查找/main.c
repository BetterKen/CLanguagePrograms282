#include <stdio.h>
#include <math.h>

/**
 * 分块查找
 * 这里所用的分块查找是顺序索引查找
 * 也可以给出无序序列 但必须满足第一块内的所有元素要比第二块内任意元素都小
 * int a[x] x为变量的称之为变长数组
 * 1.变长数组必须是自动存储类的，这意味着它必须在函数内部或者作为函数参量声明
 * 2.变长数组在定义时不允许被初始化
 * 变长数组中的“变”并不表示在创建数组后可以修改其大小。变长数组的大小在创建后就不允许改变了。“变”的意思是说其维大小可以用变量来指定
 *
 * ceil(length / (float) s);
 * 整数与浮点数的运算结果是浮点数
 */

typedef struct {
    int key;
    int start;
    int end;
} BLOCK;

int blockSearch(const int *, int, int);

int blockSearch(const int a[], int length, int searched) {
    int s = 0;
    int gap;
    while (s <= 0 || s > length) {
        printf("请输入分块大小,需要在1-%d之间!\n", length);
        scanf("%d", &s);
    }
    BLOCK block[s];
    gap = ceil(length / (float) s);
    for (int i = 0; i < s; i++) {
        block[i].start = i * gap;
        block[i].end = ((i + 1) * gap - 1) > length - 1 ? length : (i + 1) * gap - 1;
        block[i].key = a[block[i].end];
    }

    for (int i = 0; i < s; ++i) {
        if (searched <= block[i].key) {
            for (int j = block[i].start; j <= block[i].end; j++) {
                if (a[j] == searched) {
                    printf("找到%d所在位置:%d\n", searched, j);
                    return j;
                }
            }
        }
    }

    printf("未找到%d所在位置\n", searched);
    return -1;

}

int main() {
    const int LENGTH = 16;
    int a[16] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    int searched;
    printf("请输入要查找的数:\n");
    scanf("%d",&searched);
    blockSearch(a, LENGTH, searched);
}
