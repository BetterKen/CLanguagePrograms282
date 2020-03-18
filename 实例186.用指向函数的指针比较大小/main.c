#include <stdio.h>

int min(int, int);

int min(int a, int b) {
    if (a > b) {
        return b;
    }
    return a;
}


int main() {

    int (*p_min)(); //指向函数的指针变量 用来存放入口地址
    p_min = min; //可以讲函数的地址赋给他 他就指向那个函数 在赋值时只给出函数的名称即可 不必给出函数的参数
    int a = 1, b = 2;
    int c;
    c = (*p_min)(a, b); //使用时需要给出函数的参数
    printf("min=%d", c);
}
