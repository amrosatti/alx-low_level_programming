#include "../search_algos.h"
#include <stdlib.h>

/**
 * main - Tests interpolation search implementation
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int value;
	int array[] = {
		0, 0, 1, 2, 2, 2, 2, 3, 3, 4, 4, 5, 6, 6, 7, 8, 8, 8, 9, 9
			};
	size_t size = sizeof(array) / sizeof(array[0]);

	if (argc != 2)
	{
		printf("Usage: %s value\n", *argv);
		return (0);
	}

	value = atoi(argv[1]);
	printf("\nFound %d at index: %d\n", value, interpolation_search(array, size, value));

	return (0);
}
