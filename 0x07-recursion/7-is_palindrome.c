#include "holberton.h"
int string_length(char *str, int length);
int checkif(char *s, int length, int count, int mid);

/**
 * is_palindrome - Checks if string is a palindrome
 * @s: string assigned in 7-main.c
 * Return: 1 if palindrome 0 otherwise
 */
int is_palindrome(char *s)
{
	int length;
	int count;
	int mid;

	if (*s == '\0')
		return (1);
	length = 0;
	count = 0;

	length = string_length(s, length);
	mid = length / 2;
	length = checkif(s, length, count, mid);
	return (length);
}

/**
 * checkif - Checks if string is a palindrome
 * @s: string assigned in 7-main.c
 * @length: length of string
 * @count: count of element of string
 * @mid: holds half length
 * Return: 1 if palindrome 0 otherwise
 */
int checkif(char *s, int length, int count, int mid)
{

	if (s[count] != s[length - 1])
		return (0);
	if (count == mid)
		return (1);
	count++;
	length--;
	return (checkif(s, length, count, mid));
}
/**
 * string_length - Counts length of string
 * @str: string assigned in 7-main.c
 * @length: length of string
 * Return: calculated length of string
 */
int string_length(char *str, int length)
{
	if (*str == '\0')
		return (length);
	str++;
	length++;
	return (string_length(str, length));
}
