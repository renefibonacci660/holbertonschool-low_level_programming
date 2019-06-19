#include "sort.h"
#include <stdio.h>

/**
 * swap - Swap two values in array
 * @array: Array
 * @size: Size of array
 * @i: Value to swap
 * @j: Value to swap
 *
 * Return: None
 */
void swap(int *array, size_t size, int *i, int *j)
{
	int tmp;

	if (*i != *j)
	{
		tmp = *i;
		*i = *j;
		*j = tmp;
		print_array(array, size);
	}
}

/**
 * partition - Split array into subarrays
 * @array: Array to partition
 * @lo: Lower bound
 * @hi: Upper bound
 * @size: Size of array
 *
 * Return: Pivot of array
 */
int partition(int *array, int lo, int hi, int size)
{
	int i = lo - 1;
	int pivot = array[hi];
	int j;

	for (j = lo; j <= hi - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			swap(array, size, &array[i], &array[j]);
		}
	}
	swap(array, size, &array[i + 1], &array[hi]);
	return (i + 1);
}


/**
 * quicksort - Sort array recursively using pivot
 * @array: Array to sort
 * @lo: Lower index bound
 * @hi: Upper index bound
 * @size: Size of array
 *
 * Return: None
 */
void quicksort(int *array, int lo, int hi, int size)
{
	int p;

	if (lo < hi)
	{
		p = partition(array, lo, hi, size);
		quicksort(array, lo, p - 1, size);
		quicksort(array, p + 1, hi, size);
	}
}

/**
 * quick_sort - Call quicksort function
 * @array: Array to sort
 * @size: Size of array
 *
 * Return: None
 */
void quick_sort(int *array, size_t size)
{
	quicksort(array, 0, size - 1, size);
}
