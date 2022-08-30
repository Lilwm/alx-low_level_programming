#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table to look into
 * @key: key you're looking for
 * Return: value associated with the key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx = 0;
	hash_node_t *node;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0)
		return (NULL);

	idx = key_index((const unsigned char*)key, ht->size);
	node = ht->array[idx];

	while (node && strcmp(node->key, key) != 0)
	{
		 node = node->next;
	}
	return ((node == NULL) ? NULL : node->value);
}
