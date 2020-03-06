#include <stdio.h>

int main() {
    int a, b, c;
    for (a = 1; a <= 3; a++) {
        for (b = 1; b <= 3; b++) {
            for (c = 1; c <= 3; c++) {
                if (a != b && a != c && b != c && a != 1 && c != 1 && c != 3) {
                    printf("A将跟%c结婚\n",'X'+a-1);
                    printf("B将跟%c结婚\n",'X'+b-1);
                    printf("C将跟%c结婚\n",'X'+c-1);

                }
            }
        }
    }
    return 0;
}