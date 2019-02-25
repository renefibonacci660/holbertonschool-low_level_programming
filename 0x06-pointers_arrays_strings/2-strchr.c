#include "holberton.h"
/**
 * _strchr - function locates the first occurrence of c in the string
 * @s:pointer to string assigned in 2-main.c
 * @c: character 'l' we are checking for in string
 * Return: string from c on or null if c not present
**/

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (c == '\0')
		return (s);

	return (0);
}
