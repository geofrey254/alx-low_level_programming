#include "lists.h"

/**
 * print_dlistint - print elements of list
 * @h: head of the list
 * Return: returns number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int cnt;

	cnt = 0;

	if (h == NULL)
		return (cnt);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		cnt++;
		h = h->next;
	}

	return (cnt);
}
