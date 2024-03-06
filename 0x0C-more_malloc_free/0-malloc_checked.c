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
	void *kur;

	kur = malloc(w);

	if (kur == NULL)
		exit(98);

	return (kur);
}
