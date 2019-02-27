#include "holberton.h"
int findroot(int n, int root);
/**
 * _sqrt_recursion - finds if perfect sqrt of n
 * @n: number assigned in 5-main.c
 * Return: perfect sqrt of n or -1 if not perfect
**/
int _sqrt_recursion(int n)
{
	int root = 0;

	root = findroot(n, root);
	return (root);
}

/**
 * findroot - finds root value
 * @n: stores number we are trying to find root of
 * @root: incrementing to find perfect root
 * Return: -1 if not perfect root of n, root if perfect, 0 if n is 0
**/

int findroot(int n, int root)
{
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	if (n < 0)
		return (-1);
	if (root * root == n)
		return (root);
	if (root * root > n)
		return (-1);
	root++;
	return (findroot(n, root));
}
