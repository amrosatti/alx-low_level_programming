#include "../search_algos.h"
#include <stdlib.h>

/**
 * main - Tests exponential search implementation
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int value;
	int array[] = {
		0, 1, 2, 3, 4, 7, 12, 15, 18, 19, 23, 54, 61, 62, 76, 99
			};
	size_t size = sizeof(array) / sizeof(array[0]);

	if (argc != 2)
	{
		printf("Usage: %s value\n", *argv);
		return (0);
	}

	value = atoi(argv[1]);
	printf("\nFound %d at index: %d\n", value, exponential_search(array, size, value));

	return (0);
}
