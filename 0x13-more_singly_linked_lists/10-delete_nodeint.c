#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes node at given index.
 * @head: Address of pointer 2 first node.
 * @index: Index of node to delete.
 * Return: 1 on success, -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	/*Declaro list y variables*/
	listint_t *new = *head, *aux;
	unsigned int i = 0;

	/*si head vacio*/
	if (*head == NULL)
		return (-1);

	if (index == 0) /*si index es la unica pos*/
	{
		*head = new->next;
		free(new);
		return (1);
	}

	while (new != NULL && i < (index - 1))
	{
		new = new->next; /*linked list*/
		i++;
	}

	/*Chequeo posicion current y next*/
	if (new == NULL || new->next == NULL)
		return (-1);

	/*borro node en posicion (sig de index -1)*/
	aux = new->next;
	new->next = aux->next;

	free(aux);

	return (1);
}
