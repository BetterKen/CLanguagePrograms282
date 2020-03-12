#include <stdio.h>
#include <malloc.h>
#include <time.h>

typedef struct {
    int len;
    int a[];
} VarArray;


int main() {


    int len;

    printf("请输入要猜的位数:\n");
    scanf("%d", &len);
    VarArray *varArray = (VarArray *) malloc(sizeof(VarArray) + 2 * len * sizeof(int));
    VarArray *varArray2 = (VarArray *) malloc(sizeof(VarArray) + 2 * len * sizeof(int));
    varArray->len = len;
    varArray2->len = len;

    for (int i = 0; i < len; ++i) {
        srand(i + (unsigned) time(NULL));

        varArray->a[i] = rand() % 10;
    }

    for (int j = 0; j < len; ++j) {
        printf("var=%d\n", varArray->a[j]);
    }
    while (1) {
        int a = 0;
        int b = 0;
        printf("guess:");

        for (int k = 0; k < len; ++k) {
            scanf("%d", &varArray2->a[k]);
        }

        for (int j = 0; j < len; ++j) {
            printf("var=%d\tvar2=%d\n", varArray->a[j], varArray2->a[j]);
        }

        for (int l = 0; l < len; ++l) {
            for (int i = 0; i < len; ++i) {
                if (i == l && varArray->a[i] == varArray2->a[l]) {
                    a++;
                }
                if (i != l && varArray->a[i] == varArray2->a[l]) {
                    b++;
                }
            }
        }

        printf("A=%d,B=%d\n", a, b);
        if (a == len) {
            printf("真棒!\n")
            break;
        }
    }
    return 0;
}