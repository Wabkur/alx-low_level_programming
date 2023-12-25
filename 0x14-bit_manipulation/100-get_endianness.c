#include "main.h"

/**
 * get_endianness - function that check the enddianness
 *
 * Return: 0 or 1
 */

int get_endianness(void)
{
	int x = 1;
	char *y;

	y = (char *)&x;

	return ((int)*y);

}
