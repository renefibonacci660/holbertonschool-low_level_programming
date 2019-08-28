#include "search_algos.h"

/**
 * linear_search - Searches for a value in arry of int using Linear search algo
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 * Return: On success first index of where value is located,
 * on failure returns -1
 * Prints everytime comparison occurs
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned long x;

	for (x = 0; x <= size - 1; x++)
	{
		printf("Value checked array[%lu] = [%d]\n", x, array[x]);

		if (array[x] == value)
			return (x);
	}
	return (-1);
}
