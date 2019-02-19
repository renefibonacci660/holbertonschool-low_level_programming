#include "holberton.h"
/**
 * rev_string - reverses string
 * @s: stores string assigned in 5-main.c
**/

void rev_string(char *s)
{
	int temp = 1;
	char reverse;
	int beginning = 0;

	for (; s[temp]; temp++)
	{}

	for (; beginning < temp; temp--, beginning++)
	{
		reverse = s[temp - 1];
		s[temp - 1] = s[beginning];
		s[beginning] = reverse;
	}
}
