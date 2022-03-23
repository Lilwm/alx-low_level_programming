#include "main.h"
#include <string.h>

/**
 * _strncat - function that concatenates two strings.
 * @src: file to be appended
 * @dest: file to be modified
 * @n: no of bytes to append
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = strlen(dest);
	int a = 0;	/* initialize a - to count bytes*/

	while (a < n && *src)
	{
		dest[index + a] = *src;
		src++;
		a++;
	}
	dest[index + a] = '\0';

	return (dest);
}
