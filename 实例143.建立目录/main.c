#include<stdlib.h>
#include <sys/stat.h>

//sys/stat.h provides you with several integers you can bytewise-OR (|) together to create your mode_t:
//User: S_IRUSR (read), S_IWUSR (write), S_IXUSR (execute)
//Group: S_IRGRP (read), S_IWGRP (write), S_IXGRP (execute)
//Others: S_IROTH (read), S_IWOTH (write), S_IXOTH (execute)
//Additionally, some shortcuts are provided (basically a bitwise-OR combination of the above
//Read + Write + Execute: S_IRWXU (User), S_IRWXG (Group), S_IRWXO (Others)
//DEFFILEMODE: Equivalent of 0666 = rw-rw-rw-
//ACCESSPERMS: Equivalent of 0777 = rwxrwxrwx Therefore, to give only the user rwx (read+write+execute) rights whereas group members and others may not do anything, you can use any of the following mkdir() calls equivalently:

main() {
    int a = mkdir("./TEMP", ACCESSPERMS);
    if (a == 0) {
        puts("Success!");
    }else{
        puts("Fail!");
    }
    return 0;
}