#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all parameters
 * @n: holds type variables being passed from 0-main.c
 * Return: 0 if n is 0, sum of all parameters otherwise
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	int sum;

	va_start(list, n);

	sum = 0;

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(list, int);

	va_end(list);

	return (sum);
}
