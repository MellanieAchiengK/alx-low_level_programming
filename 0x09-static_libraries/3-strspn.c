#include "main.h"

/**
 * *_strspn - return the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 * @s: string to check
 * @accept: character to match
 * Return: int
 */


unsigned int _strspn(char *s, char *accept)
{
	int i, j, len = 0;

	for (i = 0; s[i] >= '\0'; i++)
	{
		for (j = 0; accept[j] > '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}
	return (len);
}
