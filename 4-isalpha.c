#include "holberton.h"
/**
 * _isalpha - checks for lowercase char
 * Return: 1 if any letter, 0 if otherwise
 * @c: holds value of assigned in 4-main.c
**/

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	return (1);
	else
	return (0);
}
