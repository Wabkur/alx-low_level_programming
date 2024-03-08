#include "main.h"

/**
 * get_bit - Get value of a bit at a given index
 * @n: number.
 * @index: index with binary number of n
 * Return: Bit 0 or 1, or -1 if failed
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int num;

	if (index > 64)
	{
		return (-1);
	}
	num = ((n >> index) & 1);

	return (num);
}
