#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * print alphabet in lowercase
 * Return: 0
 */
int main(void)

{
	char x = 'a';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}	

	putchar('\n');
	return (0);
}
