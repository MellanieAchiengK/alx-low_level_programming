#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located
 * -1 if array is null or value is not present
 */
int binary_search(int *array, size_t size, int value)
{
	int begin = 0, mid = 0, end = 0, i = 0;

	if (!array || size == 0)
		return (-1);

	end = size - 1;

	while (begin <= end)
	{
		i = 0;
		printf("Searching in array: ");
		for (i = begin; i <= end; i++)
			if (i == end)
			{
				printf("%d\n", array[end]);
				break;
			}
			else
				printf("%d, ", array[i]);

		mid = (begin + end) / 2;
		if (array[mid] < value)
			begin = mid + 1;
		else if (array[mid] > value)
			end = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
