#include "holberton.h"
/**
 * string_toupper - changes all lowercase letters in string to upper
 * @string: holds string assigned in 5-main.c
 * Return: converted uppercase string
**/

char *string_toupper(char *string)
{
	int len;

	for (len = 0; string[len]; len++)
	{
		if (string[len] <= 122 && string[len] >= 97)
			string[len] = string[len] - 32;
	}

	return (string);
}
