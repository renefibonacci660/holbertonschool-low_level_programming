#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - Calls a function from 0-main.c file to print a name
 * @name: A pointer to a string
 * @f: A pointer to a function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
