#include "holberton.h"
/**
 * _strlen_recursion - returns length of string
 * @s: string assigned in 2-main.c
 * Return: length of string
**/

int _strlen_recursion(char *s)
{
	static int len;
	static int a;

	if (s[a] == '\0')
	{
		return (len);
	}
	len++;
	a++;
	_strlen_recursion(s);
	return (len);
}
