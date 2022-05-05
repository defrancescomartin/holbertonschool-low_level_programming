#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dlistint - frees list
 * @head: pointer to head list
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}

	free(head);
}
