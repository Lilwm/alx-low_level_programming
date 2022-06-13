#include "main.h"
#include <string.h>
/**
 * _strcmp - function that compares two strings
 * @s1: first string to be compared
 * @s2: second string to be compared
 * Return: ret
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
			break;
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
