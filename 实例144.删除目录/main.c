#include<stdlib.h>
#include <unistd.h>


main() {
    int a = rmdir("./TEMP");
    if (a == 0) {
        puts("Success!");
    }else{
        puts("Fail!");
    }
    return 0;
}