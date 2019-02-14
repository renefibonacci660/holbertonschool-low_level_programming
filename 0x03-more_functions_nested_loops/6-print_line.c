#include "holberton.h"
/**
 * print_line - prints _ n times
 * @n: stores int value assigned in 6-main.c
**/

void print_line(int n)
{
	int times = 1;

	while (times <= n)
	{
		_putchar('_');
		times++;
	}
	_putchar('\n');
}
