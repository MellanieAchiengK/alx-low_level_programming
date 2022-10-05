#include "search_algos.h"

/**
 * linear_search - searches a value in array
 * @array: array to search
 * @size: number of elements
 * @value: value to search for
 * Return: return index on success or -1 on failure
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
			return (i);
		i++;
	}
	return (-1);
}
