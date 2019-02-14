#include "holberton.h"
/**
 * more_numbers - prints 10xs 0-14
**/

void more_numbers(void)
{
	char num = 0;
	char times = 0;

	while (times <= 9)
	{
		if (num / 10 >= 1)
		_putchar('0' + num / 10);

		_putchar('0' + num % 10);
		num++;

		if (num == 15)
		{
			num = 0;
			times++;
			_putchar('\n');
		}
	}
}
