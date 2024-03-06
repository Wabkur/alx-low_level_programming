#include "main.h"
#include <stdlib.h>

/**
 * _calloc - .
 * @nmemb: .
 * @size: .
 *
 * Return: Pointer to allocated memory, or function fail - NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *wab;
	char *kur;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	wab = malloc(size * nmemb);

	if (wab == NULL)
		return (NULL);

	kur = wab;

	for (index = 0; index < (size * nmemb); index++)
		kur[index] = '\0';

	return (wab);
}
