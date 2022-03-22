#include "lists.h"
/**
 * pop_listint - Deletes the head node
 * @head: Pointer to the first element
 * Return: Head node’s data (n),  if empty 0
 */
int pop_listint(listint_t **head)
{
	listint_t *aux;
	int num;

	if (!head || !*head)
		return (0);
	num = (*head)->n;
	aux = (*head)->next;
	free(*head);
	*head = aux;
	return (num);
}
