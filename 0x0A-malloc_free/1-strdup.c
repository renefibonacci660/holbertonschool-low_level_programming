#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - Duplicates a string using malloc
 * @str: String to be duplicated
 * Return: NULL if not enough space in memory otherwise a pointer
 * to the beginning of the array
 */

char *_strdup(char *str)
{
	int length;
	int counter;
	char *p;

	if (str == NULL)
		return (NULL);
	for (length = 0; str[length] != '\0'; length++)
	{}
	p = malloc(length + 1);
	if (p == NULL)
		return (NULL);
	for (counter = 0; counter < length ; counter++)
	{
		p[counter] = str[counter];
	}
	p[counter] = '\0';
	return (p);
}
