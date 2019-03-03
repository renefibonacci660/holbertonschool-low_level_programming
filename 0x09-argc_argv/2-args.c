#include <stdio.h>
/**
 * main - Prints all the arguments passed to it, one per line
 * @argc: number of parameters
 * @argv: an array containing the number of parameters passed to function
 * Return: Aways zero
 */
int main(__attribute__((unused))int argc, char **argv)
{
	int arguments;

	for (arguments = 0; argv[arguments]; arguments++)
	{
		printf("%s\n", argv[arguments]);
	}
	return (0);
}
