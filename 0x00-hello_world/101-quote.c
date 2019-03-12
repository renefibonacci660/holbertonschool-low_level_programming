#include <unistd.h>
/**
 * main - prints string
 * Return: 1 always
 */
int main(void)
{
	char *a;

	a = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, a, 59);
	return (1);
}
