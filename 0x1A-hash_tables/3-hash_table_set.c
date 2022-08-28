#include "hash_tables.h"
/**
 * hash_table_set - adds elements to the hash table
 * @ht: hash table to add/ update values
 * @key: key, cannot be empty string
 * @value: value associated with key
 * value must be duplicated
 * Return: 1 if successful else return 0
 * if collision happens, add a new node to the string
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *elem = NULL, *new_node = NULL;
	long unsigned int index;

	if (ht == NULL || key == NULL || (strcmp(key, "") == 0))
		return(0);

	index = key_index((unsigned char *)key, ht->size);
	elem = ht->array[index];

	if (elem && strcmp(key, elem->key) == 0)
	{
		free(elem->value);
		elem->value = strdup(value);
		return (1);	
	}


	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}

