#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function to create an array from a char
 * @size: sie of the array
 * @c: array characters
 * Return: array, else NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array = malloc(sizeof(char) * size);

	if (size == 0 || array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
