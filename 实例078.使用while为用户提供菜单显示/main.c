#include <stdio.h>

int main() {

    while (1) {
        int i;
        printf("------------Menu------------\n");
        printf("---Sell--------------------1\n");
        printf("---Buy---------------------2\n");
        printf("---ShowProduct-------------3\n");
        printf("---Out---------------------0\n");
        scanf("%d", &i);
        switch (i){
            case 1:
                printf("Sell\n");
                break;
            case 2:
                printf("Buy");
                break;
            case 3:
                printf("ShowProduct");
                break;
            case 4:
                printf("Out");
                break;
            default:
                printf("Wrong Num");
                break;
        }
    }

}