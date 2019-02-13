#include "holberton.h"

/**
 * print_sign - checks for lowercase char
 * Return: 1 > 0, 0 if == 0, -1 otherwise
 * @n: holds value of assigned in 5-main.c
**/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
