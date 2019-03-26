#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - calculates all possible combos two digit numbers without repeats
 * Return: 0
**/
int main(void)
{
	int first;
	int second;

	for (first = 0; first < 99; first++)
	{
		for (second = first + 1; second <= 99; second++)
		{
			if (first < second)
			{
				putchar (first / 10 + 48);
				putchar (first % 10 + 48);
				putchar (' ');
				putchar (second / 10 + 48);
				putchar (second % 10 + 48);

				if (first != 98)
				{
					putchar (',');
					putchar (' ');
				}

			}
		}
	}
	putchar('\n');
	return (0);
}
