#include "lists.h"

/**
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
