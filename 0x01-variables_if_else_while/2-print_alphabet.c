#include <stdio.h>
/**
 * main - Entry point of function
 * Description: prints a - z then newline
 * Return: Always zero
 */

int main(void)
{
	char a;
	char n;

	n = '\n';

	for (a = 'a' ; a <= 'z'; a++)

	putchar(a);
	putchar(n);
	return (0);
}
