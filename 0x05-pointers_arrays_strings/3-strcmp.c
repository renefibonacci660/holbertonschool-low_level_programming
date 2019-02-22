#include "holberton.h"
/**
 * _strcmp - compares two strings
 * @s1: first string assigned in 3-main.c
 * @s2: second string assigned in 3-main.c
 * Return: difference between strings
**/

int _strcmp(char *s1, char *s2)
{
	int len = 0;

	while (s1[len])
	{
		if (s1[len] != s2[len])
		return (s1[len] - s2[len]);
		len++;
	}
	return (0);
}
