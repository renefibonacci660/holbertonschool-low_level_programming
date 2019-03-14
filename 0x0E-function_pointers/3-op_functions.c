#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - adds two numbers
 * @a: first number
 * @b: second number
 * Return: sum of numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - subtracts second number from first
 * @a: first number
 * @b: second number
 * Return: completed subtraction
**/
int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - multiplies two numbers
 * @a: first number
 * @b: second number
 * Return: multiplied numbers
**/
int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - divides first number by second number
 * @a: first number
 * @b: second number
 * Return: 100 if divisor is 0, completed division if divisor > 0
**/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}


/**
 * op_mod - provides remainder of a % b
 * @a: first number
 * @b: second number
 * Return: 100 if second number is 0, or remainder of a % b if b > 0
**/
int op_mod(int a, int b)
{
		if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
