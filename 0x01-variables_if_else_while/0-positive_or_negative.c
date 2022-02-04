#include <stdio.h>

/**
 * main - see if a random number is positive or negative
 *
 * Description: n will be asigned with a random
 *value each time the program executes.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;


	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
