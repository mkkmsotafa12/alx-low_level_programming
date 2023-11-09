#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list
 * @head: head of file
 * Return: frees a dlistint_t
 */

void free_dlistint(dlistint_t *head)
{
	if (!head)
		return;

	while (head->prev)
		head = head->prev;

	while (head->next)
	{
		head = head->next;
		if (head)
			free(head->prev);
	}
	if (head)
		free(head);
}
