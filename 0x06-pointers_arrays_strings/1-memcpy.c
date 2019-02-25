#include "holberton.h"
/**
 * _memcpy - copies n bytes from memory area src to memory area dst
 * @dest: pointer to memory area we want to reassign
 * @src: pointer to memory area already holding values
 * @n: number of bytes assigned in 1-main.c
 * Return: completed memory assignment to dest
**/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];

	return (dest);
}
