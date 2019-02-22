#include "holberton.h"
/**
 * rot13 - converts string to rot13
 * @string: holds string assigned in 8-main.c
 * Return: converted rot13 string
**/

char *rot13(char *string)
{
	int len1;
	int len2;

	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";


	for (len1 = 0; string[len1]; len1++)
	{
		for (len2 = 0; len2 <= 48; len2++)
		{
			if (string[len1] == alpha[len2])
			{
				string[len1] = rot[len2];
				break;
			}
		}
	}
	return (string);
}
