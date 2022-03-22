#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the elements of a linked list_t list.
 * @h: nointer to list
 * Return: number of elments
 */
size_t listint_len(const listint_t *h)
{
	size_t elems = 0;

	while (h)
	{
		elems++;
		h = h->next;
	}
	return (elems);
}
