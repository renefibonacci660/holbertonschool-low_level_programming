#include "holberton.h"
/**
 * print_square - prints square size * size
 * @size: value assigned in 8-main.c
**/

void print_square(int size)
{
	int times = 1;
	int rows = 1;

	if (size >= 1)
	{
		while (rows <= size && times <= size)
		{
			while (times <= size)
			{
				_putchar('#');
				times++;
			}
			if (rows <= size)
			{
				_putchar('\n');
				times = 1;
				rows++;
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
