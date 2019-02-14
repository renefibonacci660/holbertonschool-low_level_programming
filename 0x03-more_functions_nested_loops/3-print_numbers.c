#include "holberton.h"
/**
 * print_numbers - prints 0-9 with newline
**/

void print_numbers(void)
{
	char num;

	for (num = 0; num <= 9; num++)
	_putchar(num + '0');
	_putchar('\n');
}
