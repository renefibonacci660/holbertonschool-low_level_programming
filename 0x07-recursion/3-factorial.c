#include "holberton.h"
/**
 * factorial - returns factoral of provided number
 * @n: number to factor
 * Return: factorial of n, 1 if 0, -1 if < 0
**/

int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);

	return (n * factorial(n - 1));
}
