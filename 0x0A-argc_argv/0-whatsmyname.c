#include "main.h"
#include <stdio.h>

/**
 * main - print the name of the program followed by \n
 * @argc: argument count
 * @argv: array of pointers to argument strings
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	if (argc)
		printf("%s\n", argv[0]);
	return (0);
}
