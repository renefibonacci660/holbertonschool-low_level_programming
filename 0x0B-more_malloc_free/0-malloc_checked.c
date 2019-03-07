#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - Allocating memory with malloc
 * @b: unsigned number assigned in 0-main.c
 * Return: a pointer to a void
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b * sizeof(unsigned int));

	if (p == NULL)
		exit(98);

	return (p);
}
