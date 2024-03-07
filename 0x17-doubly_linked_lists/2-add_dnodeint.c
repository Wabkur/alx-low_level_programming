#include "lists.h"

/**
 * add_dnodeint -  adds a new node at the beginning
 * @head: The head node
 * @n: value of new node
 *
 * Return: Address of new element on success or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	new->prev = NULL;
	new->next = *head;
	new->n = n;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}
