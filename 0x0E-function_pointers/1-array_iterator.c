#include <stdio.h>
#include "function_pointers.h"
/**
 * 
 **/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int count;

	if (array == NULL || action == NULL)
		return;

	for (count = 0; count < size; count++)
		action(array[count]);
}
