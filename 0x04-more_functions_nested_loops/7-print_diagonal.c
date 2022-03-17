#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: number of time \\ should be printed
 *
 * Return: 0
 */

void print_diagonal(int n)
{
	int i = 0;

	while (i < n && n > 0)
	{
		_putchar('\\');
		i++;
	}

	_putchar('\n');
}
