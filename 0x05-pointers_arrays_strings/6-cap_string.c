#include "holberton.h"
/**
 * cap_string - capitalizes the first letter of each word
 * @string: holds string assigned in 6-main.c
 * Return: formulated string
**/

char *cap_string(char *string)
{
	int len;

	for (len = 0; string[len]; len++)
	{
		if (string[0] <= 122 && string[0] >= 97)
			string[0] = string[0] - 32; /** this is for first letter of each word **/


		if (string[len - 1] == ' ' && (string[len] >= 97 && string[len] <= 122))
			string[len] = string[len] - 32;
		if (string[len] == '.' && (string[len + 1] >= 97 && string[len + 1] <= 122))
			string[len + 1] = string[len + 1] - 32;
		if (string[len] == '\t' && (string[len + 1] >= 97 && string[len + 1] <= 122))
			string[len + 1] = string[len + 1] - 32;
		if (string[len] == '\n' && (string[len + 1] >= 97 && string[len + 1] <= 122))
			string[len + 1] = string[len + 1] - 32;
	}
	return (string);
}
