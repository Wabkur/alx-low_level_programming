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
	void *sen;

	sen = malloc(w);

	if (sen == NULL)
		exit(98);

	return (sen);
}
