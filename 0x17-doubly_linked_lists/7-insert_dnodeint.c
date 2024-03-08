#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts new node at index
 * @h: A pointer to head of dlistint_t list
 * @idx: The position to insert node
 * @n: The integer for node to contain
 * Return: If func. fails - NULL, the address of node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *node;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}

	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->prev = temp;
	node->next = temp->next;
	temp->next->prev = node;
	temp->next = node;

	return (node);
}
