#include "holberton.h"
/**
 * _islower - checks for lowercase char
 * Return: 1 if lowercase, 0 if otherwise
 * @c: holds value of assigned in 3-main
**/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	return (1);
	else
	return (0);
}
