#include <stdio.h>
#include <unistd.h>

int main() {

    char buffer[1024] ;
    //Get the pathname of the current working directory,
    //   and put it in SIZE bytes of BUF.  Returns NULL if the
    //   directory couldn't be determined or SIZE was too small.
    //   If successful, returns BUF
    //获取当前的工作目录，注意：长度必须大于工作目录的长度加一
    //如果未获取到当前目录返回NULL
    char *p = getcwd(buffer , 100);
    if (p != NULL){
        printf("当前目录为:%s\n",p);
    }else{
        printf("未获取到当前目录");
    };

    return 0;
}