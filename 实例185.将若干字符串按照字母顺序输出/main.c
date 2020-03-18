#include <stdio.h>
#include <string.h>


void sort(char *[], int);

void sort(char *strings[], int n) {
    char *tmp;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (strcmp(strings[i], strings[j]) > 0) {
                tmp = strings[i];
                strings[i] = strings[j];
                strings[j] = tmp;
            }
        }
    }
}


int main() {
    int n = 5;
    char *strings[] = {
            "C Language", "Basic", "Worldwide", "Hello", "One"
    };
    sort(strings, n);
    for (int i = 0; i < n; ++i) {
        printf("%s\n", strings[i]);
    }

}
