#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of
 * a square matrix of integers
 * @a: assigned array in 8-main.c
 * @size: size of the array levels assigned in 8-main.c
**/

void print_diagsums(int *a, int size)
{
	int b;
	int suma = 0;
	int sumb = 0;

	for (b = 0; b < (size * size);)
	{
		suma = suma + a[b];
		b = b + size + 1;
	}
	for (b = 0; b < (size * size) - size;)
	{
		b = b + size - 1;
		sumb = sumb + a[b];
	}
	printf("%d, %d\n", suma, sumb);
}
