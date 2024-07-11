#include "hash_tables.h"

/**
 * key_index - calculate index of a key 
 * @key: key to evaluate
 * @size: size of the table
 *
 * Return: index of key in table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
