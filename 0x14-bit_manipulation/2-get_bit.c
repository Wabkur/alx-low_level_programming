#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: bit
 * @index: index
 *
 * Return: ..
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	if ((index >> 1) & n)
		return (1);
}
