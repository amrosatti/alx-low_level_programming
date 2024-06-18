#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index
 * @n: Number to look in
 * @index: Index of the bit
 *
 * Return: The value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >> 6)
		return (-1);

	return ((n >> index) & 1);
}
