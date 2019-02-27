#include "holberton.h"
int length(char *s, int len);
/**
 * _strlen_recursion - returns length of string
 * @s: string assigned in 2-main.c
 * Return: length of string
**/

int _strlen_recursion(char *s)
{
	int len = 0;

	len = length(s, len);
	return (len);
}


/**
 * length - gets length of string
 * @s: holds string assigned in 2-main.c
 * @len: holds value of length of string
 * Return: len
**/

int length(char *s, int len)
{
	if (*s == '\0')
	{
		return (len);
	}
	s++;
	len++;
	return (length(s, len));
}
