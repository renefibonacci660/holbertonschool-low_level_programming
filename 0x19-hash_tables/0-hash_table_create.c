#include "hash_tables.h"
/**
 * hash_table_create - Creates a hash table
 * @size: The size of the array in the hash table
 * Return: pointer to created hash table or NULL if size NULL
**/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *htable;

	if (!size)
		return (NULL);

	htable = calloc(1, sizeof(hash_table_t));
	htable->array = calloc(1, sizeof(hash_table_t));
	htable->size = size;

	if (!htable->array)
	{
		free(htable);
		return (NULL);
	}
	return (htable);
}
