#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints unknown amount of numbers passed to function
 * @separator: string of comma and spaces, made empty if string is NULL
 * @n: number of unknown arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list slist; /** initalizes list of arguments for va */
	unsigned int i;

	va_start(slist, n);

	if (!separator)
		separator = "";

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(slist, int));

		if (i < n - 1) /** keeps separator from being at end of line */
			printf("%s", separator);
	}
	va_end(slist);

	printf("\n");
}
