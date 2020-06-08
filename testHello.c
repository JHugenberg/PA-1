#include <linux/kernel.h>
#include <sys/syscall.h>
#include <stdio.h>
#include <unistd.h>

int main()
{
	long int checkH = syscall(333);
	printf("sys_helloworld returned %ld\n",checkH);
	return 0;
}

