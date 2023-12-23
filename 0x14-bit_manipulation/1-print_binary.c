#include "main.h"

/**
 * Print_binary - print the binary representation of a number
 * @n: unsigned long int.
 *
 * Return: nothing  
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}

