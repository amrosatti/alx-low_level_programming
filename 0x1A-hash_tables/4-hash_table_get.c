#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key in a hash table
 * @ht: HashTable
 * @key: the key to look for
 *
 * Return: Value of the key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *cursor = NULL;

	if (!ht)
		return (NULL);
	if (!key || !strcmp(key, ""))
		return (NULL);

	idx = key_index((unsigned char *) key, ht->size);
	cursor = ht->array[idx];

	while (cursor && strcmp(cursor->key, key))
		cursor = cursor->next;

	if (!cursor)
		return (NULL);

	return (cursor->value);
}
