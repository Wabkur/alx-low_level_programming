#include "lists.h"

/**
 * add_dnodient_end - Add new node at the end of doubly linked list 
 * @head: Double pointer to head of the list
 * @n: value new node
 *
 * Return: new node ptr on success or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *tmp = *head;

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

	while (tmp->next != NULL)
		tmp = tmp->next;

	new->prev = tmp;
	tmp->next = new;

	return (new);
}
