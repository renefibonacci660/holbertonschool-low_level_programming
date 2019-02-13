#include "holberton.h"
/**
 * print_alphabet - prints a - z with newline
**/

void print_alphabet(void)
{
	int l;

	l = 97;

	while (l <= 122)
	{
		_putchar(l);
		l++;
	}
	_putchar('\n');
}
