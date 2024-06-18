#include "hash_tables.h"

/**
 * key_index - Creates an index of a key based on the size
 * @key: The key to index
 * @size: Size of the array of the HashTable
 *
 * Description: Uses the `hash_djb2` function/algorithm
 *
 * Return: The index of the bucket
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
