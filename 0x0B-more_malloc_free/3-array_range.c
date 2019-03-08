#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - creates an array of integers
 * @min: min of size
 * @max: max of elements
 * Return: NULL if min > max or pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int length;
	int *p;
	int counter;

	if (min > max)
		return (NULL);

	length = max - min + 1;

	p = malloc(sizeof(int) + length);

	if (p == NULL)
		return (NULL);

	for (counter = 0; counter < length; counter++)
		p[counter] = min++;

	return (p);
}
