#include "main.h"

/**
 * _isupper - Prints 1 if the letter is uppercase
 * and if not print 0
 * @letra: letra is an ASCII character
 * Description: Same as above
 *
 * Return: 1 if uppercase, 0 if not
 */

int _isupper(int letra)
{
	if (letra >= 'A' && letra <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
