#include "lists.h"
/**
 * add_nodeint - Add node at list.
 * Return: Address of new element of NULL if fail.
 * @head: First node in list
 * @n: Data to add
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_list;

	new_list = malloc(sizeof(listint_t));

	if (!new_list || !head)
		return (NULL);

	new_list->n = n;
	new_list->next = (*head);
	(*head) = new_list;

	return (*head);
}
