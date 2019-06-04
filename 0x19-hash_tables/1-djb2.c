#include "hash_tables.h"
/**
 * hash_djb2 - specific algorithm djb2 created by Dan Bernstein
 * uses hash function
 * @str: string to be "hashed"
 * Return: unsigned int representation of hashed string
**/

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
