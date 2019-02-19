#include "holberton.h"
/**
 * print_rev - prints string in reverse
 * @s: holds string assigned in 4-main.c
**/

void print_rev(char *s)
{
	int rev;

	for (rev = 0; s[rev]; rev++)
	{}
	for (; s[rev - 1]; rev--)
	{
		_putchar(s[rev - 1]);
	}
	_putchar('\n');
}
