#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table you want to look into
 * @key: key string
 * Return: value associated with the element, or NULL if key isnt found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *elem = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((unsigned char *) key, ht->size);
	elem = ht->array[index];

	if (elem == NULL)
		return (NULL);

	while (strcmp(key, elem->key) != 0)
		elem = elem->next;

	return (elem->value);
}
