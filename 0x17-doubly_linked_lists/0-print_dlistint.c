#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: head
 * Return: how many nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}

	return (n);
}
