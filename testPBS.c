#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char const *argv[])
{
    int pid = fork();
    if (pid < 0){
        printf(1, "fork error.\n");
        exit();
    }
    else if(pid == 0){
        // child
        int x = 0;
        printf(1, "child(%d): created.\n", getpid());
        for (;;){
            x += 1;
        }
    }
    else
    {
        // parent
        printf(1, "parent(%d): created child %d.\n", getpid(), pid);
        // wait();
    }
    exit();    
}
