#include "search_algos.h"

/**
 * binary_search - Searches for a value in @array using Binary search algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in @array
 * @value: The value to search for
 *
 * Return: The index where @value is located, -1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	int m, l = 0, r = (int) size - 1;

	if (!array || !size)
		return (-1);

	while (l <= r)
	{
		print_array(array, l, r);

		m = (l + r) / 2;

		if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			r = m - 1;
		else
			return (m);
	}

	return (-1);
}

/**
 * print_array - Prints an array
 * @array: Array to print
 * @l: First index
 * @r: Last index
 */
void print_array(int *array, int l, int r)
{
	int i = l;

	printf("Searching in array: ");

	if (i == r)
	{
		printf("%d\n", array[i]);
		return;
	}

	while (i <= r)
	{
		printf("%d", array[i++]);

		if (i <= r)
			printf(", ");
	}

	printf("\n");
}
