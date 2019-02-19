#include "holberton.h"
/**
 * _strlen - returns length of string provided
 * @s: holds string assigned in 2-main.c
 * Return: length of string to 2-main.c
**/

int _strlen(char *s)
{
	int len = 0;

	for (; s[len]; len++)
	{}
	return (len);
}
