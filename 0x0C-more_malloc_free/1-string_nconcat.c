#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - .
 * @1: .
 * @2: .
 * @n: .
 *
 * Return: if function fails - NULL
 */

char *string_nconcat(char *b1, char *b2, unsigned int w)
{
	char *concat;
	unsigned int len = w, index;

	if (b1 == NULL)
		b1 = "";

	if (b2 == NULL)
		b2 = "";

	for (index = 0; b1[index]; index++)
		len++;

	concat = malloc(sizeof(char) * (len + 1));

	if (concat == NULL)
		return (NULL);

	len = 0;

	for (index = 0; b1[index]; index++)
		concat[len++] = b1[index];

	for (index = 0; b2[index] && index < w; index++)
		concat[len++] = b2[index];

	concat[len] = '\0';

	return (concat);
}
