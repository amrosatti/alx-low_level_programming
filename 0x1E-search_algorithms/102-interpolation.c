#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array,
 *				using the Interpolation search algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: Number of elements in @array
 * @value: The value to search for
 *
 * Return: The first index where @value is located, -1 otherwise
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t lo, hi, pos;

	if (!array || !size)
		return (-1);

	lo = 0;
	hi = size - 1;

	while (lo <= hi)
	{
		pos = lo + (((double)(hi - lo) /
			(array[hi] - array[lo])) * (value - array[lo]));


		printf("Value checked array[%ld] ", pos);
		if (pos >= size)
		{
			printf("is out of range\n");
			break;
		}
		else
			printf("= [%d]\n", array[pos]);

		if (array[pos] < value)
			lo = pos + 1;
		else if (array[pos] > value)
			hi = pos - 1;
		else
			return ((int) pos);
	}

	return (-1);
}
