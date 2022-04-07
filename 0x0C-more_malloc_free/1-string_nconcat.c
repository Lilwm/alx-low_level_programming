#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenates s1 & s2
 * @s1: first string
 * @s2: second string
 * @n: bytes to concatenate
 * Return: new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)

{
	unsigned int s1_len, s2_len, i, j;
	char *array;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (s1_len = 0; s1[s1_len] != '\0'; s1_len++)
		;
	for (s2_len = 0; s2[s2_len] != '\0'; s2_len++)
		;
	if (s2_len >= n)
		s2_len = n;
	if (n <= 0)
		s2_len = 0;

	array = malloc((s1_len + s2_len + 1) * sizeof(char *));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < s1_len; i++)
		array[i] = s1[i];

	for (j = 0; j < s2_len; j++)
		array[j + s1_len] = s2[j];


	array[j + s1_len] = '\0';

	return (array);
}


