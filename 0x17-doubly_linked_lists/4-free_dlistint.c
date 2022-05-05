#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * free_dlistint - free a doubly linked list
  * @head: head of the doubly linked list
  * Return: nothing
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = NULL;

	if (head != NULL)
	{
		while (head != NULL)
		{
			temp = head;
			head = (head)->next;
			free(temp);
		}
	}
}
