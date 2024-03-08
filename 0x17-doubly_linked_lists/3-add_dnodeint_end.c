#include "lists.h"

/**
 * add_dnodient_end - Add new node at the end
 * @head: Head of list
 * @n: Value of element
 * Return: The address of new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *node = *head;

	if (!new)
		return (NULL);

	new->next = NULL;
	new->n = n;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	while (node->next != NULL)
		node = node->next;

	new->prev = node;
	node->next = new;

	return (new);
}
