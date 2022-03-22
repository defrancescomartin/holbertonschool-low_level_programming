#include "lists.h"

/**
 * free_listint2 - Frees a list of ints.
 * @head: Address of pointer to first node.
 * Return: Void.
 */
void free_listint2(listint_t **head)
{
	listint_t *aux;

	if (head == NULL)
		return;
	while (*head)
	{
		aux = (*head)->next;
		free(*head);
		*head = aux;
	}
	*head = NULL;
}
