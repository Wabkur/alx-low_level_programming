#include "main.h"

/**
 * set_bit - sets the value of bit to 1 at a index.
 * @n: Ptr of type unsigned long int.
 * @index: index of the bit to be modify
 * Return: 1 on success, -1 if not on success.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int set;

	if (index > 64)
	{
		return (-1);
	}

	set = 1 << index;
	*n = (*n | set);

	return (1);

}
