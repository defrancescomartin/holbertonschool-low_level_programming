#include "main.h"

/**
 * _abs - prints the absolute value of an integer
 * @i: i is an integer
 * Description: Same as above.
 *
 * Return: abs(i)
 **/

int _abs(int i)
{
	if (i > 0)
	{
		return (i);
	}
	else if (i < 0)
	{
		return (-i);
	}
	else
	{
		return (i);
	}
}
