#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 * @src: file to be appended
 * @dest: file to be modified
 * @n: no of bytes to append
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
		;
	for (y = 0; src[y] != '\0' && y < n; y++)
	{
		dest[x + y] = src[y];
	}
	dest[x + y] = '\0';
	return (dest);
}
