#include "main.h"

/**
 * get_bit - .
 * @n: .
 * @index: .
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
