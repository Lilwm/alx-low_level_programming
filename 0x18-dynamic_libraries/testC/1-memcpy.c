#include "main.h"
/**
 * _memcpy - copies characters from src to dest
 * @src: pointer to source data to be copied
 * @dest: destination array where content will be copied
 * @n: number of bytes to be copied
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
