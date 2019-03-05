#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - Creates space in memory for an array
 * @size: size of array assigned in 0-main.c
 * @c: character that initilizes array assigned in 0-main.c
 * Return: pointer to the allocated memory space, NULL if size is null
**/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	p = malloc(size);
	if (size == 0 || p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
