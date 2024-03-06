#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - .
 * @b: .
 *
 * Return: Pointer memory
 */
void *malloc_checked(unsigned int w)
{
	void *ptr;

	ptr = malloc(w);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
