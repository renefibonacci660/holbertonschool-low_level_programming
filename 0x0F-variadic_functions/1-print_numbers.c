#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers -
 *
 * Return: 
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list; /** initalizes list of arguments for va */
	unsigned int i;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		if (separator != NULL)
		{
			printf("%d", va_arg(list, int));

			if (i < n - 1) /** keeps separator from being at end of line */
				printf("%s", separator);
		}
		else
		{
			printf("%d", va_arg(list, int));
		}
	}
	va_end(list);

	printf("\n");
}
