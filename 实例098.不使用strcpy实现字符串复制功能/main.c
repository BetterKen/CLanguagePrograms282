#include <stdio.h>
#include <string.h>

int main() {
    char a[100];
    char b[100];
    printf("Input a:\n");
    fgets(a, 100, stdin);
    for (int i = 0; i < 100; ++i) {
        if (a[i] == '\0' || a[i] == '\000' || a[i] == '\n') {
            break;
        }

        b[i] = a[i];

    }

//    printf("Copy b is %s", strcpy(b, a));
    printf("Copy b is %s", b);


    return 0;
}