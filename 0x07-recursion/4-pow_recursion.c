#include "holberton.h"
/**
 * _pow_recursion - calculates x to power of y
 * @x:first value
 * @y:second value to represent power
 * Return: calculated value of x to the power of y
**/

int _pow_recursion(int x, int y)
{
		if (y == 0)
			return (1);
		if (y < 0)
			return (-1);

	return (x * _pow_recursion(x, y - 1));
}
