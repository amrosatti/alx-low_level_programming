#include "../search_algos.h"
#include <stdlib.h>

/**
 * main - Tests linear search implementation
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int value;
	int array[] = {
		10, 1, 42, 3, 4, 42, 6, 7, -1, 9
	};
	size_t size = sizeof(array) / sizeof(array[0]);

	if (argc != 2)
	{
		printf("Usage: %s value\n", *argv);
		return (0);
	}

	value = atoi(argv[1]);
	printf("\nFound %d at index: %d\n", value, linear_search(array, size, value));

	return (0);
}
