#include "holberton.h"
/**
 * print_most_numbers - prints 0-9 excludes 2 & 4
**/

void print_most_numbers(void)
{
	char num = 0;

	while (num <= 9)
	{
		if (num != 2 && num != 4)
		_putchar(num + '0');
		num++;
	}
	_putchar('\n');
}
