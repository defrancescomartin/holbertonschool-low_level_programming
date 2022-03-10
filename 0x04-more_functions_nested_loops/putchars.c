/**
 * putchars - print recursively all chars from an int number.
 * @n: expects integer as an argument
 *
 * Return: Void
 */
void putchars(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
	{
		putchars(n / 10);
	}

	putchar(n % 10 + '0');
}
