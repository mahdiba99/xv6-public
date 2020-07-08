#include "types.h"
#include "stat.h"
#include "user.h"

int main (int argc,char *argv[])
{

	int pid;
	int wait_time, run_time;	
	pid = fork();
	if (pid < 0){
		printf(1, "fork error.\n");
        exit();
	}
	else if (pid == 0)
  	{
		printf(1, "child(%d): created.\n", getpid());
    }
  	else
 	{
		printf(1, "parent(%d): create child(%d)\n", getpid(), pid);
		waitx(&wait_time, &run_time);
		printf(1, "Wait Time = %d\n Run Time = %d \n", wait_time, run_time); 
 	}  
 	exit();
}
