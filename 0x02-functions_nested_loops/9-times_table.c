#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: 0
 */
void times_table(void)
{
	int a = 0;
	int mult;                 /* mult represents multiplied figure */

	while (a <= 9)
	{
		int b = 0;

		while (b <= 9);
		{
			mult = a * b;

			if (b == 0)
			{
				_putchar('0' + mult);
			}
			else if (mult < 10)
			{
				_putchar(' ');
				_putchar('0' + mult);
			}
			else
			{
				_putchar('0' + mult / 10);
				_putchar('0' + mult % 10);
			}

			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			b++;
		}
		_putchar('\n');
		a++;
	}
}
