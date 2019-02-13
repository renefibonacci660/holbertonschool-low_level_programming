#include "holberton.h"

/**
 * print_last_digit - gives last digit positive of r
 * Return: r
 * @r: holds value of assigned in 7-main.c
**/

int print_last_digit(int r)
{
	r = r % 10;
	if (r <= -1)
	r = r * -1;

	_putchar('0' + r);
	return (r);
}
