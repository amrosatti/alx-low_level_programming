#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: HashTable
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, flag = 0;
	hash_node_t *cursor = NULL;

	if (!ht || !ht->array)
		return;


	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		cursor = ht->array[i];

		while (cursor)
		{
			if (flag)
				printf(", ");

			printf("'%s': '%s'", cursor->key, cursor->value);
			flag = 1;
			cursor = cursor->next;
		}
	}
	printf("}\n");
}
