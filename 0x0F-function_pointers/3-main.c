#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - simple calculator
 * @argc: number of args
 * @argv: array of args
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int (*op)(int, int);
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op = get_op_func(argv[2]);

	if (op == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && argv[3][0] == '0')
	{
		printf("Error\n");
		exit(100);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", op(a, b));
	return (0);
}
