#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - calculates all possible combos of three digits without repeats
 * Return: 0
**/

int main(void)
{
	int first = '0';
	int second = '1';
	int third = '2';
	int c = ',';
	int s = ' ';
	int n = '\n';

	while (first < '8')
{
	putchar(first);
	putchar(second);
	putchar(third);
	third++;

	if (third > '9')
	{
		second = second + 1;
		third = second + 1;
	}
	if (second > '8')
	{
		first = first + 1;
		second = first + 1;
		third = second + 1;
	}
	if (second != ':' && third != ':')
	{
		putchar(c);
		putchar(s);
	}
	}

putchar(n);
return (0);
}
