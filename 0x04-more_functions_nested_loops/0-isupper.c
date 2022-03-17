#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: character input
 * Return: 1 on success and 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		_putchar(c);
		return (1);
	}
	else
	{
		_putchar(c);
		return (0);
	}
}
