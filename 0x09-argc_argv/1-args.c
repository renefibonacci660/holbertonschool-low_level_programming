#include "holberton.h"
#include <stdio.h>
/**
 * main - Prints the number of arguements passed to it
 * @argc: number of parameters
 * @argv: an array containing the number of parameters passed to function
 * Return: Always zero
**/

int main(int argc, __attribute__((unused)) char **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
