#include <stdio.h>

void max_min(int *, int, int *, int *);

void max_min(int a[], int len, int *max, int *min) {

    int *p;
    *max = *min = *a;
    for (p = a + 1; p < a + len; p++) {
        if (*p > *max) {
            *max = *p;
        }
        if (*p < *min) {
            *min = *p;
        }
    }
}

int main() {
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *max, *min;
    max_min(a, 10, &max, &min);
    printf("Max=%d\t",max);
    printf("Min=%d",min);

}
