#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Return 0
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char c;

		for (c = 'a'; c <= 'z'; i++)
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}
