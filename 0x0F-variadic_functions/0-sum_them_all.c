#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all parameters
 * @n: holds type variables being passed from 0-main.c
 * Return: 0 if n is 0, sum of all parameters otherwise
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list slist;

	sum = 0;

	va_start(slist, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(slist, int);

	return (sum);
}
