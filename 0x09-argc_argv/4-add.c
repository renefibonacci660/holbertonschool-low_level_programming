#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
int isnum(char *argument);

/**
 * main - Adds all arguments together
 * @argc: number of parameters
 * @argv: an array containing the number of parameters passed to function
 * Return: 0 or 1 if not a digit
 */

int main(int argc, char **argv)
{
	int total;
	int count;

	total = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (count = 1; count < argc; count++)
	{

		if (isnum(argv[count]))
		{
			printf("Error\n");
			return (1);
		}
		total = total +  atoi(argv[count]);
	}
	printf("%d\n", total);
	return (0);
}

/**
 * isnum - checks if all are digits in arguement
 * @argument: argument string
 * Return: 0 if not letters 1 if letters
 */
int isnum(char *argument)
{
	int count;

	for (count = 0; argument[count]; count++)
	{
		if (argument[count] < '0' || argument[count] > '9')
		{
			return (1);
		}
	}
	return (0);
}
