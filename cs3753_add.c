#include <linux/kernel.h>
#include <linux/linkage.h>

asmlinkage long sys_cs3753_add(int numberOne, int numberTwo, int *result)
{
	printk("first number = %d\n",numberOne);
	printk("second number = %d\n",numberTwo);
	*result = numberOne + numberTwo;
	printk("the two numbers added together = %d\n",*result);
	return 0;
}
