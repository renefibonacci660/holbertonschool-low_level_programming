#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct op - struct for function parameter to print anything
 * passed; used rn by 3-print_all.c
 * @op: the case use
 * @f: the function to parse cases to determine what variable type to print
 */

typedef struct op
{
	char *s;
	void (*f)(va_list list);
} op_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* VARIADIC_FUNCTIONS_H */