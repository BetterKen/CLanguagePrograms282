#include <stdio.h>

int main() {
    int a, b;
    int m;
    int n;
    printf("请输入a,b:\n");
    scanf("%d %d", &a,&b);
    m = a*a + b*b;
    n = a+b;
    if(m>100){
        printf("a^2+b^2=%d",m);
    } else{
        printf("a+b=%d",n);
    }
    return 0;
}