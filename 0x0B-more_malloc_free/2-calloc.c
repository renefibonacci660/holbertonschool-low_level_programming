#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc - memory allocates for array
 * @nmemb: number of array values
 * @size: size of each individual array value
 * Return: A pointer to the beginning of array or NULL if NULL array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	for (i = 0;  i < nmemb * size; i++)
		p[i] = 0;

	return (p);
}
