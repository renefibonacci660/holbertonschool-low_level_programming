#include "holberton.h"
void binary(unsigned long int n);
/**
 * print_binary - prints the binary representation of a number
 * @n: base number 10 changed to base 2
 **/
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');

	else
	{
		binary(n);
	}
}

/**
 * binary - conpletes changing of num to binary of number is not 0 recursively
 * @n: base 10 number to be changed to base 2
**/

void binary(unsigned long int n)
{
	if (n == 0)
		return;

	print_binary((n >> 1));

	if ((n & 1) == 1)
		_putchar('1');

	if ((n & 1) == 0)
		_putchar('0');
}

