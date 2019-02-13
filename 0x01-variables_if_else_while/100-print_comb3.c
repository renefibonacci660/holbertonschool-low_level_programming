#include <stdio.h>

/**
 * main - Entry point of function
 * Description: prints 00 thru 99 with , and space
 * Return: Always zero
 */

int main(void)
{
int a;
int b;
int c;
int s;
int n;

a = '0';
b = '1';
c = ',';
s = ' ';
n = '\n';

while (a < '9')
{
	putchar(a);
	putchar(b);
	b = b + 1;

	if (b == ':')
	{
		a = a + 1;
		b = a + 1;
	}
	if (a != ':' && b != ':')
	{
		putchar(c);
		putchar(s);
	}
	}

putchar(n);
return (0);
}
