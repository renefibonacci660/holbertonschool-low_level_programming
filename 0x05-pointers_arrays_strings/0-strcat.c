#include "holberton.h"
/**
 * _strcat - concatenates two strings and adds null char
 * @dest: holds first string assigned in 0-main.c
 * @src: holds second string assigned in 0-main.c
 * Return: pointer to dest
**/

char *_strcat(char *dest, char *src)
{
	int len1;
	int len2;

	for (len1 = 0; dest[len1]; len1++)
	{}
	for (len2 = 0; src[len2]; len1++, len2++)
	{
		dest[len1] = dest[len1] + src[len2];
	}

	dest[len1] = src[len2]; /** adds null character **/

	return (dest);
}
