#include "main.h"

/**
 * clear_bit - sets the value of  bit to 0 at a index
 * @n: Ptr of an unsigned long int
 * @index: The index of bit
 *
 * Return: 1 if success, -1 if not success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int w;

	if (index > 63)
		return (-1);

	w = 1 << index;

	if (*n & w)
		*n ^= w;

	return (1);
}
