#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 * Return: Upon failure - 0.
 * Otherwise - 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *new_value;
	unsigned long int index, i;
	hash_node_t *new;

	if (ht == NULL || key == NULL || value == NULL || *key == '\0')
		return (0);

	new_value = strdup(value);
	if (new_value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = new_value;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(new_value);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = new_value;
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
