#include <stdio.h>

int main() {
    float i, h = 100, s = 100;
    for (i = 0; i < 10; ++i) {
        h = h / 2;
        s = s + h * 2;
    }
    printf("总共经过%f米\n",s);
    printf("第十次弹起的高度为%f米\n",h);
}