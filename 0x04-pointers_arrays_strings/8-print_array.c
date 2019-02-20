#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints the number of elements requested
 * @a: string assigned in 8-main.c
 * @n: number of elements
**/

void print_array(int *a, int n)
{
	int num = 0;

	while (num < n)
	{
		printf("%d", a[num]);
		num++;

		if (num < n)
		printf(", ");
	}
	printf("\n");
}
