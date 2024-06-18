#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht: HashTable
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	if (!ht)
		return;

	if (!ht->array)
	{
		free(ht);
		return;
	}

	for (i = 0; i < ht->size; i++)
		free_list(ht->array[i]);

	free(ht->array);
	free(ht);
}

/**
 * free_list - frees a linked list
 * @head: LinkedList
 */
void free_list(hash_node_t *head)
{
	if (!head)
		return;

	free_list(head->next);
	free(head->key);
	free(head->value);
	free(head);
}
