#include "main.h"

/**
 * _strncpy - copies a string
 * @n: number of characters to be copied from source.
 * @src: string to be copied.
 * @dest: pointer to the destination array
 *
 * Return: dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
