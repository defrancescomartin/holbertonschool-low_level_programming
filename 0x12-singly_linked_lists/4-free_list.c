#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees list_t lists
 * @head: list_t to be freed
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}

	free(head);
}
