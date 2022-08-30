#include "hash_tables.h"

/**
 * make_hash_node - creates a new hash node
 * @key: key for the node
 * @value: for the node
 *
 * Return: the new node, or NULL on failure
 */
hash_node_t *make_hash_node(const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (NULL);
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (NULL);
	}
	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (NULL);
	}
	node->next = NULL;
	return (node);
}


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
	hash_node_t *elem, *new_node;
	unsigned long int index;
	char *new_value;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0 || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	elem = ht->array[index];

	while (elem != NULL)
	{
		if (strcmp(elem->key, key) == 0)
		{
			new_value = strdup(value);
			if (new_value == NULL)
				return (0);
			free(elem->value);
			elem->value = new_value;
			return (1);
		}
		elem = elem->next;
	}

	new_node = make_hash_node(key, value);
	if (new_node == NULL)
		return (0);

	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}

