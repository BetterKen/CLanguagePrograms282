#include <stdio.h>
#include <math.h>

int main() {
    for (int i = 100000; i < 1000000; ++i) {
        double root = sqrt(i);
        if (root != (int) root) {
            continue;
        }
        int high = i / 1000;
        int low = i % 1000;
        double high_root = sqrt(high);
        double low_root = sqrt(low);
        if (high_root == (int) high_root && low_root == (int) low_root) {
            printf("%d ",i);
        }
    }

    return 0;
}