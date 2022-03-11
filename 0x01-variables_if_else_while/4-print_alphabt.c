#include <stdio.h>
/**
 * main - Entry point
 *
 * print alphabet in lowercase except q and c
 *
 * Return: 0
 */
int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		if (x != 'e' && x != 'q')
		{
			putchar(x);
		}
		x++;
	}

	putchar('\n');
	return (0);
}
