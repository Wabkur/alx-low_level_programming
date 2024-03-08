#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: double ponter to head
 * Return: no return
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *num = head;
	dlistint_t *set = head;

	while (num)
	{
		num = num->next;
		free(set);
		set = num;
	}
}
