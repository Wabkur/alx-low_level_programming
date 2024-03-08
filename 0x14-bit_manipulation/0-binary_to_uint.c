#include "main.h"

/**
 * binary_to_uint - converts binary to an unsigned int.
 * @b: pointer to a string containing a binary number
 *
 * Return: unsigned int with decimal number or 0 if failed
 */
unsigned int binary_to_uint(const char *b)
{
	int w;
	unsigned int sum;

	sum = 0;
	if (!b)
		return (0);
	for (w = 0; b[w] != '\0'; w++)
	{
		if (b[w] != '0' && b[w] != '1')
			return (0);
	}
	for (w = 0; b[w] != '\0'; w++)
	{
		sum <<= 1;
		if (b[w] == '1')
			sum += 1;
	}
	return (sum);
}
