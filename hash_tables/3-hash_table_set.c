#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table
 * @key: the key (cannot be an empty string)
 * @value: the value associated with the key
 *
 * Return: 1 if succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *key_copy, *value_copy;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	key_copy = strdup(key);
	value_copy = strdup(value);
	if (key_copy == NULL || value_copy == NULL)
	{
		free(key_copy);
		free(value_copy);
		return (0);
	}

	index = key_index((unsigned char *)key, ht->size);
	new = ht->array[index];

	while (new != NULL)
	{
		if (strcmp(new->key, key) == 0)
		{
			free(new->key);
			free(new->value);
			new->key = key_copy;
			new->value = value_copy;
			return (1);
		}
		new = new->next;
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(key_copy);
		free(value_copy);
		return (0);
	}

	new->key = key_copy;
	new->value = value_copy;
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
