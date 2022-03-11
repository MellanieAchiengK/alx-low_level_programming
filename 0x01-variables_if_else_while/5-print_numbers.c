#include <stdio.h>

/**
 * main - Entry point
 *
 * prints all single digits of base 10 satrting from 0
 *
 * Return: 0
 */
int main(void)
{
	int n = 0;

	for (n = 0; n < 10; n++)
	{
		printf("%d", n);
	}

	printf("\n");
	return (0);
}

