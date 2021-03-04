#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> /* for fork */
#include <sys/types.h> /* for pid_t */
#include <sys/wait.h> /* for wait */

int main()
{
    pid_t pid=fork();
    int k;
    if (pid==0)
    { /* child process */
    	k=execlp("gcc","gcc","hello.c","-o", "hello.out",NULL);
        exit(127); /* only if execlp fails */
    }
    else
    { /* pid!=0; parent process */
    	waitpid(pid,0,0); /* wait for child to exit */
    	printf("Parent Process\n");
    }
	return 0;
}
