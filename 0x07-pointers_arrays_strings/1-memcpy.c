#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: second area
 * @src: primary area
 * @n: max bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		dest[i] = src[i];
	}
	return (dest);
}
