#include "search_algos.h"

/**
 * linear_seach - searches a value in array of integers
 * using linear search
 * array: pointer to the first element of the array to search
 * size: number of elements in array
 * value: value to search for
 * Return: first index value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array || size == 0)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%li] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return i;
		i++;
	}
	return -1;
}
