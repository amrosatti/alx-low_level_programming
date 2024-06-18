#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: the size of the array
 *
 * Return: a pointer to the created hash table, or NULL (on failure)
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = malloc(sizeof(hash_table_t));
	unsigned long int i;

	if (!ht)
		return (NULL);

	ht->size = size;
	ht->array = malloc(size * sizeof(hash_node_t *));
	if (!ht->array)
	{
		free(ht);
		return (NULL);
	}

	for (i = 0; i < ht->size; i++)
		ht->array[i] = NULL;

	return (ht);
}
