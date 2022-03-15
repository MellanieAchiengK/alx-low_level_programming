#include "main.h"

/**
 * print_sign - prints sign of a number
 *
 * Return: 1 and prints '+' if 'n' is greater than 0
 * 0 and prints 0  if 'n' is zero
 * -1 and prints '-' if n is less than 0
 *
 * @n: input
 */
int print_sign(int n)
{
	int x;

	if (n > 0)
	{
		x = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		x = 0;
		_putchar('0');
	}
	else if (n < 0)
	{
		x = -1;
		_putchar('-');
	}
	return (x);
}
