#include "holberton.h"
/**
 * 
**/

void _print_rev_recursion(char *s)
{
	int a;

	if (*s == '\0')
		return;

	if (s[0] == '\n')
	{
		while (s[a] + 1 != '\0')
		a++;
	}
	else if (*(s - 1) == '\n')
	{
		_putchar(*s);
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s--;
	_print_rev_recursion(s);
}
