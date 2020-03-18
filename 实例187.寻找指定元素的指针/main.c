#include <stdio.h>

int *find(int *, int);

int *find(int *arr, int n) {
    return arr + n;
}

int main() {
    int a[] = {1, 2, 3, 4, 5, 6};
    int *p;
    p = find(a, 0);
    printf("%p\n",p);
    p = find(a,1);
    printf("%p\n",p);
}
