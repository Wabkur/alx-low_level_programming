#include "main.h"

/**
 * Print_binary - print binary representation of number
 * @n: unsigned long int
 *
 * Return: no return
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}

