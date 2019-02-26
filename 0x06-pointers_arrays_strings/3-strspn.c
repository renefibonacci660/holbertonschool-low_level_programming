#include "holberton.h"
/**
 * _strspn - computes the string array index of the first character of s
 * which is not in charset else the index of the first null character
 * @s: initial string
 * @accept: prefix substring
 * Return: the array index of first null char or first char of s
**/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	unsigned int b = 0;
	unsigned int counter = 0;

	for (a = 0; accept[a]; a++)
	{
		for (b = 0; s[b]; b++)
		{
			if (accept[a] == s[b])
				counter++;
			/* stop counting if not char */
			/* have it only check for what is in accept since rn only limited with char */
			if (s[b + 1] < 65 || s[b + 1] > 90)
			{
				if (s[b + 1] < 97 || s[b + 1] > 122)
					break;
			}
		}
	}
	return (counter);
}
