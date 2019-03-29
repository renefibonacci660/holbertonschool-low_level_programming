#include "holberton.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to number passed in 4-main.c
 * @index: index of bit to reset
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int place;

	place = 1;
	place = place << index;

	if (n == NULL || index > sizeof(unsigned long int) * 8)
		return (-1);

	if (((*n >> index) & 1) == 1)
		*n = place ^ *n;

	return (1);
}
