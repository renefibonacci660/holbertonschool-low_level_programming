#include "sort.h"
/**
 * 
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int i, j;
	int swapped = 1;
	int tmp;

	if (!array || size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		if (!swapped)
			break;

		swapped = 0;

		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
				swapped = 1;
		}
	}
}
