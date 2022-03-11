#include <stdio.h>
/**
 * main - entry point
 *
 * prints all possible combinations of single-digit no.
 *
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 48; n <  58; n++)
	{
		putchar(n);
		putchar(',');
	}
	if (n != 57)
	{
		putchar(' ');
	}

	putchar('\n');
	return (0);
}
