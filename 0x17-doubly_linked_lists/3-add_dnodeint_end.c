#include "lists.h"

/**
 * add_dnodeint_end - Add a new node at end of doubly_linked_list
 * @head: Double pointer to the head
 * @n: Value of a new node
 * Return: New node ptr on success or NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *head;

	if (!node)
		return (NULL);

	node->next = NULL;
	node->n = n;
	if (*head == NULL)
	{
		node->prev = NULL;
		*head = node;
		return (node);
	}

	while (temp->next != NULL)
		temp = temp->next;

	node->prev = temp;
	temp->next = node;

	return (node);
}
