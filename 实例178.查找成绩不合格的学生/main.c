#include <stdio.h>


int main() {
    float score[][3] = {
            {100.0, 95, 88},
            {99.0,  66, 88},
            {55.0,  95, 88},
            {40.0,  95, 88},
    };
    float (*p)[3] = score;
    int n = 4;
    int m = 3;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (*(*(p + i) + j) < 60.0) {
                for (int k = 0; k < m; ++k) {
                    printf("%f\t", *(*(p + i) + k));
                }
                printf("\n");
                break;
            }
        }
    }

}
