#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - Duplicates a string.
 * @str: string to be duplicated.
 *
 * Return: String duplicated
 */


char *_strdup(char *str)
{

	char *array = NULL;
	unsigned int i;
	unsigned int size = 0;

	if (str == NULL)
		return (NULL);

	while (str[size] != '\0')
		size++;

	array = malloc((size + 1) * sizeof(char));

	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = str[i]; /* compares duplicate to original*/
	return (array);
}

