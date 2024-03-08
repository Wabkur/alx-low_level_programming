#include "lists.h"

/**
 * sum_dlistint - Return the num of all data
 * @head: head of list
 * Return: num of data
 */
int sum_dlistint(dlistint_t *head)
{
	int num = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			num += head->n;
			head = head->next;
		}
	}
	return (num);
}
