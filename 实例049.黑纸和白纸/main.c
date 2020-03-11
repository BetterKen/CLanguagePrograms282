#include <stdio.h>

int main() {

    int a, b, c, d, e;
    for (int a = 0; a <= 1; ++a) {
        for (int b = 0; b <= 1; ++b) {
            for (int c = 0; c <= 1; ++c) {
                for (int d = 0; d <= 1; ++d) {
                    for (int e = 0; e <= 1; ++e) {
                        int p1 = b + c + d + e == 3 ? 1 : 0;
                        int p2 = a + c + d + e == 0 ? 1 : 0;
                        int p3 = a + b + d + e == 1 ? 1 : 0;
                        int p4 = a + b + c + e == 4 ? 1 : 0;
                        if (a == p1 && b == p2 && c == p3 && d == p4) {
                            printf("a:%d,b:%d,c:%d,d:%d,e:%d\n", a, b, c, d, e);
                        }
                    }

                }
            }

        }
    }
    return 0;
}