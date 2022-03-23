#include "main.h"
#include <string.h>
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

	strncpy(dest, src, n);

	return (dest);
}
