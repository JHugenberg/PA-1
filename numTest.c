#include <linux/kernel.h>
#include <sys/syscall.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
/*Used dev.to/omergulen/how-to-add-system-callsyscall-to-the-kernel-compile-and-test-it-3e6p to asssist with the #includes and syscall format*/
int main()
{	int numOne = 4;
	int numTwo= 9;
	int * result = malloc(sizeof(int));
	long int numTest = syscall(334, numOne, numTwo,&result);
	printf("number Test: %ld\n",numTest);
	return 0;
}
