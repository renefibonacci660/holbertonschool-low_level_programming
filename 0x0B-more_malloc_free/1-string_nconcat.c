#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings, second string only to n or less
 * @s1: first string assigned in 1-main.c
 * @s2: second string assigned in 1-main.c
 * @n: num of char to be included from second string or less if string is less
 * Return: concatenated strings or NULL if both strings NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1;
	unsigned int len2;
	char *p;
	unsigned int element;
	unsigned int count;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1]; len1++)
	{}

	for (len2 = 0; len2 < n; len2++)
	{}
	if (len2 >= n)

	p = malloc((len1 + len2) * sizeof(char) + 1);

	if (p == NULL)
		return (NULL);

	for (element = 0; element < len1; element++)
		p[element] = s1[element];

	for (count = 0; element < (len1 + len2); element++, count++)
		p[element] = s2[count];

	p[element] = '\0';

	return (p);
}
