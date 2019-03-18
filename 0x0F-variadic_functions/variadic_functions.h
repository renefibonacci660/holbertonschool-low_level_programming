#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct op - struct for function parameter to print anything
 * passed; used rn by 3-print_all.c
 * @f: the function to parse cases to determine what variable type to print
 * @s: holds argument passed, declared as string incase string is needed
 */
typedef struct op
{
	char *s;
	void (*f)(va_list list);
} op_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* VARIADIC_FUNCTIONS_H */
