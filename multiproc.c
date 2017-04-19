#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <signal.h>
#include <unistd.h>
#include <sys/wait.h>

pid_t subproc() { 
	if (!fork()) { // This is the child process ( same as if fork() == 0 ) 
		pid_t pid;
// execute the following 
// arg1 : pathname of the exe 
// arg2 : string to appear as argv[0] - by convention the exe name
// arg3:-- : additional arguments 
		execlp("ls","ls", "-l", "/", NULL);
		sleep(2);
		pid = getpid();
		return(pid);
		exit(0);
	}
}

int main() { 
	printf("Spawning subprocess...\n");
	sleep(1);
	pid_t pid = subproc();
	printf("\n Subprocess %lu was created\n", (unsigned long)pid);
}
