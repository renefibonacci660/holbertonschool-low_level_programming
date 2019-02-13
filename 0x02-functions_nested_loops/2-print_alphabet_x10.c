#include "holberton.h"

/**
 * print_alphabet_x10 - print the a-x x's 10 then \n
**/

void print_alphabet_x10(void)
{
	int times = 0;
	char alpha = 'a';

	while (alpha <= 'z' && times <= 9)
	{
		_putchar(alpha);
		alpha++;

		if (alpha == '{')
		{
			alpha = 'a';
			times++;
			_putchar('\n');
		}
	}
}
