#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - Searches for an integer value in array
 * @array: array with values assigned in 2-main.c
 * @size: size of array assigned in 2-main.c
 * @cmp: pointer to specified function in 2-main.c
 * Return: -1 if value not found or size is less than or = 0.
 * returns index of number if value is found
**/
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}
	return (-1);
}
