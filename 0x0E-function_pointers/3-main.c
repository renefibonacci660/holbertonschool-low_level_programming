#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Pointer to an array containing the parameters
 * Return: Always zero
 */
int main(int argc, char **argv)
{
	int a;
	int b;
	char *sm;
	int (*input)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	sm = argv[2];


	if (*sm != '+' && *sm != '-' && *sm != '*' && *sm != '/' && *sm != '%')
	{
		printf("Error\n");
		exit(99);
	}

	input = get_op_func(sm);
	if (input == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", input(a, b));
	return (0);
}
