#include "main.h"

/**
 * char *_strcat - appends the src string to dest string
 * @src: string to copy
 * @dest: string to append
 *
 * Return: dest.
 */
char *_strcat(char *dest, char *src)
{
	int d;	/*declare dest & Src*/
	int s;

	d = 0;

	while (dest[d] != '\0')  /* function to start printing dest string*/
	{
		d++;
	}

	s = 0;

	while (src[s] != '\0')		/* print the src string and append*/
	{
		dest[d] = src[s];
		d++;
		s++;
	}

	dest[d] = '\0';

	return (dest);
}
