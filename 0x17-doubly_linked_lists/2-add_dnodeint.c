#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * of a dlistint_t list
 * @head: head of the list
 * @n: value of the element
 * Return: returns the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *x;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	x = *head;

	if (x != NULL)
	{
		while (x->prev != NULL)
			x = x->prev;
	}

	new->next = x;

	if (x != NULL)
		x->prev = new;

	*head = new;

	return (new);
}
