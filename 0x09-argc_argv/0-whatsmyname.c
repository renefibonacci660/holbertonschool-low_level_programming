#include "holberton.h"
#include <stdio.h>
/**
 * main - prints the name of it's function without needing to be recompiled
 * if name is modified
 * @argc: number of parameters
 * @argv: an array containing the number of parameters passed to function
 * Return: Always zero
**/

int main(__attribute__((unused))int argc, char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
