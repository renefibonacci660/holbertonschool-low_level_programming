#include "holberton.h"
/**
 * _strpbrk -locates in the null-terminated string s the first
 * occurrence of any character in the string charset and
 * returns a pointer to this character.
 * @s: string assigned in 4-main.c
 * @accept: set of characters searched for in s
 * Return: first char found in s that match accept
**/

char *_strpbrk(char *s, char *accept)
{
	unsigned int a;

	for (; *s; s++)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
				return (s);
		}
	}
	return (0);
}
