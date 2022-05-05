#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prrints all the elements of a dlistint_t list
 * @h: the double linked list to prints
 * Return: number of nodes of the double linked list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		n++;
	}

	return (n);
}
