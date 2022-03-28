#include "main.h"
#include <string.h>
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
	memcpy(dest, src, n);

	return (dest);
}
