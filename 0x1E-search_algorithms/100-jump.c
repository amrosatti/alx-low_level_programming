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
	int jump, low;
	char *msg = "Value checked array[%d] = [%d]\n";

	if (!array || !size)
		return (-1);

	low = jump = 0;

	while (array[jump] < value)
	{
		printf(msg, jump, array[jump]);

		low = jump;
		jump += sqrt(size);

		if (jump >= (int) size)
			break;
	}

	printf("Value found between indexes [%d] and [%d]\n", low, jump);

	while (array[low] <= value && low < (int) size)
	{
		printf(msg, low, array[low]);

		if (array[low] == value)
			return (low);

		low++;
		if (low > jump)
			return (-1);
	}

	return (-1);
}
