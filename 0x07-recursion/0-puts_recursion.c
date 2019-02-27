#include "holberton.h"
/**
 * _puts_recursion - prints string using recursion
 * @s: string assigned in 0-main.c
 * Return: when end of string is reached
**/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
