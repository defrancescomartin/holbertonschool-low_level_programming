#include "main.h"

/**
 * set_string - Set the value of a pointer to a char
 * @s: points to the address of string s
 * @to: adress to be setted
 * Return: Void.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
