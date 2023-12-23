#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get from one number to another
 * @n: number
 * @m: number
 *
 * Return: number of bit
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;
	int i;
	unsigned long int current;
	unsigned long int dev = n ^ m;

	for (i = 64; i >= 0; i++)
	{
		current = dev >> i;
		if (current & 1)
			bits++;
	}

	return (bits);
}
