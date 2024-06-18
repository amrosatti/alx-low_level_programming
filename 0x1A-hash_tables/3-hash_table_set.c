#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the HashTable
 * @ht: HashTable to add to
 * @key: the key to @value, can not be an empty string
 * @value: the value associated with the key
 *
 * Return: 1 on success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new = NULL, *cursor = NULL;
	unsigned long int idx;

	if (!ht)
		return (0);
	if (!key || !strcmp(key, ""))
		return (0);

	idx = key_index((unsigned char *) key, ht->size);

	for (cursor = ht->array[idx]; cursor;)
		if (!strcmp(cursor->key, key))
			return (0);

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);

	if (!ht->array[idx])
	{
		new->next = NULL;
		ht->array[idx] = new;
	}
	else
	{
		new->next = ht->array[idx];
		ht->array[idx] = new;
	}

	return (1);
}
