#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char const *argv[])
{
    if (argc < 2){
        printf(1, "Usage: set_pri {priority value}\n");
        exit();
    }
    int value, old_priority;
    value = atoi(argv[1]);
    old_priority = set_pri(value);
    if (old_priority == -1){
        printf(1, "Unsuccessful.\n");
    }
    else
    {
        printf(1, "Successful. old priority: %d\n", old_priority);
    }
    exit();
}
