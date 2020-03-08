#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 11
#define N 8

/**
 * 产生随机数的函数为rand() 它在stdlib.h里
 * 但这个产生的随机数是一个伪随机数 和每次计算机的启动时间有关 多次执行rand值不变
 * 需要使用srand()函数进行重新播种 来使rand函数产生不同的值
 * srand也在stdlib.h里
 * srand使用方法常常和time函数一起使用 srand((unsign)time(NULL))
 *
 * 哈希就是是把任意长度的输入（又叫做预映射pre-image）通过散列算法变换成固定长度的输出，该输出就是散列值
 * demo使用的是取余方式的哈希函数
 * 面对哈希冲突时使用的线性探测再散列的方式避免冲突
 */

int hashtable[MAX];

int hashFunc(int);

int search(int);

int creatTable(int);

int hashFunc(int key) {
    return key % 11;
}

int search(int key) {
    int pos, t;
    pos = hashFunc(key);
    t = pos;
    while (hashtable[t] != -1 && hashtable[t] != key) {
        t = (t + 1) % MAX;
        if (t == pos) {
            printf("没有找到此key值\n");
            return -1;
        }
    }
    if (hashtable[t] == key) {
        printf("找到此key值,在位置%d处\n", t);
        return t;
    }
    printf("没有找到此key值\n");
    return -1;
}

int creatTable(key) {
    int pos, t;
    pos = hashFunc(key);
    t = pos;

    if (hashtable[t] != -1) {
        t = (t + 1) % MAX;
        if (t == pos) {
            printf("此哈希表已满\n");
            return -1;
        }
    }
    hashtable[t] = key;
    return 0;
}

int main() {
    int flag[50];
    int i, t;
    int searched;
    for (int i = 0; i < MAX; ++i) {
        hashtable[i] = -1;
    }
    for (int j = 0; j < 50; ++j) {
        flag[j] = -1;
    }
    i = 0;
    srand((unsigned) time(NULL));
    while (i != N) {
        t = rand() % 50;
        if (flag[t] == -1) {
            creatTable(t);
            printf("%2d:", t);
            for (int k = 0; k < MAX; ++k) {
                printf("%d\t", hashtable[k]);
            }
            printf("\n");
            flag[t] = 1;
            i++;
        }
    }
    printf("请输入需要查找的值:\n");
    scanf("%d", &searched);
    search(searched);

}

