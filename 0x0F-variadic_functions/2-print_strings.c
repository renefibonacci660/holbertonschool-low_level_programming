#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints unknow number of strings passed to it then \n
 * @separator: string of comma and spaces, made empty if string is NULL
 * @n: number of unknown arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *s; /** holds pointer to beginning of strings passed by 2-main.c */

	va_start(list, n);

	if (!separator)
		separator = "";

	for (i = 0; i < n; i++)
	{
		s = va_arg(list, char*);

		if (!s)
			s = "(nil)";

		printf("%s", s);

		if (i < n - 1)
			printf("%s", separator);
	}
	va_end(list);

	printf("\n");
}
