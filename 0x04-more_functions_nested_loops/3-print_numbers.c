#include "main.h"

/**
 * print_numbers - prinnts numbers from 0 to 9
 *
 * Return: 0
 */
void print_numbers(void)
{
	int c = 48;

	while (c <= 57)
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');
}
