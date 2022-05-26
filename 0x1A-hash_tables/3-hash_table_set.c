#include "hash_tables.h"

/**
  * hash_table_set - adds an element to the hash table
  * @ht: the hash table to add or update the key/value to
  * @key: the key of a value
  * @value: the value associated with the key
  * Return: 1 in success 0 otherwise
  */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *elem = NULL, *new_node = NULL;

	if (ht == NULL || key == NULL || *key == 0 || value == NULL)
		return (0);

	index = key_index((unsigned char *) key, ht->size);
	elem = ht->array[index];

	if (elem && strcmp(key, elem->key) == 0) /*Compare the values*/
	{
		free(elem->value);
		elem->value = strdup(value);
		return (1);
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key); /*Copy the key*/
	new_node->value = strdup(value); /*Copy the value*/
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
