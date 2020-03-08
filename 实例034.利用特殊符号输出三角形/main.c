#include <stdio.h>

int main() {
    char a = '#';
    printf("\40\40%c\40\40\n", a);
    printf("\40%c%c%c\40\n", a, a, a);
    printf("%c%c%c%c%c\n", a,a,a,a,a);
    return 0;
}