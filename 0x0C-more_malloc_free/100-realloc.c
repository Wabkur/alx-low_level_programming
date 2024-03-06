#include "main.h"
#include <stdlib.h>

/**
 * _realloc - .
 * @ptr: .
 * @old_size: .
 * @new_size: .
 *
 * Return: pointer to reallocate memoryvblock.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *wab

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		wab = malloc(new_size);

		if (wab == NULL)
			return (NULL);

		return (wab);
	}
}
