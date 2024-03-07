#include "lists.h"

/**
 * print_dlistint - print element of dlistint_t
 * @h: pointer to node
 *
 * Return: number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}
	return (num);
}
