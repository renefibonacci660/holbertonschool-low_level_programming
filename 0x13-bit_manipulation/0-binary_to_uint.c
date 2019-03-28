#include "holberton.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string of chars passed by 0-main.c
 * Return: 0 if b = NULL, 0 if any char passed is not 0 or 1
 * base 10 number of binary number passed
 **/

unsigned int binary_to_uint(const char *b)
{
	unsigned int length;
	unsigned int i;
	unsigned int j;
	unsigned int dec10 = 0;
	int binary = 2;
	unsigned int exponent = 1;

	if (b == NULL)
		return (0);

	for (length = 0; b[length] != '\0'; length++)
		;

	if (length == 1 && (b[0] == '0' || b[0] == '1'))
		return ((b[0] - '0'));

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		for (j = length - 1; j > 0; j--)
			exponent = exponent * binary;

		dec10 += (exponent * (b[i] - '0'));
		length--;
		exponent = 1;
	}
	return (dec10);
}
