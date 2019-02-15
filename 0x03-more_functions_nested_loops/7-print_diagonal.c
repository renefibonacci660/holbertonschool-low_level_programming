#include "holberton.h"
/**
 * print_diagonal - prints diagonal line of \ * n
 * @n: value assigned in 7-main.c
**/

void print_diagonal(int n)
{
	int times;
	int e;

	for (times = 0; times < n; times++)
	{
		for (e = 0; e < times; e++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
