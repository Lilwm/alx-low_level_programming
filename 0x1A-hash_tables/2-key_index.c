#include "hash_tables.h"
/**
 * key_index - gives you the index of a key
 * @key: ptrto the key
 * @size: size of the hash table array
 * Return: the index at which the k/v should be stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
