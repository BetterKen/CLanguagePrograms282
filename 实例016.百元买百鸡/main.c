#include <stdio.h>

int main() {
    int cock, hen, chickens;
    int p_cock = 15, p_hen = 9, p_chickens = 1;

    for (cock = 0; cock <= 20; cock++) {
        for (hen = 0; hen <= 33; hen++) {
            for (chickens = 0; chickens <= 99; chickens++) {
                if (cock + hen + chickens == 100 && cock * p_cock + hen * p_hen + chickens * p_chickens == 300) {
                    printf("公鸡数量%d,母鸡数量%d,小鸡数量%d\n", cock, hen, chickens);
                }
            }
        }
    }


    return 0;
}