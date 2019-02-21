#include "holberton.h"
/**
 * _strncat - concatenates two strings but it will use
 * at most n bytes from second string
 * @dest: first string assigned in 1-main.c
 * @src: second string assigned in 1-main.c
 * @n: holds number of bytes taken from second string
 * Return: string dest
**/

char *_strncat(char *dest, char *src, int n)
{
	int len1;
	int len2;

	for (len1 = 0; dest[len1]; len1++)
	{}
	for (len2 = 0; len2 + 1 < n && src[len2]; len1++, len2++)
	{
		dest[len1] = dest[len1] + src[len2];
	}

	dest[len1] = src[len2]; /** adds null character **/

	return (dest);
}
