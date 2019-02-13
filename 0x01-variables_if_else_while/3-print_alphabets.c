#include <stdio.h>
/**
 * main - Entry point of function
 * Description: prints a - z lower then upper with \n
 * Return: Always zero
 */

int main(void)
{
char a;
char b;
char n;

a = 97;
b = 65;
n = '\n';

for (a = 97 ; a <= 122; a++)
{
	putchar(a);
}

for (b = 65 ; b <= 90 ; b++)
{
	putchar(b);
}
	putchar(n);
	return (0);
}
