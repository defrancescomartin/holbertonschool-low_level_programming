#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - adds positive numbers
 *@argc: argument count
 *@argv: array of pointers to argument strings
 *Return: always 0
**/
int main(int argc, char *argv[])
{
	char *c;
	int sum = 0;

	if (argc < 2)
	{
		printf("Error\n");
	}

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
			if (*c > '9' || *c < '0')
			{
				printf("Error\n");
				return (1);
			}
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);

	return (0);
}
