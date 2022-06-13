#include "main.h"

/**
 * *_strchr - returns a pointer to the first occurence of the character c
 * in the string s, or NULL if character not found
 * @s: pointer to put the constant
 * @c: constant
 * Return: s
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'  ; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return ('\0');
}
