#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
	pid_t myPid;
	pid_t Ppid;

	myPid = getpid();
	Ppid = getppid();
	printf("my pid is %d\n", myPid);
	printf("parent pid is %d\n", Ppid);
	printf("my pid is %u\n", myPid);
	printf("parent pid is %u\n", Ppid);

	return (0);
}


