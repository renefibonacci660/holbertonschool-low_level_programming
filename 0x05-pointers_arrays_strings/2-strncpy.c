#include "holberton.h"
/**
 * _strncpy - copies string
 * @dest: holds final string
 * @src: holds string assigned in 2-main.c
 * @n: pointer
 * Return: dest
**/

char *_strncpy(char *dest, char *src, int n)
{
	int len;

	for (len = 0; len < n && src[len]; len++)
	{
		dest[len] = src[len];
	}

	for (; len < n; len++)
		dest[len] = '\0';

	return (dest);
}
