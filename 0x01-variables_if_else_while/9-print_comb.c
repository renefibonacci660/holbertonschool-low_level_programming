#include <stdio.h>

/**
 * main - Entry point of function
 * Description: prints 0-9 followed by , space
 * Return: Always zero
 */

int main(void)
{
int a;
int c;
int s;
int n;

a = '0';
c = ',';
s = ' ';
n = '\n';

while (a <= '9')
{
	putchar(a);
	a = a + 1;

	if (a <= '9')
	{
		putchar(c);
		putchar(s);
	}
}

putchar(n);
return (0);
}
