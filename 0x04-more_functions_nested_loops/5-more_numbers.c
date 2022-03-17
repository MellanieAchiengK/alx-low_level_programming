#include "main.h"
/**
 * more_numbers - prints 10 times the numbers 0 to 14
 *
 * Return: 0
 */
void more_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		int n = 0;

		while (n <= 14)
		{
			if (n > 9)
			{
				_putchar('1');
			}
			_putchar((n % 10) + '0');
			n++;
		}

		_putchar('\n');
		i++;
	}
}


