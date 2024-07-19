#include "search_algos.h"

/**
 * exponential_search - Searches for a value in a sorted array,
 *				using the Exponential search algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: Number of elements in @array
 * @value: The value to search for
 *
 * Return: The first index where @value is located, -1 otherwise
 */
int exponential_search(int *array, size_t size, int value)
{
	int range = 1;

	if (!array || !size)
		return (-1);

	while (range < (int) size && array[range] < value)
	{
		printf("Value checked array[%d] = [%d]\n",
				range, array[range]);
		range *= 2;
	}

	size--;

	return (bi_search(array, value, range / 2,
			(range < (int) size) ? range : (int) size));
}

/**
 * bi_search - Searches for a value in a sorted array
 *			using Binary search algorithm
 * @array: A pointer to the first element of the array to search in
 * @value: The value to search for
 * @lo: Lowest index
 * @hi: Highest index
 *
 * Return: The index where @value is located, -1 otherwise
 */
int bi_search(int *array, int value, int lo, int hi)
{
	int m;

	printf("Value found between indexes [%d] and [%d]\n", lo, hi);

	while (lo <= hi)
	{
		print_array(array, lo, hi);

		m = (lo + hi) / 2;

		if (array[m] < value)
			lo = m + 1;
		else if (array[m] > value)
			hi = m - 1;
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
