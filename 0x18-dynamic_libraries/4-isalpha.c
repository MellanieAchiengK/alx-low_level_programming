#include "main.h"

/**
 * _isalpha - check for alphabetic character
 *
 * Return: Success (1) if lowercase or uppercase
 * otherwise return (0)
 *
 * @c: input)
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
