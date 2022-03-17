#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end -  adds a new node at the end of a list_t list
 * @head: pointer to the list
 * @str: string to put in the new node
 * Return: address of the new element or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_l;
	list_t *aux = *head;
	unsigned int length = 0;

	while (str[length])
		length++;

	new_l = malloc(sizeof(list_t));
	if (!new_l)
		return (NULL);

	new_l->str = strdup(str);
	new_l->len = length;
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
