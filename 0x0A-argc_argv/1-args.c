#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: count arguments
 * @argv: array of pointers to arguments strings
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	(void)argv; /*esto es para evitar el warning unused variable*/
	printf("%d\n", argc - 1); /*el -1 es para no contar el nombre del programa*/

	return (0);
}
