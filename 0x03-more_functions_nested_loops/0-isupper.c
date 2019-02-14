#include "holberton.h"
/**
 * _isupper - tells whether character is uppercase
 * @c: holds the character assigned in 0-main.c
 * Return: 1 if uppercase letter, 0 otherwise
**/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	return (1);
	else
	return (0);
}
