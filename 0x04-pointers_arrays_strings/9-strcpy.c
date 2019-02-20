#include "holberton.h"
/**
 * _strcpy - copies string to buffer
 * @dest: holds copy of string
 * @src: holds original string
 * Return: copy of string @dest
**/

char *_strcpy(char *dest, char *src)
{
	int len;

	for (len = 0; src[len]; len++)
		dest[len] = src[len];
	dest[len] = src[len];
	return (dest);
}
