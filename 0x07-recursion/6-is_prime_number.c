#include "holberton.h"
int divideforprime(int n, int check);
/**
 * is_prime_number - checking if a number is prime
 * @n: number we are checking if prime
 * Return:1 if prime, 0 otherwise
**/

int is_prime_number(int n)
{
	int check;

	check = 2;
	check = divideforprime(n, check);
	return (check);
}


/**
 * divideforprime - Checks if n is prime
 * @n: number we are checking if prime
 * @check: incrementor we are using to check if n is prime
 * Return: 1 if prime 0 otherwise
 */
int divideforprime(int n, int check)
{
	if (n == check)
		return (1);

	if (n <= 1 || n % check == 0)
		return (0);

	return (divideforprime(n, check + 1));
}
