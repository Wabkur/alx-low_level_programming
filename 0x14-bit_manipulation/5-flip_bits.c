#include "main.h"

/**
 * flip_bits - count the number of bits you need to flip to get from 1
 * @n: 1st num to compare
 * @m: 2nd num to compare
 * Return: The number of bits you to flip
 **/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int set;
	unsigned long int num;

	set = 0;

	num = n ^ m;

	while (num != 0)
	{
		set += num & 1;
		num = num >> 1;
	}
	return (set);
}
