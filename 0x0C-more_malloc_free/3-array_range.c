#include "main.h"
#include <stdlib.h>

/**
 * Array_range - .
 * @min: .
 * @max: .
 *
 * Return: Pointer to newly array, or func. fail - NULL.
 */

int *array_range(int min, int max)
{
	int *array, size, index;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = min++;

	return (array);
}
