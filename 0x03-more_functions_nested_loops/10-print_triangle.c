#include "holberton.h"
/**
 * print_triangle - prints a triangle to size
 * @size: Triangle levels assigned in 10-main.c
 */
void print_triangle(int size)
{
	int space;
	int times;
	int length;

	length = size;
	for (times = 0; times < size; times++)
	{
		for (space = 0; space < length - 1; space++)
			_putchar(' ');
		length = length - 1;
		for (; space < size; space++)
			_putchar('#');
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
