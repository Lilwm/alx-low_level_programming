#include "hash_tables.h"
/**
 * hash_table_create - a function that creates a hash table
 * @size: size of the array
 * Return: ptr to the newly created array
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	table = (hash_table_t *) malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);
	table->size = size;

	return (table);
}
