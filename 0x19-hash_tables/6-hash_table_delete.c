#include "hash_tables.h"
/**
 * hash_table_delete - deletes the hash table
 * @ht: pointer to created hash table
 **/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *index;
	hash_node_t *temp;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		index = ht->array[i];
		while (index)
		{
			temp = index->next;
			free(index->key);
			free(index->value);
			free(index);
			index = temp;
		}
	}
	free(ht->array);
	free(ht);
}
