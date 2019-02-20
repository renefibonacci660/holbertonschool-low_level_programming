#include "holberton.h"
/**
 * puts_half - prints second half of string
 * @str: holds string assigned in 7-main.c
**/

void puts_half(char *str)
{
	int count = 0;
	int startp;

	for (; str[count] != '\0'; count++)
	{}
	if (count % 2 == 0)
	{
		startp = count / 2;
	}
	else
	{
		startp = (count + 1) / 2;
	}

	for (; str[startp] != '\0'; startp++)
	{
		_putchar(str[startp]);
	}
	_putchar('\n');
}
