#include "holberton.h"
/**
 * _isdigit - tells whether c is a digit
 * @c: value assigned in 0-main.c
 * Return: 1 if digit, 0 otherwise
**/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	return (1);
	else
	return (0);
}
