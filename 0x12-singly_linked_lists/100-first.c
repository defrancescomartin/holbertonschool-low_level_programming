#include <stdio.h>

void myStartupFun(void) __attribute__ ((constructor));

/**
 * myStartupFun -  function that prints before the main function is executed
 *
 * Return: void
 */

void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
