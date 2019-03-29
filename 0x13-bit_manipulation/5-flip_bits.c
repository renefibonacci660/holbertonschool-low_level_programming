#include "holberton.h"
/**
 * flip_bits - Returns the number of bits you would need to flip to get from
 * one number to another
 * @n: first num passed by 5-main.c
 * @m: second num passed by 5-main.c
 * Return: number of bits needed to complete flipping
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int answer;
	unsigned long int counter;

	answer = n ^ m;

	for (counter = 0; answer > 0;)
	{
		if ((answer & 1) == 1)
			counter++;

		answer = answer >> 1;
	}

	return (counter);
}
