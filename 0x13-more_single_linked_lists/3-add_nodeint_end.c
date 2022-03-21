#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * new_lint_end - Adds a new node to the end of a linked list.
  * @head: The head of the linked list.
  * @n: The value to add to the end of the linked list.
  * Return: The address of the new element, or NULL it failed
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	 listint_t *new_l, *aux = *head;

	new_l = malloc(sizeof(listint_t));

	if (!new_l)
	return (NULL);

	new_l->n = n;
	new_l->next = NULL;

	if (*head == NULL)
	{
		*head = new_l;
		return (new_l);
}
	while (aux->next)
		aux = aux->next;
	aux->next = new_l;
	return (new_l);
}
