#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @a: pointer
 * Return: capitalized string
 */

char *cap_string(char *a)
{
	int string;

	for (string = 0; a[string] != '\0'; string++)
	{
		if (a[string] >= 'a' && a[string] <= 'z')
		{
			if (a[string - 1] == ' ' ||
					a[string - 1] == '\t' ||
					a[string - 1] == '\n' ||
					a[string - 1] == ',' ||
					a[string - 1] == ';' ||
					a[string - 1] == '.' ||
					a[string - 1] == '!' ||
					a[string - 1] == '?' ||
					a[string - 1] == '"' ||
					a[string - 1] == '(' ||
					a[string - 1] == ')' ||
					a[string - 1] == '{' ||
					a[string - 1] == '}' ||
					string == 0)
			{
				a[string] = a[string] - 32;
			}
		}
	}
	return (a);
}
