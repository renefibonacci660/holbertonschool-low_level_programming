#include "sort.h"
/**
 * selection_sort - sorts an array of integers in ascending order using
 * the Selection sort algorithm
 * @array: array of int
 * @size: size of array
 */

void selection_sort(int *array, size_t size)
{
	int currMin;
	size_t index, counter, position;

	if (!array || size < 2)
		return;

	for (counter = 0; counter < size; counter++)
	{
		currMin = array[counter];
		position = counter;

		for (index = counter + 1; index < size; index++)
		{
			if (currMin > array[index])
			{
				position = index;
				currMin = array[index];
			}
		}
		if (position != counter)
		{
			array[position] = array[counter];
			array[counter] = currMin;
			print_array(array, size);
		}
	}
}
