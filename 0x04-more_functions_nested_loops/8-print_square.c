#include "main.h"

/**
 * print_square - draws a diagonal line
 * @size: number of time # should be printed
 *
 * Return: 0
 */

void print_square(int size)
{
	int i;
	int j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}
