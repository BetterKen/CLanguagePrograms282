#include <stdio.h>
#include <string.h>

int *find(int *, int);

int *find(int *arr, int n) {
    return arr + n;
}

int main() {
    char a[] = "Hello World HE";
    char b[] = "World";
    char *pa, *pb;
    int al = strlen(a);
    int bl = strlen(b);
    pa = a;
    pb = b;
    for (int i = 0; i < al; ++i) {
        if (*(pa + i) == *pb) {
            int flag = 0;
            for (int j = 0; j < bl; ++j) {
                if (*(pa + i + j) != *(pb + j)) {
                    flag = 1;
                }
            }
            if(flag == 0){
                printf("%d\n",i);
                break;
            }
        }
    }


}
