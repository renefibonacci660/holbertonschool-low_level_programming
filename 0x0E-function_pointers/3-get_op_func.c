#include "3-calc.h"
#include <stdio.h>
#include <string.h>

/**
 * get_op_func - finds the requested operation from input
 * @s: string char representing the operation requested
 * Return: A pointer to correct operation function in 3-op_functions.c
 */
int (*get_op_func(char *s))(int a, int b)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	i = 0;
	while (ops[i].op != NULL)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
