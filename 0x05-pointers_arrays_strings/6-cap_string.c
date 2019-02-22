#include "holberton.h"
/**
 * cap_string - capitalizes the first letter of each word
 * @str: holds str assigned in 6-main.c
 * Return: formulated str
**/

char *cap_string(char *str)
{
	int l;

	for (l = 0; str[l]; l++)
	{
		if (str[0] <= 122 && str[0] >= 97)
			str[0] = str[0] - 32;

		if ((str[l] == ' ' || str[l] == '.' || str[l] == '\t' || str[l] == '\n')
			&& (str[l + 1] >= 97 && str[l + 1] <= 122))
			str[l + 1] = str[l + 1] - 32;

	}
	return (str);
}
