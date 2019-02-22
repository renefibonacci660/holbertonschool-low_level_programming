#include "holberton.h"
/**
 * reverse_array - reverses array of integers
 * @a: holds array of integers assigned in 4-main.c
 * @n: holds length of array assigned in 4-main.c
**/

void reverse_array(int *a, int n)
{
	int len;
	int rev;

	for (len = 0; len < n; len++, n--)
	{
		rev = a[n - 1];
		a[n - 1] = a[len];
		a[len] = rev;
	}
}
