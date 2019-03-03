#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers that are passed to it
 * @argc: number of parameters
 * @argv: an array containing the number of parameters passed to function
 * Return: Aways zero
 */
int main(int argc, __attribute__((unused))char **argv)
{
	int answer;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	answer = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", answer);
	return (0);
}
