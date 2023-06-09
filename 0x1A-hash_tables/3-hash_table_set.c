#include "hash_tables.h"

/**
 * hash_table_set - add an element to the hash table
 * @ht: hash table
 * @key: element key
 * @value: element value
 *
 * Return: 1 on success and 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new, *temp;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);

	if (ht->array[index] != NULL)
	{
		temp = ht->array[index];
		ht->array[index] = new;
		new->next = temp;
	}
	else
	{
		ht->array[index] = new;
		new->next = NULL;
	}

	return (1);
}
