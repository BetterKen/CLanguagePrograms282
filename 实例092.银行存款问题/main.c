#include <stdio.h>

int main() {
    float r = 1000 / (1.0 + 0.025);
    for (int i = 4; i > 0; --i) {
        r = (r + 1000) / (1 + 0.025);
    }
    printf("需要存:%5.2f元", r);
    return 0;
}