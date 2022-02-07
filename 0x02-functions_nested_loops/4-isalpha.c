#include "main.h"

/**
 * _isalpha - Prints 1 if a char is alpha
 * and if it is uppercase it prints 0
 * @letra: letra is an ASCII character
 * Description: Same as above.
 *
 * Return: Always 0 (Sucess)
 **/

int _isalpha(int letra)
{
	if (letra >= 'A' && letra <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
