#include "search_algos.h"

/**
 * jump_search - Searches for @value in @array using Jump search algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in @array
 * @value: The value to search for
 *
 * Return: The first index where @value is located, -1 otherwise
 */
int jump_search(int *array, size_t size, int value)
{
	int jump, low, idx;
	char *msg = "Value checked array[%d] = [%d]\n";

	if (!array || !size)
		return (-1);

	jump = sqrt(size);
	low = 0;

	while (array[min_t(jump, (int) size) - 1] < value)
	{
		idx = min_t(jump, (int) size) - 1;
		printf(msg, low, array[low]);
		printf(msg, idx, array[idx]);

		low = jump;
		jump += sqrt(size);

		if (low >= (int) size)
			return (-1);
	}

	idx = min_t(jump, (int) size);
	printf("Value found between indexes [%d] and [%d]\n", low, idx);

	while (array[low] < value)
	{
		printf(msg, low, array[low]);

		low++;
		if (low == min_t(jump, (int) size))
			return (-1);
	}

	if (array[low] == value)
		return (low);

	return (-1);
}

/**
 * min_t - Determines the minimum value
 * @a: ...
 * @b: ...
 *
 * Return: The minimum value
 */
int min_t(int a, int b)
{
	return (a < b ? a : b);
}
