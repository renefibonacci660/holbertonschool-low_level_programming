#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_all - prints all unknown num of arguments passed if 4 types
 * @format: argument type passed by 3-main.c
 */
void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0;
	int flag; /** like boolean values, 0 if false 1 for true */
	char *s;

	va_start(list, format);

	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(list, int));
				flag = 0;
				break;

			case 'i':
				printf("%i", va_arg(list, int));
				flag = 0;
				break;

			case 'f':
				printf("%f", va_arg(list, double));
				flag = 0;
				break;

			case 's':
				s = va_arg(list, char*);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				flag = 0;
				break;

			default:
				flag = 1;
				break;
		}

		if (format[i + 1] != '\0' && flag == 0)
			printf(", ");
		i++;
	}
	printf("\n");
}
