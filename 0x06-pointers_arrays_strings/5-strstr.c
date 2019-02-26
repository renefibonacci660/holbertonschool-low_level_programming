#include "holberton.h"
int _strcmp(char *fs, char *ss);
/**
 * _strstr - locates a substring
 * @haystack: assigned string to look into
 * @needle: assigned string to locate
 * Return: Pointer to the beginning of substring, NULL if substring not found
 */

char *_strstr(char *haystack, char *needle)
{
	if (haystack == 0 || needle == 0)
		return (0);
	if (*needle == '\0')
		return (haystack);
	while (*haystack)
	{
		if (*haystack == needle[0])
		{
			if (_strcmp(haystack, needle))
			{
				return (haystack);
			}
		}
		haystack++;
	}
	return (0);
}
/**
 * _strcmp - compares string and substring
 * @fs: first string
 * @ss: substring
 * Return: returns a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
int _strcmp(char *fs, char *ss)
{
	int a;
	int length;

	for (length = 0; ss[length]; length++)
	{}

	for (a = 0; a < length; a++)
	{
		if (fs[a] != ss[a])
			return (0);
	}

	return (1);
}
