#include <stdio.h>

int gcd(int, int, int);

int gcd(int x, int y, int c) {
    int flag = x - y;
    int ys[100] = {0};
    int s[100] = {0};
    int n;
    int a = x, b = y;
    int g;
    int x0;
    int y0;
    if (flag) {
        int tmp = x;
        x = y;
        y = tmp;
    }
    for (n = 0;; n++) {
        s[n] = b / a;
        ys[n] = b % a;
        b = a;
        a = ys[n];
        if (ys[n] == 0) {
            break;
        }
    }
    if (n == 0) {
        g = x;
        x0 = 1;
        y0 = 0;
    } else if (n == 1) {
        g = y % x;
        x0 = -(y / x);
        y0 = 1;
    } else {
        g = ys[n - 1];
        int m[n + 2][2];

        m[2][0] = 1;
        m[2][1] = -s[0];
        m[3][0] = -s[1];
        m[3][1] = s[0] * s[1] + 1;
        if (n == 2) {
            x0 = -s[1];
            y0 = s[0] * s[1] + 1;
        } else {
            for (int i = 3; i <= n; ++i) {
                m[i + 1][0] = m[i - 1][0] - s[i - 1] * m[i][0];
                m[i + 1][1] = m[i - 1][1] - s[i - 1] * m[i][1];
            }
            x0 = m[n + 1][0];
            y0 = m[n + 1][1];
        }
    }
    if (c % g != 0) {
        printf("无解!");
        return -1;
    }

    for (int j = 0; j < 5; ++j) {
        int xx;
        int yy;
        if (flag) {
            xx = c * y0 + y * j / g;
            yy = c * x0 - x * j / g;
        } else {
            xx = c * x0 + x * j / g;
            yy = c * y0 - y * j / g;
        }
        printf("x=%d,y=%d,xx:%d,yy:%d============%d\n", x, y, xx, yy, x * xx + y * yy);

    }

}


int main() {
    gcd(3, 6, 2);
}