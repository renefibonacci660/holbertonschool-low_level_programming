#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

void printchar(va_list list);
void print_int(va_list list);
void printflt(va_list list);
void printstr(va_list list);

/**
 * print_all - prints all unknown num of arguments passed if 4 types
 * @format: argument type passed by 3-main.c
 */
void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0;
	int j = 0;
	char *separator = "";

	op_t ops[] = {
		{"c", printchar},
		{"i", print_int},
		{"f", printflt},
		{"s", printstr},
		{NULL, NULL}};

	va_start(list, format);

	while (format != NULL && format[i])
	{
		while (ops[j].s)
		{
			if (format[i] == *ops[j].s)
			{
				printf("%s", separator);
				ops[j].f(list);
				separator = ", ";
			}
			j++;
		}
		i++;
		j = 0;
	}
	va_end(list);
	printf("\n");
}


/**
 * printchar - prints character
 * @list: listing of held values passed
 */
void printchar(va_list list)
{
	printf("%c", va_arg(list, int));
}


/**
 * print_int - prints integer
 * @list: listing of held values passed
 */
void print_int(va_list list)
{
	printf("%i", va_arg(list, int));
}


/**
 * printflt - prints float
 * @list: listing of held values passed
 */
void printflt(va_list list)
{
	printf("%f", va_arg(list, double));
}


/**
 * printstr - prints string
 * @list: listing of held values passed
 */
void printstr(va_list list)
{
	char *str;

	str = va_arg(list, char *);

	if (str == NULL)
		str = "(nil)";

	printf("%s", str);
}
