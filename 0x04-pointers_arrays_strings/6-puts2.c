#include "holberton.h"
/**
 * puts2 - prints every even of string
 * @str: stores string assigned in 6-main.c
**/

void puts2(char *str)
{
	int len;

	for (len = 0; str[len]; len++)
	{
		if (len % 2 == 0)
		{
			_putchar(str[len]);
		}
	}
	_putchar('\n');
}
