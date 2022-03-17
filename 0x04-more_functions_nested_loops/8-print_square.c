#include "main.h"

/**
 * print_square - prints a square
 *
 * @size: size of square
 *
 * Return: 0
 */

void print_square(int size)
{
	int i = 0;

	while (i < size && size > 0)
	{
		int j = 0;
		while (j < size)
		{
			_putchar('#');
			i++;
		}

		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');
}
