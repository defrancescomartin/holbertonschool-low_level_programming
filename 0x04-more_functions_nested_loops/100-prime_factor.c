#include <stdio.h>
/**
 * main - finds the largest prime factor of 612852475143
 *
 * Return: no error
 */
int main(void)
{
    long int i = 2;
    long int num = 612852475143;
    for (i = 2; i < num; i++)
    {
        if ((num % i) == 0)
        {
            num /= i;
            i--;
        }
    }
    printf("%ld\n", num);
    return (0);
}
