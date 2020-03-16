#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], *p;
    strcpy(str1, "1asdsadasdsa");
    p = strdup(str1);
    printf("%s", p); //按照str1的长度在内存中分配出空间 将str1复制到p中
    return 0;
}