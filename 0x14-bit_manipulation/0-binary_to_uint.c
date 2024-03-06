#include "main.h"

/**
 * binary_to_unit - .
 * @b: .
 *
 * Return: convert no.
 */
unsigned int binary_to_unit(const char *b)
{
	int i;
	unsigned int w;

	w = 0;
	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		w = 2 * w + (b[i] - '0');
	}
	return (w);
}
