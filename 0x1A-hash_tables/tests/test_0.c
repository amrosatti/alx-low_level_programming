#include "../hash_tables.h"

/**
 * main - Tests `hash_table_create()` function
 * @argc: Number of arguments
 * @argv: Arguments array
 *
 * Return: 0 (on success)
 */
int main(int argc, char **argv)
{
	unsigned long int size;
	hash_table_t *ht = NULL;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s [size]\n", *argv);
		exit(EXIT_FAILURE);
	}

	size = atoi(*(argv + 1));
	ht = hash_table_create(size);
	
	printf("size of ht = %ld\n", ht->size);
	printf("address of ht array: %p\n", ht->array);

	free(ht->array);
	free(ht);
	exit(EXIT_SUCCESS);
}
