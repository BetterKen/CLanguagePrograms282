#include <stdio.h>
#include <string.h>

void sort(char **, int);

void sort(char *strings[], int n) {
    char *temp;
    int i, j;
    for (i = 0; i < n; ++i) {
        for (j = i + 1; j < n; ++j) {
            if (strcmp(strings[i], strings[j]) > 0) {
                temp = strings[i];
                strings[i] = strings[j];
                strings[j] = temp;
            }
        }
    }
}

int main() {
    char *a[] = {"xca", "axs", "sagx", "tda"};
    char **p, i;
    p = a;
    sort(p,4);
    for (i = 0; i < 4; i++) {
        printf("%s\t", a[i]);
    }
}
