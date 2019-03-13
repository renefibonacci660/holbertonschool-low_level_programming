#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - iterates through array and calls function
 * @array: array specified in 1-main.c
 * @size: size of array specified in 1-main.c
 * @action: pointer to function specified in 1-main.c
 **/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int count;

	if (array == NULL || action == NULL)
		return;

	for (count = 0; count < size; count++)
		action(array[count]);
}
