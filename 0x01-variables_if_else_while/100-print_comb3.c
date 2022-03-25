#include <stdio.h>
/**
 * main - entry point
 *
 * prints all possible combinations of two different digit
 *    in ascending order
 *
 * Return: 0
 */
int main(void)
{
	int x, y;

	for (x = 0; x <= 10; x++)
	{
		for (y = x + 1; y <= 9; y++)
		{
			if (x == y)
				continue;

			if (x == 9 && y == 8)
				continue;

			putchar((x % 10) + '0');
			putchar((y % 10) + '0');
			if (x + y != 17)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
