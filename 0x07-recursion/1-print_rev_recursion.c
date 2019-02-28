#include "holberton.h"
char *reverse(char *s);

/**
 * _print_rev_recursion - prints reversed string
 * @s: string assigned in 1-main.c
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	if (s[0] == '\n')
		s = reverse(s);
	if (*(s - 1) == '\n')
	{
		_putchar(*s);
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s--;
	_print_rev_recursion(s);
}

/**
 * reverse - reverses string
 * @s: string assigned in 1-main.c
 * Return: pointer to assigned string
*/
char *reverse(char *s)
{
	s++;
	if (*(s + 1) == '\0')
		return (s);
	return (reverse(s));
}
