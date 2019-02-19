#include "holberton.h"
/**
 * _puts - prints string
 * @str: holds string assigned in 3-main.c
**/

void _puts(char *str)
{
	int a;

	for (a = 0; str[a]; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
