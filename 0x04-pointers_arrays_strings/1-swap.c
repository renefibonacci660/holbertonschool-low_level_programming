#include "holberton.h"
/**
 * swap_int - swaps value of two ints
 * @a: stores first int value given in 1-main.c
 * @b: stoes second int value assigned in 1-main.c
**/

void swap_int(int *a, int *b)
{
	int change;

	change = *b;
	*b = *a;
	*a = change;
}
