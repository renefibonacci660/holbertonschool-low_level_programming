#include <stdio.h>
/**
 * main - Entry point of function
 * Description: prints 0-9 then \n no var type int
 * Return: Always zero
 */

int main(void)
{
	char z;
	char n;

	z = 122;
	n = '\n';

	while (z >= 97)
	{
		putchar(z);
		z = z - 1;
	}
	putchar(n);
	return (0);
}
