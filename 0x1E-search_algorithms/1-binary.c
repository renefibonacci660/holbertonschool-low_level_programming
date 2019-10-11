#include "search_algos.h"

/**
 *binary_search - searches for value in sorted array of ints with
 * Binary search algo
 * @array: Array in which to search for the value
 * @size: Size of the array
 * @value: Value to search for in array
 * Return: Index of value if found, else returns -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right;
	size_t mid, list;

	if (array == NULL)
		return (-1);

	if (size > 0)
		right = size - 1;
	else
		right = 0;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (list = left; list <= right; list++)
		{
			if (list == right)
				printf("%i\n", array[list]);
			else
				printf("%i, ", array[list]);
		}
		mid = (right + left) / 2;

		if (array[mid] == value)
			return (mid);
		else if (value < array[mid])
			right = mid - 1;
		else
			left = mid + 1;
	}
	return (-1);
}
