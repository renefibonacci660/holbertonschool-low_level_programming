#include "holberton.h"
/**
 * leet - encodes string into leet '1337'
 * @string: holds string assigned in 7-main.c
 * Return: returns string converted to leet
**/


char *leet(char *string)
{
	int replace;
	int letter;
	char new[] = "a4A4e3E3o0O0t7T7l1L1";


	for (replace = 0; string[replace]; replace++)
	{
		for (letter = 0; letter < 20; letter++)
		{
			if (string[replace] == new[letter])
				string[replace] = new[letter + 1];
			letter++;
		}
	}
	return (string);
}
