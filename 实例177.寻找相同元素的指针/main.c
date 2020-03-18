#include <stdio.h>


int main() {
    int t1[] = {1, 3, 5, 7, 9, 11, 13, 15};
    int *a;
    a = t1;
    int al = 8;

    int t2[] = {2, 4, 6, 8, 11, 15, 17};
    int *b;
    b = t2;
    int bl = 7;

    for (int i = 0; i < al; ++i) {
        for (int j = 0; j < bl; ++j) {
            if (*(a + i) == *(b + j)) {
                printf("%d", *(a + i));
                return 0;
            }
        }
    }


}
