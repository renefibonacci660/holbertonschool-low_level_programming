#include "holberton.h"
/**
 * _memset - fills byte string with byte value
 * @s:pointer to memory
 * @b:constant byte assigned in 0-main.c
 * @n:number of bytes of memory area
 * Return: reassigned memory area s
**/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;

	return (s);
}
