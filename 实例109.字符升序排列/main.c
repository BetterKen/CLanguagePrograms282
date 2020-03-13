#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[100], c[200], *p;
    int i = 0, j = 0, k = 0;
    printf("请输入a:\n");
    gets(a);
    printf("请输入b:\n");
    gets(b);

    while (a[i] != '\000' && b[j] != '\000') {
        if (a[i] <= b[j]) {
            c[k] = a[i];
            i++;
        } else {
            c[k] = b[j];
            j++;
        }
        k++;
    }
    if (a[i] == '\000') {
        p = b + j;
    } else {
        p = a + i;
    }
    strcat(c, p);
    puts(c);
    return 0;
}