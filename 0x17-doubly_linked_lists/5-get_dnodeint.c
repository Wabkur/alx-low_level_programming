#include "lists.h"

/**
 * get_dnodeint_at_index - return the new of doubly linked list
 * @head: Pointer to head new
 * @index: New indexto returned
 *
 * Return: new on success
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int num;
	dlistint_t *new = head;

	for (num = 0; new && num < index; num++)
		new = new->next;

	if (num != index)
		return (NULL);
	return (new;)
}
