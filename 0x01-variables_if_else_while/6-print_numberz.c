#include <stdio.h>

/**
 * main - entry point
 *
 * prints all single digit characters of base 10
 *
 * Return: always zero
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(48 + n);
		n++;
	}

	putchar('\n');
	return (0);
}
