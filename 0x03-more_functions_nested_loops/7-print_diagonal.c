#include "holberton.h"
/**
 * print_diagonal - prints diagonal line of \ * n
 * @n: value assigned in 7-main.c
**/

void print_diagonal(int n)
{
	int times = 1;

	while (n >= 1 && times <= n)
	{
		if (times >= 2)
		{
			_putchar('.');
		}
		else
		{
			_putchar('\\');
			_putchar('\n');
		}
		times++;
	}

	if (n <= 0)
	_putchar('\n');
}
