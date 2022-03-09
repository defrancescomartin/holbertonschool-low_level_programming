#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - simple calculator
 * @argc: number of args
 * @argv: array of args
 *
 * Return: 0 if success, 98 99 or 100 if error
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

	a = atoi(argv[1]);
	op = get_op_func(argv[2]);
	b = atoi(argv[3]);

	if (op == NULL || (argv[2][1] != '\0'))
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '%' || argv[2][0] == '/') && argv[3][0] == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", op(a, b));
	return (0);
}